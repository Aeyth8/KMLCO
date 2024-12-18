#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ExplosionFuelBarrel

#include "Basic.hpp"

#include "BP_ExplosionFuelBarrel_classes.hpp"
#include "BP_ExplosionFuelBarrel_parameters.hpp"


namespace SDK
{

// Function BP_ExplosionFuelBarrel.BP_ExplosionFuelBarrel_C.ExecuteUbergraph_BP_ExplosionFuelBarrel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionFuelBarrel_C::ExecuteUbergraph_BP_ExplosionFuelBarrel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionFuelBarrel_C", "ExecuteUbergraph_BP_ExplosionFuelBarrel");

	Params::BP_ExplosionFuelBarrel_C_ExecuteUbergraph_BP_ExplosionFuelBarrel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionFuelBarrel.BP_ExplosionFuelBarrel_C.OnTrigger
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Epicenter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Attached_to_surface                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Surface_normal                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Incoming_direction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Friendly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplosionFuelBarrel_C::OnTrigger(const struct FVector& Epicenter, float Radius, bool Attached_to_surface, const struct FVector& Surface_normal, const struct FVector& Incoming_direction, bool Friendly, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionFuelBarrel_C", "OnTrigger");

	Params::BP_ExplosionFuelBarrel_C_OnTrigger Parms{};

	Parms.Epicenter = std::move(Epicenter);
	Parms.Radius = Radius;
	Parms.Attached_to_surface = Attached_to_surface;
	Parms.Surface_normal = std::move(Surface_normal);
	Parms.Incoming_direction = std::move(Incoming_direction);
	Parms.Friendly = Friendly;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExplosionFuelBarrel.BP_ExplosionFuelBarrel_C.GroundFireRayCasts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhysicalSurface                        SurfaceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FCATraceAuxiliaryResult          AuxiliaryResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_ExplosionFuelBarrel_C::GroundFireRayCasts(EPhysicalSurface SurfaceType, const struct FHitResult& HitResult, const struct FCATraceAuxiliaryResult& AuxiliaryResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExplosionFuelBarrel_C", "GroundFireRayCasts");

	Params::BP_ExplosionFuelBarrel_C_GroundFireRayCasts Parms{};

	Parms.SurfaceType = SurfaceType;
	Parms.HitResult = std::move(HitResult);
	Parms.AuxiliaryResult = std::move(AuxiliaryResult);

	UObject::ProcessEvent(Func, &Parms);
}

}

