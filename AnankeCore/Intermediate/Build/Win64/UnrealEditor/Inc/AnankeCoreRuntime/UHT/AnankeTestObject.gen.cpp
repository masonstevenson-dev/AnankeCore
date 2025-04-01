// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnankeCoreRuntime/Public/Testing/Fakes/AnankeTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnankeTestObject() {}

// Begin Cross Module References
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeTestObject();
ANANKECORERUNTIME_API UClass* Z_Construct_UClass_UAnankeTestObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AnankeCoreRuntime();
// End Cross Module References

// Begin Class UAnankeTestObject
void UAnankeTestObject::StaticRegisterNativesUAnankeTestObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnankeTestObject);
UClass* Z_Construct_UClass_UAnankeTestObject_NoRegister()
{
	return UAnankeTestObject::StaticClass();
}
struct Z_Construct_UClass_UAnankeTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Testing/Fakes/AnankeTestObject.h" },
		{ "ModuleRelativePath", "Public/Testing/Fakes/AnankeTestObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnankeTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnankeTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnankeCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnankeTestObject_Statics::ClassParams = {
	&UAnankeTestObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnankeTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnankeTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnankeTestObject()
{
	if (!Z_Registration_Info_UClass_UAnankeTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnankeTestObject.OuterSingleton, Z_Construct_UClass_UAnankeTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnankeTestObject.OuterSingleton;
}
template<> ANANKECORERUNTIME_API UClass* StaticClass<UAnankeTestObject>()
{
	return UAnankeTestObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnankeTestObject);
UAnankeTestObject::~UAnankeTestObject() {}
// End Class UAnankeTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnankeTestObject, UAnankeTestObject::StaticClass, TEXT("UAnankeTestObject"), &Z_Registration_Info_UClass_UAnankeTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnankeTestObject), 4149712430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestObject_h_2820806911(TEXT("/Script/AnankeCoreRuntime"),
	Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_lib_main_Unreal_Ananke2_Plugins_AnankeCore_AnankeCore_Source_AnankeCoreRuntime_Public_Testing_Fakes_AnankeTestObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
