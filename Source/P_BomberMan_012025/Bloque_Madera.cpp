// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Madera.h"

ABloque_Madera::ABloque_Madera() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}