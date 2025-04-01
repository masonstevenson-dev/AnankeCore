// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Testing/AnankeLifecycleTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeLifecycleTestActor() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeLifecycleTestActor();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_AAnankeLifecycleTestActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class AAnankeLifecycleTestActor
void AAnankeLifecycleTestActor::StaticRegisterNativesAAnankeLifecycleTestActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnankeLifecycleTestActor);
UClass* Z_Construct_UClass_AAnankeLifecycleTestActor_NoRegister()
{
	return AAnankeLifecycleTestActor::StaticClass();
}
struct Z_Construct_UClass_AAnankeLifecycleTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Testing/AnankeLifecycleTestActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Testing/AnankeLifecycleTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DummVar_MetaData[] = {
		{ "Category", "AnankeLifecycleTestActor" },
		{ "ModuleRelativePath", "Public/Testing/AnankeLifecycleTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DummVar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnankeLifecycleTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::NewProp_DummVar = { "DummVar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAnankeLifecycleTestActor, DummVar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DummVar_MetaData), NewProp_DummVar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::NewProp_DummVar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::ClassParams = {
	&AAnankeLifecycleTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAnankeLifecycleTestActor()
{
	if (!Z_Registration_Info_UClass_AAnankeLifecycleTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnankeLifecycleTestActor.OuterSingleton, Z_Construct_UClass_AAnankeLifecycleTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAnankeLifecycleTestActor.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<AAnankeLifecycleTestActor>()
{
	return AAnankeLifecycleTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAnankeLifecycleTestActor);
AAnankeLifecycleTestActor::~AAnankeLifecycleTestActor() {}
// End Class AAnankeLifecycleTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_AnankeLifecycleTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAnankeLifecycleTestActor, AAnankeLifecycleTestActor::StaticClass, TEXT("AAnankeLifecycleTestActor"), &Z_Registration_Info_UClass_AAnankeLifecycleTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnankeLifecycleTestActor), 3151428486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_AnankeLifecycleTestActor_h_3519042342(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_AnankeLifecycleTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_AnankeLifecycleTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
