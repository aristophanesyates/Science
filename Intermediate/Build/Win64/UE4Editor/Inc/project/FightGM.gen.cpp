// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project/FightGM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFightGM() {}
// Cross Module References
	PROJECT_API UClass* Z_Construct_UClass_AFightGM_NoRegister();
	PROJECT_API UClass* Z_Construct_UClass_AFightGM();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_project();
// End Cross Module References
	void AFightGM::StaticRegisterNativesAFightGM()
	{
	}
	UClass* Z_Construct_UClass_AFightGM_NoRegister()
	{
		return AFightGM::StaticClass();
	}
	struct Z_Construct_UClass_AFightGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFightGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFightGM_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FightGM.h" },
		{ "ModuleRelativePath", "FightGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFightGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFightGM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFightGM_Statics::ClassParams = {
		&AFightGM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AFightGM_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFightGM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFightGM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFightGM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFightGM, 455927063);
	template<> PROJECT_API UClass* StaticClass<AFightGM>()
	{
		return AFightGM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFightGM(Z_Construct_UClass_AFightGM, &AFightGM::StaticClass, TEXT("/Script/project"), TEXT("AFightGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFightGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
