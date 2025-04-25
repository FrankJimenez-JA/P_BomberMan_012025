// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class P_BOMBERMAN_012025_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector PosicionInicial;
	FVector PosicionActual;
	float AlturaMax = 600.0f;
	float velocidad = 300.0f;
public:
	bool Encendido = false;
	bool Activado = true;
	TFunction<void(float)> Funcion;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void MovHorizontal(float DeltaTime);
	int VecesMovido = 1.0f;
	//void MovVertical(float DeltaTime);
	UPROPERTY()
	UStaticMeshComponent* MeshBloque;
};
