#include "Components/AnankeSkeletalMeshComponent.h"

#include "AnankeCoreLoggingDefs.h"
#include "Character/AnankeCharacter.h"
#include "Macros/AnankeCoreLoggingMacros.h"

void UAnankeSkeletalMeshComponent::BeginPlay()
{
	Super::BeginPlay();

	auto* OwnerCharacter = Cast<AAnankeCharacter>(GetOwner());
	if (!OwnerCharacter)
	{
		ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("Expected OwnerCharacter to be of type AAnankeCharacter"));
		return;
	}

	OwnerCharacter->ComponentBeginPlay(this);
}

