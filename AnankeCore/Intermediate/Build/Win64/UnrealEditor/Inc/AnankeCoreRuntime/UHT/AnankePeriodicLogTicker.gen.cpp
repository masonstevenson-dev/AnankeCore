// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Subsystems/AnankePeriodicLogTicker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankePeriodicLogTicker() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankePeriodicLogTicker();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankePeriodicLogTicker_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class UAnankePeriodicLogTicker
void UAnankePeriodicLogTicker::StaticRegisterNativesUAnankePeriodicLogTicker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankePeriodicLogTicker);
UClass* Z_Construct_UClass_UAnankePeriodicLogTicker_NoRegister()
{
	return UAnankePeriodicLogTicker::StaticClass();
}
struct Z_Construct_UClass_UAnankePeriodicLogTicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * We keep the periodic logging API in the AnankeLoggingSubsystem, which is an EngineSubsystem. This allows us to add\n * periodic logs without needing to reference a game world. However, to actually tick the log output, we need a tickable\n * object.\n */" },
#endif
		{ "IncludePath", "Subsystems/AnankePeriodicLogTicker.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AnankePeriodicLogTicker.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We keep the periodic logging API in the AnankeLoggingSubsystem, which is an EngineSubsystem. This allows us to add\nperiodic logs without needing to reference a game world. However, to actually tick the log output, we need a tickable\nobject." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankePeriodicLogTicker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::ClassParams = {
	&UAnankePeriodicLogTicker::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankePeriodicLogTicker()
{
	if (!Z_Registration_Info_UClass_UAnankePeriodicLogTicker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankePeriodicLogTicker.OuterSingleton, Z_Construct_UClass_UAnankePeriodicLogTicker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankePeriodicLogTicker.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankePeriodicLogTicker>()
{
	return UAnankePeriodicLogTicker::StaticClass();
}
UAnankePeriodicLogTicker::UAnankePeriodicLogTicker() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankePeriodicLogTicker);
UAnankePeriodicLogTicker::~UAnankePeriodicLogTicker() {}
// End Class UAnankePeriodicLogTicker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankePeriodicLogTicker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankePeriodicLogTicker, UAnankePeriodicLogTicker::StaticClass, TEXT("UAnankePeriodicLogTicker"), &Z_Registration_Info_UClass_UAnankePeriodicLogTicker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankePeriodicLogTicker), 1430314891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankePeriodicLogTicker_h_707432052(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankePeriodicLogTicker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankePeriodicLogTicker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
