// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/PinkyPhantom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePinkyPhantom() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APinkyPhantom_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APinkyPhantom();
	PACMAN_API UClass* Z_Construct_UClass_APhantom();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APinkyPhantom::StaticRegisterNativesAPinkyPhantom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APinkyPhantom);
	UClass* Z_Construct_UClass_APinkyPhantom_NoRegister()
	{
		return APinkyPhantom::StaticClass();
	}
	struct Z_Construct_UClass_APinkyPhantom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APinkyPhantom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhantom,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APinkyPhantom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PinkyPhantom.h" },
		{ "ModuleRelativePath", "Public/PinkyPhantom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APinkyPhantom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APinkyPhantom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APinkyPhantom_Statics::ClassParams = {
		&APinkyPhantom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APinkyPhantom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APinkyPhantom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APinkyPhantom()
	{
		if (!Z_Registration_Info_UClass_APinkyPhantom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APinkyPhantom.OuterSingleton, Z_Construct_UClass_APinkyPhantom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APinkyPhantom.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APinkyPhantom>()
	{
		return APinkyPhantom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APinkyPhantom);
	struct Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_Public_PinkyPhantom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_Public_PinkyPhantom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APinkyPhantom, APinkyPhantom::StaticClass, TEXT("APinkyPhantom"), &Z_Registration_Info_UClass_APinkyPhantom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APinkyPhantom), 797002574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_Public_PinkyPhantom_h_2299806466(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_Public_PinkyPhantom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_Public_PinkyPhantom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
