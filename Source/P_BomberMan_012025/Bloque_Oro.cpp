// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Oro.h"

ABloque_Oro::ABloque_Oro() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}