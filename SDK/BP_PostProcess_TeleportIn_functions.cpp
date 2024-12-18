#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_TeleportIn

#include "Basic.hpp"

#include "BP_PostProcess_TeleportIn_classes.hpp"
#include "BP_PostProcess_TeleportIn_parameters.hpp"


namespace SDK
{

// Function BP_PostProcess_TeleportIn.BP_PostProcess_TeleportIn_C.ExecuteUbergraph_BP_PostProcess_TeleportIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcess_TeleportIn_C::ExecuteUbergraph_BP_PostProcess_TeleportIn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_TeleportIn_C", "ExecuteUbergraph_BP_PostProcess_TeleportIn");

	Params::BP_PostProcess_TeleportIn_C_ExecuteUbergraph_BP_PostProcess_TeleportIn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcess_TeleportIn.BP_PostProcess_TeleportIn_C.OnPlayOnce
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PostProcess_TeleportIn_C::OnPlayOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_TeleportIn_C", "OnPlayOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_TeleportIn.BP_PostProcess_TeleportIn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_PostProcess_TeleportIn_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_TeleportIn_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_TeleportIn.BP_PostProcess_TeleportIn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_PostProcess_TeleportIn_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_TeleportIn_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

