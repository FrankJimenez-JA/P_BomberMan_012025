// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/P_BomberMan_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BomberMan_012025GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_BomberMan_012025GameMode();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_AP_BomberMan_012025GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class AP_BomberMan_012025GameMode
void AP_BomberMan_012025GameMode::StaticRegisterNativesAP_BomberMan_012025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AP_BomberMan_012025GameMode);
UClass* Z_Construct_UClass_AP_BomberMan_012025GameMode_NoRegister()
{
	return AP_BomberMan_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "P_BomberMan_012025GameMode.h" },
		{ "ModuleRelativePath", "P_BomberMan_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_BomberMan_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::ClassParams = {
	&AP_BomberMan_012025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AP_BomberMan_012025GameMode()
{
	if (!Z_Registration_Info_UClass_AP_BomberMan_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AP_BomberMan_012025GameMode.OuterSingleton, Z_Construct_UClass_AP_BomberMan_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AP_BomberMan_012025GameMode.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<AP_BomberMan_012025GameMode>()
{
	return AP_BomberMan_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AP_BomberMan_012025GameMode);
AP_BomberMan_012025GameMode::~AP_BomberMan_012025GameMode() {}
// End Class AP_BomberMan_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_P_BomberMan_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AP_BomberMan_012025GameMode, AP_BomberMan_012025GameMode::StaticClass, TEXT("AP_BomberMan_012025GameMode"), &Z_Registration_Info_UClass_AP_BomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AP_BomberMan_012025GameMode), 3250912276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_P_BomberMan_012025GameMode_h_161687558(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_P_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_P_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
