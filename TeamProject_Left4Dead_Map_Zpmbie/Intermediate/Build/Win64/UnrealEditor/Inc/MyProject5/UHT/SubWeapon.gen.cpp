// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/SubWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubWeapon() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_ASubWeapon();
	MYPROJECT5_API UClass* Z_Construct_UClass_ASubWeapon_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void ASubWeapon::StaticRegisterNativesASubWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASubWeapon);
	UClass* Z_Construct_UClass_ASubWeapon_NoRegister()
	{
		return ASubWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASubWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASubWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/SubWeapon.h" },
		{ "ModuleRelativePath", "Weapon/SubWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubWeapon_Statics::ClassParams = {
		&ASubWeapon::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASubWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASubWeapon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASubWeapon()
	{
		if (!Z_Registration_Info_UClass_ASubWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASubWeapon.OuterSingleton, Z_Construct_UClass_ASubWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASubWeapon.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<ASubWeapon>()
	{
		return ASubWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubWeapon);
	ASubWeapon::~ASubWeapon() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_SubWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_SubWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASubWeapon, ASubWeapon::StaticClass, TEXT("ASubWeapon"), &Z_Registration_Info_UClass_ASubWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASubWeapon), 1519926818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_SubWeapon_h_4202229015(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_SubWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_SubWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
