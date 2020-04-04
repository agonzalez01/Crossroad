// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossroad/CrossroadHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossroadHUD() {}
// Cross Module References
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossroadHUD_NoRegister();
	CROSSROAD_API UClass* Z_Construct_UClass_ACrossroadHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Crossroad();
// End Cross Module References
	void ACrossroadHUD::StaticRegisterNativesACrossroadHUD()
	{
	}
	UClass* Z_Construct_UClass_ACrossroadHUD_NoRegister()
	{
		return ACrossroadHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACrossroadHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrossroadHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Crossroad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrossroadHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CrossroadHUD.h" },
		{ "ModuleRelativePath", "CrossroadHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrossroadHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossroadHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrossroadHUD_Statics::ClassParams = {
		&ACrossroadHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrossroadHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrossroadHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrossroadHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrossroadHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrossroadHUD, 2675424744);
	template<> CROSSROAD_API UClass* StaticClass<ACrossroadHUD>()
	{
		return ACrossroadHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrossroadHUD(Z_Construct_UClass_ACrossroadHUD, &ACrossroadHUD::StaticClass, TEXT("/Script/Crossroad"), TEXT("ACrossroadHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrossroadHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
