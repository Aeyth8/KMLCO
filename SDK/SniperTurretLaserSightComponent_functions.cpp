#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SniperTurretLaserSightComponent

#include "Basic.hpp"

#include "SniperTurretLaserSightComponent_classes.hpp"
#include "SniperTurretLaserSightComponent_parameters.hpp"


namespace SDK
{

// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.ExecuteUbergraph_SniperTurretLaserSightComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USniperTurretLaserSightComponent_C::ExecuteUbergraph_SniperTurretLaserSightComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SniperTurretLaserSightComponent_C", "ExecuteUbergraph_SniperTurretLaserSightComponent");

	Params::SniperTurretLaserSightComponent_C_ExecuteUbergraph_SniperTurretLaserSightComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void USniperTurretLaserSightComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SniperTurretLaserSightComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USniperTurretLaserSightComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SniperTurretLaserSightComponent_C", "ReceiveTick");

	Params::SniperTurretLaserSightComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SniperTurretLaserSightComponent.SniperTurretLaserSightComponent_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void USniperTurretLaserSightComponent_C::OnRep_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SniperTurretLaserSightComponent_C", "OnRep_State");

	UObject::ProcessEvent(Func, nullptr);
}

}
