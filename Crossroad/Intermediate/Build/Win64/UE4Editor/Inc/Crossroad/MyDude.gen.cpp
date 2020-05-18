// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossroad/MyDude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDude() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_AMyDude_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_AMyDude();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Crossroad();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_JustSetThem();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_canMove();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_isAiming();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_isMoving();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_isShooting();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingBack();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingLeft();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingRight();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_SetAllVariables();
	CROSSROAD_API UFunction* Z_Construct_UFunction_AMyDude_TImelineProgress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossroadProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMyDude_SetAllVariables = FName(TEXT("SetAllVariables"));
	void AMyDude::SetAllVariables()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyDude_SetAllVariables),NULL);
	}
	void AMyDude::StaticRegisterNativesAMyDude()
	{
		UClass* Class = AMyDude::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JustSetThem", &AMyDude::execJustSetThem },
			{ "OnRep_canMove", &AMyDude::execOnRep_canMove },
			{ "OnRep_isAiming", &AMyDude::execOnRep_isAiming },
			{ "OnRep_isMoving", &AMyDude::execOnRep_isMoving },
			{ "OnRep_isShooting", &AMyDude::execOnRep_isShooting },
			{ "OnRep_movingBack", &AMyDude::execOnRep_movingBack },
			{ "OnRep_movingLeft", &AMyDude::execOnRep_movingLeft },
			{ "OnRep_movingRight", &AMyDude::execOnRep_movingRight },
			{ "SetAllVariables", &AMyDude::execSetAllVariables },
			{ "TImelineProgress", &AMyDude::execTImelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyDude_JustSetThem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_JustSetThem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_JustSetThem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "JustSetThem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_JustSetThem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_JustSetThem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_JustSetThem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_JustSetThem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_canMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_canMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_canMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_isAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_isAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_isAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_isMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_isMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_isMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_isShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_isShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_isShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_movingBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_movingBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_movingLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_movingLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "OnRep_movingRight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_OnRep_movingRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_OnRep_movingRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_SetAllVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_SetAllVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_SetAllVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "SetAllVariables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_SetAllVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_SetAllVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_SetAllVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_SetAllVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyDude_TImelineProgress_Statics
	{
		struct MyDude_eventTImelineProgress_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyDude_eventTImelineProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called to bind functionality to input\n//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;\n" },
		{ "ModuleRelativePath", "MyDude.h" },
		{ "ToolTip", "Called to bind functionality to input\nvirtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyDude, nullptr, "TImelineProgress", nullptr, nullptr, sizeof(MyDude_eventTImelineProgress_Parms), Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyDude_TImelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyDude_TImelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyDude_NoRegister()
	{
		return AMyDude::StaticClass();
	}
	struct Z_Construct_UClass_AMyDude_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateBro_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotateBro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isADS_MetaData[];
#endif
		static void NewProp_isADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isShooting_MetaData[];
#endif
		static void NewProp_isShooting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShooting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAiming_MetaData[];
#endif
		static void NewProp_isAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingLeft_MetaData[];
#endif
		static void NewProp_movingLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_movingLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingRight_MetaData[];
#endif
		static void NewProp_movingRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_movingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingBack_MetaData[];
#endif
		static void NewProp_movingBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_movingBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMoving_MetaData[];
#endif
		static void NewProp_isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FinalFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DudeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DudeMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDude_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Crossroad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyDude_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyDude_JustSetThem, "JustSetThem" }, // 705870107
		{ &Z_Construct_UFunction_AMyDude_OnRep_canMove, "OnRep_canMove" }, // 2076910149
		{ &Z_Construct_UFunction_AMyDude_OnRep_isAiming, "OnRep_isAiming" }, // 1127466484
		{ &Z_Construct_UFunction_AMyDude_OnRep_isMoving, "OnRep_isMoving" }, // 1964499099
		{ &Z_Construct_UFunction_AMyDude_OnRep_isShooting, "OnRep_isShooting" }, // 1307880117
		{ &Z_Construct_UFunction_AMyDude_OnRep_movingBack, "OnRep_movingBack" }, // 2382087787
		{ &Z_Construct_UFunction_AMyDude_OnRep_movingLeft, "OnRep_movingLeft" }, // 1507526461
		{ &Z_Construct_UFunction_AMyDude_OnRep_movingRight, "OnRep_movingRight" }, // 2421849301
		{ &Z_Construct_UFunction_AMyDude_SetAllVariables, "SetAllVariables" }, // 3389150455
		{ &Z_Construct_UFunction_AMyDude_TImelineProgress, "TImelineProgress" }, // 2374670512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyDude.h" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_AnimationHandler_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_AnimationHandler = { "AnimationHandler", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, AnimationHandler), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_AnimationHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_AnimationHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_ImpactParticles_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_ImpactParticles = { "ImpactParticles", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, ImpactParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_ImpactParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_ImpactParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_MuzzleParticle_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_MuzzleParticle = { "MuzzleParticle", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, MuzzleParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_MuzzleParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_MuzzleParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, FireRate), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, ProjectileClass), Z_Construct_UClass_ACrossroadProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CameraFOV), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_RotateBro_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_RotateBro = { "RotateBro", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, RotateBro), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_RotateBro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_RotateBro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_isADS_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_isADS_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->isADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_isADS = { "isADS", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_isADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_isADS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_isADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->isShooting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting = { "isShooting", "OnRep_isShooting", (EPropertyFlags)0x0010000100020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->isAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming = { "isAiming", "OnRep_isAiming", (EPropertyFlags)0x0010000100020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->movingLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft = { "movingLeft", nullptr, (EPropertyFlags)0x0010000000020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->movingRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight = { "movingRight", nullptr, (EPropertyFlags)0x0010000000020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->movingBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack = { "movingBack", nullptr, (EPropertyFlags)0x0010000000020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->canMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_canMove = { "canMove", "OnRep_canMove", (EPropertyFlags)0x0010000100020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_canMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_canMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	void Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving_SetBit(void* Obj)
	{
		((AMyDude*)Obj)->isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving = { "isMoving", "OnRep_isMoving", (EPropertyFlags)0x0010000100020025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyDude), &Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_FinalFOV_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_FinalFOV = { "FinalFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, FinalFOV), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_FinalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_FinalFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_InitialFOV_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_InitialFOV = { "InitialFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, InitialFOV), METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_InitialFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_InitialFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CurveFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CurveTimeline_MetaData[] = {
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CurveTimeline = { "CurveTimeline", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CurveTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CurveTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CurveTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CameraTimeline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CameraTimeline = { "CameraTimeline", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CameraTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_SocketLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_SocketLocation = { "SocketLocation", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, SocketLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_SocketLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_SocketLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CameraArm = { "CameraArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDude_Statics::NewProp_DudeMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyDude.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDude_Statics::NewProp_DudeMesh = { "DudeMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyDude, DudeMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::NewProp_DudeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::NewProp_DudeMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_AnimationHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_ImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_MuzzleParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CameraFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_RotateBro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_isADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_isShooting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_isAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_movingLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_movingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_movingBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_canMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_FinalFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_InitialFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CurveFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CurveTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CameraTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_SocketLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDude_Statics::NewProp_DudeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDude_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDude>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyDude_Statics::ClassParams = {
		&AMyDude::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyDude_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyDude_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyDude_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyDude()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyDude_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyDude, 2590777559);
	template<> CROSSROAD_API UClass* StaticClass<AMyDude>()
	{
		return AMyDude::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDude(Z_Construct_UClass_AMyDude, &AMyDude::StaticClass, TEXT("/Script/Crossroad"), TEXT("AMyDude"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDude);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
