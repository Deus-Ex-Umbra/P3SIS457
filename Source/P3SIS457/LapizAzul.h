#pragma once

#include "CoreMinimal.h"
#include "Lapiz.h"
#include "LapizAzul.generated.h"

UCLASS()
class P3SIS457_API ALapizAzul : public ALapiz
{
	GENERATED_BODY()
public:
	ALapizAzul();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void CrearLapiz() override;
	virtual void CrearNombre() override;
	virtual void CrearTamanio() override;
	virtual void AccionarLapiz() override;
	virtual void MoverLapiz() override;
};
