// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/MainWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWeapon() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AMainWeapon();
	MYPROJECT5_API UClass* Z_Construct_UClass_AMainWeapon_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AMainWeapon::StaticRegisterNativesAMainWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainWeapon);
	UClass* Z_Construct_UClass_AMainWeapon_NoRegister()
	{
		return AMainWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMainWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon/MainWeapon.h" },
		{ "ModuleRelativePath", "Weapon/MainWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainWeapon_Statics::ClassParams = {
		&AMainWeapon::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainWeapon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainWeapon()
	{
		if (!Z_Registration_Info_UClass_AMainWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainWeapon.OuterSingleton, Z_Construct_UClass_AMainWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainWeapon.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AMainWeapon>()
	{
		return AMainWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainWeapon);
	AMainWeapon::~AMainWeapon() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_MainWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_MainWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainWeapon, AMainWeapon::StaticClass, TEXT("AMainWeapon"), &Z_Registration_Info_UClass_AMainWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainWeapon), 2106456689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_MainWeapon_h_4221509787(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_MainWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_MainWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
