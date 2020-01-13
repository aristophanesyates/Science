// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_FightGM_generated_h
#error "FightGM.generated.h already included, missing '#pragma once' in FightGM.h"
#endif
#define PROJECT_FightGM_generated_h

#define project_Source_project_FightGM_h_15_RPC_WRAPPERS
#define project_Source_project_FightGM_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define project_Source_project_FightGM_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFightGM(); \
	friend struct Z_Construct_UClass_AFightGM_Statics; \
public: \
	DECLARE_CLASS(AFightGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/project"), NO_API) \
	DECLARE_SERIALIZER(AFightGM)


#define project_Source_project_FightGM_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFightGM(); \
	friend struct Z_Construct_UClass_AFightGM_Statics; \
public: \
	DECLARE_CLASS(AFightGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/project"), NO_API) \
	DECLARE_SERIALIZER(AFightGM)


#define project_Source_project_FightGM_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightGM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightGM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightGM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightGM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightGM(AFightGM&&); \
	NO_API AFightGM(const AFightGM&); \
public:


#define project_Source_project_FightGM_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFightGM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFightGM(AFightGM&&); \
	NO_API AFightGM(const AFightGM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFightGM); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFightGM); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFightGM)


#define project_Source_project_FightGM_h_15_PRIVATE_PROPERTY_OFFSET
#define project_Source_project_FightGM_h_12_PROLOG
#define project_Source_project_FightGM_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_Source_project_FightGM_h_15_PRIVATE_PROPERTY_OFFSET \
	project_Source_project_FightGM_h_15_RPC_WRAPPERS \
	project_Source_project_FightGM_h_15_INCLASS \
	project_Source_project_FightGM_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define project_Source_project_FightGM_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	project_Source_project_FightGM_h_15_PRIVATE_PROPERTY_OFFSET \
	project_Source_project_FightGM_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	project_Source_project_FightGM_h_15_INCLASS_NO_PURE_DECLS \
	project_Source_project_FightGM_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class AFightGM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID project_Source_project_FightGM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
