// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Cuarzo.h"

ABloque_Cuarzo::ABloque_Cuarzo() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Copper.M_Metal_Copper'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}