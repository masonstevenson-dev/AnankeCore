// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Character/AnankeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeCharacter() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeCharacter();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeCharacter Function JumpCompleted
struct Z_Construct_UFunction_AAnankeCharacter_JumpCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AnankeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankeCharacter_JumpCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankeCharacter, nullptr, "JumpCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeCharacter_JumpCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankeCharacter_JumpCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAnankeCharacter_JumpCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankeCharacter_JumpCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankeCharacter::execJumpCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpCompleted();
	P_NATIVE_END;
}
// End Class AAnankeCharacter Function JumpCompleted

// Begin Class AAnankeCharacter Function JumpTriggered
struct Z_Construct_UFunction_AAnankeCharacter_JumpTriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AnankeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankeCharacter_JumpTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankeCharacter, nullptr, "JumpTriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeCharacter_JumpTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankeCharacter_JumpTriggered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAnankeCharacter_JumpTriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankeCharacter_JumpTriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankeCharacter::execJumpTriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpTriggered();
	P_NATIVE_END;
}
// End Class AAnankeCharacter Function JumpTriggered

// Begin Class AAnankeCharacter Function Move
struct Z_Construct_UFunction_AAnankeCharacter_Move_Statics
{
	struct AnankeCharacter_eventMove_Parms
	{
		float ActionValueX;
		float ActionValueY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/AnankeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValueX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValueY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnankeCharacter_Move_Statics::NewProp_ActionValueX = { "ActionValueX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeCharacter_eventMove_Parms, ActionValueX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnankeCharacter_Move_Statics::NewProp_ActionValueY = { "ActionValueY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankeCharacter_eventMove_Parms, ActionValueY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnankeCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankeCharacter_Move_Statics::NewProp_ActionValueX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankeCharacter_Move_Statics::NewProp_ActionValueY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankeCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankeCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AAnankeCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnankeCharacter_Move_Statics::AnankeCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankeCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankeCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnankeCharacter_Move_Statics::AnankeCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnankeCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankeCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankeCharacter::execMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActionValueX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActionValueY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_ActionValueX,Z_Param_ActionValueY);
	P_NATIVE_END;
}
// End Class AAnankeCharacter Function Move

// Begin Class AAnankeCharacter
void AAnankeCharacter::StaticRegisterNativesAAnankeCharacter()
{
	UClass* Class = AAnankeCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JumpCompleted", &AAnankeCharacter::execJumpCompleted },
		{ "JumpTriggered", &AAnankeCharacter::execJumpTriggered },
		{ "Move", &AAnankeCharacter::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeCharacter);
UClass* Z_Construct_UClass_AAnankeCharacter_NoRegister()
{
	return AAnankeCharacter::StaticClass();
}
struct Z_Construct_UClass_AAnankeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AnankeCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/AnankeCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnankeCharacter_JumpCompleted, "JumpCompleted" }, // 2007965670
		{ &Z_Construct_UFunction_AAnankeCharacter_JumpTriggered, "JumpTriggered" }, // 3098442320
		{ &Z_Construct_UFunction_AAnankeCharacter_Move, "Move" }, // 3311408962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnankeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeCharacter_Statics::ClassParams = {
	&AAnankeCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeCharacter()
{
	if (!Z_Registration_Info_UClass_AAnankeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeCharacter.OuterSingleton, Z_Construct_UClass_AAnankeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeCharacter.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeCharacter>()
{
	return AAnankeCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeCharacter);
AAnankeCharacter::~AAnankeCharacter() {}
// End Class AAnankeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeCharacter, AAnankeCharacter::StaticClass, TEXT("AAnankeCharacter"), &Z_Registration_Info_UClass_AAnankeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeCharacter), 1285706318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_662749682(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Character_AnankeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
