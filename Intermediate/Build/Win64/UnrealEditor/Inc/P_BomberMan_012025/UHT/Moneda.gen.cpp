// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P_BomberMan_012025/Moneda.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneda() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMoneda();
P_BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMoneda_NoRegister();
UPackage* Z_Construct_UPackage__Script_P_BomberMan_012025();
// End Cross Module References

// Begin Class AMoneda
void AMoneda::StaticRegisterNativesAMoneda()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoneda);
UClass* Z_Construct_UClass_AMoneda_NoRegister()
{
	return AMoneda::StaticClass();
}
struct Z_Construct_UClass_AMoneda_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Moneda.h" },
		{ "ModuleRelativePath", "Moneda.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocidadRotacion_MetaData[] = {
		{ "Category", "Rotaci\xef\xbf\xbdn" },
		{ "ModuleRelativePath", "Moneda.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnguloMaximoRotacion_MetaData[] = {
		{ "Category", "Rotaci\xef\xbf\xbdn" },
		{ "ModuleRelativePath", "Moneda.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocidadRotacion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnguloMaximoRotacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneda>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoneda_Statics::NewProp_VelocidadRotacion = { "VelocidadRotacion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoneda, VelocidadRotacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocidadRotacion_MetaData), NewProp_VelocidadRotacion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoneda_Statics::NewProp_AnguloMaximoRotacion = { "AnguloMaximoRotacion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMoneda, AnguloMaximoRotacion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnguloMaximoRotacion_MetaData), NewProp_AnguloMaximoRotacion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoneda_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Statics::NewProp_VelocidadRotacion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Statics::NewProp_AnguloMaximoRotacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMoneda_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_P_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoneda_Statics::ClassParams = {
	&AMoneda::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMoneda_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams), Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMoneda()
{
	if (!Z_Registration_Info_UClass_AMoneda.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoneda.OuterSingleton, Z_Construct_UClass_AMoneda_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMoneda.OuterSingleton;
}
template<> P_BOMBERMAN_012025_API UClass* StaticClass<AMoneda>()
{
	return AMoneda::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneda);
AMoneda::~AMoneda() {}
// End Class AMoneda

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Moneda_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMoneda, AMoneda::StaticClass, TEXT("AMoneda"), &Z_Registration_Info_UClass_AMoneda, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoneda), 1474589831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Moneda_h_2698483857(TEXT("/Script/P_BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Moneda_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_P_BomberMan_012025_Source_P_BomberMan_012025_Moneda_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
