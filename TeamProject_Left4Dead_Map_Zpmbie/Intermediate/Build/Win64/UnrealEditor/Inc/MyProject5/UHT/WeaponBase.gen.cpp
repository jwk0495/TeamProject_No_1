// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapon/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT5_API UClass* Z_Construct_UClass_AWeaponBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponBase.h" },
		{ "ModuleRelativePath", "Weapon/WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "ModuleRelativePath", "Weapon/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttackPower_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttackPower_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AttackPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AWeaponBase>()
	{
		return AWeaponBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
	AWeaponBase::~AWeaponBase() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_WeaponBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_WeaponBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 1879326143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_WeaponBase_h_1566746412(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Weapon_WeaponBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
