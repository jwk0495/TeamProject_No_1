// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/GameOverUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverUIWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UGameOverUIWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UGameOverUIWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void UGameOverUIWidget::StaticRegisterNativesUGameOverUIWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOverUIWidget);
	UClass* Z_Construct_UClass_UGameOverUIWidget_NoRegister()
	{
		return UGameOverUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameOverText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameOverText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Restart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Button_Restart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_Exit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Button_Exit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverUIWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GameOverUIWidget.h" },
		{ "ModuleRelativePath", "UI/GameOverUIWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_GameOverText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/GameOverUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_GameOverText = { "GameOverText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverUIWidget, GameOverText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_GameOverText_MetaData), Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_GameOverText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Restart_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/GameOverUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Restart = { "Button_Restart", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverUIWidget, Button_Restart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Restart_MetaData), Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Restart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Exit_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/GameOverUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Exit = { "Button_Exit", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverUIWidget, Button_Exit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Exit_MetaData), Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Exit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverUIWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_GameOverText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Restart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverUIWidget_Statics::NewProp_Button_Exit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOverUIWidget_Statics::ClassParams = {
		&UGameOverUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameOverUIWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOverUIWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUIWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameOverUIWidget()
	{
		if (!Z_Registration_Info_UClass_UGameOverUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOverUIWidget.OuterSingleton, Z_Construct_UClass_UGameOverUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameOverUIWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UGameOverUIWidget>()
	{
		return UGameOverUIWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverUIWidget);
	UGameOverUIWidget::~UGameOverUIWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GameOverUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GameOverUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameOverUIWidget, UGameOverUIWidget::StaticClass, TEXT("UGameOverUIWidget"), &Z_Registration_Info_UClass_UGameOverUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOverUIWidget), 2601285587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GameOverUIWidget_h_2302563374(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GameOverUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GameOverUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
