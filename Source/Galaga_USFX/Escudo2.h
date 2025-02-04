// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEscudo.h"
#include "Escudo2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEscudo2 : public ANaveEscudo
{
	GENERATED_BODY()
private:
	int tEscudo;
public:
	AEscudo2();
	FORCEINLINE int GetTEscudo() const { return tEscudo; }
	FORCEINLINE void SetTEscudo(int _tEscudo) { tEscudo = _tEscudo; }
protected:
	virtual void Mover();
	virtual void Proteger();
	virtual void Desaparecer();
};
