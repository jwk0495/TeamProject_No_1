// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CrosshairWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrosshairWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UCrosshairWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void UCrosshairWidget::StaticRegisterNativesUCrosshairWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrosshairWidget);
	UClass* Z_Construct_UClass_UCrosshairWidget_NoRegister()
	{
		return UCrosshairWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCrosshairWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairImg_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CrosshairImg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/CrosshairWidget.h" },
		{ "ModuleRelativePath", "UI/CrosshairWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImg_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CrosshairWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImg = { "CrosshairImg", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrosshairWidget, CrosshairImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImg_MetaData), Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImg_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrosshairWidget_Statics::NewProp_CrosshairImg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrosshairWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrosshairWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams = {
		&UCrosshairWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrosshairWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrosshairWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrosshairWidget()
	{
		if (!Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton, Z_Construct_UClass_UCrosshairWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrosshairWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UCrosshairWidget>()
	{
		return UCrosshairWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrosshairWidget);
	UCrosshairWidget::~UCrosshairWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_CrosshairWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_CrosshairWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrosshairWidget, UCrosshairWidget::StaticClass, TEXT("UCrosshairWidget"), &Z_Registration_Info_UClass_UCrosshairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrosshairWidget), 746134495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_CrosshairWidget_h_3881999458(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_CrosshairWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_CrosshairWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
