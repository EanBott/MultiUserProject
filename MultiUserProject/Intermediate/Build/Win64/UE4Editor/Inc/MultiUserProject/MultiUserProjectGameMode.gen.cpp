// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiUserProject/MultiUserProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserProjectGameMode() {}
// Cross Module References
	MULTIUSERPROJECT_API UClass* Z_Construct_UClass_AMultiUserProjectGameMode_NoRegister();
	MULTIUSERPROJECT_API UClass* Z_Construct_UClass_AMultiUserProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MultiUserProject();
// End Cross Module References
	void AMultiUserProjectGameMode::StaticRegisterNativesAMultiUserProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiUserProjectGameMode_NoRegister()
	{
		return AMultiUserProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMultiUserProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiUserProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiUserProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiUserProjectGameMode.h" },
		{ "ModuleRelativePath", "MultiUserProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiUserProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiUserProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiUserProjectGameMode_Statics::ClassParams = {
		&AMultiUserProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMultiUserProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiUserProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiUserProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiUserProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiUserProjectGameMode, 472973005);
	template<> MULTIUSERPROJECT_API UClass* StaticClass<AMultiUserProjectGameMode>()
	{
		return AMultiUserProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiUserProjectGameMode(Z_Construct_UClass_AMultiUserProjectGameMode, &AMultiUserProjectGameMode::StaticClass, TEXT("/Script/MultiUserProject"), TEXT("AMultiUserProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiUserProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
