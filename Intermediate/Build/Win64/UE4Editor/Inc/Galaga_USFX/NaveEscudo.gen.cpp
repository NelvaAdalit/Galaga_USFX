// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEscudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEscudo() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEscudo_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEscudo();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANave_Enemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEscudo::StaticRegisterNativesANaveEscudo()
	{
	}
	UClass* Z_Construct_UClass_ANaveEscudo_NoRegister()
	{
		return ANaveEscudo::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave_Enemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEscudo.h" },
		{ "ModuleRelativePath", "NaveEscudo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEscudo_Statics::ClassParams = {
		&ANaveEscudo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEscudo, 1586370222);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEscudo>()
	{
		return ANaveEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEscudo(Z_Construct_UClass_ANaveEscudo, &ANaveEscudo::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
