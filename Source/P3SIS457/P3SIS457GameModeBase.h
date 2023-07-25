#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "P3SIS457GameModeBase.generated.h"

UCLASS()
class P3SIS457_API AP3SIS457GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AP3SIS457GameModeBase();
	TArray<class ALapiz*> Lapices;
	class AFabricaDeLapiz* FabricaLapices;
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
private:
	int CantidadLapices;
	int Contador;
	float Tiempo;
};
