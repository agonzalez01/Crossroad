// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_MyDude_generated_h
#error "MyDude.generated.h already included, missing '#pragma once' in MyDude.h"
#endif
#define CROSSROAD_MyDude_generated_h

#define Crossroad_Source_Crossroad_MyDude_h_15_SPARSE_DATA
#define Crossroad_Source_Crossroad_MyDude_h_15_RPC_WRAPPERS \
	virtual void SetAllVariables_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_isShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isShooting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingBack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_canMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_canMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJustSetThem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JustSetThem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllVariables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllVariables_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecoilTimelineProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecoilTimelineProgress(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTImelineProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TImelineProgress(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Crossroad_Source_Crossroad_MyDude_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetAllVariables_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_isShooting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isShooting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isAiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isAiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_movingBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_movingBack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_canMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_canMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_isMoving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_isMoving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJustSetThem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JustSetThem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllVariables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllVariables_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecoilTimelineProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecoilTimelineProgress(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTImelineProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TImelineProgress(Z_Param_value); \
		P_NATIVE_END; \
	}


#define Crossroad_Source_Crossroad_MyDude_h_15_EVENT_PARMS
#define Crossroad_Source_Crossroad_MyDude_h_15_CALLBACK_WRAPPERS
#define Crossroad_Source_Crossroad_MyDude_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyDude(); \
	friend struct Z_Construct_UClass_AMyDude_Statics; \
public: \
	DECLARE_CLASS(AMyDude, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(AMyDude)


#define Crossroad_Source_Crossroad_MyDude_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyDude(); \
	friend struct Z_Construct_UClass_AMyDude_Statics; \
public: \
	DECLARE_CLASS(AMyDude, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(AMyDude)


#define Crossroad_Source_Crossroad_MyDude_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyDude(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyDude) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDude); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDude); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDude(AMyDude&&); \
	NO_API AMyDude(const AMyDude&); \
public:


#define Crossroad_Source_Crossroad_MyDude_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyDude(AMyDude&&); \
	NO_API AMyDude(const AMyDude&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyDude); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyDude); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyDude)


#define Crossroad_Source_Crossroad_MyDude_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DudeMesh() { return STRUCT_OFFSET(AMyDude, DudeMesh); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMyDude, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraArm() { return STRUCT_OFFSET(AMyDude, CameraArm); } \
	FORCEINLINE static uint32 __PPO__SocketLocation() { return STRUCT_OFFSET(AMyDude, SocketLocation); } \
	FORCEINLINE static uint32 __PPO__CameraTimeline() { return STRUCT_OFFSET(AMyDude, CameraTimeline); } \
	FORCEINLINE static uint32 __PPO__RecoilTimeline() { return STRUCT_OFFSET(AMyDude, RecoilTimeline); } \
	FORCEINLINE static uint32 __PPO__SidewaysTimeline() { return STRUCT_OFFSET(AMyDude, SidewaysTimeline); }


#define Crossroad_Source_Crossroad_MyDude_h_12_PROLOG \
	Crossroad_Source_Crossroad_MyDude_h_15_EVENT_PARMS


#define Crossroad_Source_Crossroad_MyDude_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_MyDude_h_15_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_MyDude_h_15_SPARSE_DATA \
	Crossroad_Source_Crossroad_MyDude_h_15_RPC_WRAPPERS \
	Crossroad_Source_Crossroad_MyDude_h_15_CALLBACK_WRAPPERS \
	Crossroad_Source_Crossroad_MyDude_h_15_INCLASS \
	Crossroad_Source_Crossroad_MyDude_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Crossroad_Source_Crossroad_MyDude_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_MyDude_h_15_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_MyDude_h_15_SPARSE_DATA \
	Crossroad_Source_Crossroad_MyDude_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_MyDude_h_15_CALLBACK_WRAPPERS \
	Crossroad_Source_Crossroad_MyDude_h_15_INCLASS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_MyDude_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class AMyDude>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Crossroad_Source_Crossroad_MyDude_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
