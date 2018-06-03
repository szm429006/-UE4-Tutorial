// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolPoint.generated.h"

class UBillboardComponent;
class USceneComponent;
UCLASS()
class TUTORIAL_API APatrolPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APatrolPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected :
	UPROPERTY(VisibleDefaultsOnly, Category = "PatrolPoint|Components")
	USceneComponent* m_pScene;

	UPROPERTY(VisibleDefaultsOnly, Category = "PatrolPoint|Components")
	UBillboardComponent* m_pBillboard;
	
};
