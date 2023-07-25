// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P3SIS457/FabricaDeLapiz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaDeLapiz() {}
// Cross Module References
	P3SIS457_API UClass* Z_Construct_UClass_AFabricaDeLapiz_NoRegister();
	P3SIS457_API UClass* Z_Construct_UClass_AFabricaDeLapiz();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P3SIS457();
// End Cross Module References
	void AFabricaDeLapiz::StaticRegisterNativesAFabricaDeLapiz()
	{
	}
	UClass* Z_Construct_UClass_AFabricaDeLapiz_NoRegister()
	{
		return AFabricaDeLapiz::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaDeLapiz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaDeLapiz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P3SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaDeLapiz_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaDeLapiz.h" },
		{ "ModuleRelativePath", "FabricaDeLapiz.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaDeLapiz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaDeLapiz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaDeLapiz_Statics::ClassParams = {
		&AFabricaDeLapiz::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaDeLapiz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaDeLapiz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaDeLapiz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaDeLapiz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaDeLapiz, 2120851563);
	template<> P3SIS457_API UClass* StaticClass<AFabricaDeLapiz>()
	{
		return AFabricaDeLapiz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaDeLapiz(Z_Construct_UClass_AFabricaDeLapiz, &AFabricaDeLapiz::StaticClass, TEXT("/Script/P3SIS457"), TEXT("AFabricaDeLapiz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaDeLapiz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
