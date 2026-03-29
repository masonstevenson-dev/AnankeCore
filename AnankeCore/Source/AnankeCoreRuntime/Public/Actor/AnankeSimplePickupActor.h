#pragma once

#include "AnankeSimplePickupActor.generated.h"

class USphereComponent;
class AAnankePlayerCharacter;

UCLASS(Blueprintable)
class ANANKECORERUNTIME_API AAnankeSimplePickupActor : public AActor
{
	GENERATED_BODY()

public:
	AAnankeSimplePickupActor(const FObjectInitializer& Initializer);

	UFUNCTION()
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable)
	void DoPickup(AAnankePlayerCharacter* PlayerCharacter);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<USphereComponent> SphereComponent = nullptr;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<USkeletalMeshComponent> EquipComponent = nullptr;
};