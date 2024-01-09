// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSTestProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT5_FPSTestProjectile_generated_h
#error "FPSTestProjectile.generated.h already included, missing '#pragma once' in FPSTestProjectile.h"
#endif
#define MYPROJECT5_FPSTestProjectile_generated_h

#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_SPARSE_DATA
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSTestProjectile(); \
	friend struct Z_Construct_UClass_AFPSTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AFPSTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSTestProjectile(AFPSTestProjectile&&); \
	NO_API AFPSTestProjectile(const AFPSTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSTestProjectile) \
	NO_API virtual ~AFPSTestProjectile();


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_12_PROLOG
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_SPARSE_DATA \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class AFPSTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_FPSTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
