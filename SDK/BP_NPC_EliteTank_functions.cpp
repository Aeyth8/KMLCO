#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_EliteTank

#include "Basic.hpp"

#include "BP_NPC_EliteTank_classes.hpp"
#include "BP_NPC_EliteTank_parameters.hpp"


namespace SDK
{

// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_EliteTank_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_EliteTank_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkedHit                    Networked_hit                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           Killer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_EliteTank_C::OnDeath(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "OnDeath");

	Params::BP_NPC_EliteTank_C_OnDeath Parms{};

	Parms.Character = Character;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;
	Parms.Networked_hit = std::move(Networked_hit);
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.OnHitReceived
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCADamageEffectInfo              Damage_effect_info                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_NPC_EliteTank_C::OnHitReceived(const struct FCADamageEffectInfo& Damage_effect_info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "OnHitReceived");

	Params::BP_NPC_EliteTank_C_OnHitReceived Parms{};

	Parms.Damage_effect_info = std::move(Damage_effect_info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.Special Ability State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_active                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_EliteTank_C::Special_Ability_State_Changed(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "Special Ability State Changed");

	Params::BP_NPC_EliteTank_C_Special_Ability_State_Changed Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.Hide Shield
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_EliteTank_C::Hide_Shield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "Hide Shield");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.OnCollisionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_EliteTank_C::OnCollisionStateChanged(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "OnCollisionStateChanged");

	Params::BP_NPC_EliteTank_C_OnCollisionStateChanged Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.TryEnableShieldCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NPC_EliteTank_C::TryEnableShieldCollision(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "TryEnableShieldCollision");

	Params::BP_NPC_EliteTank_C_TryEnableShieldCollision Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_EliteTank_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "ReceiveTick");

	Params::BP_NPC_EliteTank_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPC_EliteTank.BP_NPC_EliteTank_C.ExecuteUbergraph_BP_NPC_EliteTank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_EliteTank_C::ExecuteUbergraph_BP_NPC_EliteTank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPC_EliteTank_C", "ExecuteUbergraph_BP_NPC_EliteTank");

	Params::BP_NPC_EliteTank_C_ExecuteUbergraph_BP_NPC_EliteTank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
