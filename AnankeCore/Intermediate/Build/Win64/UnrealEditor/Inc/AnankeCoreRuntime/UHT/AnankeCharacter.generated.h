// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AnankeCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANANKECORERUNTIME_AnankeCharacter_generated_h
#error "AnankeCharacter.generated.h already included, missing '#pragma once' in AnankeCharacter.h"
#endif
#define ANANKECORERUNTIME_AnankeCharacter_generated_h

#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJumpCompleted); \
	DECLARE_FUNCTION(execJumpTriggered); \
	DECLARE_FUNCTION(execMove);


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnankeCharacter(); \
	friend struct Z_Construct_UClass_AAnankeCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnankeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnankeCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAnankeCharacter)


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAnankeCharacter(AAnankeCharacter&&); \
	AAnankeCharacter(const AAnankeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnankeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnankeCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnankeCharacter) \
	NO_API virtual ~AAnankeCharacter();


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_38_PROLOG
#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_INCLASS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANANKECORERUNTIME_API UClass* StaticClass<class AAnankeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
