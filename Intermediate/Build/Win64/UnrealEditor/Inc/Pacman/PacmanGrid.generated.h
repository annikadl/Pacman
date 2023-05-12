// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APacmanActor;
#ifdef PACMAN_PacmanGrid_generated_h
#error "PacmanGrid.generated.h already included, missing '#pragma once' in PacmanGrid.h"
#endif
#define PACMAN_PacmanGrid_generated_h

#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileSelection_Statics; \
	PACMAN_API static class UScriptStruct* StaticStruct();


template<> PACMAN_API UScriptStruct* StaticStruct<struct FTileSelection>();

#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_SPARSE_DATA
#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPacman);


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPacman);


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrid(); \
	friend struct Z_Construct_UClass_AGrid_Statics; \
public: \
	DECLARE_CLASS(AGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(AGrid)


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_INCLASS \
private: \
	static void StaticRegisterNativesAGrid(); \
	friend struct Z_Construct_UClass_AGrid_Statics; \
public: \
	DECLARE_CLASS(AGrid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(AGrid)


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrid(AGrid&&); \
	NO_API AGrid(const AGrid&); \
public:


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrid(AGrid&&); \
	NO_API AGrid(const AGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrid)


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_72_PROLOG
#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_SPARSE_DATA \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_RPC_WRAPPERS \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_INCLASS \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_SPARSE_DATA \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_INCLASS_NO_PURE_DECLS \
	FID_Annika_Source_Pacman_Public_PacmanGrid_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class AGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Annika_Source_Pacman_Public_PacmanGrid_h


#define FOREACH_ENUM_EGRIDPOSITIONS(op) \
	op(EGridPositions::TopLeft) \
	op(EGridPositions::TopRight) \
	op(EGridPositions::BottomLeft) \
	op(EGridPositions::BottomRight) \
	op(EGridPositions::PlayerPosition) \
	op(EGridPositions::Middle) \
	op(EGridPositions::LeftTeleport) \
	op(EGridPositions::RightTeleport) 

enum class EGridPositions : uint8;
template<> PACMAN_API UEnum* StaticEnum<EGridPositions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
