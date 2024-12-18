#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MuzzleEffect_GruntRocketeer

#include "Basic.hpp"

#include "BP_MuzzleEffect_GruntRocketeer_classes.hpp"
#include "BP_MuzzleEffect_GruntRocketeer_parameters.hpp"


namespace SDK
{

// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.ExecuteUbergraph_BP_MuzzleEffect_GruntRocketeer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MuzzleEffect_GruntRocketeer_C::ExecuteUbergraph_BP_MuzzleEffect_GruntRocketeer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "ExecuteUbergraph_BP_MuzzleEffect_GruntRocketeer");

	Params::BP_MuzzleEffect_GruntRocketeer_C_ExecuteUbergraph_BP_MuzzleEffect_GruntRocketeer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnPrimaryAction
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnPrimaryAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnSecondaryAction
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnSecondaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnSecondaryAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnEndCharging
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnEndCharging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnEndCharging");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnStartCharging
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MuzzleEffect_GruntRocketeer_C::OnStartCharging(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnStartCharging");

	Params::BP_MuzzleEffect_GruntRocketeer_C_OnStartCharging Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnFire
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnEquip
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnReload
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnReload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnReload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_GruntRocketeer.BP_MuzzleEffect_GruntRocketeer_C.OnIdle
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_GruntRocketeer_C::OnIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_GruntRocketeer_C", "OnIdle");

	UObject::ProcessEvent(Func, nullptr);
}

}

