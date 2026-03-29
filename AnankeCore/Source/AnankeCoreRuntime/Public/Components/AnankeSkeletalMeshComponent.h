#pragma once

#include "AnankeSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable)
class ANANKECORERUNTIME_API UAnankeSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};
