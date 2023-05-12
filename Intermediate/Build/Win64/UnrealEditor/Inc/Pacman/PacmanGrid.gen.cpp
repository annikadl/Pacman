// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/PacmanGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanGrid() {}
// Cross Module References
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EGridPositions();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UScriptStruct* Z_Construct_UScriptStruct_FTileSelection();
	PACMAN_API UClass* Z_Construct_UClass_AGrid_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_AGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PACMAN_API UClass* Z_Construct_UClass_APacmanActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APoint_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APhantom_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridPositions;
	static UEnum* EGridPositions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGridPositions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGridPositions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pacman_EGridPositions, Z_Construct_UPackage__Script_Pacman(), TEXT("EGridPositions"));
		}
		return Z_Registration_Info_UEnum_EGridPositions.OuterSingleton;
	}
	template<> PACMAN_API UEnum* StaticEnum<EGridPositions>()
	{
		return EGridPositions_StaticEnum();
	}
	struct Z_Construct_UEnum_Pacman_EGridPositions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enumerators[] = {
		{ "EGridPositions::TopLeft", (int64)EGridPositions::TopLeft },
		{ "EGridPositions::TopRight", (int64)EGridPositions::TopRight },
		{ "EGridPositions::BottomLeft", (int64)EGridPositions::BottomLeft },
		{ "EGridPositions::BottomRight", (int64)EGridPositions::BottomRight },
		{ "EGridPositions::PlayerPosition", (int64)EGridPositions::PlayerPosition },
		{ "EGridPositions::Middle", (int64)EGridPositions::Middle },
		{ "EGridPositions::LeftTeleport", (int64)EGridPositions::LeftTeleport },
		{ "EGridPositions::RightTeleport", (int64)EGridPositions::RightTeleport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomLeft.Name", "EGridPositions::BottomLeft" },
		{ "BottomRight.Name", "EGridPositions::BottomRight" },
		{ "Comment", "// Posizioni speciali\n" },
		{ "LeftTeleport.Name", "EGridPositions::LeftTeleport" },
		{ "Middle.Name", "EGridPositions::Middle" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
		{ "PlayerPosition.Name", "EGridPositions::PlayerPosition" },
		{ "RightTeleport.Name", "EGridPositions::RightTeleport" },
		{ "ToolTip", "Posizioni speciali" },
		{ "TopLeft.Name", "EGridPositions::TopLeft" },
		{ "TopRight.Name", "EGridPositions::TopRight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pacman_EGridPositions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Pacman,
		nullptr,
		"EGridPositions",
		"EGridPositions",
		Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EGridPositions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Pacman_EGridPositions()
	{
		if (!Z_Registration_Info_UEnum_EGridPositions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridPositions.InnerSingleton, Z_Construct_UEnum_Pacman_EGridPositions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGridPositions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileSelection;
class UScriptStruct* FTileSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileSelection, Z_Construct_UPackage__Script_Pacman(), TEXT("TileSelection"));
	}
	return Z_Registration_Info_UScriptStruct_TileSelection.OuterSingleton;
}
template<> PACMAN_API UScriptStruct* StaticStruct<FTileSelection>()
{
	return FTileSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
		nullptr,
		&NewStructOps,
		"TileSelection",
		sizeof(FTileSelection),
		alignof(FTileSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_TileSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileSelection.InnerSingleton, Z_Construct_UScriptStruct_FTileSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileSelection.InnerSingleton;
	}
	DEFINE_FUNCTION(AGrid::execGetPacman)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APacmanActor**)Z_Param__Result=P_THIS->GetPacman();
		P_NATIVE_END;
	}
	void AGrid::StaticRegisterNativesAGrid()
	{
		UClass* Class = AGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPacman", &AGrid::execGetPacman },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrid_GetPacman_Statics
	{
		struct Grid_eventGetPacman_Parms
		{
			APacmanActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGrid_GetPacman_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Grid_eventGetPacman_Parms, ReturnValue), Z_Construct_UClass_APacmanActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrid_GetPacman_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrid_GetPacman_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrid_GetPacman_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrid_GetPacman_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrid, nullptr, "GetPacman", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrid_GetPacman_Statics::Grid_eventGetPacman_Parms), Z_Construct_UFunction_AGrid_GetPacman_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_GetPacman_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrid_GetPacman_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrid_GetPacman_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrid_GetPacman()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrid_GetPacman_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrid);
	UClass* Z_Construct_UClass_AGrid_NoRegister()
	{
		return AGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WallClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PointClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacmanActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PacmanActorClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhantomClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhantomClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhantomClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridScale_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GridScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrid_GetPacman, "GetPacman" }, // 1859578810
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PacmanGrid.h" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_WallClass_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// cose da spawnare\n" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
		{ "ToolTip", "cose da spawnare" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_WallClass = { "WallClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, WallClass), Z_Construct_UClass_AStaticMeshActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_WallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_WallClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_PointClass_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_PointClass = { "PointClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, PointClass), Z_Construct_UClass_APoint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_PointClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_PointClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_PacmanActorClass_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_PacmanActorClass = { "PacmanActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, PacmanActorClass), Z_Construct_UClass_APacmanActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_PacmanActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_PacmanActorClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses_Inner = { "PhantomClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APhantom_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses = { "PhantomClasses", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, PhantomClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrid_Statics::NewProp_GridScale_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanGrid.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGrid_Statics::NewProp_GridScale = { "GridScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrid, GridScale), METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::NewProp_GridScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::NewProp_GridScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_WallClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_PointClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_PacmanActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_PhantomClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrid_Statics::NewProp_GridScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrid_Statics::ClassParams = {
		&AGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrid()
	{
		if (!Z_Registration_Info_UClass_AGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrid.OuterSingleton, Z_Construct_UClass_AGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrid.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<AGrid>()
	{
		return AGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrid);
	struct Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::EnumInfo[] = {
		{ EGridPositions_StaticEnum, TEXT("EGridPositions"), &Z_Registration_Info_UEnum_EGridPositions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1923887579U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ScriptStructInfo[] = {
		{ FTileSelection::StaticStruct, Z_Construct_UScriptStruct_FTileSelection_Statics::NewStructOps, TEXT("TileSelection"), &Z_Registration_Info_UScriptStruct_TileSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileSelection), 364150595U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrid, AGrid::StaticClass, TEXT("AGrid"), &Z_Registration_Info_UClass_AGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrid), 604944623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_3050869251(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_PacmanGrid_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
