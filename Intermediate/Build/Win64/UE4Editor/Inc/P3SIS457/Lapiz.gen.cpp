// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "P3SIS457/Lapiz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLapiz() {}
// Cross Module References
	P3SIS457_API UClass* Z_Construct_UClass_ALapiz_NoRegister();
	P3SIS457_API UClass* Z_Construct_UClass_ALapiz();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_P3SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ALapiz::StaticRegisterNativesALapiz()
	{
	}
	UClass* Z_Construct_UClass_ALapiz_NoRegister()
	{
		return ALapiz::StaticClass();
	}
	struct Z_Construct_UClass_ALapiz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LapizMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LapizMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LapizMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LapizMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALapiz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_P3SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALapiz_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lapiz.h" },
		{ "ModuleRelativePath", "Lapiz.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lapiz.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMesh = { "LapizMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALapiz, LapizMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Lapiz.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMaterial = { "LapizMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALapiz, LapizMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALapiz_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALapiz_Statics::NewProp_LapizMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALapiz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALapiz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALapiz_Statics::ClassParams = {
		&ALapiz::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALapiz_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALapiz_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ALapiz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALapiz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALapiz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALapiz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALapiz, 1738952848);
	template<> P3SIS457_API UClass* StaticClass<ALapiz>()
	{
		return ALapiz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALapiz(Z_Construct_UClass_ALapiz, &ALapiz::StaticClass, TEXT("/Script/P3SIS457"), TEXT("ALapiz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALapiz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
