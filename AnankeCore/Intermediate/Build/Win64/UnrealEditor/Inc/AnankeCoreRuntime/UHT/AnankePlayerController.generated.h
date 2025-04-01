// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/AnankePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANANKECORERUNTIME_AnankePlayerController_generated_h
#error "AnankePlayerController.generated.h already included, missing '#pragma once' in AnankePlayerController.h"
#endif
#define ANANKECORERUNTIME_AnankePlayerController_generated_h

#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook);


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnankePlayerController(); \
	friend struct Z_Construct_UClass_AAnankePlayerController_Statics; \
public: \
	DECLARE_CLASS(AAnankePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnankeCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(AAnankePlayerController)


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnankePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAnankePlayerController(AAnankePlayerController&&); \
	AAnankePlayerController(const AAnankePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnankePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnankePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnankePlayerController) \
	NO_API virtual ~AAnankePlayerController();


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_37_PROLOG
#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_INCLASS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANANKECORERUNTIME_API UClass* StaticClass<class AAnankePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
