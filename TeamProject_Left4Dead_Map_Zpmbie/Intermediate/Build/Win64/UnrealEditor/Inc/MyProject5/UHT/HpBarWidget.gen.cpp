// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/HpBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHpBarWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UHpBarWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UHpBarWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(UHpBarWidget::execUpdateHpBar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HpRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHpBar(Z_Param_HpRate);
		P_NATIVE_END;
	}
	void UHpBarWidget::StaticRegisterNativesUHpBarWidget()
	{
		UClass* Class = UHpBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHpBar", &UHpBarWidget::execUpdateHpBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics
	{
		struct HpBarWidget_eventUpdateHpBar_Parms
		{
			float HpRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::NewProp_HpRate = { "HpRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HpBarWidget_eventUpdateHpBar_Parms, HpRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::NewProp_HpRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HpBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHpBarWidget, nullptr, "UpdateHpBar", nullptr, nullptr, Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::HpBarWidget_eventUpdateHpBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::HpBarWidget_eventUpdateHpBar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHpBarWidget_UpdateHpBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHpBarWidget_UpdateHpBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHpBarWidget);
	UClass* Z_Construct_UClass_UHpBarWidget_NoRegister()
	{
		return UHpBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHpBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HpBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HpBarWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHpBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHpBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHpBarWidget_UpdateHpBar, "UpdateHpBar" }, // 1748955142
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHpBarWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/HpBarWidget.h" },
		{ "ModuleRelativePath", "UI/HpBarWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHpBarWidget_Statics::NewProp_HpBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HpBarWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHpBarWidget_Statics::NewProp_HpBarWidget = { "HpBarWidget", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHpBarWidget, HpBarWidget), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::NewProp_HpBarWidget_MetaData), Z_Construct_UClass_UHpBarWidget_Statics::NewProp_HpBarWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHpBarWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHpBarWidget_Statics::NewProp_HpBarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHpBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHpBarWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHpBarWidget_Statics::ClassParams = {
		&UHpBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHpBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHpBarWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHpBarWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHpBarWidget()
	{
		if (!Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton, Z_Construct_UClass_UHpBarWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHpBarWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UHpBarWidget>()
	{
		return UHpBarWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHpBarWidget);
	UHpBarWidget::~UHpBarWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_HpBarWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_HpBarWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHpBarWidget, UHpBarWidget::StaticClass, TEXT("UHpBarWidget"), &Z_Registration_Info_UClass_UHpBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHpBarWidget), 1854877238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_HpBarWidget_h_2747087523(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_HpBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_HpBarWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
