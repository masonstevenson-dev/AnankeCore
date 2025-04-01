// Copyright © Mason Stevenson
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted (subject to the limitations in the disclaimer
// below) provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
// NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "Controller/AnankePlayerController.h"

#include "AnankeCoreLoggingDefs.h"
#include "Engine/Engine.h"
#include "IXRTrackingSystem.h"
#include "IXRCamera.h"
#include "Character/AnankePlayerCharacter.h"
#include "Macros/AnankeCoreLoggingMacros.h"

void AAnankePlayerController::Look(float ActionValueX, float ActionValueY)
{
	AddYawInput(ActionValueX);
	AddPitchInput(ActionValueY);
}

void AAnankePlayerController::UpdateRotation(float DeltaTime)
{
	// Calculate Delta to be applied on ViewRotation
	FRotator DeltaRot(RotationInput);

	FRotator ViewRotation = GetControlRotation();

	if (PlayerCameraManager)
	{
		PlayerCameraManager->ProcessViewRotation(DeltaTime, ViewRotation, DeltaRot);
	}

	AActor* ViewTarget = GetViewTarget();
	if (!PlayerCameraManager || !ViewTarget || !ViewTarget->HasActiveCameraComponent() || ViewTarget->HasActivePawnControlCameraComponent())
	{
		if (IsLocalPlayerController() && GEngine->XRSystem.IsValid() && GetWorld() != nullptr && GEngine->XRSystem->IsHeadTrackingAllowedForWorld(*GetWorld()))
		{
			auto XRCamera = GEngine->XRSystem->GetXRCamera();
			if (XRCamera.IsValid())
			{
				XRCamera->ApplyHMDRotation(this, ViewRotation);
			}
		}
	}

	SetControlRotation(ViewRotation);

	APawn* const P = GetPawnOrSpectator();
	if (P)
	{
		auto* PC = Cast<AAnankePlayerCharacter>(P);
		if (!PC || !PC->ShouldUnlockCamera())
		{
			SetPawnRotation(PC, ViewRotation, DeltaTime);
		}
	}
}

void AAnankePlayerController::SetPawnRotation(APawn* InPawn, FRotator ViewRotation, float DeltaTime)
{
	FQuat UpdatedRotation = ViewRotation.Quaternion();
	
	FRotator CurrentRotation = InPawn->GetActorRotation();
	FRotator RotDelta = ViewRotation - CurrentRotation;
	float YawDelta = FMath::RadiansToDegrees(FMath::Abs(ViewRotation.Quaternion().AngularDistance(CurrentRotation.Quaternion()))); // FMath::Abs(RotDelta.Yaw);

	if (YawDelta >= 15.0f)
	{
		bool bWasSlowTurning = bIsSlowTurning;
		bIsSlowTurning = true;
		TurnAroundTime = 0.0f;

		//ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("********************"));
		
		if (!bWasSlowTurning)
		{
			// ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("$$$$$$$$$$$$$$$$"));
			return;
		}
	}
	
	if (bIsSlowTurning)
	{
		TurnAroundTime += DeltaTime;
		
		if (YawDelta <= 0.01f || TurnAroundTime >= MaxTurnAroundTime)
		{
			TurnAroundTime = 0.0f;
			bIsSlowTurning = false;
		}
		else
		{
			float RemainingTime = (YawDelta * MaxTurnAroundTime) / 180.0f;
			float TurnPercentage = FMath::Clamp(DeltaTime / RemainingTime, 0.0f, 1.0f);
			FRotator TargetRotation = CurrentRotation;
			TargetRotation.Yaw = ViewRotation.Yaw;
			// UpdatedRotation.Yaw = FMath::Lerp(CurrentRotation.Yaw, ViewRotation.Yaw, TurnPercentage);
			UpdatedRotation = FQuat::Slerp(CurrentRotation.Quaternion(), TargetRotation.Quaternion(), TurnPercentage);
			// ANANKE_LOG_OBJECT(this, LogAnankeCore, Warning, TEXT("%.3f -> %.3f (%.2f) -> %.3f"), CurrentRotation.Yaw, ViewRotation.Yaw, TurnPercentage, UpdatedRotation.Yaw);
		}
	}
	
	InPawn->FaceRotation(UpdatedRotation.Rotator(), DeltaTime);
}

