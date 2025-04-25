// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/Bloque_Hielo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Hielo() {}

// Begin Cross Module References
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Hielo();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Hielo_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_Hielo
void ABloque_Hielo::StaticRegisterNativesABloque_Hielo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Hielo);
UClass* Z_Construct_UClass_ABloque_Hielo_NoRegister()
{
	return ABloque_Hielo::StaticClass();
}
struct Z_Construct_UClass_ABloque_Hielo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloque_Hielo.h" },
		{ "ModuleRelativePath", "Bloque_Hielo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Hielo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Hielo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Hielo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Hielo_Statics::ClassParams = {
	&ABloque_Hielo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Hielo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Hielo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Hielo()
{
	if (!Z_Registration_Info_UClass_ABloque_Hielo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Hielo.OuterSingleton, Z_Construct_UClass_ABloque_Hielo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Hielo.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<ABloque_Hielo>()
{
	return ABloque_Hielo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Hielo);
ABloque_Hielo::~ABloque_Hielo() {}
// End Class ABloque_Hielo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Hielo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Hielo, ABloque_Hielo::StaticClass, TEXT("ABloque_Hielo"), &Z_Registration_Info_UClass_ABloque_Hielo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Hielo), 175830472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Hielo_h_957959440(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Hielo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Hielo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
