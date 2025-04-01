// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/AnankeLoggingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAnankeLogVerbosity : uint8;
#ifdef ANANKECORERUNTIME_AnankeLoggingLibrary_generated_h
#error "AnankeLoggingLibrary.generated.h already included, missing '#pragma once' in AnankeLoggingLibrary.h"
#endif
#define ANANKECORERUNTIME_AnankeLoggingLibrary_generated_h

#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_AnankeLog);


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnankeLoggingLibrary(); \
	friend struct Z_Construct_UClass_UAnankeLoggingLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnankeLoggingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnankeCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnankeLoggingLibrary)


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnankeLoggingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnankeLoggingLibrary(UAnankeLoggingLibrary&&); \
	UAnankeLoggingLibrary(const UAnankeLoggingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnankeLoggingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnankeLoggingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnankeLoggingLibrary) \
	NO_API virtual ~UAnankeLoggingLibrary();


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_47_PROLOG
#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANANKECORERUNTIME_API UClass* StaticClass<class UAnankeLoggingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h


#define FOREACH_ENUM_EANANKELOGVERBOSITY(op) \
	op(EAnankeLogVerbosity::Log) \
	op(EAnankeLogVerbosity::Warning) \
	op(EAnankeLogVerbosity::Error) \
	op(EAnankeLogVerbosity::Fatal) 

enum class EAnankeLogVerbosity : uint8;
template<> struct TIsUEnumClass<EAnankeLogVerbosity> { enum { Value = true }; };
template<> ANANKECORERUNTIME_API UEnum* StaticEnum<EAnankeLogVerbosity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
