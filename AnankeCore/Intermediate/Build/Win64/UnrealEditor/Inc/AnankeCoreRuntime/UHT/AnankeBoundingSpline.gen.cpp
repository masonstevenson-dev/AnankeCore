// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Actor/AnankeBoundingSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeBoundingSpline() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeBoundingSpline();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeBoundingSpline_NoRegister();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeSplineActor();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeBoundingSpline
void AAnankeBoundingSpline::StaticRegisterNativesAAnankeBoundingSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeBoundingSpline);
UClass* Z_Construct_UClass_AAnankeBoundingSpline_NoRegister()
{
	return AAnankeBoundingSpline::StaticClass();
}
struct Z_Construct_UClass_AAnankeBoundingSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Bounding Spline" },
		{ "IncludePath", "Actor/AnankeBoundingSpline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeBoundingSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxHeight_MetaData[] = {
		{ "Category", "AnankeBoundingSpline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height in meters.\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/AnankeBoundingSpline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height in meters." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeBoudingBox_MetaData[] = {
		{ "Category", "AnankeBoundingSpline" },
		{ "ModuleRelativePath", "Public/Actor/AnankeBoundingSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundingBoxHeight;
	static void NewProp_bVisualizeBoudingBox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeBoudingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeBoundingSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_BoundingBoxHeight = { "BoundingBoxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeBoundingSpline, BoundingBoxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxHeight_MetaData), NewProp_BoundingBoxHeight_MetaData) };
void Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_bVisualizeBoudingBox_SetBit(void* Obj)
{
	((AAnankeBoundingSpline*)Obj)->bVisualizeBoudingBox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_bVisualizeBoudingBox = { "bVisualizeBoudingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAnankeBoundingSpline), &Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_bVisualizeBoudingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisualizeBoudingBox_MetaData), NewProp_bVisualizeBoudingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnankeBoundingSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_BoundingBoxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeBoundingSpline_Statics::NewProp_bVisualizeBoudingBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeBoundingSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnankeBoundingSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAnankeSplineActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeBoundingSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeBoundingSpline_Statics::ClassParams = {
	&AAnankeBoundingSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnankeBoundingSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeBoundingSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeBoundingSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeBoundingSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeBoundingSpline()
{
	if (!Z_Registration_Info_UClass_AAnankeBoundingSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeBoundingSpline.OuterSingleton, Z_Construct_UClass_AAnankeBoundingSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeBoundingSpline.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeBoundingSpline>()
{
	return AAnankeBoundingSpline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeBoundingSpline);
AAnankeBoundingSpline::~AAnankeBoundingSpline() {}
// End Class AAnankeBoundingSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeBoundingSpline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeBoundingSpline, AAnankeBoundingSpline::StaticClass, TEXT("AAnankeBoundingSpline"), &Z_Registration_Info_UClass_AAnankeBoundingSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeBoundingSpline), 2164351883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeBoundingSpline_h_1029160493(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeBoundingSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeBoundingSpline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
