// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossroad/CrossroadGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossroadGameMode() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossroadGameMode_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossroadGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Crossroad();
// End Cross Module References
	void ACrossroadGameMode::StaticRegisterNativesACrossroadGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACrossroadGameMode_NoRegister()
	{
		return ACrossroadGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACrossroadGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossroadGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Crossroad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossroadGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrossroadGameMode.h" },
		{ "ModuleRelativePath", "CrossroadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossroadGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossroadGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossroadGameMode_Statics::ClassParams = {
		&ACrossroadGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossroadGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossroadGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossroadGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossroadGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossroadGameMode, 2290788218);
	template<> CROSSROAD_API UClass* StaticClass<ACrossroadGameMode>()
	{
		return ACrossroadGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossroadGameMode(Z_Construct_UClass_ACrossroadGameMode, &ACrossroadGameMode::StaticClass, TEXT("/Script/Crossroad"), TEXT("ACrossroadGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossroadGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
