// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/FunctionLibraries/AnankeBitArrayLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeBitArrayLibrary() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeBitArrayLibrary();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeBitArrayLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class UAnankeBitArrayLibrary
void UAnankeBitArrayLibrary::StaticRegisterNativesUAnankeBitArrayLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeBitArrayLibrary);
UClass* Z_Construct_UClass_UAnankeBitArrayLibrary_NoRegister()
{
	return UAnankeBitArrayLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnankeBitArrayLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibraries/AnankeBitArrayLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AnankeBitArrayLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeBitArrayLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::ClassParams = {
	&UAnankeBitArrayLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeBitArrayLibrary()
{
	if (!Z_Registration_Info_UClass_UAnankeBitArrayLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeBitArrayLibrary.OuterSingleton, Z_Construct_UClass_UAnankeBitArrayLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeBitArrayLibrary.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeBitArrayLibrary>()
{
	return UAnankeBitArrayLibrary::StaticClass();
}
UAnankeBitArrayLibrary::UAnankeBitArrayLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeBitArrayLibrary);
UAnankeBitArrayLibrary::~UAnankeBitArrayLibrary() {}
// End Class UAnankeBitArrayLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeBitArrayLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeBitArrayLibrary, UAnankeBitArrayLibrary::StaticClass, TEXT("UAnankeBitArrayLibrary"), &Z_Registration_Info_UClass_UAnankeBitArrayLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeBitArrayLibrary), 1317436148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeBitArrayLibrary_h_4258360415(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeBitArrayLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeBitArrayLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
