// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/Point.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoint() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APoint_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void APoint::StaticRegisterNativesAPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoint);
	UClass* Z_Construct_UClass_APoint_NoRegister()
	{
		return APoint::StaticClass();
	}
	struct Z_Construct_UClass_APoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpecial_MetaData[];
#endif
		static void NewProp_bIsSpecial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpecial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pacman_food_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pacman_food;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n Points in the world to increase score\n*/" },
		{ "IncludePath", "Point.h" },
		{ "ModuleRelativePath", "Public/Point.h" },
		{ "ToolTip", "Points in the world to increase score" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_PointMesh_MetaData[] = {
		{ "Category", "Pacman" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_PointMesh = { "PointMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, PointMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_PointMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_PointMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "//Special points give more points and ability to eat phantoms\n" },
		{ "ModuleRelativePath", "Public/Point.h" },
		{ "ToolTip", "Special points give more points and ability to eat phantoms" },
	};
#endif
	void Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial_SetBit(void* Obj)
	{
		((APoint*)Obj)->bIsSpecial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial = { "bIsSpecial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APoint), &Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial_SetBit, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_SpecialScale_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// scale used when point is special\n" },
		{ "ModuleRelativePath", "Public/Point.h" },
		{ "ToolTip", "scale used when point is special" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_SpecialScale = { "SpecialScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, SpecialScale), METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_SpecialScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_SpecialScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoint_Statics::NewProp_pacman_food_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/Point.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoint_Statics::NewProp_pacman_food = { "pacman_food", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APoint, pacman_food), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::NewProp_pacman_food_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::NewProp_pacman_food_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_PointMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_bIsSpecial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_SpecialScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoint_Statics::NewProp_pacman_food,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APoint_Statics::ClassParams = {
		&APoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoint()
	{
		if (!Z_Registration_Info_UClass_APoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoint.OuterSingleton, Z_Construct_UClass_APoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APoint.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APoint>()
	{
		return APoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoint);
	struct Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_Point_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_Point_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APoint, APoint::StaticClass, TEXT("APoint"), &Z_Registration_Info_UClass_APoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoint), 1152644267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_Point_h_3259285689(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_Point_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PacmanConsegna_Source_Pacman_Public_Point_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
