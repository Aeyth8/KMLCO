#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteExoStun

#include "Basic.hpp"

#include "AB_EliteExoStun_classes.hpp"
#include "AB_EliteExoStun_parameters.hpp"


namespace SDK
{

// Function AB_EliteExoStun.AB_EliteExoStun_C.ExecuteUbergraph_AB_EliteExoStun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_EliteExoStun_C::ExecuteUbergraph_AB_EliteExoStun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "ExecuteUbergraph_AB_EliteExoStun");

	Params::AB_EliteExoStun_C_ExecuteUbergraph_AB_EliteExoStun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_EliteExoStun_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_EliteExoStun_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "K2_OnEndAbility");

	Params::AB_EliteExoStun_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.OnCompleted_863BBA114F071B5B3227958268ED90FC
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoStun_C::OnCompleted_863BBA114F071B5B3227958268ED90FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "OnCompleted_863BBA114F071B5B3227958268ED90FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.OnBlendOut_863BBA114F071B5B3227958268ED90FC
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoStun_C::OnBlendOut_863BBA114F071B5B3227958268ED90FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "OnBlendOut_863BBA114F071B5B3227958268ED90FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.OnInterrupted_863BBA114F071B5B3227958268ED90FC
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoStun_C::OnInterrupted_863BBA114F071B5B3227958268ED90FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "OnInterrupted_863BBA114F071B5B3227958268ED90FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.OnCancelled_863BBA114F071B5B3227958268ED90FC
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoStun_C::OnCancelled_863BBA114F071B5B3227958268ED90FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "OnCancelled_863BBA114F071B5B3227958268ED90FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoStun.AB_EliteExoStun_C.OnSkipped_863BBA114F071B5B3227958268ED90FC
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoStun_C::OnSkipped_863BBA114F071B5B3227958268ED90FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoStun_C", "OnSkipped_863BBA114F071B5B3227958268ED90FC");

	UObject::ProcessEvent(Func, nullptr);
}

}

