#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_BankRobber

#include "Basic.hpp"

#include "BP_Character_BankRobber_classes.hpp"
#include "BP_Character_BankRobber_parameters.hpp"


namespace SDK
{

// Function BP_Character_BankRobber.BP_Character_BankRobber_C.ExecuteUbergraph_BP_Character_BankRobber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_BankRobber_C::ExecuteUbergraph_BP_Character_BankRobber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "ExecuteUbergraph_BP_Character_BankRobber");

	Params::BP_Character_BankRobber_C_ExecuteUbergraph_BP_Character_BankRobber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.SetTurretActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACACharacter_NPC*                 Turret                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_BankRobber_C::SetTurretActive(bool IsActive, const class ACACharacter_NPC*& Turret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "SetTurretActive");

	Params::BP_Character_BankRobber_C_SetTurretActive Parms{};

	Parms.IsActive = IsActive;
	Parms.Turret = Turret;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.TurretDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_BankRobber_C::TurretDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "TurretDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_BankRobber_C::BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature(const struct FGameplayTag& Tag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature");

	Params::BP_Character_BankRobber_C_BndEvt__m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnTurretDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Character_BankRobber_C::OnTurretDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "OnTurretDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.SetTurretHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Character_BankRobber_C::SetTurretHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "SetTurretHealth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnRep_TurretProperlyDestroyed
// (BlueprintCallable, BlueprintEvent)

void ABP_Character_BankRobber_C::OnRep_TurretProperlyDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "OnRep_TurretProperlyDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkedHit                    Networked_hit                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           Killer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Character_BankRobber_C::OnDeath(class ACACharacter* Character_0, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "OnDeath");

	Params::BP_Character_BankRobber_C_OnDeath Parms{};

	Parms.Character_0 = Character_0;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;
	Parms.Networked_hit = std::move(Networked_hit);
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_BankRobber_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Character_BankRobber.BP_Character_BankRobber_C.IsTurretDestroyed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    IsDestroyed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Character_BankRobber_C::IsTurretDestroyed(bool* IsDestroyed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Character_BankRobber_C", "IsTurretDestroyed");

	Params::BP_Character_BankRobber_C_IsTurretDestroyed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDestroyed != nullptr)
		*IsDestroyed = Parms.IsDestroyed;
}

}
