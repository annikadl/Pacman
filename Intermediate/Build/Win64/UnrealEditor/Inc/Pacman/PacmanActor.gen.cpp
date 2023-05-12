// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/PacmanActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanActor() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanActor_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EGridPositions();
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EState();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APacmanActor::execOnSpeedBoostTimerExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpeedBoostTimerExpired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacmanActor::execOnOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APacmanActor::StaticRegisterNativesAPacmanActor()
	{
		UClass* Class = APacmanActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &APacmanActor::execOnOverlap },
			{ "OnSpeedBoostTimerExpired", &APacmanActor::execOnSpeedBoostTimerExpired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APacmanActor_OnOverlap_Statics
	{
		struct PacmanActor_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PacmanActor_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PacmanActor_eventOnOverlap_Parms), &Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanActor_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// quando un actor overlappa\n" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
		{ "ToolTip", "quando un actor overlappa" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::PacmanActor_eventOnOverlap_Parms), Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Pacman mangia cibo speciale\n" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
		{ "ToolTip", "Pacman mangia cibo speciale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanActor, nullptr, "OnSpeedBoostTimerExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APacmanActor);
	UClass* Z_Construct_UClass_APacmanActor_NoRegister()
	{
		return APacmanActor::StaticClass();
	}
	struct Z_Construct_UClass_APacmanActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftTeleport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftTeleport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftTeleport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightTeleport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightTeleport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RightTeleport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBoostDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBoostDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhantomStateBeforeFrightened_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhantomStateBeforeFrightened_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhantomStateBeforeFrightened;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhantomStateBeforeDead_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhantomStateBeforeDead_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhantomStateBeforeDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eat_ghost_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_eat_ghost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APacmanActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APacmanActor_OnOverlap, "OnOverlap" }, // 3859111192
		{ &Z_Construct_UFunction_APacmanActor_OnSpeedBoostTimerExpired, "OnSpeedBoostTimerExpired" }, // 2411152257
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PacmanActor.h" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, PlayerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// Velocit?\n" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
		{ "ToolTip", "Velocit?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, Speed), METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// Moltiplicatore velocit?\n" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
		{ "ToolTip", "Moltiplicatore velocit?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, SpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_ThresholdRadius_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// Vicini o no destinazione\n" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
		{ "ToolTip", "Vicini o no destinazione" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_ThresholdRadius = { "ThresholdRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, ThresholdRadius), METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_ThresholdRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_ThresholdRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport = { "LeftTeleport", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, LeftTeleport), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport_MetaData)) }; // 1923887579
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport = { "RightTeleport", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, RightTeleport), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport_MetaData)) }; // 1923887579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedBoostDuration_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedBoostDuration = { "SpeedBoostDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, SpeedBoostDuration), METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedBoostDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedBoostDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_DeadDuration_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_DeadDuration = { "DeadDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, DeadDuration), METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_DeadDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_DeadDuration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened = { "PhantomStateBeforeFrightened", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, PhantomStateBeforeFrightened), Z_Construct_UEnum_Pacman_EState, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened_MetaData)) }; // 3086332444
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead = { "PhantomStateBeforeDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, PhantomStateBeforeDead), Z_Construct_UEnum_Pacman_EState, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead_MetaData)) }; // 3086332444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanActor_Statics::NewProp_eat_ghost_MetaData[] = {
		{ "Category", "PacmanActor" },
		{ "ModuleRelativePath", "Public/PacmanActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APacmanActor_Statics::NewProp_eat_ghost = { "eat_ghost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APacmanActor, eat_ghost), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::NewProp_eat_ghost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::NewProp_eat_ghost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PlayerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_ThresholdRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_LeftTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_RightTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_SpeedBoostDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_DeadDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeFrightened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_PhantomStateBeforeDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanActor_Statics::NewProp_eat_ghost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APacmanActor_Statics::ClassParams = {
		&APacmanActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APacmanActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanActor()
	{
		if (!Z_Registration_Info_UClass_APacmanActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APacmanActor.OuterSingleton, Z_Construct_UClass_APacmanActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APacmanActor.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APacmanActor>()
	{
		return APacmanActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanActor);
	struct Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_PacmanActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_PacmanActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APacmanActor, APacmanActor::StaticClass, TEXT("APacmanActor"), &Z_Registration_Info_UClass_APacmanActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APacmanActor), 2199245184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_PacmanActor_h_1346423899(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_PacmanActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pacman2_Source_Pacman_Public_PacmanActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
