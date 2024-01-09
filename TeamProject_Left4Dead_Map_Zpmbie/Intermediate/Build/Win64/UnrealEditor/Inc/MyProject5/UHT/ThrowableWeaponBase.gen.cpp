// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Throwable/ThrowableWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableWeaponBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT5_API UClass* Z_Construct_UClass_AThrowableWeaponBase();
	MYPROJECT5_API UClass* Z_Construct_UClass_AThrowableWeaponBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject5();
// End Cross Module References
	DEFINE_FUNCTION(AThrowableWeaponBase::execExplode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explode();
		P_NATIVE_END;
	}
	void AThrowableWeaponBase::StaticRegisterNativesAThrowableWeaponBase()
	{
		UClass* Class = AThrowableWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explode", &AThrowableWeaponBase::execExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowableWeaponBase, nullptr, "Explode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThrowableWeaponBase_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowableWeaponBase_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowableWeaponBase);
	UClass* Z_Construct_UClass_AThrowableWeaponBase_NoRegister()
	{
		return AThrowableWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AThrowableWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectileComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackPower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowableWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowableWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowableWeaponBase_Explode, "Explode" }, // 3135669211
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Throwable/ThrowableWeaponBase.h" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "ThrowableWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableWeaponBase, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_SphereComponent_MetaData), Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_SphereComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ThrowableWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableWeaponBase, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ProjectileComponent_MetaData[] = {
		{ "Category", "ThrowableWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ProjectileComponent = { "ProjectileComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableWeaponBase, ProjectileComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ProjectileComponent_MetaData), Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ProjectileComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ParticleComponent_MetaData[] = {
		{ "Category", "ThrowableWeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ParticleComponent = { "ParticleComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableWeaponBase, ParticleComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ParticleComponent_MetaData), Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ParticleComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "ThrowableWeaponBase" },
		{ "ModuleRelativePath", "Throwable/ThrowableWeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_AttackPower = { "AttackPower", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThrowableWeaponBase, AttackPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_AttackPower_MetaData), Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_AttackPower_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowableWeaponBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_SphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ProjectileComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_ParticleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowableWeaponBase_Statics::NewProp_AttackPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowableWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowableWeaponBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowableWeaponBase_Statics::ClassParams = {
		&AThrowableWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowableWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AThrowableWeaponBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThrowableWeaponBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThrowableWeaponBase()
	{
		if (!Z_Registration_Info_UClass_AThrowableWeaponBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowableWeaponBase.OuterSingleton, Z_Construct_UClass_AThrowableWeaponBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowableWeaponBase.OuterSingleton;
	}
	template<> MYPROJECT5_API UClass* StaticClass<AThrowableWeaponBase>()
	{
		return AThrowableWeaponBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowableWeaponBase);
	AThrowableWeaponBase::~AThrowableWeaponBase() {}
	struct Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Throwable_ThrowableWeaponBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Throwable_ThrowableWeaponBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowableWeaponBase, AThrowableWeaponBase::StaticClass, TEXT("AThrowableWeaponBase"), &Z_Registration_Info_UClass_AThrowableWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowableWeaponBase), 3890118076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Throwable_ThrowableWeaponBase_h_1377903731(TEXT("/Script/MyProject5"),
		Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Throwable_ThrowableWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Throwable_ThrowableWeaponBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
