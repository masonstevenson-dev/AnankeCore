// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/FunctionLibraries/AnankeGameplayTagLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeGameplayTagLibrary() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeGameplayTagLibrary();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeGameplayTagLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class UAnankeGameplayTagLibrary
void UAnankeGameplayTagLibrary::StaticRegisterNativesUAnankeGameplayTagLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeGameplayTagLibrary);
UClass* Z_Construct_UClass_UAnankeGameplayTagLibrary_NoRegister()
{
	return UAnankeGameplayTagLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibraries/AnankeGameplayTagLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AnankeGameplayTagLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeGameplayTagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::ClassParams = {
	&UAnankeGameplayTagLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeGameplayTagLibrary()
{
	if (!Z_Registration_Info_UClass_UAnankeGameplayTagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeGameplayTagLibrary.OuterSingleton, Z_Construct_UClass_UAnankeGameplayTagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeGameplayTagLibrary.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeGameplayTagLibrary>()
{
	return UAnankeGameplayTagLibrary::StaticClass();
}
UAnankeGameplayTagLibrary::UAnankeGameplayTagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeGameplayTagLibrary);
UAnankeGameplayTagLibrary::~UAnankeGameplayTagLibrary() {}
// End Class UAnankeGameplayTagLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeGameplayTagLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeGameplayTagLibrary, UAnankeGameplayTagLibrary::StaticClass, TEXT("UAnankeGameplayTagLibrary"), &Z_Registration_Info_UClass_UAnankeGameplayTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeGameplayTagLibrary), 1267120621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeGameplayTagLibrary_h_2486578124(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeGameplayTagLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeGameplayTagLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
