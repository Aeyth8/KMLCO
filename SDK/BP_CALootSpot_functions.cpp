#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CALootSpot

#include "Basic.hpp"

#include "BP_CALootSpot_classes.hpp"
#include "BP_CALootSpot_parameters.hpp"


namespace SDK
{

// Function BP_CALootSpot.BP_CALootSpot_C.ExecuteUbergraph_BP_CALootSpot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CALootSpot_C::ExecuteUbergraph_BP_CALootSpot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CALootSpot_C", "ExecuteUbergraph_BP_CALootSpot");

	Params::BP_CALootSpot_C_ExecuteUbergraph_BP_CALootSpot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CALootSpot.BP_CALootSpot_C.SetSortPriority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SortPriority                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CALootSpot_C::SetSortPriority(float SortPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CALootSpot_C", "SetSortPriority");

	Params::BP_CALootSpot_C_SetSortPriority Parms{};

	Parms.SortPriority = SortPriority;

	UObject::ProcessEvent(Func, &Parms);
}

}

