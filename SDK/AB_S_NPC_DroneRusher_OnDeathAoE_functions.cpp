#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_S_NPC_DroneRusher_OnDeathAoE

#include "Basic.hpp"

#include "AB_S_NPC_DroneRusher_OnDeathAoE_classes.hpp"
#include "AB_S_NPC_DroneRusher_OnDeathAoE_parameters.hpp"


namespace SDK
{

// Function AB_S_NPC_DroneRusher_OnDeathAoE.AB_S_NPC_DroneRusher_OnDeathAoE_C.ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_S_NPC_DroneRusher_OnDeathAoE_C::ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_S_NPC_DroneRusher_OnDeathAoE_C", "ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE");

	Params::AB_S_NPC_DroneRusher_OnDeathAoE_C_ExecuteUbergraph_AB_S_NPC_DroneRusher_OnDeathAoE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_S_NPC_DroneRusher_OnDeathAoE.AB_S_NPC_DroneRusher_OnDeathAoE_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_S_NPC_DroneRusher_OnDeathAoE_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_S_NPC_DroneRusher_OnDeathAoE_C", "K2_ActivateAbilityFromEvent");

	Params::AB_S_NPC_DroneRusher_OnDeathAoE_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

