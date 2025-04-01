// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Components/AnankeSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeSplineComponent() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeSplineComponent();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeSplineComponent_NoRegister();
ANANKECORERUNTIME_API UEnum* Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Enum EAnankeSplineComponentProxyMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode;
static UEnum* EAnankeSplineComponentProxyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode, (UObject*)Z_Construct_UPackage__Script_AnankeCoreRuntime(), TEXT("EAnankeSplineComponentProxyMode"));
	}
	return Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UEnum* StaticEnum<EAnankeSplineComponentProxyMode>()
{
	return EAnankeSplineComponentProxyMode_StaticEnum();
}
struct Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Name", "EAnankeSplineComponentProxyMode::Custom" },
		{ "Default.Name", "EAnankeSplineComponentProxyMode::Default" },
		{ "ModuleRelativePath", "Public/Components/AnankeSplineComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnankeSplineComponentProxyMode::Default", (int64)EAnankeSplineComponentProxyMode::Default },
		{ "EAnankeSplineComponentProxyMode::Custom", (int64)EAnankeSplineComponentProxyMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
	nullptr,
	"EAnankeSplineComponentProxyMode",
	"EAnankeSplineComponentProxyMode",
	Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode()
{
	if (!Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.InnerSingleton, Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode.InnerSingleton;
}
// End Enum EAnankeSplineComponentProxyMode

// Begin Class UAnankeSplineComponent
void UAnankeSplineComponent::StaticRegisterNativesUAnankeSplineComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeSplineComponent);
UClass* Z_Construct_UClass_UAnankeSplineComponent_NoRegister()
{
	return UAnankeSplineComponent::StaticClass();
}
struct Z_Construct_UClass_UAnankeSplineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "Components/AnankeSplineComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AnankeSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUniformWidth_MetaData[] = {
		{ "Category", "AnankeSplineComponent" },
		{ "InlineEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Components/AnankeSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformWidth_MetaData[] = {
		{ "Category", "AnankeSplineComponent" },
		{ "EditCondition", "bUseUniformWidth" },
		{ "ModuleRelativePath", "Public/Components/AnankeSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneProxyMode_MetaData[] = {
		{ "Category", "AnankeSplineComponent" },
		{ "ModuleRelativePath", "Public/Components/AnankeSplineComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseUniformWidth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUniformWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UniformWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneProxyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneProxyMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_bUseUniformWidth_SetBit(void* Obj)
{
	((UAnankeSplineComponent*)Obj)->bUseUniformWidth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_bUseUniformWidth = { "bUseUniformWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnankeSplineComponent), &Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_bUseUniformWidth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUniformWidth_MetaData), NewProp_bUseUniformWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_UniformWidth = { "UniformWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnankeSplineComponent, UniformWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformWidth_MetaData), NewProp_UniformWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_SceneProxyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_SceneProxyMode = { "SceneProxyMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnankeSplineComponent, SceneProxyMode), Z_Construct_UEnum_AnankeCoreRuntime_EAnankeSplineComponentProxyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneProxyMode_MetaData), NewProp_SceneProxyMode_MetaData) }; // 2674613248
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnankeSplineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_bUseUniformWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_UniformWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_SceneProxyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnankeSplineComponent_Statics::NewProp_SceneProxyMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeSplineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnankeSplineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USplineComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeSplineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeSplineComponent_Statics::ClassParams = {
	&UAnankeSplineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnankeSplineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeSplineComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeSplineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeSplineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeSplineComponent()
{
	if (!Z_Registration_Info_UClass_UAnankeSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeSplineComponent.OuterSingleton, Z_Construct_UClass_UAnankeSplineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeSplineComponent.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeSplineComponent>()
{
	return UAnankeSplineComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeSplineComponent);
UAnankeSplineComponent::~UAnankeSplineComponent() {}
// End Class UAnankeSplineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnankeSplineComponentProxyMode_StaticEnum, TEXT("EAnankeSplineComponentProxyMode"), &Z_Registration_Info_UEnum_EAnankeSplineComponentProxyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2674613248U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeSplineComponent, UAnankeSplineComponent::StaticClass, TEXT("UAnankeSplineComponent"), &Z_Registration_Info_UClass_UAnankeSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeSplineComponent), 2208824079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_1149948710(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AnankeSplineComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
