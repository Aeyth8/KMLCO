#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EliteExosuit_AudioComponent

#include "Basic.hpp"

#include "BP_EliteExosuit_AudioComponent_classes.hpp"
#include "BP_EliteExosuit_AudioComponent_parameters.hpp"


namespace SDK
{

// Function BP_EliteExosuit_AudioComponent.BP_EliteExosuit_AudioComponent_C.ExecuteUbergraph_BP_EliteExosuit_AudioComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EliteExosuit_AudioComponent_C::ExecuteUbergraph_BP_EliteExosuit_AudioComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EliteExosuit_AudioComponent_C", "ExecuteUbergraph_BP_EliteExosuit_AudioComponent");

	Params::BP_EliteExosuit_AudioComponent_C_ExecuteUbergraph_BP_EliteExosuit_AudioComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EliteExosuit_AudioComponent.BP_EliteExosuit_AudioComponent_C.OnDeath-New
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkedHit                    Networked_hit                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           Killer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EliteExosuit_AudioComponent_C::OnDeathMinusNew(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EliteExosuit_AudioComponent_C", "OnDeath-New");

	Params::BP_EliteExosuit_AudioComponent_C_OnDeathMinusNew Parms{};

	Parms.Character = Character;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;
	Parms.Networked_hit = std::move(Networked_hit);
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EliteExosuit_AudioComponent.BP_EliteExosuit_AudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EliteExosuit_AudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EliteExosuit_AudioComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EliteExosuit_AudioComponent.BP_EliteExosuit_AudioComponent_C.OnAwarenessStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECAAwarenessState                       New_Awareness_State                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EliteExosuit_AudioComponent_C::OnAwarenessStateChanged(ECAAwarenessState New_Awareness_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EliteExosuit_AudioComponent_C", "OnAwarenessStateChanged");

	Params::BP_EliteExosuit_AudioComponent_C_OnAwarenessStateChanged Parms{};

	Parms.New_Awareness_State = New_Awareness_State;

	UObject::ProcessEvent(Func, &Parms);
}

}
