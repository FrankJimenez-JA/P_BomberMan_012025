// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/Bloque_Vidrio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Vidrio() {}

// Begin Cross Module References
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Vidrio();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Vidrio_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class ABloque_Vidrio
void ABloque_Vidrio::StaticRegisterNativesABloque_Vidrio()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Vidrio);
UClass* Z_Construct_UClass_ABloque_Vidrio_NoRegister()
{
	return ABloque_Vidrio::StaticClass();
}
struct Z_Construct_UClass_ABloque_Vidrio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Bloque_Vidrio.h" },
		{ "ModuleRelativePath", "Bloque_Vidrio.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Vidrio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Vidrio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Vidrio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Vidrio_Statics::ClassParams = {
	&ABloque_Vidrio::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Vidrio_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Vidrio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Vidrio()
{
	if (!Z_Registration_Info_UClass_ABloque_Vidrio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Vidrio.OuterSingleton, Z_Construct_UClass_ABloque_Vidrio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Vidrio.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<ABloque_Vidrio>()
{
	return ABloque_Vidrio::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Vidrio);
ABloque_Vidrio::~ABloque_Vidrio() {}
// End Class ABloque_Vidrio

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Vidrio_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Vidrio, ABloque_Vidrio::StaticClass, TEXT("ABloque_Vidrio"), &Z_Registration_Info_UClass_ABloque_Vidrio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Vidrio), 1642591284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Vidrio_h_1362074162(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Vidrio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Bloque_Vidrio_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
