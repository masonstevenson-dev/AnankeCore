// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Subsystems/AnankeLoggingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeLoggingSubsystem() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeLoggingSubsystem();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeLoggingSubsystem_NoRegister();
ANANKECORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnankePeriodicLog();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FAnankePeriodicLog
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnankePeriodicLog;
class UScriptStruct* FAnankePeriodicLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnankePeriodicLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnankePeriodicLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnankePeriodicLog, (UObject*)Z_Construct_UPackage__Script_AnankeCoreRuntime(), TEXT("AnankePeriodicLog"));
	}
	return Z_Registration_Info_UScriptStruct_AnankePeriodicLog.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UScriptStruct* StaticStruct<FAnankePeriodicLog>()
{
	return FAnankePeriodicLog::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/AnankeLoggingSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnankePeriodicLog>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
	nullptr,
	&NewStructOps,
	"AnankePeriodicLog",
	nullptr,
	0,
	sizeof(FAnankePeriodicLog),
	alignof(FAnankePeriodicLog),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnankePeriodicLog()
{
	if (!Z_Registration_Info_UScriptStruct_AnankePeriodicLog.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnankePeriodicLog.InnerSingleton, Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnankePeriodicLog.InnerSingleton;
}
// End ScriptStruct FAnankePeriodicLog

// Begin Class UAnankeLoggingSubsystem
void UAnankeLoggingSubsystem::StaticRegisterNativesUAnankeLoggingSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeLoggingSubsystem);
UClass* Z_Construct_UClass_UAnankeLoggingSubsystem_NoRegister()
{
	return UAnankeLoggingSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAnankeLoggingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/AnankeLoggingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AnankeLoggingSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeLoggingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::ClassParams = {
	&UAnankeLoggingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeLoggingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAnankeLoggingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeLoggingSubsystem.OuterSingleton, Z_Construct_UClass_UAnankeLoggingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeLoggingSubsystem.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeLoggingSubsystem>()
{
	return UAnankeLoggingSubsystem::StaticClass();
}
UAnankeLoggingSubsystem::UAnankeLoggingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeLoggingSubsystem);
UAnankeLoggingSubsystem::~UAnankeLoggingSubsystem() {}
// End Class UAnankeLoggingSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnankePeriodicLog::StaticStruct, Z_Construct_UScriptStruct_FAnankePeriodicLog_Statics::NewStructOps, TEXT("AnankePeriodicLog"), &Z_Registration_Info_UScriptStruct_AnankePeriodicLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnankePeriodicLog), 1196333986U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeLoggingSubsystem, UAnankeLoggingSubsystem::StaticClass, TEXT("UAnankeLoggingSubsystem"), &Z_Registration_Info_UClass_UAnankeLoggingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeLoggingSubsystem), 3056918447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_204585194(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Subsystems_AnankeLoggingSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
