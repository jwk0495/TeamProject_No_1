// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Item/ItemHealPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemHealPack() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemHealPack();
	MYPROJECT5_API UClass* Z_Construct_UClass_AItemHealPack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void AItemHealPack::StaticRegisterNativesAItemHealPack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemHealPack);
	UClass* Z_Construct_UClass_AItemHealPack_NoRegister()
	{
		return AItemHealPack::StaticClass();
	}
	struct Z_Construct_UClass_AItemHealPack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemHealPack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemHealPack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemHealPack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/ItemHealPack.h" },
		{ "ModuleRelativePath", "Item/ItemHealPack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemHealPack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemHealPack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemHealPack_Statics::ClassParams = {
		&AItemHealPack::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemHealPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemHealPack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AItemHealPack()
	{
		if (!Z_Registration_Info_UClass_AItemHealPack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemHealPack.OuterSingleton, Z_Construct_UClass_AItemHealPack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemHealPack.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AItemHealPack>()
	{
		return AItemHealPack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemHealPack);
	AItemHealPack::~AItemHealPack() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemHealPack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemHealPack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemHealPack, AItemHealPack::StaticClass, TEXT("AItemHealPack"), &Z_Registration_Info_UClass_AItemHealPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemHealPack), 460349242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemHealPack_h_1360931306(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemHealPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemHealPack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
