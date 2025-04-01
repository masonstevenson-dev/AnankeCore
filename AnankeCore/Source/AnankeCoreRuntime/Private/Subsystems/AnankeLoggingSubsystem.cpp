// Copyright © Mason Stevenson
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted (subject to the limitations in the disclaimer
// below) provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
// NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "Subsystems/AnankeLoggingSubsystem.h"

#include "AnankeCoreLoggingDefs.h"
#include "Macros/AnankeCoreLoggingMacros.h"

FAnankePeriodicLog::FAnankePeriodicLog(
	ELogVerbosity::Type NewVerbosity,
	FString NewBaseLogMessage,
	FString NewFileName,
	FString NewFunctionName,
	int32 NewLineNumber,
	double NewLogRateSeconds
)
{
	Verbosity = NewVerbosity;
	BaseLogMessage = NewBaseLogMessage;
	FileName = NewFileName;
	FunctionName = NewFunctionName;
	LineNumber = NewLineNumber;
	LogRateSeconds = NewLogRateSeconds;

	FString HashString = FString::Printf(TEXT("%s%s%d"), *FileName, *FunctionName, LineNumber);
	LogId = GetTypeHash(HashString);
}

uint32 FAnankePeriodicLog::GetLogId()
{
	return LogId;
}

void UAnankeLoggingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogAnankeCore, Log, TEXT("Initializing AnankeLoggingSubsystem"));
	
	EnabledScreenLogCategories.Add(TEXT("warning"));
	EnabledScreenLogCategories.Add(TEXT("error"));
}

FString UAnankeLoggingSubsystem::AnankeLog(
	const ELogVerbosity::Type Verbosity,
	const FString BaseLogMessage,
	const FString FileName,
	const FString FunctionName,
	const int32 LineNumber
)
{
	FString ConsoleLogMessage = FString::Printf(TEXT(" [Function=%s]%s:%d  %s"), *FunctionName, *FileName, LineNumber, *BaseLogMessage);
	LogToScreen(Verbosity, ConsoleLogMessage, BaseLogMessage);
	return ConsoleLogMessage;
}

FString UAnankeLoggingSubsystem::AnankeLogObject(
	const UObject* ContextObject,
	const ELogVerbosity::Type Verbosity,
	const FString BaseLogMessage,
	const FString FileName,
	const FString FunctionName,
	const int32 LineNumber
)
{
	FString ConsoleLogMessage = FString::Printf(
		TEXT(" [NetMode=%s][Object=%s][Function=%s]%s:%d  %s"),
		*GetNetModeAsString(ContextObject),
		*GetNameSafe(ContextObject),
		*FunctionName,
		*FileName,
		LineNumber,
		*BaseLogMessage
	);
	LogToScreen(Verbosity, ConsoleLogMessage, BaseLogMessage);
	return ConsoleLogMessage;
}

void UAnankeLoggingSubsystem::BP_AnankeLog(
	const UObject* ContextObject,
	const ELogVerbosity::Type Verbosity,
	const FString& BaseLogMessage
)
{
	FString ConsoleLogMessage = FString::Printf(
		TEXT("[NetMode=%s] %s"),
		*GetNetModeAsString(ContextObject),
		*BaseLogMessage
	);

	const bool bIsBPLog = true;
	LogToScreen(Verbosity, ConsoleLogMessage, BaseLogMessage, bIsBPLog);
}

void UAnankeLoggingSubsystem::AnankeLogPeriodic(
	const ELogVerbosity::Type Verbosity,
	const FString BaseLogMessage,
	const FString FileName,
	const FString FunctionName,
	const int32 LineNumber,
	const double LogRate
)
{
	FAnankePeriodicLog NewLog = FAnankePeriodicLog(
		Verbosity, BaseLogMessage, FileName, FunctionName, LineNumber, LogRate);
	FAnankePeriodicLog* ExistingLog = PeriodicLogs.Find(NewLog.LogId);
	
	if (ExistingLog)
	{
		ExistingLog->LogCount++;
	}
	else
	{
		NewLog.LogCount++;
		PeriodicLogs.Add(NewLog.LogId, NewLog);
	}

	PendingPeriodicLogs.Add(NewLog.LogId);
}

