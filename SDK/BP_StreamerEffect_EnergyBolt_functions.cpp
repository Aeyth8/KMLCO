#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StreamerEffect_EnergyBolt

#include "Basic.hpp"

#include "BP_StreamerEffect_EnergyBolt_classes.hpp"
#include "BP_StreamerEffect_EnergyBolt_parameters.hpp"


namespace SDK
{

// Function BP_StreamerEffect_EnergyBolt.BP_StreamerEffect_EnergyBolt_C.ExecuteUbergraph_BP_StreamerEffect_EnergyBolt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StreamerEffect_EnergyBolt_C::ExecuteUbergraph_BP_StreamerEffect_EnergyBolt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StreamerEffect_EnergyBolt_C", "ExecuteUbergraph_BP_StreamerEffect_EnergyBolt");

	Params::BP_StreamerEffect_EnergyBolt_C_ExecuteUbergraph_BP_StreamerEffect_EnergyBolt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StreamerEffect_EnergyBolt.BP_StreamerEffect_EnergyBolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StreamerEffect_EnergyBolt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StreamerEffect_EnergyBolt_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StreamerEffect_EnergyBolt.BP_StreamerEffect_EnergyBolt_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StreamerEffect_EnergyBolt_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StreamerEffect_EnergyBolt_C", "ReceiveTick");

	Params::BP_StreamerEffect_EnergyBolt_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
