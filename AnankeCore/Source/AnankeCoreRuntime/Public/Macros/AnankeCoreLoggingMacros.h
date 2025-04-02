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

#include "Subsystems/AnankeLoggingSubsystem.h"

// See ANANKE_LOG below. This macro is still used in situations when the AnankeLoggingSubsystem is not available.
#define ANANKE_LOG_LEGACY(CategoryName, Verbosity, Format, ...) \
{ \
	UE_LOG(CategoryName, Verbosity, TEXT("%s:%d %s"), \
		*FPaths::GetCleanFilename(FString(__FILE__)), \
		__LINE__, \
		*FString::Printf(Format, ##__VA_ARGS__) \
	) \
}

// See ANANKE_LOG_OBJECT below. This macro is still used in situations when the AnankeLoggingSubsystem is not available.
#define ANANKE_LOG_OBJECT_LEGACY(TargetObject, CategoryName, Verbosity, Format, ...) \
{ \
	UE_LOG(CategoryName, Verbosity, TEXT("[NetMode=%s][Object=%s]%s:%d %s"), \
		*AnankeCoreLoggingMacros_GetNetMode(TargetObject), \
		*GetNameSafe(TargetObject), \
		*FPaths::GetCleanFilename(FString(__FILE__)), \
		__LINE__, \
		*FString::Printf(Format, ##__VA_ARGS__) \
	) \
}


/**
 * Works just like UE_LOG but logs additional info about the line where this was logged.
 *
 * Example Log:
 * YourLogCategory:  [Function=USomeObject::SomeFunction]YourFile.cpp:15 This is an example log.
 *
 * @param CategoryName  name of the logging category
 * @param Verbosity     verbosity level to test against
 * @param Format        format text
 */
#if UE_BUILD_SHIPPING
#define ANANKE_LOG(CategoryName, Verbosity, Format, ...) ;
#else
#define ANANKE_LOG(CategoryName, Verbosity, Format, ...)										\
if (auto* Logger = GEngine ? GEngine->GetEngineSubsystem<UAnankeLoggingSubsystem>() : nullptr)	\
{																								\
	FString LogString = Logger->AnankeLog(														\
		ELogVerbosity::Verbosity,																\
		FString::Printf(Format, ##__VA_ARGS__),													\
		FPaths::GetCleanFilename(FString(__FILE__)),											\
		FString(__FUNCTION__),																	\
		__LINE__																				\
	);																							\
																								\
	UE_LOG(CategoryName, Verbosity, TEXT("%s"), *LogString);									\
}																								\
else {																							\
	ANANKE_LOG_LEGACY(CategoryName, Warning, TEXT("Unable to fetch AnankeLoggingSubsystem"));	\
	ANANKE_LOG_LEGACY(CategoryName, Verbosity, Format, ##__VA_ARGS__);							\
}																								
#endif

/**
 * Works similarly to ANANKE_LOG, but additionally records a target UOBJECT and its netmode, if available.
 *
 * Example Log:
 * YourLogCategory: Error:  [NetMode=Server][Object=SomeObject_0][Function=USomeObject::SomeFunction]YourFile.cpp:15 This is an example log.
 *
 * @param TargetObject  object to log
 * @param CategoryName  name of the logging category
 * @param Verbosity     verbosity level to test against
 * @param Format        format text
 */
#if UE_BUILD_SHIPPING
#define ANANKE_LOG_OBJECT(TargetObject, CategoryName, Verbosity, Format, ...) ;
#else
#define ANANKE_LOG_OBJECT(TargetObject, CategoryName, Verbosity, Format, ...)										\
if (auto* Logger = GEngine ? GEngine->GetEngineSubsystem<UAnankeLoggingSubsystem>() : nullptr)						\
{																													\
	FString LogString = Logger->AnankeLogObject(																	\
		TargetObject,																								\
		ELogVerbosity::Verbosity,																					\
		FString::Printf(Format, ##__VA_ARGS__),																		\
		FPaths::GetCleanFilename(FString(__FILE__)),																\
		FString(__FUNCTION__),																						\
		__LINE__																									\
	);																												\
																													\
	UE_LOG(CategoryName, Verbosity, TEXT("%s"), *LogString);														\
}																													\
else {																												\
	ANANKE_LOG_OBJECT_LEGACY(TargetObject, CategoryName, Warning, TEXT("Unable to fetch AnankeLoggingSubsystem"));	\
	ANANKE_LOG_OBJECT_LEGACY(TargetObject, CategoryName, Verbosity, Format, ##__VA_ARGS__);							\
}																													
#endif

/**
 * Adds rate-limited logs.
 *
 * Note that this macro only stores the log. It will be logged later via the AnankePeriodicLogTicker, which only ticks
 * in game or PIE. Unfortunately, there is no way to store the log category without using the deprecated UE_LOG_REF,
 * so these logs will all be logged using the 'LogAnankePeriodic' category.
 *
 * Example Log:
 * LogAnankePeriodic:  [Function=USomeObject::SomeFunction]YourFile.cpp:15  PERIODIC_LOG(count=26): Your periodic log!
 *
 * @param Verbosity     verbosity level to test against
 * @param LogMessage    the message to log
 * @param LogRate		the rate of the log, in seconds
 */
#if UE_BUILD_SHIPPING
#define ANANKE_LOG_PERIODIC(Verbosity, LogMessage, LogRate) ;
#else
#define ANANKE_LOG_PERIODIC(Verbosity, LogMessage, LogRate)													\
if (auto* Logger = GEngine ? GEngine->GetEngineSubsystem<UAnankeLoggingSubsystem>() : nullptr)				\
{																											\
	Logger->AnankeLogPeriodic(																				\
		ELogVerbosity::Verbosity,																			\
		LogMessage,																							\
		FPaths::GetCleanFilename(FString(__FILE__)),														\
		FString(__FUNCTION__),																				\
		__LINE__,																							\
		LogRate																								\
	);																										\
}																											\
else {																										\
	ANANKE_LOG_LEGACY(LogTemp, Error, TEXT("ANANKE_LOG_PERIODIC: Unable to fetch AnankeLoggingSubsystem"));	\
}																								
#endif

FString ANANKECORERUNTIME_API AnankeCoreLoggingMacros_GetNetMode(const UObject* TargetObject);