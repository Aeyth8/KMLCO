#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StreamerEffect_Beacon

#include "Basic.hpp"

#include "BP_StreamerEffect_Beacon_classes.hpp"
#include "BP_StreamerEffect_Beacon_parameters.hpp"


namespace SDK
{

// Function BP_StreamerEffect_Beacon.BP_StreamerEffect_Beacon_C.ExecuteUbergraph_BP_StreamerEffect_Beacon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StreamerEffect_Beacon_C::ExecuteUbergraph_BP_StreamerEffect_Beacon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StreamerEffect_Beacon_C", "ExecuteUbergraph_BP_StreamerEffect_Beacon");

	Params::BP_StreamerEffect_Beacon_C_ExecuteUbergraph_BP_StreamerEffect_Beacon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StreamerEffect_Beacon.BP_StreamerEffect_Beacon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StreamerEffect_Beacon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StreamerEffect_Beacon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
