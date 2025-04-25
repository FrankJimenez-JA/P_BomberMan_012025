// Copyright Epic Games, Inc. All Rights Reserved.

#include "P_BomberMan_012025GameMode.h"
#include "P_BomberMan_012025Character.h"
#include "Bloque.h"
#include "Bloque_Ladrillo.h"
#include "Bloque_Oro.h"
#include "Bloque_Madera.h"
#include "Bloque_Concreto.h"
#include "Bloque_Cuarzo.h"
#include "Bloque_Hielo.h"
#include "Bloque_Acero.h"
#include "Bloque_Pasto.h"
#include "Bloque_Burbuja.h"
#include "Bloque_Vidrio.h"
#include "Moneda.h"
#include "Bomba.h"
#include "UObject/ConstructorHelpers.h"

AP_BomberMan_012025GameMode::AP_BomberMan_012025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void AP_BomberMan_012025GameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector Bloque_Inicial = FVector(-7490.0, -7500.0, 0.0f);
	float Espaciado = 300.0f;
	TArray<FVector> Posiciones0;
	if (GetWorld()) {
		for (int fila = 0; fila < MapaBloques.Num(); fila++)
		{
			for (int columna = 0; columna < MapaBloques[fila].Num(); columna++)
			{
				int32 valor = MapaBloques[fila][columna];
				FVector Ubicacion_de_Bloques = Bloque_Inicial + FVector(columna * Espaciado, fila * Espaciado, 0.0f);
				Spawnearbloques(Ubicacion_de_Bloques, valor);
				if (valor == 0)
				{
                    PuntoVacio.Add(Ubicacion_de_Bloques);
					Posiciones0.Add(Ubicacion_de_Bloques);
				}
			}
		}

	}
    MonedaSpawn();
	GetWorld()->GetTimerManager().SetTimer(TiempoMoneda, this, &AP_BomberMan_012025GameMode::MonedaSpawn, 5.0f, true);
    if (ListaBloques.Num() > 0) {
        MovRandom();
    }
    /*for (int i = 0; i < 3; i++) {
        FVector Posicion = FVector(FMath::RandRange(4210, 4200), FMath::RandRange(4210, 4200), 0);
        GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), Posicion, FRotator::ZeroRotator);
    }*/
}
void AP_BomberMan_012025GameMode::MonedaSpawn() {
    if (Moneda1) {
		Moneda1->Destroy();
        Moneda1 = nullptr;
    }
    float TamanoCelda = 50.f; // Tamaño de cada celda en tu grid
    FVector Offset = FVector(TamanoCelda / 2.0f, TamanoCelda / 2.0f, 0.0f);
    int32 IndiceAleatorio = FMath::RandRange(0, PuntoVacio.Num() - 1);
    FVector PosicionAleatoria = PuntoVacio[IndiceAleatorio] + Offset;
    Moneda1 = GetWorld()->SpawnActor<AMoneda>(AMoneda::StaticClass(), FVector(0.0f, 0.0f, 0.0f) + PosicionAleatoria, FRotator::ZeroRotator);
    if (Moneda1) {
        Moneda1->SetActorScale3D(FVector(0.050f, 1.5f, 1.5f));
    }
}
void AP_BomberMan_012025GameMode::Spawnearbloques(FVector Ubicacion, int32 Bloque) {
	ABloque* TipoBloque = nullptr;
	switch (Bloque)
	{
	case 1:	
		TipoBloque = GetWorld()->SpawnActor<ABloque_Ladrillo>(ABloque_Ladrillo::StaticClass(), Ubicacion, FRotator::ZeroRotator);
		break;
    case 2:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Concreto>(ABloque_Concreto::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 3:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Acero>(ABloque_Acero::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 4:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Madera>(ABloque_Madera::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 5:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Cuarzo>(ABloque_Cuarzo::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 6:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Oro>(ABloque_Oro::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 7:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Burbuja>(ABloque_Burbuja::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 8:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Hielo>(ABloque_Hielo::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 9:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Vidrio>(ABloque_Vidrio::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    case 10:
    {
        TipoBloque = GetWorld()->SpawnActor<ABloque_Pasto>(ABloque_Pasto::StaticClass(), Ubicacion, FRotator::ZeroRotator);
        break;
    }
    default:
        break;
    }
    if (TipoBloque) {
        TipoBloque->SetActorScale3D(FVector(3.0f, 3.0f, 3.0f));
        ListaBloques.Add(TipoBloque);
    }
    if (!BloquesPorTipo.Contains(Bloque)) {
        BloquesPorTipo.Add(Bloque, TArray<AActor*>());
    }
    BloquesPorTipo[Bloque].Add(TipoBloque);


}

/*void AP_BomberMan_012025GameMode::MovRandom()
{
    for (int i = 0; i < 5; i++) {
        int aleatorio = FMath::RandRange(0, ListaBloques.Num() - 1);
        ABloque* BloqueMov = ListaBloques[aleatorio];
        if (!BloqueMov->Encendido || !BloqueMov->Funcion)
        {
            BloqueMov->Encendido = true;
            int opcion = FMath::RandRange(0, 1);
            BloqueMov->Funcion = [BloqueMov, opcion](float DeltaTime)
                {

                    if (opcion == 0) {
                        BloqueMov->MovHorizontal(DeltaTime);
                    }
                    else if (opcion == 1) {
                        BloqueMov->MovVertical(DeltaTime);
                    }
                };
            UE_LOG(LogTemp, Warning, TEXT("Bloque activado: %s"), *BloqueMov->GetName());
        }
    }

}*/
void AP_BomberMan_012025GameMode::MovRandom()
{
    for (int i = 0; i < 4; i++) {
        int aleatorio = FMath::RandRange(0, ListaBloques.Num() - 1);
        ABloque* BloqueMov = ListaBloques[aleatorio];

        if (!BloqueMov->Encendido || !BloqueMov->Funcion)
        {
            BloqueMov->Encendido = true;
            BloqueMov->Funcion = [BloqueMov](float DeltaTime)
                {
                    BloqueMov->MovHorizontal(DeltaTime);
                };
        }
    }
}
