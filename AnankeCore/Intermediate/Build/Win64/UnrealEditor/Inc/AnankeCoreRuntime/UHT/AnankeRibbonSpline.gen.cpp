// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Actor/AnankeRibbonSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeRibbonSpline() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeRibbonSpline();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeRibbonSpline_NoRegister();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeSplineActor();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeRibbonSpline
void AAnankeRibbonSpline::StaticRegisterNativesAAnankeRibbonSpline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeRibbonSpline);
UClass* Z_Construct_UClass_AAnankeRibbonSpline_NoRegister()
{
	return AAnankeRibbonSpline::StaticClass();
}
struct Z_Construct_UClass_AAnankeRibbonSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Ribbon Spline" },
		{ "IncludePath", "Actor/AnankeRibbonSpline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeRibbonSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeRibbonSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnankeRibbonSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAnankeSplineActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRibbonSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeRibbonSpline_Statics::ClassParams = {
	&AAnankeRibbonSpline::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeRibbonSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeRibbonSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeRibbonSpline()
{
	if (!Z_Registration_Info_UClass_AAnankeRibbonSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeRibbonSpline.OuterSingleton, Z_Construct_UClass_AAnankeRibbonSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeRibbonSpline.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeRibbonSpline>()
{
	return AAnankeRibbonSpline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeRibbonSpline);
AAnankeRibbonSpline::~AAnankeRibbonSpline() {}
// End Class AAnankeRibbonSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRibbonSpline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeRibbonSpline, AAnankeRibbonSpline::StaticClass, TEXT("AAnankeRibbonSpline"), &Z_Registration_Info_UClass_AAnankeRibbonSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeRibbonSpline), 1581588855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRibbonSpline_h_3586023597(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRibbonSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeRibbonSpline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
