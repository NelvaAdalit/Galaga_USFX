// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/Espia1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspia1() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia1_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEspia1();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEspia();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEspia1::StaticRegisterNativesAEspia1()
	{
	}
	UClass* Z_Construct_UClass_AEspia1_NoRegister()
	{
		return AEspia1::StaticClass();
	}
	struct Z_Construct_UClass_AEspia1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspia1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEspia,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspia1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Espia1.h" },
		{ "ModuleRelativePath", "Espia1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspia1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspia1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspia1_Statics::ClassParams = {
		&AEspia1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspia1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspia1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspia1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspia1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspia1, 4152469484);
	template<> GALAGA_USFX_API UClass* StaticClass<AEspia1>()
	{
		return AEspia1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspia1(Z_Construct_UClass_AEspia1, &AEspia1::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEspia1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspia1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
