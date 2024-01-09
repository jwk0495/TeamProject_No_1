// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/GrenadeCountWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrenadeCountWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UGrenadeCountWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UGrenadeCountWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	void UGrenadeCountWidget::StaticRegisterNativesUGrenadeCountWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrenadeCountWidget);
	UClass* Z_Construct_UClass_UGrenadeCountWidget_NoRegister()
	{
		return UGrenadeCountWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGrenadeCountWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrenadeCountWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrenadeCountWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrenadeCountWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GrenadeCountWidget.h" },
		{ "ModuleRelativePath", "UI/GrenadeCountWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrenadeCountWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrenadeCountWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrenadeCountWidget_Statics::ClassParams = {
		&UGrenadeCountWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrenadeCountWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrenadeCountWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGrenadeCountWidget()
	{
		if (!Z_Registration_Info_UClass_UGrenadeCountWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrenadeCountWidget.OuterSingleton, Z_Construct_UClass_UGrenadeCountWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrenadeCountWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UGrenadeCountWidget>()
	{
		return UGrenadeCountWidget::StaticClass();
	}
	UGrenadeCountWidget::UGrenadeCountWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrenadeCountWidget);
	UGrenadeCountWidget::~UGrenadeCountWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GrenadeCountWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GrenadeCountWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrenadeCountWidget, UGrenadeCountWidget::StaticClass, TEXT("UGrenadeCountWidget"), &Z_Registration_Info_UClass_UGrenadeCountWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrenadeCountWidget), 821911877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GrenadeCountWidget_h_2300739513(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GrenadeCountWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_GrenadeCountWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
