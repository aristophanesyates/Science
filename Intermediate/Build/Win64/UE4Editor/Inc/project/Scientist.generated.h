// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_Scientist_generated_h
#error "Scientist.generated.h already included, missing '#pragma once' in Scientist.h"
#endif
#define PROJECT_Scientist_generated_h

#define project_Source_project_Scientist_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerRotation(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	}


#define project_Source_project_Scientist_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerRotation(Z_Param_deltaSeconds); \
		P_NATIVE_END; \
	}


#define project_Source_project_Scientist_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScientist(); \
	friend struct Z_Construct_UClass_AScientist_Statics; \
public: \
	DECLARE_CLASS(AScientist, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/project"), NO_API) \
	DECLARE_SERIALIZER(AScientist)


#define project_Source_project_Scientist_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScientist(); \
	friend struct Z_Construct_UClass_AScientist_Statics; \
public: \
	DECLARE_CLASS(AScientist, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/project"), NO_API) \
	DECLARE_SERIALIZER(AScientist)


#define project_Source_project_Scientist_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScientist(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScientist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScientist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScientist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScientist(AScientist&&); \
	NO_API AScientist(const AScientist&); \
public:


#define project_Source_project_Scientist_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScientist(AScientist&&); \
	NO_API AScientist(const AScientist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScientist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScientist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScientist)


#define project_Source_project_Scientist_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyMEsh() { return STRUCT_OFFSET(AScientist, MyMEsh); }


#define project_Source_project_Scientist_h_9_PROLOG
#define project_Source_project_Scientist_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_Source_project_Scientist_h_12_PRIVATE_PROPERTY_OFFSET \
	project_Source_project_Scientist_h_12_RPC_WRAPPERS \
	project_Source_project_Scientist_h_12_INCLASS \
	project_Source_project_Scientist_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define project_Source_project_Scientist_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_Source_project_Scientist_h_12_PRIVATE_PROPERTY_OFFSET \
	project_Source_project_Scientist_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	project_Source_project_Scientist_h_12_INCLASS_NO_PURE_DECLS \
	project_Source_project_Scientist_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class AScientist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID project_Source_project_Scientist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
