#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Untochable

#include "Basic.hpp"

#include "BP_PostProcess_Untochable_classes.hpp"
#include "BP_PostProcess_Untochable_parameters.hpp"


namespace SDK
{

// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.ExecuteUbergraph_BP_PostProcess_Untochable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::ExecuteUbergraph_BP_PostProcess_Untochable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "ExecuteUbergraph_BP_PostProcess_Untochable");

	Params::BP_PostProcess_Untochable_C_ExecuteUbergraph_BP_PostProcess_Untochable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.OnPlay
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.OnStop
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::OnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "OnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Untochable.BP_PostProcess_Untochable_C.IsVisible
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool BP_PostProcess_Untochable::ABP_PostProcess_Untochable_C::IsVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Untochable_C", "IsVisible");

	Params::BP_PostProcess_Untochable_C_IsVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
