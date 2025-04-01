// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AnankePlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANANKECORERUNTIME_AnankePlayerCharacter_generated_h
#error "AnankePlayerCharacter.generated.h already included, missing '#pragma once' in AnankePlayerCharacter.h"
#endif
#define ANANKECORERUNTIME_AnankePlayerCharacter_generated_h

#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsMoving); \
	DECLARE_FUNCTION(execIsFalling);


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnankePlayerCharacter(); \
	friend struct Z_Construct_UClass_AAnankePlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AAnankePlayerCharacter, AAnankeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnankeCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAnankePlayerCharacter)


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAnankePlayerCharacter(AAnankePlayerCharacter&&); \
	AAnankePlayerCharacter(const AAnankePlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnankePlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnankePlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnankePlayerCharacter) \
	NO_API virtual ~AAnankePlayerCharacter();


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_39_PROLOG
#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_INCLASS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANANKECORERUNTIME_API UClass* StaticClass<class AAnankePlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
