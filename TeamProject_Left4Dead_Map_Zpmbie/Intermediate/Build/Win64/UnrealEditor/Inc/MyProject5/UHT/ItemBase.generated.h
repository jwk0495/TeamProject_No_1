// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT5_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define MYPROJECT5_ItemBase_generated_h

#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	MYPROJECT5_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT5_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_SPARSE_DATA
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_ACCESSORS
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject5"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase) \
	NO_API virtual ~AItemBase();


#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_31_PROLOG
#define FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_SPARSE_DATA \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_ACCESSORS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TeamProject_Left4Dead_Map_Zpmbie_Source_MyProject5_Item_ItemBase_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::None) \
	op(EItemType::Heal) \
	op(EItemType::Ammo) \
	op(EItemType::Grenade) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> MYPROJECT5_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
