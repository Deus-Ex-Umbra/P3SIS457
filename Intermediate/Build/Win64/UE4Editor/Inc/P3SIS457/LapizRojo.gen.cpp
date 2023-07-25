// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P3SIS457/LapizRojo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLapizRojo() {}
// Cross Module References
	P3SIS457_API UClass* Z_Construct_UClass_ALapizRojo_NoRegister();
	P3SIS457_API UClass* Z_Construct_UClass_ALapizRojo();
	P3SIS457_API UClass* Z_Construct_UClass_ALapiz();
	UPackage* Z_Construct_UPackage__Script_P3SIS457();
// End Cross Module References
	void ALapizRojo::StaticRegisterNativesALapizRojo()
	{
	}
	UClass* Z_Construct_UClass_ALapizRojo_NoRegister()
	{
		return ALapizRojo::StaticClass();
	}
	struct Z_Construct_UClass_ALapizRojo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALapizRojo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALapiz,
		(UObject* (*)())Z_Construct_UPackage__Script_P3SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALapizRojo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LapizRojo.h" },
		{ "ModuleRelativePath", "LapizRojo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALapizRojo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALapizRojo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALapizRojo_Statics::ClassParams = {
		&ALapizRojo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALapizRojo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALapizRojo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALapizRojo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALapizRojo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALapizRojo, 402407711);
	template<> P3SIS457_API UClass* StaticClass<ALapizRojo>()
	{
		return ALapizRojo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALapizRojo(Z_Construct_UClass_ALapizRojo, &ALapizRojo::StaticClass, TEXT("/Script/P3SIS457"), TEXT("ALapizRojo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALapizRojo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
