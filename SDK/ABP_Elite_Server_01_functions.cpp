#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Elite_Server_01

#include "Basic.hpp"

#include "ABP_Elite_Server_01_classes.hpp"
#include "ABP_Elite_Server_01_parameters.hpp"


namespace SDK
{

// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.ExecuteUbergraph_ABP_Elite_Server_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Elite_Server_01_C::ExecuteUbergraph_ABP_Elite_Server_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "ExecuteUbergraph_ABP_Elite_Server_01");

	Params::ABP_Elite_Server_01_C_ExecuteUbergraph_ABP_Elite_Server_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.OnPoolStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_in_pool                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_Elite_Server_01_C::OnPoolStateChanged(bool Is_in_pool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "OnPoolStateChanged");

	Params::ABP_Elite_Server_01_C_OnPoolStateChanged Parms{};

	Parms.Is_in_pool = Is_in_pool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkedHit                    Networked_hit                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           Killer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Elite_Server_01_C::OnDeath(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "OnDeath");

	Params::ABP_Elite_Server_01_C_OnDeath Parms{};

	Parms.Character = Character;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;
	Parms.Networked_hit = std::move(Networked_hit);
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.OnEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Elite_Server_01_C::OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "OnEndOverlap");

	Params::ABP_Elite_Server_01_C_OnEndOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.OnBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Elite_Server_01_C::OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "OnBeginOverlap");

	Params::ABP_Elite_Server_01_C_OnBeginOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Elite_Server_01_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Elite_Server_01_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "BlueprintUpdateAnimation");

	Params::ABP_Elite_Server_01_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Elite_Server_01.ABP_Elite_Server_01_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Elite_Server_01_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Elite_Server_01_C", "AnimGraph");

	Params::ABP_Elite_Server_01_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

