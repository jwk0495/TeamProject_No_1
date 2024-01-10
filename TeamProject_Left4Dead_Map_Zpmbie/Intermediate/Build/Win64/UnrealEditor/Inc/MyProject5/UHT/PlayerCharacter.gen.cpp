// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AMainWeapon_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_APlayerBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_APlayerCharacter();
	MYPROJECT5_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_ASubWeapon_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AThrowableWeaponBase_NoRegister();
	MYPROJECT5_API UEnum* Z_Construct_UEnum_MyProject5_EHandType();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandType;
	static UEnum* EHandType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject5_EHandType, (UObject*)Z_Construct_UPackage__Script_MyProject5(), TEXT("EHandType"));
		}
		return Z_Registration_Info_UEnum_EHandType.OuterSingleton;
	}
	template<> MYPROJECT5_API UEnum* StaticEnum<EHandType>()
	{
		return EHandType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject5_EHandType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject5_EHandType_Statics::Enumerators[] = {
		{ "EHandType::None", (int64)EHandType::None },
		{ "EHandType::MainWeapon", (int64)EHandType::MainWeapon },
		{ "EHandType::SubWeapon", (int64)EHandType::SubWeapon },
		{ "EHandType::Grenade", (int64)EHandType::Grenade },
		{ "EHandType::HealPack", (int64)EHandType::HealPack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject5_EHandType_Statics::Enum_MetaDataParams[] = {
		{ "Grenade.Name", "EHandType::Grenade" },
		{ "HealPack.Name", "EHandType::HealPack" },
		{ "MainWeapon.Name", "EHandType::MainWeapon" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
		{ "None.Name", "EHandType::None" },
		{ "SubWeapon.Name", "EHandType::SubWeapon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject5_EHandType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject5,
		nullptr,
		"EHandType",
		"EHandType",
		Z_Construct_UEnum_MyProject5_EHandType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject5_EHandType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject5_EHandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject5_EHandType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyProject5_EHandType()
	{
		if (!Z_Registration_Info_UEnum_EHandType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandType.InnerSingleton, Z_Construct_UEnum_MyProject5_EHandType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandType.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOnDamaged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDamaged(Z_Param_InDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetRemainHealPack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainHealPack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRemainHealPack(Z_Param_NewRemainHealPack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetRemainGrenade)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainGrenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRemainGrenade(Z_Param_NewRemainGrenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetCurSubAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCurAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetCurSubAmmo(Z_Param_NewCurAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetRemainMainAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetRemainMainAmmo(Z_Param_NewRemainAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetCurMainAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCurAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetCurMainAmmo(Z_Param_NewCurAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SetHp(Z_Param_NewHp);
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDamaged", &APlayerCharacter::execOnDamaged },
			{ "SetCurMainAmmo", &APlayerCharacter::execSetCurMainAmmo },
			{ "SetCurSubAmmo", &APlayerCharacter::execSetCurSubAmmo },
			{ "SetHp", &APlayerCharacter::execSetHp },
			{ "SetRemainGrenade", &APlayerCharacter::execSetRemainGrenade },
			{ "SetRemainHealPack", &APlayerCharacter::execSetRemainHealPack },
			{ "SetRemainMainAmmo", &APlayerCharacter::execSetRemainMainAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics
	{
		struct PlayerCharacter_eventOnDamaged_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::NewProp_InDamage = { "InDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnDamaged_Parms, InDamage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::NewProp_InDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PlayerCharacter_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::PlayerCharacter_eventOnDamaged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_OnDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics
	{
		struct PlayerCharacter_eventSetCurMainAmmo_Parms
		{
			int32 NewCurAmmo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCurAmmo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::NewProp_NewCurAmmo = { "NewCurAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetCurMainAmmo_Parms, NewCurAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetCurMainAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::NewProp_NewCurAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetCurMainAmmo", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PlayerCharacter_eventSetCurMainAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::PlayerCharacter_eventSetCurMainAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics
	{
		struct PlayerCharacter_eventSetCurSubAmmo_Parms
		{
			int32 NewCurAmmo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCurAmmo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::NewProp_NewCurAmmo = { "NewCurAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetCurSubAmmo_Parms, NewCurAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetCurSubAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::NewProp_NewCurAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetCurSubAmmo", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PlayerCharacter_eventSetCurSubAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::PlayerCharacter_eventSetCurSubAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetHp_Statics
	{
		struct PlayerCharacter_eventSetHp_Parms
		{
			int32 NewHp;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewHp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::NewProp_NewHp = { "NewHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetHp_Parms, NewHp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetHp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::NewProp_NewHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetHp", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PlayerCharacter_eventSetHp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::PlayerCharacter_eventSetHp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics
	{
		struct PlayerCharacter_eventSetRemainGrenade_Parms
		{
			int32 NewRemainGrenade;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainGrenade;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::NewProp_NewRemainGrenade = { "NewRemainGrenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainGrenade_Parms, NewRemainGrenade), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainGrenade_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::NewProp_NewRemainGrenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetRemainGrenade", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PlayerCharacter_eventSetRemainGrenade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::PlayerCharacter_eventSetRemainGrenade_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics
	{
		struct PlayerCharacter_eventSetRemainHealPack_Parms
		{
			int32 NewRemainHealPack;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainHealPack;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::NewProp_NewRemainHealPack = { "NewRemainHealPack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainHealPack_Parms, NewRemainHealPack), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainHealPack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::NewProp_NewRemainHealPack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetRemainHealPack", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PlayerCharacter_eventSetRemainHealPack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::PlayerCharacter_eventSetRemainHealPack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics
	{
		struct PlayerCharacter_eventSetRemainMainAmmo_Parms
		{
			int32 NewRemainAmmo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainAmmo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::NewProp_NewRemainAmmo = { "NewRemainAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainMainAmmo_Parms, NewRemainAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetRemainMainAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::NewProp_NewRemainAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetRemainMainAmmo", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PlayerCharacter_eventSetRemainMainAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::PlayerCharacter_eventSetRemainMainAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoomAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandChangeToMainAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandChangeToMainAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandChangeToSubAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandChangeToSubAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandChangeToGrenadeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandChangeToGrenadeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandChangeToHealPackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandChangeToHealPackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeleeAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SubWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GrenadeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeleeAttackPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnuckbackPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KnuckbackPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurHp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurMainAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurMainAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainMainAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainMainAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurSubAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurSubAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainGrenade_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainGrenade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainHealPack_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainHealPack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_OnDamaged, "OnDamaged" }, // 1070830894
		{ &Z_Construct_UFunction_APlayerCharacter_SetCurMainAmmo, "SetCurMainAmmo" }, // 1462830053
		{ &Z_Construct_UFunction_APlayerCharacter_SetCurSubAmmo, "SetCurSubAmmo" }, // 2228757274
		{ &Z_Construct_UFunction_APlayerCharacter_SetHp, "SetHp" }, // 995437863
		{ &Z_Construct_UFunction_APlayerCharacter_SetRemainGrenade, "SetRemainGrenade" }, // 2183877348
		{ &Z_Construct_UFunction_APlayerCharacter_SetRemainHealPack, "SetRemainHealPack" }, // 1829871680
		{ &Z_Construct_UFunction_APlayerCharacter_SetRemainMainAmmo, "SetRemainMainAmmo" }, // 3374260090
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerMappingContext_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerMappingContext = { "PlayerMappingContext", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, PlayerMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerMappingContext_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_AttackAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attack\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_AttackAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_AttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomAction = { "ZoomAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToMainAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hand Change\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand Change" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToMainAction = { "HandChangeToMainAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, HandChangeToMainAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToMainAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToMainAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToSubAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToSubAction = { "HandChangeToSubAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, HandChangeToSubAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToSubAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToSubAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToGrenadeAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToGrenadeAction = { "HandChangeToGrenadeAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, HandChangeToGrenadeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToGrenadeAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToGrenadeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToHealPackAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToHealPackAction = { "HandChangeToHealPackAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, HandChangeToHealPackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToHealPackAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToHealPackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HealAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heal\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heal" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HealAction = { "HealAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, HealAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HealAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HealAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackAction_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heal\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heal" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackAction = { "MeleeAttackAction", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MeleeAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackAction_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeaponClass_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeaponClass = { "MainWeaponClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MainWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMainWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeaponClass_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeaponClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MainWeapon), Z_Construct_UClass_AMainWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeapon_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeaponClass_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeaponClass = { "SubWeaponClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SubWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASubWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeaponClass_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeaponClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeapon = { "SubWeapon", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SubWeapon), Z_Construct_UClass_ASubWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeapon_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GrenadeClass_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GrenadeClass = { "GrenadeClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, GrenadeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AThrowableWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GrenadeClass_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GrenadeClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackPower_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackPower = { "MeleeAttackPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MeleeAttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackPower_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_KnuckbackPower_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_KnuckbackPower = { "KnuckbackPower", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, KnuckbackPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_KnuckbackPower_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_KnuckbackPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxHp_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurHp_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurHp = { "CurHp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurHp_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurMainAmmo_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurMainAmmo = { "CurMainAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurMainAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurMainAmmo_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurMainAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainMainAmmo_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainMainAmmo = { "RemainMainAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, RemainMainAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainMainAmmo_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainMainAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurSubAmmo_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurSubAmmo = { "CurSubAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CurSubAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurSubAmmo_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurSubAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainGrenade_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainGrenade = { "RemainGrenade", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, RemainGrenade), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainGrenade_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainGrenade_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainHealPack_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainHealPack = { "RemainHealPack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, RemainHealPack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainHealPack_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainHealPack_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_PlayerMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_AttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ZoomAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToMainAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToSubAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToGrenadeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HandChangeToHealPackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_HealAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MainWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SubWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_BulletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_GrenadeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MeleeAttackPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_KnuckbackPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MaxHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurMainAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainMainAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CurSubAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainGrenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_RemainHealPack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::EnumInfo[] = {
		{ EHandType_StaticEnum, TEXT("EHandType"), &Z_Registration_Info_UEnum_EHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2041148896U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 287920892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_3475782519(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
