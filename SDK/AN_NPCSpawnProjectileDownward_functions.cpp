#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_NPCSpawnProjectileDownward

#include "Basic.hpp"

#include "AN_NPCSpawnProjectileDownward_classes.hpp"
#include "AN_NPCSpawnProjectileDownward_parameters.hpp"


namespace SDK
{

// Function AN_NPCSpawnProjectileDownward.AN_NPCSpawnProjectileDownward_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAN_NPCSpawnProjectileDownward_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AN_NPCSpawnProjectileDownward_C", "Received_Notify");

	Params::AN_NPCSpawnProjectileDownward_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AN_NPCSpawnProjectileDownward.AN_NPCSpawnProjectileDownward_C.MakeItIgnoreTankShield
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACAProjectileBase*                Spawned_Projectile                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACACharacter_NPC*                 NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_NPCSpawnProjectileDownward_C::MakeItIgnoreTankShield(class ACAProjectileBase* Spawned_Projectile, class ACACharacter_NPC* NPC) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AN_NPCSpawnProjectileDownward_C", "MakeItIgnoreTankShield");

	Params::AN_NPCSpawnProjectileDownward_C_MakeItIgnoreTankShield Parms{};

	Parms.Spawned_Projectile = Spawned_Projectile;
	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);
}

}
