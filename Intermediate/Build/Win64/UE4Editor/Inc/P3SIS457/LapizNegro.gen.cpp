// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P3SIS457/LapizNegro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLapizNegro() {}
// Cross Module References
	P3SIS457_API UClass* Z_Construct_UClass_ALapizNegro_NoRegister();
	P3SIS457_API UClass* Z_Construct_UClass_ALapizNegro();
	P3SIS457_API UClass* Z_Construct_UClass_ALapiz();
	UPackage* Z_Construct_UPackage__Script_P3SIS457();
// End Cross Module References
	void ALapizNegro::StaticRegisterNativesALapizNegro()
	{
	}
	UClass* Z_Construct_UClass_ALapizNegro_NoRegister()
	{
		return ALapizNegro::StaticClass();
	}
	struct Z_Construct_UClass_ALapizNegro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALapizNegro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALapiz,
		(UObject* (*)())Z_Construct_UPackage__Script_P3SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALapizNegro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LapizNegro.h" },
		{ "ModuleRelativePath", "LapizNegro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALapizNegro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALapizNegro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALapizNegro_Statics::ClassParams = {
		&ALapizNegro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALapizNegro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALapizNegro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALapizNegro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALapizNegro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALapizNegro, 248425152);
	template<> P3SIS457_API UClass* StaticClass<ALapizNegro>()
	{
		return ALapizNegro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALapizNegro(Z_Construct_UClass_ALapizNegro, &ALapizNegro::StaticClass, TEXT("/Script/P3SIS457"), TEXT("ALapizNegro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALapizNegro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
