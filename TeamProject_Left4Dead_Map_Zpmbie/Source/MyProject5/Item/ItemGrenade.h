// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemBase.h"
#include "ItemGrenade.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT5_API AItemGrenade : public AItemBase
{
	GENERATED_BODY()
	
public:
	AItemGrenade();

protected:
	int GrenadeCount = 1;
};