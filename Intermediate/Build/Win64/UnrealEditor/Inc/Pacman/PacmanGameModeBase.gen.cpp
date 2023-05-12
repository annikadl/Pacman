// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanGameModeBase() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanGameModeBase_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APacmanGameModeBase::StaticRegisterNativesAPacmanGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanGameModeBase);
	UClass* Z_Construct_UClass_APacmanGameModeBase_NoRegister()
	{
		return APacmanGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacmanGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InitialLives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalPointsValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalPointsValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialPointsValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialPointsValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EatTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EatTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PacmanGameModeBase.h" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_TotalScore_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//Current Total Score\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Current Total Score" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, TotalScore), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_TotalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_TotalScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_Lives_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//Current Lives\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Current Lives" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_Lives = { "Lives", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, Lives), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_Lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_Lives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_InitialLives_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "//Initial Lives on Level\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Initial Lives on Level" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_InitialLives = { "InitialLives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, InitialLives), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_InitialLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_InitialLives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_NormalPointsValue_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Value added to score when one normal point is eaten\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Value added to score when one normal point is eaten" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_NormalPointsValue = { "NormalPointsValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, NormalPointsValue), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_NormalPointsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_NormalPointsValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_SpecialPointsValue_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Value added to score when one special point is eaten\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Value added to score when one special point is eaten" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_SpecialPointsValue = { "SpecialPointsValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, SpecialPointsValue), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_SpecialPointsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_SpecialPointsValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_EatTimeSeconds_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Seconds to be on \"Eat Mode\" for pacman\n" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ToolTip", "Seconds to be on \"Eat Mode\" for pacman" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_EatTimeSeconds = { "EatTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanGameModeBase, EatTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_EatTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_EatTimeSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_TotalScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_Lives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_InitialLives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_NormalPointsValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_SpecialPointsValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanGameModeBase_Statics::NewProp_EatTimeSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanGameModeBase_Statics::ClassParams = {
		&APacmanGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APacmanGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APacmanGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanGameModeBase.OuterSingleton, Z_Construct_UClass_APacmanGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanGameModeBase.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APacmanGameModeBase>()
	{
		return APacmanGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanGameModeBase);
	struct Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_PacmanGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_PacmanGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanGameModeBase, APacmanGameModeBase::StaticClass, TEXT("APacmanGameModeBase"), &Z_Registration_Info_UClass_APacmanGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanGameModeBase), 3080700422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_PacmanGameModeBase_h_2494527955(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_PacmanGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacmanUE5_main_Source_Pacman_PacmanGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
