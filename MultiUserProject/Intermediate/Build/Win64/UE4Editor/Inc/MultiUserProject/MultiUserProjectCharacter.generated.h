// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIUSERPROJECT_MultiUserProjectCharacter_generated_h
#error "MultiUserProjectCharacter.generated.h already included, missing '#pragma once' in MultiUserProjectCharacter.h"
#endif
#define MULTIUSERPROJECT_MultiUserProjectCharacter_generated_h

#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_SPARSE_DATA
#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_RPC_WRAPPERS
#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiUserProjectCharacter(); \
	friend struct Z_Construct_UClass_AMultiUserProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiUserProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiUserProject"), NO_API) \
	DECLARE_SERIALIZER(AMultiUserProjectCharacter)


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiUserProjectCharacter(); \
	friend struct Z_Construct_UClass_AMultiUserProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiUserProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiUserProject"), NO_API) \
	DECLARE_SERIALIZER(AMultiUserProjectCharacter)


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiUserProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiUserProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiUserProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiUserProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiUserProjectCharacter(AMultiUserProjectCharacter&&); \
	NO_API AMultiUserProjectCharacter(const AMultiUserProjectCharacter&); \
public:


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiUserProjectCharacter(AMultiUserProjectCharacter&&); \
	NO_API AMultiUserProjectCharacter(const AMultiUserProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiUserProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiUserProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiUserProjectCharacter)


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AMultiUserProjectCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiUserProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AMultiUserProjectCharacter, CursorToWorld); }


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_9_PROLOG
#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_SPARSE_DATA \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_RPC_WRAPPERS \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_INCLASS \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_SPARSE_DATA \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERPROJECT_API UClass* StaticClass<class AMultiUserProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiUserProject_Source_MultiUserProject_MultiUserProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
