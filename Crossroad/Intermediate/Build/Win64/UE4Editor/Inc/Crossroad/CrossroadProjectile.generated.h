// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CROSSROAD_CrossroadProjectile_generated_h
#error "CrossroadProjectile.generated.h already included, missing '#pragma once' in CrossroadProjectile.h"
#endif
#define CROSSROAD_CrossroadProjectile_generated_h

#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_SPARSE_DATA
#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossroadProjectile(); \
	friend struct Z_Construct_UClass_ACrossroadProjectile_Statics; \
public: \
	DECLARE_CLASS(ACrossroadProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(ACrossroadProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACrossroadProjectile(); \
	friend struct Z_Construct_UClass_ACrossroadProjectile_Statics; \
public: \
	DECLARE_CLASS(ACrossroadProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(ACrossroadProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossroadProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossroadProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossroadProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossroadProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossroadProjectile(ACrossroadProjectile&&); \
	NO_API ACrossroadProjectile(const ACrossroadProjectile&); \
public:


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossroadProjectile(ACrossroadProjectile&&); \
	NO_API ACrossroadProjectile(const ACrossroadProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossroadProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossroadProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrossroadProjectile)


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACrossroadProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACrossroadProjectile, ProjectileMovement); }


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_9_PROLOG
#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_SPARSE_DATA \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_RPC_WRAPPERS \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_INCLASS \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Crossroad_Source_Crossroad_CrossroadProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_SPARSE_DATA \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_CrossroadProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class ACrossroadProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Crossroad_Source_Crossroad_CrossroadProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
