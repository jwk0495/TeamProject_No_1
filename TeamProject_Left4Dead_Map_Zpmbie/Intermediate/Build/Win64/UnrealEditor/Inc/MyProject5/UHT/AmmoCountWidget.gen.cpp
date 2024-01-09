// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/AmmoCountWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoCountWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UAmmoCountWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UAmmoCountWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(UAmmoCountWidget::execUpdateHealPackCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainGrenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealPackCount(Z_Param_NewRemainGrenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmmoCountWidget::execUpdateGrenadeCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainGrenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGrenadeCount(Z_Param_NewRemainGrenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmmoCountWidget::execUpdateSubAmmoCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCurAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSubAmmoCount(Z_Param_NewCurAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAmmoCountWidget::execUpdateMainAmmoCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCurAmmo);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMainAmmoCount(Z_Param_NewCurAmmo,Z_Param_NewRemainAmmo);
		P_NATIVE_END;
	}
	void UAmmoCountWidget::StaticRegisterNativesUAmmoCountWidget()
	{
		UClass* Class = UAmmoCountWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateGrenadeCount", &UAmmoCountWidget::execUpdateGrenadeCount },
			{ "UpdateHealPackCount", &UAmmoCountWidget::execUpdateHealPackCount },
			{ "UpdateMainAmmoCount", &UAmmoCountWidget::execUpdateMainAmmoCount },
			{ "UpdateSubAmmoCount", &UAmmoCountWidget::execUpdateSubAmmoCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics
	{
		struct AmmoCountWidget_eventUpdateGrenadeCount_Parms
		{
			int32 NewRemainGrenade;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainGrenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::NewProp_NewRemainGrenade = { "NewRemainGrenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoCountWidget_eventUpdateGrenadeCount_Parms, NewRemainGrenade), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::NewProp_NewRemainGrenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoCountWidget, nullptr, "UpdateGrenadeCount", nullptr, nullptr, Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::AmmoCountWidget_eventUpdateGrenadeCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::AmmoCountWidget_eventUpdateGrenadeCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics
	{
		struct AmmoCountWidget_eventUpdateHealPackCount_Parms
		{
			int32 NewRemainGrenade;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainGrenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::NewProp_NewRemainGrenade = { "NewRemainGrenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoCountWidget_eventUpdateHealPackCount_Parms, NewRemainGrenade), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::NewProp_NewRemainGrenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoCountWidget, nullptr, "UpdateHealPackCount", nullptr, nullptr, Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::AmmoCountWidget_eventUpdateHealPackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::AmmoCountWidget_eventUpdateHealPackCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics
	{
		struct AmmoCountWidget_eventUpdateMainAmmoCount_Parms
		{
			int32 NewCurAmmo;
			int32 NewRemainAmmo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCurAmmo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::NewProp_NewCurAmmo = { "NewCurAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoCountWidget_eventUpdateMainAmmoCount_Parms, NewCurAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::NewProp_NewRemainAmmo = { "NewRemainAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoCountWidget_eventUpdateMainAmmoCount_Parms, NewRemainAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::NewProp_NewCurAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::NewProp_NewRemainAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoCountWidget, nullptr, "UpdateMainAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::AmmoCountWidget_eventUpdateMainAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::AmmoCountWidget_eventUpdateMainAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics
	{
		struct AmmoCountWidget_eventUpdateSubAmmoCount_Parms
		{
			int32 NewCurAmmo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCurAmmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::NewProp_NewCurAmmo = { "NewCurAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmmoCountWidget_eventUpdateSubAmmoCount_Parms, NewCurAmmo), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::NewProp_NewCurAmmo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmmoCountWidget, nullptr, "UpdateSubAmmoCount", nullptr, nullptr, Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::AmmoCountWidget_eventUpdateSubAmmoCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::AmmoCountWidget_eventUpdateSubAmmoCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmmoCountWidget);
	UClass* Z_Construct_UClass_UAmmoCountWidget_NoRegister()
	{
		return UAmmoCountWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAmmoCountWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainAmmoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainAmmoText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAmmoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubAmmoText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrenadeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealPackText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HealPackText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmmoCountWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAmmoCountWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmmoCountWidget_UpdateGrenadeCount, "UpdateGrenadeCount" }, // 2137600638
		{ &Z_Construct_UFunction_UAmmoCountWidget_UpdateHealPackCount, "UpdateHealPackCount" }, // 484927287
		{ &Z_Construct_UFunction_UAmmoCountWidget_UpdateMainAmmoCount, "UpdateMainAmmoCount" }, // 2231202006
		{ &Z_Construct_UFunction_UAmmoCountWidget_UpdateSubAmmoCount, "UpdateSubAmmoCount" }, // 3023281911
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoCountWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/AmmoCountWidget.h" },
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_MainAmmoText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_MainAmmoText = { "MainAmmoText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoCountWidget, MainAmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_MainAmmoText_MetaData), Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_MainAmmoText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_SubAmmoText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_SubAmmoText = { "SubAmmoText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoCountWidget, SubAmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_SubAmmoText_MetaData), Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_SubAmmoText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_GrenadeText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_GrenadeText = { "GrenadeText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoCountWidget, GrenadeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_GrenadeText_MetaData), Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_GrenadeText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_HealPackText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/AmmoCountWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_HealPackText = { "HealPackText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmmoCountWidget, HealPackText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_HealPackText_MetaData), Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_HealPackText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmmoCountWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_MainAmmoText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_SubAmmoText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_GrenadeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmmoCountWidget_Statics::NewProp_HealPackText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmmoCountWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoCountWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoCountWidget_Statics::ClassParams = {
		&UAmmoCountWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAmmoCountWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmmoCountWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoCountWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAmmoCountWidget()
	{
		if (!Z_Registration_Info_UClass_UAmmoCountWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoCountWidget.OuterSingleton, Z_Construct_UClass_UAmmoCountWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAmmoCountWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UAmmoCountWidget>()
	{
		return UAmmoCountWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoCountWidget);
	UAmmoCountWidget::~UAmmoCountWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_AmmoCountWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_AmmoCountWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoCountWidget, UAmmoCountWidget::StaticClass, TEXT("UAmmoCountWidget"), &Z_Registration_Info_UClass_UAmmoCountWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoCountWidget), 1093715159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_AmmoCountWidget_h_311145707(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_AmmoCountWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_AmmoCountWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
