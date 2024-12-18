#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Heist_Contract_GM

#include "Basic.hpp"

#include "BP_Heist_Contract_GM_classes.hpp"
#include "BP_Heist_Contract_GM_parameters.hpp"


namespace SDK
{

// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.ExecuteUbergraph_BP_Heist_Contract_GM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Heist_Contract_GM_C::ExecuteUbergraph_BP_Heist_Contract_GM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "ExecuteUbergraph_BP_Heist_Contract_GM");

	Params::BP_Heist_Contract_GM_C_ExecuteUbergraph_BP_Heist_Contract_GM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.VaultRaided
// (BlueprintCallable, BlueprintEvent)

void ABP_Heist_Contract_GM_C::VaultRaided()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "VaultRaided");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.DEBUGEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_Heist_Contract_GM_C::DEBUGEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "DEBUGEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.VaultEmptied
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Heist_Contract_GM_C::VaultEmptied()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "VaultEmptied");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.OnGameTimerFinish
// (Event, Public, BlueprintEvent)

void ABP_Heist_Contract_GM_C::OnGameTimerFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "OnGameTimerFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.StartGame
// (Event, Public, BlueprintEvent)

void ABP_Heist_Contract_GM_C::StartGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "StartGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.TeamRevealEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Heist_Contract_GM_C::TeamRevealEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "TeamRevealEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.Check If Event Can Be Activated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanBeActivated                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Heist_Contract_GM_C::Check_If_Event_Can_Be_Activated(bool* CanBeActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "Check If Event Can Be Activated");

	Params::BP_Heist_Contract_GM_C_Check_If_Event_Can_Be_Activated Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanBeActivated != nullptr)
		*CanBeActivated = Parms.CanBeActivated;
}


// Function BP_Heist_Contract_GM.BP_Heist_Contract_GM_C.FindAndActivateEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Heist_Contract_GM_C::FindAndActivateEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Heist_Contract_GM_C", "FindAndActivateEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

