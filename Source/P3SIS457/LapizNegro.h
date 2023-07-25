#pragma once

#include "CoreMinimal.h"
#include "Lapiz.h"
#include "LapizNegro.generated.h"

UCLASS()
class P3SIS457_API ALapizNegro : public ALapiz
{
	GENERATED_BODY()
public:
	ALapizNegro();
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
