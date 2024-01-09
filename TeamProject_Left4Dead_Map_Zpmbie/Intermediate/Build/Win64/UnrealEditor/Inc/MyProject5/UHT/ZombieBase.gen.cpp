// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/ZombieBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYPROJECT5_API UClass* Z_Construct_UClass_AZombieBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_AZombieBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(AZombieBase::execOnDamaged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamaged(Z_Param_InDamage);
		P_NATIVE_END;
	}
	static FName NAME_AZombieBase_OnDie = FName(TEXT("OnDie"));
	void AZombieBase::OnDie()
	{
		ProcessEvent(FindFunctionChecked(NAME_AZombieBase_OnDie),NULL);
	}
	void AZombieBase::StaticRegisterNativesAZombieBase()
	{
		UClass* Class = AZombieBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamaged", &AZombieBase::execOnDamaged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieBase_OnDamaged_Statics
	{
		struct ZombieBase_eventOnDamaged_Parms
		{
			int32 InDamage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::NewProp_InDamage = { "InDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZombieBase_eventOnDamaged_Parms, InDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::NewProp_InDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::ZombieBase_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::ZombieBase_eventOnDamaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AZombieBase_OnDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombieBase_OnDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_OnDie_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_OnDie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_OnDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, nullptr, "OnDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_OnDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombieBase_OnDie_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AZombieBase_OnDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombieBase_OnDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieBase);
	UClass* Z_Construct_UClass_AZombieBase_NoRegister()
	{
		return AZombieBase::StaticClass();
	}
	struct Z_Construct_UClass_AZombieBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurHp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieBase_OnDamaged, "OnDamaged" }, // 2196469005
		{ &Z_Construct_UFunction_AZombieBase_OnDie, "OnDie" }, // 3321095632
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ZombieBase.h" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombieBase, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp_MaxHp_MetaData), Z_Construct_UClass_AZombieBase_Statics::NewProp_MaxHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp_CurHp_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp_CurHp = { "CurHp", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombieBase, CurHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp_CurHp_MetaData), Z_Construct_UClass_AZombieBase_Statics::NewProp_CurHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombieBase, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp_AttackPower_MetaData), Z_Construct_UClass_AZombieBase_Statics::NewProp_AttackPower_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp_MaxHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp_CurHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp_AttackPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieBase_Statics::ClassParams = {
		&AZombieBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombieBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AZombieBase()
	{
		if (!Z_Registration_Info_UClass_AZombieBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieBase.OuterSingleton, Z_Construct_UClass_AZombieBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieBase.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AZombieBase>()
	{
		return AZombieBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBase);
	AZombieBase::~AZombieBase() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Public_ZombieBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Public_ZombieBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieBase, AZombieBase::StaticClass, TEXT("AZombieBase"), &Z_Registration_Info_UClass_AZombieBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieBase), 448137900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Public_ZombieBase_h_3707598998(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Public_ZombieBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Public_ZombieBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
