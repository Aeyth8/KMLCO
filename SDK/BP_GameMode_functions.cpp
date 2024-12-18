#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode

#include "Basic.hpp"

#include "BP_GameMode_classes.hpp"
#include "BP_GameMode_parameters.hpp"


namespace SDK
{

// Function BP_GameMode.BP_GameMode_C.ExecuteUbergraph_BP_GameMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_C::ExecuteUbergraph_BP_GameMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_C", "ExecuteUbergraph_BP_GameMode");

	Params::BP_GameMode_C_ExecuteUbergraph_BP_GameMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameMode.BP_GameMode_C.StartGame
// (Event, Public, BlueprintEvent)

void ABP_GameMode_C::StartGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameMode_C", "StartGame");

	UObject::ProcessEvent(Func, nullptr);
}

}

