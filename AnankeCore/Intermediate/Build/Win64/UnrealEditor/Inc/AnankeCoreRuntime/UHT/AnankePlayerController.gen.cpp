// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Controller/AnankePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankePlayerController() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankePlayerController();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankePlayerController Function Look
struct Z_Construct_UFunction_AAnankePlayerController_Look_Statics
{
	struct AnankePlayerController_eventLook_Parms
	{
		float ActionValueX;
		float ActionValueY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controller/AnankePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValueX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionValueY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnankePlayerController_Look_Statics::NewProp_ActionValueX = { "ActionValueX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankePlayerController_eventLook_Parms, ActionValueX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAnankePlayerController_Look_Statics::NewProp_ActionValueY = { "ActionValueY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnankePlayerController_eventLook_Parms, ActionValueY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnankePlayerController_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankePlayerController_Look_Statics::NewProp_ActionValueX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnankePlayerController_Look_Statics::NewProp_ActionValueY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerController_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnankePlayerController_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnankePlayerController, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AAnankePlayerController_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerController_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAnankePlayerController_Look_Statics::AnankePlayerController_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAnankePlayerController_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAnankePlayerController_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAnankePlayerController_Look_Statics::AnankePlayerController_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAnankePlayerController_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAnankePlayerController_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAnankePlayerController::execLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActionValueX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActionValueY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_ActionValueX,Z_Param_ActionValueY);
	P_NATIVE_END;
}
// End Class AAnankePlayerController Function Look

// Begin Class AAnankePlayerController
void AAnankePlayerController::StaticRegisterNativesAAnankePlayerController()
{
	UClass* Class = AAnankePlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AAnankePlayerController::execLook },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankePlayerController);
UClass* Z_Construct_UClass_AAnankePlayerController_NoRegister()
{
	return AAnankePlayerController::StaticClass();
}
struct Z_Construct_UClass_AAnankePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/AnankePlayerController.h" },
		{ "ModuleRelativePath", "Public/Controller/AnankePlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnankePlayerController_Look, "Look" }, // 536682729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAnankePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankePlayerController_Statics::ClassParams = {
	&AAnankePlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankePlayerController()
{
	if (!Z_Registration_Info_UClass_AAnankePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankePlayerController.OuterSingleton, Z_Construct_UClass_AAnankePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankePlayerController.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankePlayerController>()
{
	return AAnankePlayerController::StaticClass();
}
AAnankePlayerController::AAnankePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankePlayerController);
AAnankePlayerController::~AAnankePlayerController() {}
// End Class AAnankePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankePlayerController, AAnankePlayerController::StaticClass, TEXT("AAnankePlayerController"), &Z_Registration_Info_UClass_AAnankePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankePlayerController), 315141721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_2038589259(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Controller_AnankePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
