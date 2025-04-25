// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Vidrio.h"

ABloque_Vidrio::ABloque_Vidrio() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}