// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PACMAN_Phantom_generated_h
#error "Phantom.generated.h already included, missing '#pragma once' in Phantom.h"
#endif
#define PACMAN_Phantom_generated_h

#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_SPARSE_DATA
#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execOnScatterTimerExpired);


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execOnScatterTimerExpired);


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhantom(); \
	friend struct Z_Construct_UClass_APhantom_Statics; \
public: \
	DECLARE_CLASS(APhantom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APhantom)


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAPhantom(); \
	friend struct Z_Construct_UClass_APhantom_Statics; \
public: \
	DECLARE_CLASS(APhantom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APhantom)


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhantom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhantom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantom(APhantom&&); \
	NO_API APhantom(const APhantom&); \
public:


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhantom(APhantom&&); \
	NO_API APhantom(const APhantom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhantom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhantom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhantom)


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_24_PROLOG
#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_SPARSE_DATA \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_RPC_WRAPPERS \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_INCLASS \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_SPARSE_DATA \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_INCLASS_NO_PURE_DECLS \
	FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APhantom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PacmanUE5_main_Source_Pacman_Public_Phantom_h


#define FOREACH_ENUM_ESTATE(op) \
	op(EState::Chase) \
	op(EState::Scatter) \
	op(EState::Frightened) \
	op(EState::Dead) 

enum class EState : uint8;
template<> PACMAN_API UEnum* StaticEnum<EState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
