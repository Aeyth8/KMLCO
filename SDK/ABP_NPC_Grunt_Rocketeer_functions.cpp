#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_Grunt_Rocketeer

#include "Basic.hpp"

#include "ABP_NPC_Grunt_Rocketeer_classes.hpp"
#include "ABP_NPC_Grunt_Rocketeer_parameters.hpp"


namespace SDK
{

// Function ABP_NPC_Grunt_Rocketeer.ABP_NPC_Grunt_Rocketeer_C.ShouldLowerWeaponInCombat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsInCombat_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_NPC_Grunt_Rocketeer_C::ShouldLowerWeaponInCombat(bool* IsInCombat_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_Grunt_Rocketeer_C", "ShouldLowerWeaponInCombat");

	Params::ABP_NPC_Grunt_Rocketeer_C_ShouldLowerWeaponInCombat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInCombat_0 != nullptr)
		*IsInCombat_0 = Parms.IsInCombat_0;
}

}

