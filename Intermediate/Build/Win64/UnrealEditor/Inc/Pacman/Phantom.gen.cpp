// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Public/Phantom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantom() {}
// Cross Module References
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EState();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UClass* Z_Construct_UClass_APhantom_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APhantom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EGridPositions();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EState;
	static UEnum* EState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pacman_EState, Z_Construct_UPackage__Script_Pacman(), TEXT("EState"));
		}
		return Z_Registration_Info_UEnum_EState.OuterSingleton;
	}
	template<> PACMAN_API UEnum* StaticEnum<EState>()
	{
		return EState_StaticEnum();
	}
	struct Z_Construct_UEnum_Pacman_EState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Pacman_EState_Statics::Enumerators[] = {
		{ "EState::Chase", (int64)EState::Chase },
		{ "EState::Scatter", (int64)EState::Scatter },
		{ "EState::Frightened", (int64)EState::Frightened },
		{ "EState::Dead", (int64)EState::Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Pacman_EState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chase.Name", "EState::Chase" },
		{ "Dead.Name", "EState::Dead" },
		{ "Frightened.Name", "EState::Frightened" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "Scatter.Name", "EState::Scatter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pacman_EState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Pacman,
		nullptr,
		"EState",
		"EState",
		Z_Construct_UEnum_Pacman_EState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Pacman_EState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Pacman_EState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Pacman_EState()
	{
		if (!Z_Registration_Info_UEnum_EState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EState.InnerSingleton, Z_Construct_UEnum_Pacman_EState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EState.InnerSingleton;
	}
	DEFINE_FUNCTION(APhantom::execOnOverlap)
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
	DEFINE_FUNCTION(APhantom::execOnScatterTimerExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScatterTimerExpired();
		P_NATIVE_END;
	}
	void APhantom::StaticRegisterNativesAPhantom()
	{
		UClass* Class = APhantom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &APhantom::execOnOverlap },
			{ "OnScatterTimerExpired", &APhantom::execOnScatterTimerExpired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhantom_OnOverlap_Statics
	{
		struct Phantom_eventOnOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Phantom_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Phantom_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Phantom_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Phantom_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Phantom_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Phantom_eventOnOverlap_Parms), &Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Phantom_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantom_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantom_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantom_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when a actor overlaps something\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Called when a actor overlaps something" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantom_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantom, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APhantom_OnOverlap_Statics::Phantom_eventOnOverlap_Parms), Z_Construct_UFunction_APhantom_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantom_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantom_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantom_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//functions and variables of Scatter-Chase alternation\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "functions and variables of Scatter-Chase alternation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantom, nullptr, "OnScatterTimerExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantom_OnScatterTimerExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhantom_OnScatterTimerExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhantom);
	UClass* Z_Construct_UClass_APhantom_NoRegister()
	{
		return APhantom::StaticClass();
	}
	struct Z_Construct_UClass_APhantom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhantomMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhantomMesh;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatterDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScatterDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScatterPosition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScatterPosition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScatterPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GhostsHouse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostsHouse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GhostsHouse;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minuslife_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_minuslife;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhantom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhantom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhantom_OnOverlap, "OnOverlap" }, // 190220181
		{ &Z_Construct_UFunction_APhantom_OnScatterTimerExpired, "OnScatterTimerExpired" }, // 4163666270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Phantom.h" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_PhantomMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_PhantomMesh = { "PhantomMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, PhantomMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_PhantomMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_PhantomMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "// Base Speed of the player\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Base Speed of the player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, Speed), METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "//Multiplier over the speed from 0-1 (0% - 100%)\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Multiplier over the speed from 0-1 (0% - 100%)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, SpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_SpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_SpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_ScatterDuration_MetaData[] = {
		{ "Category", "Phantom" },
		{ "Comment", "//UFUNCTION()\n//void OnChaseTimerExpired();\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnChaseTimerExpired();" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_ScatterDuration = { "ScatterDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, ScatterDuration), METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_ScatterDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_ScatterDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_ChaseDuration_MetaData[] = {
		{ "Category", "Phantom" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, ChaseDuration), METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_ChaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_ChaseDuration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "//Position to go when Scatter State\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Position to go when Scatter State" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition = { "ScatterPosition", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, ScatterPosition), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition_MetaData)) }; // 1923887579
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "//Position to go when Frightened State (ghosts house) and when dead\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Position to go when Frightened State (ghosts house) and when dead" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse = { "GhostsHouse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, GhostsHouse), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse_MetaData)) }; // 1923887579
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport_MetaData[] = {
		{ "Category", "Pacman" },
		{ "Comment", "//Teleport positions\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Teleport positions" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport = { "LeftTeleport", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, LeftTeleport), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport_MetaData)) }; // 1923887579
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport_MetaData[] = {
		{ "Category", "Pacman" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport = { "RightTeleport", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, RightTeleport), Z_Construct_UEnum_Pacman_EGridPositions, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport_MetaData)) }; // 1923887579
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Phantom" },
		{ "Comment", "//Current Phantom State\n" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
		{ "ToolTip", "Current Phantom State" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, CurrentState), Z_Construct_UEnum_Pacman_EState, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState_MetaData)) }; // 3086332444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantom_Statics::NewProp_minuslife_MetaData[] = {
		{ "Category", "Phantom" },
		{ "ModuleRelativePath", "Public/Phantom.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantom_Statics::NewProp_minuslife = { "minuslife", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantom, minuslife), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::NewProp_minuslife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::NewProp_minuslife_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhantom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_PhantomMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_SpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_ScatterDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_ChaseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_ScatterPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_GhostsHouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_LeftTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_RightTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantom_Statics::NewProp_minuslife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhantom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhantom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhantom_Statics::ClassParams = {
		&APhantom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhantom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhantom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhantom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhantom()
	{
		if (!Z_Registration_Info_UClass_APhantom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhantom.OuterSingleton, Z_Construct_UClass_APhantom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhantom.OuterSingleton;
	}
	template<> PACMAN_API UClass* StaticClass<APhantom>()
	{
		return APhantom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantom);
	struct Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::EnumInfo[] = {
		{ EState_StaticEnum, TEXT("EState"), &Z_Registration_Info_UEnum_EState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3086332444U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhantom, APhantom::StaticClass, TEXT("APhantom"), &Z_Registration_Info_UClass_APhantom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhantom), 3786254486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_2199242593(TEXT("/Script/Pacman"),
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Annika_Source_Pacman_Public_Phantom_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
