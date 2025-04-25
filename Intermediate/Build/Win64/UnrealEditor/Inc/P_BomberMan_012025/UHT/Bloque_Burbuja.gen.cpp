// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/Bloque_Burbuja.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Burbuja() {}

// Begin Cross Module References
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Burbuja();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Burbuja_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_Burbuja
void ABloque_Burbuja::StaticRegisterNativesABloque_Burbuja()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Burbuja);
UClass* Z_Construct_UClass_ABloque_Burbuja_NoRegister()
{
	return ABloque_Burbuja::StaticClass();
}
struct Z_Construct_UClass_ABloque_Burbuja_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloque_Burbuja.h" },
		{ "ModuleRelativePath", "Bloque_Burbuja.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Burbuja>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Burbuja_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Burbuja_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Burbuja_Statics::ClassParams = {
	&ABloque_Burbuja::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Burbuja_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Burbuja_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Burbuja()
{
	if (!Z_Registration_Info_UClass_ABloque_Burbuja.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Burbuja.OuterSingleton, Z_Construct_UClass_ABloque_Burbuja_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Burbuja.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<ABloque_Burbuja>()
{
	return ABloque_Burbuja::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Burbuja);
ABloque_Burbuja::~ABloque_Burbuja() {}
// End Class ABloque_Burbuja

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Burbuja_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Burbuja, ABloque_Burbuja::StaticClass, TEXT("ABloque_Burbuja"), &Z_Registration_Info_UClass_ABloque_Burbuja, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Burbuja), 3105707882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Burbuja_h_303049904(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Burbuja_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Burbuja_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
