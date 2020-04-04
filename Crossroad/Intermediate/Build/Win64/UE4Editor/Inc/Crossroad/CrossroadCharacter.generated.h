// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CROSSROAD_CrossroadCharacter_generated_h
#error "CrossroadCharacter.generated.h already included, missing '#pragma once' in CrossroadCharacter.h"
#endif
#define CROSSROAD_CrossroadCharacter_generated_h

#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_SPARSE_DATA
#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_RPC_WRAPPERS
#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossroadCharacter(); \
	friend struct Z_Construct_UClass_ACrossroadCharacter_Statics; \
public: \
	DECLARE_CLASS(ACrossroadCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(ACrossroadCharacter)


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACrossroadCharacter(); \
	friend struct Z_Construct_UClass_ACrossroadCharacter_Statics; \
public: \
	DECLARE_CLASS(ACrossroadCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Crossroad"), NO_API) \
	DECLARE_SERIALIZER(ACrossroadCharacter)


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossroadCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossroadCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossroadCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossroadCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossroadCharacter(ACrossroadCharacter&&); \
	NO_API ACrossroadCharacter(const ACrossroadCharacter&); \
public:


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrossroadCharacter(ACrossroadCharacter&&); \
	NO_API ACrossroadCharacter(const ACrossroadCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossroadCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossroadCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrossroadCharacter)


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ACrossroadCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ACrossroadCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ACrossroadCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ACrossroadCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ACrossroadCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ACrossroadCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ACrossroadCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ACrossroadCharacter, L_MotionController); }


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_11_PROLOG
#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_SPARSE_DATA \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_RPC_WRAPPERS \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_INCLASS \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Crossroad_Source_Crossroad_CrossroadCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_SPARSE_DATA \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Crossroad_Source_Crossroad_CrossroadCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CROSSROAD_API UClass* StaticClass<class ACrossroadCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Crossroad_Source_Crossroad_CrossroadCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
