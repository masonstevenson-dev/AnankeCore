#include "Actor/AnankeSimplePickupActor.h"

#include "AnankeCoreLoggingDefs.h"
#include "Character/AnankePlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "Macros/AnankeCoreLoggingMacros.h"

AAnankeSimplePickupActor::AAnankeSimplePickupActor(const FObjectInitializer& Initializer): Super(Initializer)
{
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = StaticMeshComponent;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	SphereComponent->SetupAttachment(StaticMeshComponent);

	SphereComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnBeginOverlap);
}

void AAnankeSimplePickupActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Sanity check. Not sure if necessary.
	if (IsPendingKillPending())
	{
		return;
	}
	
	auto* PlayerCharacter = Cast<AAnankePlayerCharacter>(Other);
	if (!PlayerCharacter)
	{
		return;
	}

	DoPickup(PlayerCharacter);
}

void AAnankeSimplePickupActor::DoPickup(AAnankePlayerCharacter* PlayerCharacter)
{
	FTransform RelativeTransform = FTransform::Identity;
	PlayerCharacter->AddComponentByClass(EquipComponent, false, RelativeTransform, false);
	Destroy();
}