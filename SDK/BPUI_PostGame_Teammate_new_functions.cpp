#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_PostGame_Teammate_new

#include "Basic.hpp"

#include "BPUI_PostGame_Teammate_new_classes.hpp"
#include "BPUI_PostGame_Teammate_new_parameters.hpp"


namespace SDK
{

// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.ExecuteUbergraph_BPUI_PostGame_Teammate_new
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_PostGame_Teammate_new_C::ExecuteUbergraph_BPUI_PostGame_Teammate_new(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "ExecuteUbergraph_BPUI_PostGame_Teammate_new");

	Params::BPUI_PostGame_Teammate_new_C_ExecuteUbergraph_BPUI_PostGame_Teammate_new Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPUI_PostGame_Teammate_new_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.OnPlayerDisconnected
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECAEndGameReason                        M_end_game_reason                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_PostGame_Teammate_new_C::OnPlayerDisconnected(ECAEndGameReason M_end_game_reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "OnPlayerDisconnected");

	Params::BPUI_PostGame_Teammate_new_C_OnPlayerDisconnected Parms{};

	Parms.M_end_game_reason = M_end_game_reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.OnPlayerTimedOut
// (Event, Protected, BlueprintEvent)

void UBPUI_PostGame_Teammate_new_C::OnPlayerTimedOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "OnPlayerTimedOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.OnPlayerKilled
// (Event, Protected, BlueprintEvent)

void UBPUI_PostGame_Teammate_new_C::OnPlayerKilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "OnPlayerKilled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_PostGame_Teammate_new.BPUI_PostGame_Teammate_new_C.OnPlayerExtracted
// (Event, Protected, BlueprintEvent)

void UBPUI_PostGame_Teammate_new_C::OnPlayerExtracted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_PostGame_Teammate_new_C", "OnPlayerExtracted");

	UObject::ProcessEvent(Func, nullptr);
}

}
