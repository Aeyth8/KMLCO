#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EMP_Destroy

#include "Basic.hpp"

#include "AB_EMP_Destroy_classes.hpp"
#include "AB_EMP_Destroy_parameters.hpp"


namespace SDK
{

// Function AB_EMP_Destroy.AB_EMP_Destroy_C.ExecuteUbergraph_AB_EMP_Destroy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_EMP_Destroy_C::ExecuteUbergraph_AB_EMP_Destroy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EMP_Destroy_C", "ExecuteUbergraph_AB_EMP_Destroy");

	Params::AB_EMP_Destroy_C_ExecuteUbergraph_AB_EMP_Destroy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EMP_Destroy.AB_EMP_Destroy_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_EMP_Destroy_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EMP_Destroy_C", "K2_ActivateAbilityFromEvent");

	Params::AB_EMP_Destroy_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

}
