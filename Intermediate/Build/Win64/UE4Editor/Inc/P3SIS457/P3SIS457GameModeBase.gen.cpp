// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P3SIS457/P3SIS457GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP3SIS457GameModeBase() {}
// Cross Module References
	P3SIS457_API UClass* Z_Construct_UClass_AP3SIS457GameModeBase_NoRegister();
	P3SIS457_API UClass* Z_Construct_UClass_AP3SIS457GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_P3SIS457();
// End Cross Module References
	void AP3SIS457GameModeBase::StaticRegisterNativesAP3SIS457GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AP3SIS457GameModeBase_NoRegister()
	{
		return AP3SIS457GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AP3SIS457GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP3SIS457GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_P3SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP3SIS457GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "P3SIS457GameModeBase.h" },
		{ "ModuleRelativePath", "P3SIS457GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP3SIS457GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP3SIS457GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP3SIS457GameModeBase_Statics::ClassParams = {
		&AP3SIS457GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AP3SIS457GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP3SIS457GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP3SIS457GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP3SIS457GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP3SIS457GameModeBase, 349030902);
	template<> P3SIS457_API UClass* StaticClass<AP3SIS457GameModeBase>()
	{
		return AP3SIS457GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP3SIS457GameModeBase(Z_Construct_UClass_AP3SIS457GameModeBase, &AP3SIS457GameModeBase::StaticClass, TEXT("/Script/P3SIS457"), TEXT("AP3SIS457GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP3SIS457GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
