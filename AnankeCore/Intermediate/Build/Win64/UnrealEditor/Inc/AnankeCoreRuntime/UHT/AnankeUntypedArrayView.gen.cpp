// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Containers/AnankeUntypedArrayView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeUntypedArrayView() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnankeUntypedArrayView();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin ScriptStruct FAnankeUntypedArrayView
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView;
class UScriptStruct* FAnankeUntypedArrayView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnankeUntypedArrayView, (UObject*)Z_Construct_UPackage__Script_AnankeCoreRuntime(), TEXT("AnankeUntypedArrayView"));
	}
	return Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UScriptStruct* StaticStruct<FAnankeUntypedArrayView>()
{
	return FAnankeUntypedArrayView::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stores all the information required to create an ArrayView, minus the type. At some later time, the type can be\n// provided to construct the full-fledged ArrayView.\n// for whatever reason, trying to export this as a class build errors.\n" },
#endif
		{ "ModuleRelativePath", "Public/Containers/AnankeUntypedArrayView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores all the information required to create an ArrayView, minus the type. At some later time, the type can be\nprovided to construct the full-fledged ArrayView.\nfor whatever reason, trying to export this as a class build errors." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnankeUntypedArrayView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
	nullptr,
	&NewStructOps,
	"AnankeUntypedArrayView",
	nullptr,
	0,
	sizeof(FAnankeUntypedArrayView),
	alignof(FAnankeUntypedArrayView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnankeUntypedArrayView()
{
	if (!Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.InnerSingleton, Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView.InnerSingleton;
}
// End ScriptStruct FAnankeUntypedArrayView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeUntypedArrayView_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnankeUntypedArrayView::StaticStruct, Z_Construct_UScriptStruct_FAnankeUntypedArrayView_Statics::NewStructOps, TEXT("AnankeUntypedArrayView"), &Z_Registration_Info_UScriptStruct_AnankeUntypedArrayView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnankeUntypedArrayView), 3257279222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeUntypedArrayView_h_2271226806(TEXT("/Script/AnankeCoreRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeUntypedArrayView_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Containers_AnankeUntypedArrayView_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
