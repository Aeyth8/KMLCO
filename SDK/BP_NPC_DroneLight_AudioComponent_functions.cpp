#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_DroneLight_AudioComponent

#include "Basic.hpp"

#include "BP_NPC_DroneLight_AudioComponent_classes.hpp"
#include "BP_NPC_DroneLight_AudioComponent_parameters.hpp"


namespace SDK
{

// Function BP_NPC_DroneLight_AudioComponent.BP_NPC_DroneLight_AudioComponent_C.ExecuteUbergraph_BP_NPC_DroneLight_AudioComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPC_DroneLight_AudioComponent_C::ExecuteUbergraph_BP_NPC_DroneLight_AudioComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_DroneLight_AudioComponent_C", "ExecuteUbergraph_BP_NPC_DroneLight_AudioComponent");

	Params::BP_NPC_DroneLight_AudioComponent_C_ExecuteUbergraph_BP_NPC_DroneLight_AudioComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_DroneLight_AudioComponent.BP_NPC_DroneLight_AudioComponent_C.HackyTick
// (BlueprintCallable, BlueprintEvent)

void UBP_NPC_DroneLight_AudioComponent_C::HackyTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_DroneLight_AudioComponent_C", "HackyTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_DroneLight_AudioComponent.BP_NPC_DroneLight_AudioComponent_C.AwarenessStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECAAwarenessState                       NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPC_DroneLight_AudioComponent_C::AwarenessStateChange(ECAAwarenessState NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_DroneLight_AudioComponent_C", "AwarenessStateChange");

	Params::BP_NPC_DroneLight_AudioComponent_C_AwarenessStateChange Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_DroneLight_AudioComponent.BP_NPC_DroneLight_AudioComponent_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPC_DroneLight_AudioComponent_C::OnDeath(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_DroneLight_AudioComponent_C", "OnDeath");

	Params::BP_NPC_DroneLight_AudioComponent_C_OnDeath Parms{};

	Parms.Character = Character;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_DroneLight_AudioComponent.BP_NPC_DroneLight_AudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_NPC_DroneLight_AudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_DroneLight_AudioComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
