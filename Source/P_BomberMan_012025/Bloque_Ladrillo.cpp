// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque_Ladrillo.h"

ABloque_Ladrillo::ABloque_Ladrillo() {
	if (MeshBloque) {
		static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBloque(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
		if (MaterialBloque.Succeeded()) {
			MeshBloque->SetMaterial(0, MaterialBloque.Object);
		}
	}
}