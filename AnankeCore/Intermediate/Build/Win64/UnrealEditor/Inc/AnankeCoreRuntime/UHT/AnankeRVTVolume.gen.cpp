// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Actor/AnankeRVTVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeRVTVolume() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeRVTVolume();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeRVTVolume_NoRegister();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAutoUpdateRVTComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeRVTVolume
void AAnankeRVTVolume::StaticRegisterNativesAAnankeRVTVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeRVTVolume);
UClass* Z_Construct_UClass_AAnankeRVTVolume_NoRegister()
{
	return AAnankeRVTVolume::StaticClass();
}
struct Z_Construct_UClass_AAnankeRVTVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "RVT Volume" },
		{ "IncludePath", "Actor/AnankeRVTVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeRVTVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VirtualTexture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component that owns the runtime virtual texture. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeRVTVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that owns the runtime virtual texture." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box for visualizing virtual texture extents. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeRVTVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box for visualizing virtual texture extents." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actor/AnankeRVTVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumePlane_MetaData[] = {
		{ "Category", "AnankeRVTVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeRVTVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VirtualTextureComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumePlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeRVTVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_VirtualTextureComponent = { "VirtualTextureComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeRVTVolume, VirtualTextureComponent), Z_Construct_UClass_UAutoUpdateRVTComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureComponent_MetaData), NewProp_VirtualTextureComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0114000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeRVTVolume, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeRVTVolume, PlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMesh_MetaData), NewProp_PlaneMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_VolumePlane = { "VolumePlane", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeRVTVolume, VolumePlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumePlane_MetaData), NewProp_VolumePlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnankeRVTVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_VirtualTextureComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_PlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeRVTVolume_Statics::NewProp_VolumePlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRVTVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnankeRVTVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRVTVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeRVTVolume_Statics::ClassParams = {
	&AAnankeRVTVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnankeRVTVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRVTVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRVTVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeRVTVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeRVTVolume()
{
	if (!Z_Registration_Info_UClass_AAnankeRVTVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeRVTVolume.OuterSingleton, Z_Construct_UClass_AAnankeRVTVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeRVTVolume.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeRVTVolume>()
{
	return AAnankeRVTVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeRVTVolume);
AAnankeRVTVolume::~AAnankeRVTVolume() {}
// End Class AAnankeRVTVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRVTVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeRVTVolume, AAnankeRVTVolume::StaticClass, TEXT("AAnankeRVTVolume"), &Z_Registration_Info_UClass_AAnankeRVTVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeRVTVolume), 2143658402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRVTVolume_h_2457570638(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRVTVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRVTVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
