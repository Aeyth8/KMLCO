#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_NPCLootSpawner

#include "Basic.hpp"

#include "BPC_NPCLootSpawner_classes.hpp"
#include "BPC_NPCLootSpawner_parameters.hpp"


namespace SDK
{

// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.ExecuteUbergraph_BPC_NPCLootSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_NPCLootSpawner_C::ExecuteUbergraph_BPC_NPCLootSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "ExecuteUbergraph_BPC_NPCLootSpawner");

	Params::BPC_NPCLootSpawner_C_ExecuteUbergraph_BPC_NPCLootSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.OnPickupSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACAPickUp*                        Pickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_NPCLootSpawner_C::OnPickupSpawned(class ACAPickUp* Pickup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "OnPickupSpawned");

	Params::BPC_NPCLootSpawner_C_OnPickupSpawned Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCARewardsForBlueprintStruct     Rewards                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_NPCLootSpawner_C::Callback(const struct FCARewardsForBlueprintStruct& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "Callback");

	Params::BPC_NPCLootSpawner_C_Callback Parms{};

	Parms.Rewards = std::move(Rewards);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.SpawnLoot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpec              Killing_effect_spec                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Delta_value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_NPCLootSpawner_C::SpawnLoot(const struct FGameplayEffectSpec& Killing_effect_spec, float Delta_value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "SpawnLoot");

	Params::BPC_NPCLootSpawner_C_SpawnLoot Parms{};

	Parms.Killing_effect_spec = std::move(Killing_effect_spec);
	Parms.Delta_value = Delta_value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_NPCLootSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.CreateThrowDirectionsForPickups
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PickUpsNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_NPCLootSpawner_C::CreateThrowDirectionsForPickups(int32 PickUpsNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "CreateThrowDirectionsForPickups");

	Params::BPC_NPCLootSpawner_C_CreateThrowDirectionsForPickups Parms{};

	Parms.PickUpsNumber = PickUpsNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_NPCLootSpawner.BPC_NPCLootSpawner_C.CreateLootDropRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_NPCLootSpawner_C::CreateLootDropRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_NPCLootSpawner_C", "CreateLootDropRequest");

	UObject::ProcessEvent(Func, nullptr);
}

}

