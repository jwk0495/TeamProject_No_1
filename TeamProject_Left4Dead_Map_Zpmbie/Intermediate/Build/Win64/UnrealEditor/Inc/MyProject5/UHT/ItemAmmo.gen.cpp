// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemAmmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAmmo() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemAmmo();
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemAmmo_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemBase();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AItemAmmo::StaticRegisterNativesAItemAmmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemAmmo);
	UClass* Z_Construct_UClass_AItemAmmo_NoRegister()
	{
		return AItemAmmo::StaticClass();
	}
	struct Z_Construct_UClass_AItemAmmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemAmmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemAmmo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemAmmo.h" },
		{ "ModuleRelativePath", "ItemAmmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemAmmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemAmmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemAmmo_Statics::ClassParams = {
		&AItemAmmo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemAmmo_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemAmmo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AItemAmmo()
	{
		if (!Z_Registration_Info_UClass_AItemAmmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemAmmo.OuterSingleton, Z_Construct_UClass_AItemAmmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemAmmo.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AItemAmmo>()
	{
		return AItemAmmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemAmmo);
	AItemAmmo::~AItemAmmo() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_ItemAmmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_ItemAmmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemAmmo, AItemAmmo::StaticClass, TEXT("AItemAmmo"), &Z_Registration_Info_UClass_AItemAmmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemAmmo), 765395248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_ItemAmmo_h_4201304671(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_ItemAmmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_ItemAmmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
