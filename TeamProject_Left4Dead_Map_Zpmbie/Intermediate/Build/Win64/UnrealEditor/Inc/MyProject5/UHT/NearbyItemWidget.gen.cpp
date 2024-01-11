// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/NearbyItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearbyItemWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UNearbyItemWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UNearbyItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(UNearbyItemWidget::execUpdateItemText)
	{
		P_GET_UBOOL(Z_Param_IsExist);
		P_GET_PROPERTY(FTextProperty,Z_Param_NewItemText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateItemText(Z_Param_IsExist,Z_Param_NewItemText);
		P_NATIVE_END;
	}
	void UNearbyItemWidget::StaticRegisterNativesUNearbyItemWidget()
	{
		UClass* Class = UNearbyItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateItemText", &UNearbyItemWidget::execUpdateItemText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics
	{
		struct NearbyItemWidget_eventUpdateItemText_Parms
		{
			bool IsExist;
			FText NewItemText;
		};
		static void NewProp_IsExist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExist;
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewItemText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_IsExist_SetBit(void* Obj)
	{
		((NearbyItemWidget_eventUpdateItemText_Parms*)Obj)->IsExist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_IsExist = { "IsExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NearbyItemWidget_eventUpdateItemText_Parms), &Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_IsExist_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_NewItemText = { "NewItemText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NearbyItemWidget_eventUpdateItemText_Parms, NewItemText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_IsExist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NewProp_NewItemText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/NearbyItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearbyItemWidget, nullptr, "UpdateItemText", nullptr, nullptr, Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NearbyItemWidget_eventUpdateItemText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::NearbyItemWidget_eventUpdateItemText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearbyItemWidget);
	UClass* Z_Construct_UClass_UNearbyItemWidget_NoRegister()
	{
		return UNearbyItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNearbyItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ButtonIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearbyItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearbyItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearbyItemWidget_UpdateItemText, "UpdateItemText" }, // 2261064715
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearbyItemWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/NearbyItemWidget.h" },
		{ "ModuleRelativePath", "UI/NearbyItemWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ItemText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/NearbyItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ItemText = { "ItemText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNearbyItemWidget, ItemText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ItemText_MetaData), Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ItemText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ButtonIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/NearbyItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ButtonIcon = { "ButtonIcon", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNearbyItemWidget, ButtonIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ButtonIcon_MetaData), Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ButtonIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearbyItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ItemText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearbyItemWidget_Statics::NewProp_ButtonIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearbyItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearbyItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearbyItemWidget_Statics::ClassParams = {
		&UNearbyItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNearbyItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNearbyItemWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNearbyItemWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNearbyItemWidget()
	{
		if (!Z_Registration_Info_UClass_UNearbyItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearbyItemWidget.OuterSingleton, Z_Construct_UClass_UNearbyItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearbyItemWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UNearbyItemWidget>()
	{
		return UNearbyItemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearbyItemWidget);
	UNearbyItemWidget::~UNearbyItemWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_NearbyItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_NearbyItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearbyItemWidget, UNearbyItemWidget::StaticClass, TEXT("UNearbyItemWidget"), &Z_Registration_Info_UClass_UNearbyItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearbyItemWidget), 2448235814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_NearbyItemWidget_h_2361480507(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_NearbyItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_NearbyItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
