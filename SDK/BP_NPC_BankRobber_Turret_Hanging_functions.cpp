#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_BankRobber_Turret_Hanging

#include "Basic.hpp"

#include "BP_NPC_BankRobber_Turret_Hanging_classes.hpp"
#include "BP_NPC_BankRobber_Turret_Hanging_parameters.hpp"


namespace SDK
{

// Function BP_NPC_BankRobber_Turret_Hanging.BP_NPC_BankRobber_Turret_Hanging_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_BankRobber_Turret_Hanging_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_BankRobber_Turret_Hanging_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_BankRobber_Turret_Hanging.BP_NPC_BankRobber_Turret_Hanging_C.OnPoolStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Is_in_pool                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_BankRobber_Turret_Hanging_C::OnPoolStatusChanged(bool Is_in_pool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_BankRobber_Turret_Hanging_C", "OnPoolStatusChanged");

	Params::BP_NPC_BankRobber_Turret_Hanging_C_OnPoolStatusChanged Parms{};

	Parms.Is_in_pool = Is_in_pool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_BankRobber_Turret_Hanging.BP_NPC_BankRobber_Turret_Hanging_C.TeleportInVFX
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_BankRobber_Turret_Hanging_C::TeleportInVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_BankRobber_Turret_Hanging_C", "TeleportInVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_BankRobber_Turret_Hanging.BP_NPC_BankRobber_Turret_Hanging_C.ExecuteUbergraph_BP_NPC_BankRobber_Turret_Hanging
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_BankRobber_Turret_Hanging_C::ExecuteUbergraph_BP_NPC_BankRobber_Turret_Hanging(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_BankRobber_Turret_Hanging_C", "ExecuteUbergraph_BP_NPC_BankRobber_Turret_Hanging");

	Params::BP_NPC_BankRobber_Turret_Hanging_C_ExecuteUbergraph_BP_NPC_BankRobber_Turret_Hanging Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

