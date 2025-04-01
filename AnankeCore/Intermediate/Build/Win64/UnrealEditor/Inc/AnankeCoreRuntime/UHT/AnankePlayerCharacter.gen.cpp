// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Character/AnankePlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankePlayerCharacter() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeCharacter();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankePlayerCharacter();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankePlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankePlayerCharacter Function IsFalling
struct Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics
{
	struct AnankePlayerCharacter_eventIsFalling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AnankePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnankePlayerCharacter_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnankePlayerCharacter_eventIsFalling_Parms), &Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankePlayerCharacter, nullptr, "IsFalling", nullptr, nullptr, Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::AnankePlayerCharacter_eventIsFalling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::AnankePlayerCharacter_eventIsFalling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankePlayerCharacter::execIsFalling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFalling();
	P_NATIVE_END;
}
// End Class AAnankePlayerCharacter Function IsFalling

// Begin Class AAnankePlayerCharacter Function IsMoving
struct Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics
{
	struct AnankePlayerCharacter_eventIsMoving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AnankePlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnankePlayerCharacter_eventIsMoving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnankePlayerCharacter_eventIsMoving_Parms), &Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankePlayerCharacter, nullptr, "IsMoving", nullptr, nullptr, Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::AnankePlayerCharacter_eventIsMoving_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::AnankePlayerCharacter_eventIsMoving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankePlayerCharacter::execIsMoving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoving();
	P_NATIVE_END;
}
// End Class AAnankePlayerCharacter Function IsMoving

// Begin Class AAnankePlayerCharacter
void AAnankePlayerCharacter::StaticRegisterNativesAAnankePlayerCharacter()
{
	UClass* Class = AAnankePlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFalling", &AAnankePlayerCharacter::execIsFalling },
		{ "IsMoving", &AAnankePlayerCharacter::execIsMoving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankePlayerCharacter);
UClass* Z_Construct_UClass_AAnankePlayerCharacter_NoRegister()
{
	return AAnankePlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_AAnankePlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AnankePlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AnankePlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnankePlayerCharacter_IsFalling, "IsFalling" }, // 667409288
		{ &Z_Construct_UFunction_AAnankePlayerCharacter_IsMoving, "IsMoving" }, // 2836729430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankePlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnankePlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAnankeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankePlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankePlayerCharacter_Statics::ClassParams = {
	&AAnankePlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankePlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankePlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankePlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AAnankePlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankePlayerCharacter.OuterSingleton, Z_Construct_UClass_AAnankePlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankePlayerCharacter.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankePlayerCharacter>()
{
	return AAnankePlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankePlayerCharacter);
AAnankePlayerCharacter::~AAnankePlayerCharacter() {}
// End Class AAnankePlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankePlayerCharacter, AAnankePlayerCharacter::StaticClass, TEXT("AAnankePlayerCharacter"), &Z_Registration_Info_UClass_AAnankePlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankePlayerCharacter), 3240488388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_381260540(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankePlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
