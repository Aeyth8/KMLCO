#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_OnZeroGCollision

#include "Basic.hpp"

#include "AB_Grunt_OnZeroGCollision_classes.hpp"
#include "AB_Grunt_OnZeroGCollision_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_OnZeroGCollision.AB_Grunt_OnZeroGCollision_C.ExecuteUbergraph_AB_Grunt_OnZeroGCollision
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_OnZeroGCollision_C::ExecuteUbergraph_AB_Grunt_OnZeroGCollision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_OnZeroGCollision_C", "ExecuteUbergraph_AB_Grunt_OnZeroGCollision");

	Params::AB_Grunt_OnZeroGCollision_C_ExecuteUbergraph_AB_Grunt_OnZeroGCollision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_OnZeroGCollision.AB_Grunt_OnZeroGCollision_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_OnZeroGCollision_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_OnZeroGCollision_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_OnZeroGCollision_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
