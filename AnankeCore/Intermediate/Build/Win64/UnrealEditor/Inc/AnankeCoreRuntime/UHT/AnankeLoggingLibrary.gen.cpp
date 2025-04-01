// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/FunctionLibraries/AnankeLoggingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeLoggingLibrary() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeLoggingLibrary();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeLoggingLibrary_NoRegister();
ANANKECORERUNTIME_API UEnum* Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Enum EAnankeLogVerbosity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnankeLogVerbosity;
static UEnum* EAnankeLogVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnankeLogVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnankeLogVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity, (UObject*)Z_Construct_UPackage__Script_AnankeCoreRuntime(), TEXT("EAnankeLogVerbosity"));
	}
	return Z_Registration_Info_UEnum_EAnankeLogVerbosity.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UEnum* StaticEnum<EAnankeLogVerbosity>()
{
	return EAnankeLogVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EAnankeLogVerbosity::Error" },
		{ "Fatal.Name", "EAnankeLogVerbosity::Fatal" },
		{ "Log.Name", "EAnankeLogVerbosity::Log" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AnankeLoggingLibrary.h" },
		{ "Warning.Name", "EAnankeLogVerbosity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnankeLogVerbosity::Log", (int64)EAnankeLogVerbosity::Log },
		{ "EAnankeLogVerbosity::Warning", (int64)EAnankeLogVerbosity::Warning },
		{ "EAnankeLogVerbosity::Error", (int64)EAnankeLogVerbosity::Error },
		{ "EAnankeLogVerbosity::Fatal", (int64)EAnankeLogVerbosity::Fatal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
	nullptr,
	"EAnankeLogVerbosity",
	"EAnankeLogVerbosity",
	Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity()
{
	if (!Z_Registration_Info_UEnum_EAnankeLogVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnankeLogVerbosity.InnerSingleton, Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnankeLogVerbosity.InnerSingleton;
}
// End Enum EAnankeLogVerbosity

// Begin Class UAnankeLoggingLibrary Function BP_AnankeLog
struct Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics
{
	struct AnankeLoggingLibrary_eventBP_AnankeLog_Parms
	{
		const UObject* WorldContextObject;
		FString InString;
		EAnankeLogVerbosity Verbosity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ELogVerbosity is not valid in a UFUNCTION, so we are using our own enum here.\n" },
#endif
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_Verbosity", "Log" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Ananke Log" },
		{ "Keywords", "log print" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AnankeLoggingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ELogVerbosity is not valid in a UFUNCTION, so we are using our own enum here." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeLoggingLibrary_eventBP_AnankeLog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeLoggingLibrary_eventBP_AnankeLog_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeLoggingLibrary_eventBP_AnankeLog_Parms, Verbosity), Z_Construct_UEnum_AnankeCoreRuntime_EAnankeLogVerbosity, METADATA_PARAMS(0, nullptr) }; // 310459890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnankeLoggingLibrary, nullptr, "BP_AnankeLog", nullptr, nullptr, Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::AnankeLoggingLibrary_eventBP_AnankeLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::AnankeLoggingLibrary_eventBP_AnankeLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnankeLoggingLibrary::execBP_AnankeLog)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_ENUM(EAnankeLogVerbosity,Z_Param_Verbosity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAnankeLoggingLibrary::BP_AnankeLog(Z_Param_WorldContextObject,Z_Param_InString,EAnankeLogVerbosity(Z_Param_Verbosity));
	P_NATIVE_END;
}
// End Class UAnankeLoggingLibrary Function BP_AnankeLog

// Begin Class UAnankeLoggingLibrary
void UAnankeLoggingLibrary::StaticRegisterNativesUAnankeLoggingLibrary()
{
	UClass* Class = UAnankeLoggingLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_AnankeLog", &UAnankeLoggingLibrary::execBP_AnankeLog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeLoggingLibrary);
UClass* Z_Construct_UClass_UAnankeLoggingLibrary_NoRegister()
{
	return UAnankeLoggingLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnankeLoggingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionLibraries/AnankeLoggingLibrary.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraries/AnankeLoggingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnankeLoggingLibrary_BP_AnankeLog, "BP_AnankeLog" }, // 520890700
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeLoggingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankeLoggingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeLoggingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeLoggingLibrary_Statics::ClassParams = {
	&UAnankeLoggingLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeLoggingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeLoggingLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeLoggingLibrary()
{
	if (!Z_Registration_Info_UClass_UAnankeLoggingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeLoggingLibrary.OuterSingleton, Z_Construct_UClass_UAnankeLoggingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeLoggingLibrary.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeLoggingLibrary>()
{
	return UAnankeLoggingLibrary::StaticClass();
}
UAnankeLoggingLibrary::UAnankeLoggingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeLoggingLibrary);
UAnankeLoggingLibrary::~UAnankeLoggingLibrary() {}
// End Class UAnankeLoggingLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnankeLogVerbosity_StaticEnum, TEXT("EAnankeLogVerbosity"), &Z_Registration_Info_UEnum_EAnankeLogVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 310459890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeLoggingLibrary, UAnankeLoggingLibrary::StaticClass, TEXT("UAnankeLoggingLibrary"), &Z_Registration_Info_UClass_UAnankeLoggingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeLoggingLibrary), 1138987052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_3045944760(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_FunctionLibraries_AnankeLoggingLibrary_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
