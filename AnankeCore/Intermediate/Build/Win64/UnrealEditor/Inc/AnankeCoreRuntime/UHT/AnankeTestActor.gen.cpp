// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Testing/Fakes/AnankeTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeTestActor() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeTestActor();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeTestActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeTestActor Function PostConstructor
struct Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics
{
	struct AnankeTestActor_eventPostConstructor_Parms
	{
		bool NewBoolProperty;
		float NewFloatProperty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Testing/Fakes/AnankeTestActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewBoolProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewBoolProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFloatProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewBoolProperty_SetBit(void* Obj)
{
	((AnankeTestActor_eventPostConstructor_Parms*)Obj)->NewBoolProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewBoolProperty = { "NewBoolProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnankeTestActor_eventPostConstructor_Parms), &Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewBoolProperty_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewFloatProperty = { "NewFloatProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeTestActor_eventPostConstructor_Parms, NewFloatProperty), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewBoolProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::NewProp_NewFloatProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankeTestActor, nullptr, "PostConstructor", nullptr, nullptr, Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::AnankeTestActor_eventPostConstructor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::AnankeTestActor_eventPostConstructor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnankeTestActor_PostConstructor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankeTestActor_PostConstructor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankeTestActor::execPostConstructor)
{
	P_GET_UBOOL(Z_Param_NewBoolProperty);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFloatProperty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostConstructor(Z_Param_NewBoolProperty,Z_Param_NewFloatProperty);
	P_NATIVE_END;
}
// End Class AAnankeTestActor Function PostConstructor

// Begin Class AAnankeTestActor
void AAnankeTestActor::StaticRegisterNativesAAnankeTestActor()
{
	UClass* Class = AAnankeTestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PostConstructor", &AAnankeTestActor::execPostConstructor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeTestActor);
UClass* Z_Construct_UClass_AAnankeTestActor_NoRegister()
{
	return AAnankeTestActor::StaticClass();
}
struct Z_Construct_UClass_AAnankeTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Testing/Fakes/AnankeTestActor.h" },
		{ "ModuleRelativePath", "Public/Testing/Fakes/AnankeTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSomeBoolProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Testing/Fakes/AnankeTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SomeFloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Testing/Fakes/AnankeTestActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSomeBoolProperty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSomeBoolProperty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeFloatProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnankeTestActor_PostConstructor, "PostConstructor" }, // 2927888579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_bSomeBoolProperty_SetBit(void* Obj)
{
	((AAnankeTestActor*)Obj)->bSomeBoolProperty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_bSomeBoolProperty = { "bSomeBoolProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAnankeTestActor), &Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_bSomeBoolProperty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSomeBoolProperty_MetaData), NewProp_bSomeBoolProperty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_SomeFloatProperty = { "SomeFloatProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeTestActor, SomeFloatProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SomeFloatProperty_MetaData), NewProp_SomeFloatProperty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnankeTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_bSomeBoolProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeTestActor_Statics::NewProp_SomeFloatProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnankeTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeTestActor_Statics::ClassParams = {
	&AAnankeTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAnankeTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeTestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeTestActor()
{
	if (!Z_Registration_Info_UClass_AAnankeTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeTestActor.OuterSingleton, Z_Construct_UClass_AAnankeTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeTestActor.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeTestActor>()
{
	return AAnankeTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeTestActor);
AAnankeTestActor::~AAnankeTestActor() {}
// End Class AAnankeTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeTestActor, AAnankeTestActor::StaticClass, TEXT("AAnankeTestActor"), &Z_Registration_Info_UClass_AAnankeTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeTestActor), 3763547062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestActor_h_2936313577(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
