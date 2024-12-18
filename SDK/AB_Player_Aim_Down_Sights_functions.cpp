#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Aim_Down_Sights

#include "Basic.hpp"

#include "AB_Player_Aim_Down_Sights_classes.hpp"
#include "AB_Player_Aim_Down_Sights_parameters.hpp"


namespace SDK
{

// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.ExecuteUbergraph_AB_Player_Aim_Down_Sights
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_Aim_Down_Sights_C::ExecuteUbergraph_AB_Player_Aim_Down_Sights(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Aim_Down_Sights_C", "ExecuteUbergraph_AB_Player_Aim_Down_Sights");

	Params::AB_Player_Aim_Down_Sights_C_ExecuteUbergraph_AB_Player_Aim_Down_Sights Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Player_Aim_Down_Sights_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Aim_Down_Sights_C", "K2_OnEndAbility");

	Params::AB_Player_Aim_Down_Sights_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_Player_Aim_Down_Sights_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Aim_Down_Sights_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.EventReceived_28A48F1A4F6F449DA122BFBF06DF4228
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_Aim_Down_Sights_C::EventReceived_28A48F1A4F6F449DA122BFBF06DF4228(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Aim_Down_Sights_C", "EventReceived_28A48F1A4F6F449DA122BFBF06DF4228");

	Params::AB_Player_Aim_Down_Sights_C_EventReceived_28A48F1A4F6F449DA122BFBF06DF4228 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Aim_Down_Sights.AB_Player_Aim_Down_Sights_C.OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeHeld                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_Aim_Down_Sights_C::OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Aim_Down_Sights_C", "OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED");

	Params::AB_Player_Aim_Down_Sights_C_OnRelease_E0DEDBFD4ED0B9ABAD9CBE9E6FB92CED Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);
}

}

