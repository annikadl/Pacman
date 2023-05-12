// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/InkyPhantom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkyPhantom() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_AInkyPhantom_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_AInkyPhantom();
	PACMAN_API UClass* Z_Construct_UClass_APhantom();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void AInkyPhantom::StaticRegisterNativesAInkyPhantom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInkyPhantom);
	UClass* Z_Construct_UClass_AInkyPhantom_NoRegister()
	{
		return AInkyPhantom::StaticClass();
	}
	struct Z_Construct_UClass_AInkyPhantom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInkyPhantom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhantom,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInkyPhantom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InkyPhantom.h" },
		{ "ModuleRelativePath", "Public/InkyPhantom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInkyPhantom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInkyPhantom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInkyPhantom_Statics::ClassParams = {
		&AInkyPhantom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInkyPhantom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInkyPhantom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInkyPhantom()
	{
		if (!Z_Registration_Info_UClass_AInkyPhantom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInkyPhantom.OuterSingleton, Z_Construct_UClass_AInkyPhantom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInkyPhantom.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<AInkyPhantom>()
	{
		return AInkyPhantom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInkyPhantom);
	struct Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_InkyPhantom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_InkyPhantom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInkyPhantom, AInkyPhantom::StaticClass, TEXT("AInkyPhantom"), &Z_Registration_Info_UClass_AInkyPhantom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInkyPhantom), 177607795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_InkyPhantom_h_1284238666(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_InkyPhantom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_InkyPhantom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
