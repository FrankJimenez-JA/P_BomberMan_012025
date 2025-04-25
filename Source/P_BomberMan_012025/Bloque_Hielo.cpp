// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Hielo.h"

ABloque_Hielo::ABloque_Hielo() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock_Slate.M_Rock_Slate'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}