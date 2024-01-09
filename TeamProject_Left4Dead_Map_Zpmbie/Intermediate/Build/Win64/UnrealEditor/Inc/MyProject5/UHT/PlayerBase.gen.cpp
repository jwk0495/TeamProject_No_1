// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYPROJECT5_API UClass* Z_Construct_UClass_APlayerBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_APlayerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void APlayerBase::StaticRegisterNativesAPlayerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerBase);
	UClass* Z_Construct_UClass_APlayerBase_NoRegister()
	{
		return APlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerBase.h" },
		{ "ModuleRelativePath", "Player/PlayerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBase_Statics::ClassParams = {
		&APlayerBase::StaticClass,
		"Game",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APlayerBase()
	{
		if (!Z_Registration_Info_UClass_APlayerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBase.OuterSingleton, Z_Construct_UClass_APlayerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerBase.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<APlayerBase>()
	{
		return APlayerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBase);
	APlayerBase::~APlayerBase() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBase, APlayerBase::StaticClass, TEXT("APlayerBase"), &Z_Registration_Info_UClass_APlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBase), 2847073225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerBase_h_2911090675(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
