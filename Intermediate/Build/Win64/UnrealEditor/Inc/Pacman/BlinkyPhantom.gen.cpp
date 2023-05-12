// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/BlinkyPhantom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkyPhantom() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_ABlinkyPhantom_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_ABlinkyPhantom();
	PACMAN_API UClass* Z_Construct_UClass_APhantom();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void ABlinkyPhantom::StaticRegisterNativesABlinkyPhantom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlinkyPhantom);
	UClass* Z_Construct_UClass_ABlinkyPhantom_NoRegister()
	{
		return ABlinkyPhantom::StaticClass();
	}
	struct Z_Construct_UClass_ABlinkyPhantom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlinkyPhantom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhantom,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlinkyPhantom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlinkyPhantom.h" },
		{ "ModuleRelativePath", "Public/BlinkyPhantom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlinkyPhantom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlinkyPhantom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlinkyPhantom_Statics::ClassParams = {
		&ABlinkyPhantom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlinkyPhantom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlinkyPhantom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlinkyPhantom()
	{
		if (!Z_Registration_Info_UClass_ABlinkyPhantom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlinkyPhantom.OuterSingleton, Z_Construct_UClass_ABlinkyPhantom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlinkyPhantom.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<ABlinkyPhantom>()
	{
		return ABlinkyPhantom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlinkyPhantom);
	struct Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_BlinkyPhantom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_BlinkyPhantom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlinkyPhantom, ABlinkyPhantom::StaticClass, TEXT("ABlinkyPhantom"), &Z_Registration_Info_UClass_ABlinkyPhantom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlinkyPhantom), 145316316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_BlinkyPhantom_h_4105085925(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_BlinkyPhantom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_BlinkyPhantom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
