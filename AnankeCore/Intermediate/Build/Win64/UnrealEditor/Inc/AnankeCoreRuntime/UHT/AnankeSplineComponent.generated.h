// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AnankeSplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANANKECORERUNTIME_AnankeSplineComponent_generated_h
#error "AnankeSplineComponent.generated.h already included, missing '#pragma once' in AnankeSplineComponent.h"
#endif
#define ANANKECORERUNTIME_AnankeSplineComponent_generated_h

#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnankeSplineComponent(); \
	friend struct Z_Construct_UClass_UAnankeSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UAnankeSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnankeCoreRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnankeSplineComponent)


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnankeSplineComponent(UAnankeSplineComponent&&); \
	UAnankeSplineComponent(const UAnankeSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnankeSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnankeSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnankeSplineComponent) \
	NO_API virtual ~UAnankeSplineComponent();


#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_105_PROLOG
#define FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_108_INCLASS_NO_PURE_DECLS \
	FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANANKECORERUNTIME_API UClass* StaticClass<class UAnankeSplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h


#define FOREACH_ENUM_EANANKESPLINECOMPONENTPROXYMODE(op) \
	op(EAnankeSplineComponentProxyMode::Default) \
	op(EAnankeSplineComponentProxyMode::Custom) 

enum class EAnankeSplineComponentProxyMode : uint8;
template<> struct TIsUEnumClass<EAnankeSplineComponentProxyMode> { enum { Value = true }; };
template<> ANANKECORERUNTIME_API UEnum* StaticEnum<EAnankeSplineComponentProxyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
