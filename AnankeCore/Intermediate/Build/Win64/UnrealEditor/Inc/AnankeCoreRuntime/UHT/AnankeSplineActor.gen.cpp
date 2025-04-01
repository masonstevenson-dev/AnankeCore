// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Actor/AnankeSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeSplineActor() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeSplineActor();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeSplineActor_NoRegister();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeSplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeSplineActor
void AAnankeSplineActor::StaticRegisterNativesAAnankeSplineActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeSplineActor);
UClass* Z_Construct_UClass_AAnankeSplineActor_NoRegister()
{
	return AAnankeSplineActor::StaticClass();
}
struct Z_Construct_UClass_AAnankeSplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Spline" },
		{ "IncludePath", "Actor/AnankeSplineActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeSplineActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[] = {
		{ "Category", "AnankeSplineActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeSplineActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "AnankeSplineActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AnankeSplineActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeSplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeSplineActor_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeSplineActor, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformComponent_MetaData), NewProp_TransformComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnankeSplineActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeSplineActor, SplineComponent), Z_Construct_UClass_UAnankeSplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnankeSplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeSplineActor_Statics::NewProp_TransformComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeSplineActor_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeSplineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnankeSplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeSplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeSplineActor_Statics::ClassParams = {
	&AAnankeSplineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnankeSplineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeSplineActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeSplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeSplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeSplineActor()
{
	if (!Z_Registration_Info_UClass_AAnankeSplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeSplineActor.OuterSingleton, Z_Construct_UClass_AAnankeSplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeSplineActor.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeSplineActor>()
{
	return AAnankeSplineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeSplineActor);
AAnankeSplineActor::~AAnankeSplineActor() {}
// End Class AAnankeSplineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeSplineActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeSplineActor, AAnankeSplineActor::StaticClass, TEXT("AAnankeSplineActor"), &Z_Registration_Info_UClass_AAnankeSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeSplineActor), 2517033607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeSplineActor_h_975132290(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Actor_AnankeSplineActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
