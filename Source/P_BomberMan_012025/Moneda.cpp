// Fill out your copyright notice in the Description page of Project Settings.


#include "Moneda.h"

// Sets default values
AMoneda::AMoneda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MonedaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MonedaMesh"));
	RootComponent = MonedaMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mesh(TEXT("/ Script / Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (mesh.Succeeded())
	{
		MonedaMesh->SetStaticMesh(mesh.Object);
		MonedaMesh->SetRelativeScale3D(FVector(0.050f, 1.5f, 1.5f)); // Escala de la moneda
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (material.Succeeded())
	{
		MonedaMesh->SetMaterial(0, material.Object);
	
	}
	VelocidadRotacion = 50.0f; // Velocidad de rotaci�n
	AnguloMaximoRotacion = 90.0f; // �ngulo m�ximo de rotaci�n
	AnguloAcumulado = 0.0f; // Inicializa el �ngulo acumulado
	SentidoRotacion = 1; // Sentido de rotaci�n (1 para sentido horario, -1 para antihorario)
	
}

// Called when the game starts or when spawned
void AMoneda::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoneda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Calcula el �ngulo de rotaci�n en funci�n del tiempo y la velocidad
	float CambioAngulo = VelocidadRotacion * DeltaTime * SentidoRotacion;
	// Actualiza el �ngulo acumulado
	AnguloAcumulado += CambioAngulo;

	// Verifica si se ha alcanzado el �ngulo m�ximo de rotaci�n
	if (FMath::Abs(AnguloAcumulado) >= AnguloMaximoRotacion)
	{
		// Cambia el sentido de rotaci�n
		SentidoRotacion *= -1;
		// Resetea el �ngulo acumulado
		AnguloAcumulado = 0.0f;
	}
	// Aplica la rotaci�n al objeto
	FRotator RotacionActual = MonedaMesh->GetRelativeRotation();
	RotacionActual.Yaw += CambioAngulo;
	MonedaMesh->SetRelativeRotation(RotacionActual);

}

