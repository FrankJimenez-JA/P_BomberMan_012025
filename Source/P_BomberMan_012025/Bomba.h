// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class P_BOMBERMAN_012025_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UStaticMeshComponent* MeshBomba;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomba")
	float RadioExplosion = 300.0f;
	UFUNCTION()
	void Explotar();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bombas")
	TArray<ABomba*> Bombas;
protected:
	FTimerHandle TimerHandle;
};
