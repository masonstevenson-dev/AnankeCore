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

#include "FunctionLibraries//AnankeLoggingLibrary.h"

#include "AnankeCoreLoggingDefs.h"
#include "Macros/AnankeCoreLoggingMacros.h"
#include "Subsystems/AnankeLoggingSubsystem.h"

void UAnankeLoggingLibrary::BP_AnankeLog(
	const UObject* WorldContextObject,
	const FString& InString,
	EAnankeLogVerbosity Verbosity
)
{
	ELogVerbosity::Type InternalVerbosity = static_cast<ELogVerbosity::Type>(Verbosity);

	if (auto* Logger = GEngine ? GEngine->GetEngineSubsystem<UAnankeLoggingSubsystem>() : nullptr)
	{
		Logger->BP_AnankeLog(WorldContextObject, InternalVerbosity, InString);
		return;
	}
	
	ANANKE_LOG_LEGACY(LogAnankeBlueprint, Warning, TEXT("Unable to fetch AnankeLoggingSubsystem"));

	switch (InternalVerbosity)
	{
	case ELogVerbosity::Fatal:
		UE_LOG_REF(LogAnankeBlueprint, Fatal, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::Error:
		UE_LOG_REF(LogAnankeBlueprint, Error, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::Warning:
		UE_LOG_REF(LogAnankeBlueprint, Warning, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::Display:
		UE_LOG_REF(LogAnankeBlueprint, Display, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::Log:
		UE_LOG_REF(LogAnankeBlueprint, Log, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::Verbose:
		UE_LOG_REF(LogAnankeBlueprint, Verbose, TEXT("%s"), *InString);
		break;
	case ELogVerbosity::VeryVerbose:
		UE_LOG_REF(LogAnankeBlueprint, VeryVerbose, TEXT("%s"), *InString);
		break;
	default:
		UE_LOG_REF(LogAnankeBlueprint, Log, TEXT("%s"), *InString);
		break;
	}

	if (GEngine)
	{
		float DefaultUELogDuration = 2.0f;
		FColor DefaultUELogColor = FLinearColor(0.0, 0.66, 1.0).ToFColor(true);
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DefaultUELogDuration, DefaultUELogColor, InString);
	}
}
