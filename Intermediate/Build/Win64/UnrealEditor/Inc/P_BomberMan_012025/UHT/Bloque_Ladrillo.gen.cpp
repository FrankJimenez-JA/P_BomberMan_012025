// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/Bloque_Ladrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Ladrillo() {}

// Begin Cross Module References
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Ladrillo();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Ladrillo_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_Ladrillo
void ABloque_Ladrillo::StaticRegisterNativesABloque_Ladrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Ladrillo);
UClass* Z_Construct_UClass_ABloque_Ladrillo_NoRegister()
{
	return ABloque_Ladrillo::StaticClass();
}
struct Z_Construct_UClass_ABloque_Ladrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloque_Ladrillo.h" },
		{ "ModuleRelativePath", "Bloque_Ladrillo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Ladrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Ladrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Ladrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Ladrillo_Statics::ClassParams = {
	&ABloque_Ladrillo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Ladrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Ladrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Ladrillo()
{
	if (!Z_Registration_Info_UClass_ABloque_Ladrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Ladrillo.OuterSingleton, Z_Construct_UClass_ABloque_Ladrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Ladrillo.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<ABloque_Ladrillo>()
{
	return ABloque_Ladrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Ladrillo);
ABloque_Ladrillo::~ABloque_Ladrillo() {}
// End Class ABloque_Ladrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Ladrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Ladrillo, ABloque_Ladrillo::StaticClass, TEXT("ABloque_Ladrillo"), &Z_Registration_Info_UClass_ABloque_Ladrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Ladrillo), 304779870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Ladrillo_h_450720602(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Ladrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Ladrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
