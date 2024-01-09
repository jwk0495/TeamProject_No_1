// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bullet/Bullet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT5_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define MYPROJECT5_Bullet_generated_h

#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_SPARSE_DATA
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackPower); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet) \
	NO_API virtual ~ABullet();


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_9_PROLOG
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_SPARSE_DATA \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Bullet_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
