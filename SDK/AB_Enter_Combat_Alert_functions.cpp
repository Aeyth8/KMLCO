#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Enter_Combat_Alert

#include "Basic.hpp"

#include "AB_Enter_Combat_Alert_classes.hpp"
#include "AB_Enter_Combat_Alert_parameters.hpp"


namespace SDK
{

// Function AB_Enter_Combat_Alert.AB_Enter_Combat_Alert_C.ExecuteUbergraph_AB_Enter_Combat_Alert
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Enter_Combat_Alert_C::ExecuteUbergraph_AB_Enter_Combat_Alert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Enter_Combat_Alert_C", "ExecuteUbergraph_AB_Enter_Combat_Alert");

	Params::AB_Enter_Combat_Alert_C_ExecuteUbergraph_AB_Enter_Combat_Alert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Enter_Combat_Alert.AB_Enter_Combat_Alert_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Enter_Combat_Alert_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Enter_Combat_Alert_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Enter_Combat_Alert_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Enter_Combat_Alert.AB_Enter_Combat_Alert_C.OnRemoved_C4B59CE64FCC96FB57CE529FBDCE96FD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo       GameplayEffectRemovalInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Enter_Combat_Alert_C::OnRemoved_C4B59CE64FCC96FB57CE529FBDCE96FD(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Enter_Combat_Alert_C", "OnRemoved_C4B59CE64FCC96FB57CE529FBDCE96FD");

	Params::AB_Enter_Combat_Alert_C_OnRemoved_C4B59CE64FCC96FB57CE529FBDCE96FD Parms{};

	Parms.GameplayEffectRemovalInfo = std::move(GameplayEffectRemovalInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Enter_Combat_Alert.AB_Enter_Combat_Alert_C.InvalidHandle_C4B59CE64FCC96FB57CE529FBDCE96FD
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo       GameplayEffectRemovalInfo                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Enter_Combat_Alert_C::InvalidHandle_C4B59CE64FCC96FB57CE529FBDCE96FD(const struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Enter_Combat_Alert_C", "InvalidHandle_C4B59CE64FCC96FB57CE529FBDCE96FD");

	Params::AB_Enter_Combat_Alert_C_InvalidHandle_C4B59CE64FCC96FB57CE529FBDCE96FD Parms{};

	Parms.GameplayEffectRemovalInfo = std::move(GameplayEffectRemovalInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

