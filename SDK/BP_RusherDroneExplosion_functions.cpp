#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RusherDroneExplosion

#include "Basic.hpp"

#include "BP_RusherDroneExplosion_classes.hpp"
#include "BP_RusherDroneExplosion_parameters.hpp"


namespace SDK
{

// Function BP_RusherDroneExplosion.BP_RusherDroneExplosion_C.ExecuteUbergraph_BP_RusherDroneExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RusherDroneExplosion_C::ExecuteUbergraph_BP_RusherDroneExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RusherDroneExplosion_C", "ExecuteUbergraph_BP_RusherDroneExplosion");

	Params::BP_RusherDroneExplosion_C_ExecuteUbergraph_BP_RusherDroneExplosion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RusherDroneExplosion.BP_RusherDroneExplosion_C.OnTrigger
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Epicenter_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Attached_to_surface                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Surface_normal                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Incoming_direction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Friendly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RusherDroneExplosion_C::OnTrigger(const struct FVector& Epicenter_0, float Radius_0, bool Attached_to_surface, const struct FVector& Surface_normal, const struct FVector& Incoming_direction, bool Friendly, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RusherDroneExplosion_C", "OnTrigger");

	Params::BP_RusherDroneExplosion_C_OnTrigger Parms{};

	Parms.Epicenter_0 = std::move(Epicenter_0);
	Parms.Radius_0 = Radius_0;
	Parms.Attached_to_surface = Attached_to_surface;
	Parms.Surface_normal = std::move(Surface_normal);
	Parms.Incoming_direction = std::move(Incoming_direction);
	Parms.Friendly = Friendly;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}

