#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LayoutB

#include "Basic.hpp"

#include "BP_LayoutB_classes.hpp"
#include "BP_LayoutB_parameters.hpp"


namespace SDK
{

// Function BP_LayoutB.BP_LayoutB_C.ExecuteUbergraph_BP_LayoutB
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LayoutB_C::ExecuteUbergraph_BP_LayoutB(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LayoutB_C", "ExecuteUbergraph_BP_LayoutB");

	Params::BP_LayoutB_C_ExecuteUbergraph_BP_LayoutB Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LayoutB.BP_LayoutB_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LayoutB_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LayoutB_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
