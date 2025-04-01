// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Components/AutoUpdateRVTComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoUpdateRVTComponent() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAutoUpdateRVTComponent();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAutoUpdateRVTComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class UAutoUpdateRVTComponent
void UAutoUpdateRVTComponent::StaticRegisterNativesUAutoUpdateRVTComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoUpdateRVTComponent);
UClass* Z_Construct_UClass_UAutoUpdateRVTComponent_NoRegister()
{
	return UAutoUpdateRVTComponent::StaticClass();
}
struct Z_Construct_UClass_UAutoUpdateRVTComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Collision Cooking HLOD Mobility LOD Navigation Object Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AutoUpdateRVTComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AutoUpdateRVTComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoUpdateRVTComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeVirtualTextureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::ClassParams = {
	&UAutoUpdateRVTComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoUpdateRVTComponent()
{
	if (!Z_Registration_Info_UClass_UAutoUpdateRVTComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoUpdateRVTComponent.OuterSingleton, Z_Construct_UClass_UAutoUpdateRVTComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoUpdateRVTComponent.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAutoUpdateRVTComponent>()
{
	return UAutoUpdateRVTComponent::StaticClass();
}
UAutoUpdateRVTComponent::UAutoUpdateRVTComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoUpdateRVTComponent);
UAutoUpdateRVTComponent::~UAutoUpdateRVTComponent() {}
// End Class UAutoUpdateRVTComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AutoUpdateRVTComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoUpdateRVTComponent, UAutoUpdateRVTComponent::StaticClass, TEXT("UAutoUpdateRVTComponent"), &Z_Registration_Info_UClass_UAutoUpdateRVTComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoUpdateRVTComponent), 113790343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AutoUpdateRVTComponent_h_2238186141(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AutoUpdateRVTComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Components_AutoUpdateRVTComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
