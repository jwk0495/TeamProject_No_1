// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ProcessUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessUIWidget() {}
// Cross Module References
	MYPROJECT5_API UClass* Z_Construct_UClass_UProcessUIWidget();
	MYPROJECT5_API UClass* Z_Construct_UClass_UProcessUIWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(UProcessUIWidget::execSetProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProcess();
		P_NATIVE_END;
	}
	void UProcessUIWidget::StaticRegisterNativesUProcessUIWidget()
	{
		UClass* Class = UProcessUIWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetProcess", &UProcessUIWidget::execSetProcess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ProcessUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcessUIWidget, nullptr, "SetProcess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UProcessUIWidget_SetProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProcessUIWidget_SetProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProcessUIWidget);
	UClass* Z_Construct_UClass_UProcessUIWidget_NoRegister()
	{
		return UProcessUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UProcessUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProcessText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProcessProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProcessUIWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProcessUIWidget_SetProcess, "SetProcess" }, // 990966977
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessUIWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/ProcessUIWidget.h" },
		{ "ModuleRelativePath", "UI/ProcessUIWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ProcessUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessText = { "ProcessText", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProcessUIWidget, ProcessText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessText_MetaData), Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ProcessUIWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessProgressBar = { "ProcessProgressBar", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProcessUIWidget, ProcessProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessProgressBar_MetaData), Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessProgressBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProcessUIWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProcessUIWidget_Statics::NewProp_ProcessProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProcessUIWidget_Statics::ClassParams = {
		&UProcessUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProcessUIWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UProcessUIWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUIWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProcessUIWidget()
	{
		if (!Z_Registration_Info_UClass_UProcessUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProcessUIWidget.OuterSingleton, Z_Construct_UClass_UProcessUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProcessUIWidget.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<UProcessUIWidget>()
	{
		return UProcessUIWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessUIWidget);
	UProcessUIWidget::~UProcessUIWidget() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_ProcessUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_ProcessUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProcessUIWidget, UProcessUIWidget::StaticClass, TEXT("UProcessUIWidget"), &Z_Registration_Info_UClass_UProcessUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProcessUIWidget), 1463965450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_ProcessUIWidget_h_1509643417(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_ProcessUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_UI_ProcessUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
