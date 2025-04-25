// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Burbuja.h"

ABloque_Burbuja::ABloque_Burbuja() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Basic_Floor.M_Basic_Floor'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}