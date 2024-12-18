#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Prp_NPC_RailgunTurret

#include "Basic.hpp"

#include "ABP_Prp_NPC_RailgunTurret_classes.hpp"
#include "ABP_Prp_NPC_RailgunTurret_parameters.hpp"


namespace SDK
{

// Function ABP_Prp_NPC_RailgunTurret.ABP_Prp_NPC_RailgunTurret_C.ExecuteUbergraph_ABP_Prp_NPC_RailgunTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Prp_NPC_RailgunTurret_C::ExecuteUbergraph_ABP_Prp_NPC_RailgunTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Prp_NPC_RailgunTurret_C", "ExecuteUbergraph_ABP_Prp_NPC_RailgunTurret");

	Params::ABP_Prp_NPC_RailgunTurret_C_ExecuteUbergraph_ABP_Prp_NPC_RailgunTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Prp_NPC_RailgunTurret.ABP_Prp_NPC_RailgunTurret_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_Prp_NPC_RailgunTurret_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Prp_NPC_RailgunTurret_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Prp_NPC_RailgunTurret.ABP_Prp_NPC_RailgunTurret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Prp_NPC_RailgunTurret_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Prp_NPC_RailgunTurret_C", "BlueprintUpdateAnimation");

	Params::ABP_Prp_NPC_RailgunTurret_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Prp_NPC_RailgunTurret.ABP_Prp_NPC_RailgunTurret_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Prp_NPC_RailgunTurret_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Prp_NPC_RailgunTurret_C", "AnimGraph");

	Params::ABP_Prp_NPC_RailgunTurret_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

