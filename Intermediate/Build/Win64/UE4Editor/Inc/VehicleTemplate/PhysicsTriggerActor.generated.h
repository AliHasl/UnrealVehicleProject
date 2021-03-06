// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FHitResult;
#ifdef VEHICLETEMPLATE_PhysicsTriggerActor_generated_h
#error "PhysicsTriggerActor.generated.h already included, missing '#pragma once' in PhysicsTriggerActor.h"
#endif
#define VEHICLETEMPLATE_PhysicsTriggerActor_generated_h

#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SelfActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsTriggerActor(); \
	friend VEHICLETEMPLATE_API class UClass* Z_Construct_UClass_APhysicsTriggerActor(); \
public: \
	DECLARE_CLASS(APhysicsTriggerActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(APhysicsTriggerActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsTriggerActor(); \
	friend VEHICLETEMPLATE_API class UClass* Z_Construct_UClass_APhysicsTriggerActor(); \
public: \
	DECLARE_CLASS(APhysicsTriggerActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VehicleTemplate"), NO_API) \
	DECLARE_SERIALIZER(APhysicsTriggerActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsTriggerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsTriggerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsTriggerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsTriggerActor(APhysicsTriggerActor&&); \
	NO_API APhysicsTriggerActor(const APhysicsTriggerActor&); \
public:


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsTriggerActor(APhysicsTriggerActor&&); \
	NO_API APhysicsTriggerActor(const APhysicsTriggerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsTriggerActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsTriggerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsTriggerActor)


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_PRIVATE_PROPERTY_OFFSET
#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_9_PROLOG
#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_RPC_WRAPPERS \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_INCLASS \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_PRIVATE_PROPERTY_OFFSET \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_INCLASS_NO_PURE_DECLS \
	VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VehicleTemplate_04_12_2018_Source_VehicleTemplate_PhysicsTriggerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
