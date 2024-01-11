// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT5_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define MYPROJECT5_PlayerCharacter_generated_h

#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_SPARSE_DATA
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamaged); \
	DECLARE_FUNCTION(execSetRemainHealPack); \
	DECLARE_FUNCTION(execSetRemainGrenade); \
	DECLARE_FUNCTION(execSetCurSubAmmo); \
	DECLARE_FUNCTION(execSetRemainMainAmmo); \
	DECLARE_FUNCTION(execSetCurMainAmmo); \
	DECLARE_FUNCTION(execSetHp);


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, APlayerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_32_PROLOG
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_SPARSE_DATA \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_INCLASS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Player_PlayerCharacter_h


#define FOREACH_ENUM_EHANDTYPE(op) \
	op(EHandType::None) \
	op(EHandType::MainWeapon) \
	op(EHandType::SubWeapon) \
	op(EHandType::Grenade) \
	op(EHandType::HealPack) 

enum class EHandType : uint8;
template<> struct TIsUEnumClass<EHandType> { enum { Value = true }; };
template<> MYPROJECT5_API UEnum* StaticEnum<EHandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
