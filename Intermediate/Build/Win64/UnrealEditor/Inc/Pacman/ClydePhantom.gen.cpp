// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/ClydePhantom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClydePhantom() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_AClydePhantom_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_AClydePhantom();
	PACMAN_API UClass* Z_Construct_UClass_APhantom();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void AClydePhantom::StaticRegisterNativesAClydePhantom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClydePhantom);
	UClass* Z_Construct_UClass_AClydePhantom_NoRegister()
	{
		return AClydePhantom::StaticClass();
	}
	struct Z_Construct_UClass_AClydePhantom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClydePhantom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhantom,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClydePhantom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClydePhantom.h" },
		{ "ModuleRelativePath", "Public/ClydePhantom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClydePhantom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClydePhantom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClydePhantom_Statics::ClassParams = {
		&AClydePhantom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AClydePhantom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClydePhantom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClydePhantom()
	{
		if (!Z_Registration_Info_UClass_AClydePhantom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClydePhantom.OuterSingleton, Z_Construct_UClass_AClydePhantom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClydePhantom.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<AClydePhantom>()
	{
		return AClydePhantom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClydePhantom);
	struct Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_ClydePhantom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_ClydePhantom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClydePhantom, AClydePhantom::StaticClass, TEXT("AClydePhantom"), &Z_Registration_Info_UClass_AClydePhantom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClydePhantom), 642806357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_ClydePhantom_h_861669779(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_ClydePhantom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_ClydePhantom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
