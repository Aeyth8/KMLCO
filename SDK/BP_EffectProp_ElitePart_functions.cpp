#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EffectProp_ElitePart

#include "Basic.hpp"

#include "BP_EffectProp_ElitePart_classes.hpp"
#include "BP_EffectProp_ElitePart_parameters.hpp"


namespace SDK
{

// Function BP_EffectProp_ElitePart.BP_EffectProp_ElitePart_C.ExecuteUbergraph_BP_EffectProp_ElitePart
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffectProp_ElitePart_C::ExecuteUbergraph_BP_EffectProp_ElitePart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectProp_ElitePart_C", "ExecuteUbergraph_BP_EffectProp_ElitePart");

	Params::BP_EffectProp_ElitePart_C_ExecuteUbergraph_BP_EffectProp_ElitePart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EffectProp_ElitePart.BP_EffectProp_ElitePart_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EffectProp_ElitePart_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectProp_ElitePart_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EffectProp_ElitePart.BP_EffectProp_ElitePart_C.OnSplat
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   Splat_counter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Hit_component                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other_actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Other_comp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal_impulse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_EffectProp_ElitePart_C::OnSplat(int32 Splat_counter, class UPrimitiveComponent* Hit_component, class AActor* Other_actor, class UPrimitiveComponent* Other_comp, const struct FVector& Normal_impulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EffectProp_ElitePart_C", "OnSplat");

	Params::BP_EffectProp_ElitePart_C_OnSplat Parms{};

	Parms.Splat_counter = Splat_counter;
	Parms.Hit_component = Hit_component;
	Parms.Other_actor = Other_actor;
	Parms.Other_comp = Other_comp;
	Parms.Normal_impulse = std::move(Normal_impulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}

