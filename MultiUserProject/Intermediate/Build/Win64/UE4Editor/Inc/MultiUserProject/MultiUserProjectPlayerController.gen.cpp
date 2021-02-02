// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiUserProject/MultiUserProjectPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserProjectPlayerController() {}
// Cross Module References
	MULTIUSERPROJECT_API UClass* Z_Construct_UClass_AMultiUserProjectPlayerController_NoRegister();
	MULTIUSERPROJECT_API UClass* Z_Construct_UClass_AMultiUserProjectPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MultiUserProject();
// End Cross Module References
	void AMultiUserProjectPlayerController::StaticRegisterNativesAMultiUserProjectPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMultiUserProjectPlayerController_NoRegister()
	{
		return AMultiUserProjectPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMultiUserProjectPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiUserProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MultiUserProjectPlayerController.h" },
		{ "ModuleRelativePath", "MultiUserProjectPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiUserProjectPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::ClassParams = {
		&AMultiUserProjectPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiUserProjectPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiUserProjectPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiUserProjectPlayerController, 3969234821);
	template<> MULTIUSERPROJECT_API UClass* StaticClass<AMultiUserProjectPlayerController>()
	{
		return AMultiUserProjectPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiUserProjectPlayerController(Z_Construct_UClass_AMultiUserProjectPlayerController, &AMultiUserProjectPlayerController::StaticClass, TEXT("/Script/MultiUserProject"), TEXT("AMultiUserProjectPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiUserProjectPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
