#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_S_Elite_JumpLandAoE

#include "Basic.hpp"

#include "BP_Projectile_S_Elite_JumpLandAoE_classes.hpp"
#include "BP_Projectile_S_Elite_JumpLandAoE_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_S_Elite_JumpLandAoE.BP_Projectile_S_Elite_JumpLandAoE_C.ExecuteUbergraph_BP_Projectile_S_Elite_JumpLandAoE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_S_Elite_JumpLandAoE_C::ExecuteUbergraph_BP_Projectile_S_Elite_JumpLandAoE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_S_Elite_JumpLandAoE_C", "ExecuteUbergraph_BP_Projectile_S_Elite_JumpLandAoE");

	Params::BP_Projectile_S_Elite_JumpLandAoE_C_ExecuteUbergraph_BP_Projectile_S_Elite_JumpLandAoE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_S_Elite_JumpLandAoE.BP_Projectile_S_Elite_JumpLandAoE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_S_Elite_JumpLandAoE_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_S_Elite_JumpLandAoE_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

