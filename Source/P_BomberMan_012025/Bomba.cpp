// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "kismet/GameplayStatics.h"
// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBomba"));
	RootComponent = MeshBomba;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));	
	if (MeshAsset.Succeeded())
	{
		MeshBomba->SetStaticMesh(MeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABomba::Explotar, 5.0f, false);
}
void ABomba::Explotar() {
	TArray<AActor*> BloquesDestruidos;
	UGameplayStatics::ApplyRadialDamage(GetWorld(), 100.0f, GetActorLocation(), RadioExplosion, nullptr, BloquesDestruidos);

	for (int i = 0; i < 2; i++) {
		FVector NuevaPosicion = GetActorLocation() + FVector(FMath::RandRange(4100, 300), FMath::RandRange(4100, 300), 0);
		GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), NuevaPosicion, FRotator::ZeroRotator);
	}
	Destroy();
}
// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

