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

#pragma once
#include "Containers/Set.h"
#include "Containers/UnrealString.h"
#include "Logging/LogVerbosity.h"
#include "Subsystems/EngineSubsystem.h"
#include "UObject/Object.h"

#include "AnankeLoggingSubsystem.generated.h"

USTRUCT()
struct FAnankePeriodicLog
{
	GENERATED_BODY()

public:
	FAnankePeriodicLog() = default;
	FAnankePeriodicLog(
		ELogVerbosity::Type NewVerbosity,
		FString NewBaseLogMessage,
		FString NewFileName,
		FString NewFunctionName,
		int32 NewLineNumber,
		double NewLogRateSeconds = 1.0 // by default, log every 1 second.
	);

	uint32 GetLogId();
	
	ELogVerbosity::Type Verbosity = ELogVerbosity::Log;
	FString BaseLogMessage = FString();
	FString FileName = FString();
	FString FunctionName = FString();
	int32 LineNumber = 0;

	double LogRateSeconds = 1.0;
	double LastTimeLoggedSeconds = 0.0;
	
	uint32 LogId = 0;
	uint32 LogCount = 0;
};

UCLASS()
class ANANKECORERUNTIME_API UAnankeLoggingSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()
	
// Constants
public:
	static constexpr float kDefaultScreenDurationSec = 15.0f;
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Note: Does not produce a log on its own. See AnankeCoreLoggingMacros.h
	FString AnankeLog(
		const ELogVerbosity::Type Verbosity,
		const FString BaseLogMessage,
		const FString FileName,
		const FString FunctionName,
		const int32 LineNumber
	);

	// Note: Does not produce a log on its own. See AnankeCoreLoggingMacros.h
	FString AnankeLogObject(
		const UObject* ContextObject,
		const ELogVerbosity::Type Verbosity,
		const FString BaseLogMessage,
		const FString FileName,
		const FString FunctionName,
		const int32 LineNumber
	);
	
	void BP_AnankeLog(
		const UObject* ContextObject,
		const ELogVerbosity::Type Verbosity,
		const FString& BaseLogMessage
	);

	void AnankeLogPeriodic(
		const ELogVerbosity::Type Verbosity,
		const FString BaseLogMessage,
		const FString FileName,
		const FString FunctionName,
		const int32 LineNumber,
		const double LogRate = 1.0
	);

	// Called by AnankePeriodicLogTicker.
	void TickPeriodicLogs();

	// Called by AnankePeriodicLogTicker.
	void ResetPeriodicLogs();

	void SetScreenLogCategories(const TArray<FString>& Categories);
	
protected:
	void LogToScreen(
		const ELogVerbosity::Type Verbosity,
		const FString& ConsoleLogMessage,
		const FString& ScreenLogMessage,
		const bool bIsBPLog = false
	);

	FString GetNetModeAsString(const UObject* TargetObject);

	// Settings
	bool bEnableScreenLog = true;
	bool bAlwaysShowBPLogsOnScreen = true;

	TSet<FString> EnabledScreenLogCategories;

	TMap<uint32, FAnankePeriodicLog> PeriodicLogs;
	TSet<uint32> PendingPeriodicLogs;
};