void UAnankeLoggingSubsystem::TickPeriodicLogs()
{
	TArray<uint32> PendingLogsToFlush;
	
	for (uint32 LogId : PendingPeriodicLogs)
	{
		FAnankePeriodicLog* PeriodicLog = PeriodicLogs.Find(LogId);

		if (!PeriodicLog)
		{
			ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("Periodic Log is missing."));
			PeriodicLogs.Remove(LogId);
			PendingLogsToFlush.Add(LogId);
		}

		double TimeElapsed = FPlatformTime::Seconds() - PeriodicLog->LastTimeLoggedSeconds;
		if (TimeElapsed < PeriodicLog->LogRateSeconds)
		{
			continue;
		}

		FString BaseLogMessage = FString::Printf(
			TEXT("PERIODIC_LOG(count=%u): %s"), PeriodicLog->LogCount, *PeriodicLog->BaseLogMessage);
		FString LogString = AnankeLog(
			PeriodicLog->Verbosity,
			BaseLogMessage,
			PeriodicLog->FileName,
			PeriodicLog->FunctionName,
			PeriodicLog->LineNumber
		);
		
		switch (PeriodicLog->Verbosity)
		{
		case ELogVerbosity::Fatal:
			UE_LOG(LogAnankePeriodic, Fatal, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::Error:
			UE_LOG(LogAnankePeriodic, Error, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::Warning:
			UE_LOG(LogAnankePeriodic, Warning, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::Display:
			UE_LOG(LogAnankePeriodic, Display, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::Log:
			UE_LOG(LogAnankePeriodic, Log, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::Verbose:
			UE_LOG(LogAnankePeriodic, Verbose, TEXT("%s"), *LogString);
			break;
		case ELogVerbosity::VeryVerbose:
			UE_LOG(LogAnankePeriodic, VeryVerbose, TEXT("%s"), *LogString);
			break;
		default:
			ANANKE_LOG_LEGACY(LogAnankePeriodic, Error, TEXT("Log verbosity is unknown."));
			UE_LOG(LogAnankePeriodic, Log, TEXT("%s"), *LogString);
			break;
		}

		PeriodicLog->LastTimeLoggedSeconds = FPlatformTime::Seconds();
		PendingLogsToFlush.Add(LogId);
	}

	for (uint32 LogId : PendingLogsToFlush)
	{
		PendingPeriodicLogs.Remove(LogId);
	}
}

void UAnankeLoggingSubsystem::ResetPeriodicLogs()
{
	PeriodicLogs.Empty();
	PendingPeriodicLogs.Empty();
}

void UAnankeLoggingSubsystem::SetScreenLogCategories(const TArray<FString>& Categories)
{
	TSet<FString> AllowedCategories = {
		TEXT("fatal"),
		TEXT("error"),
		TEXT("warning"),
		TEXT("display"),
		TEXT("log"),
		TEXT("verbose"),
		TEXT("veryverbose")
	};

	TSet<FString> AllowedSpecialCategories = {
		TEXT("all"),
		TEXT("none")
	};

	if (Categories.IsEmpty() || (Categories.Num() == 1 && Categories[0].Equals(TEXT("none"), ESearchCase::IgnoreCase)))
	{
		EnabledScreenLogCategories.Empty();
		return;
	}
	if (Categories.Num() == 1 && Categories[0].Equals(TEXT("all"), ESearchCase::IgnoreCase))
	{
		EnabledScreenLogCategories = TSet(Categories);
		return;
	}

	TSet<FString> NewScreenLogCategories;

	for (FString Category : Categories)
	{
		if (!AllowedCategories.Contains(Category.ToLower()))
		{
			if (AllowedSpecialCategories.Contains(Category.ToLower()))
			{
				ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("Log category \'%s\' is only allowed if it is the only category."), *Category);
			}
			else
			{
				ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("Log category \'%s\' is unknown."), *Category);
			}

			continue;
		}

		NewScreenLogCategories.Add(Category.ToLower());
	}

	if (NewScreenLogCategories.IsEmpty()) // Can still be empty if all new categories are invalid.
	{
		return;
	}

	EnabledScreenLogCategories = NewScreenLogCategories;
}

void UAnankeLoggingSubsystem::LogToScreen(
	const ELogVerbosity::Type Verbosity,
	const FString& ConsoleLogMessage,
	const FString& ScreenLogMessage,
	const bool bIsBPLog
)
{
	FColor ScreenLogColor;
	FString ScreenLogCategory;

	if (bIsBPLog)
	{
		ScreenLogColor = FLinearColor(0.0, 0.66, 1.0).ToFColor(true); // UE default log color
	}
	else
	{
		ScreenLogColor = FColor(211, 211, 211); // light grey
	}
	
	switch (Verbosity)
	{
	case ELogVerbosity::Fatal:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Fatal, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogColor = FColor::Red;
		ScreenLogCategory = FString(TEXT("fatal"));
		break;
	case ELogVerbosity::Error:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Error, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogColor = FColor::Red;
		ScreenLogCategory = FString(TEXT("error"));
		break;
	case ELogVerbosity::Warning:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Warning, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogColor = FColor::Yellow;
		ScreenLogCategory = FString(TEXT("warning"));
		break;
	case ELogVerbosity::Display:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Display, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogCategory = FString(TEXT("display"));
		break;
	case ELogVerbosity::Log:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Log, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogCategory = FString(TEXT("log"));
		break;
	case ELogVerbosity::Verbose:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Verbose, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogCategory = FString(TEXT("verbose"));
		break;
	case ELogVerbosity::VeryVerbose:
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, VeryVerbose, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogCategory = FString(TEXT("veryverbose"));
		break;
	default:
		ANANKE_LOG_LEGACY(LogAnankeCore, Error, TEXT("Log verbosity is unknown."));
		if (bIsBPLog)
		{
			UE_LOG(LogAnankeBlueprint, Log, TEXT("%s"), *ConsoleLogMessage);
		}
		ScreenLogCategory = FString(TEXT("log"));
		break;
	}

	if (
		bEnableScreenLog &&
		GEngine &&
		(
			(bIsBPLog && bAlwaysShowBPLogsOnScreen) ||
			EnabledScreenLogCategories.Contains(ScreenLogCategory) ||
			EnabledScreenLogCategories.Contains(TEXT("all")))
		)
	{
		// There doesn't seem to be a way to tell GEngine to log indefinitely, so instead we just give it a really big
		// log duration number
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, kDefaultScreenDurationSec, ScreenLogColor, ScreenLogMessage, true);
	}
}

FString UAnankeLoggingSubsystem::GetNetModeAsString(const UObject* TargetObject)
{
	if (!TargetObject)
	{
		return TEXT("Unknown");
	}
	
	ENetMode NetMode;

	if (const auto* TargetActor = Cast<AActor>(TargetObject))
	{
		NetMode = TargetActor->GetNetMode();
	}
	else if (const UWorld* ObjectWorld = TargetObject->GetWorld())
	{
		NetMode = ObjectWorld->GetNetMode();
	}
	else
	{
		return TEXT("Unknown");
	}
	
	switch (NetMode)
	{
		case NM_Standalone: return TEXT("Standalone");
		case NM_DedicatedServer:  return TEXT("Dedicated Server");
		case NM_ListenServer: return TEXT("Listen Server");
		case NM_Client: return TEXT("Client");
		default: return TEXT("Invalid");
	}
}

// CONSOLE COMMANDS ----------------------------------------------------------------------------------------------------
FAutoConsoleCommandWithWorldAndArgs GAnankeLogScreenShowCategoriesCmd(
	TEXT("Ananke.Log.Screen.ShowCategories"),
	TEXT("Control what log categories are displayed to the screen"),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World)
		{
			auto* Logger = GEngine ? GEngine->GetEngineSubsystem<UAnankeLoggingSubsystem>() : nullptr;

			if (!Logger)
			{
				ANANKE_LOG_LEGACY(LogAnankeCore, Error, TEXT("Unable to set log categories: AnankeLogSubsystem is unavailable."));
				return;
			}
			
			Logger->SetScreenLogCategories(Args);
		}
	)
);

// END CONSOLE COMMANDS ------------------------------------------------------------------------------------------------