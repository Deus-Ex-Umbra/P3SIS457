#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaDeLapiz.generated.h"

UCLASS()
class P3SIS457_API AFabricaDeLapiz : public AActor
{
	GENERATED_BODY()
public:	
	AFabricaDeLapiz();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	class ALapiz* Fabricar(int _numeroLapiz);
};
