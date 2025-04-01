// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Containers/AnankeDynamicValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeDynamicValue() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnankeDynamicValue();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FAnankeDynamicValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnankeDynamicValue;
class UScriptStruct* FAnankeDynamicValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnankeDynamicValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnankeDynamicValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnankeDynamicValue, (UObject*)Z_Construct_UPackage__Script_AnankeCoreRuntime(), TEXT("AnankeDynamicValue"));
	}
	return Z_Registration_Info_UScriptStruct_AnankeDynamicValue.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UScriptStruct* StaticStruct<FAnankeDynamicValue>()
{
	return FAnankeDynamicValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Containers/AnankeDynamicValue.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnankeDynamicValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
	nullptr,
	&NewStructOps,
	"AnankeDynamicValue",
	nullptr,
	0,
	sizeof(FAnankeDynamicValue),
	alignof(FAnankeDynamicValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnankeDynamicValue()
{
	if (!Z_Registration_Info_UScriptStruct_AnankeDynamicValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnankeDynamicValue.InnerSingleton, Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnankeDynamicValue.InnerSingleton;
}
// End ScriptStruct FAnankeDynamicValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeDynamicValue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnankeDynamicValue::StaticStruct, Z_Construct_UScriptStruct_FAnankeDynamicValue_Statics::NewStructOps, TEXT("AnankeDynamicValue"), &Z_Registration_Info_UScriptStruct_AnankeDynamicValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnankeDynamicValue), 3151762210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeDynamicValue_h_3674242467(TEXT("/Script/AnankeCoreRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeDynamicValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeDynamicValue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
