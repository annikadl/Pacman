// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/PacmanPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanPawn() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APacmanPawn::StaticRegisterNativesAPacmanPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanPawn);
	UClass* Z_Construct_UClass_APacmanPawn_NoRegister()
	{
		return APacmanPawn::StaticClass();
	}
	struct Z_Construct_UClass_APacmanPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*  Pawn class, only send inputs to the pacman actor\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacmanPawn.h" },
		{ "ModuleRelativePath", "Public/PacmanPawn.h" },
		{ "ToolTip", "*  Pawn class, only send inputs to the pacman actor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanPawn_Statics::ClassParams = {
		&APacmanPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanPawn()
	{
		if (!Z_Registration_Info_UClass_APacmanPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanPawn.OuterSingleton, Z_Construct_UClass_APacmanPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanPawn.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APacmanPawn>()
	{
		return APacmanPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanPawn);
	struct Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_PacmanPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_PacmanPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanPawn, APacmanPawn::StaticClass, TEXT("APacmanPawn"), &Z_Registration_Info_UClass_APacmanPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanPawn), 2778488218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_PacmanPawn_h_662342472(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_PacmanPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_PacmanPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
