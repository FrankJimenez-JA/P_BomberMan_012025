// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>("MeshBloque");
	RootComponent = MeshBloque;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MallaBloque(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MallaBloque.Succeeded())
	{
		MeshBloque->SetStaticMesh(MallaBloque.Object);
	}
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Encendido && Funcion) {
		Funcion(DeltaTime);
	}

}
/*void ABloque::MovHorizontal(float time)
{
	PosicionActual = GetActorLocation();
	if (PosicionActual.Y >= 400.0f + PosicionInicial.Y) {
		Activado = false;
	}
	else if (PosicionActual.Y <= PosicionInicial.Y - 400.0f) {
		Activado = true;
	}
	if (Activado) {
		PosicionActual.Y += time * velocidad;
	}
	else
	{
		PosicionActual.Y -= time * velocidad;
	}

	SetActorLocation(PosicionActual);

}*/
void ABloque::MovHorizontal(float time)
{
	PosicionActual = GetActorLocation();

	
	float Desplazamiento = VecesMovido * 300.0f; 

	if (PosicionActual.Y >= PosicionInicial.Y + Desplazamiento) {
		Activado = false;
	}
	else if (PosicionActual.Y <= PosicionInicial.Y - Desplazamiento) {
		Activado = true;
		VecesMovido++; // Aumentar la cantidad de veces movido
	}

	if (Activado) {
		PosicionActual.Y += time * velocidad;
	}
	else {
		PosicionActual.Y -= time * velocidad;
		
	}

	SetActorLocation(PosicionActual);
}
/*void ABloque::MovVertical(float Tiempo)
{
	PosicionActual = GetActorLocation();
	if (PosicionActual.Z >= AlturaMax) {
		Activado = false;
	}
	else if (PosicionActual.Z <= 0)
	{
		Activado = true;
	}
	if (Activado) {
		PosicionActual.Z += Tiempo * velocidad;
	}
	else {
		PosicionActual.Z -= Tiempo * velocidad;
	}
	SetActorLocation(PosicionActual);
}*/