#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsProp

#include "Basic.hpp"

#include "BP_PhysicsProp_classes.hpp"
#include "BP_PhysicsProp_parameters.hpp"


namespace SDK
{

// Function BP_PhysicsProp.BP_PhysicsProp_C.ExecuteUbergraph_BP_PhysicsProp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysicsProp_C::ExecuteUbergraph_BP_PhysicsProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsProp_C", "ExecuteUbergraph_BP_PhysicsProp");

	Params::BP_PhysicsProp_C_ExecuteUbergraph_BP_PhysicsProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysicsProp.BP_PhysicsProp_C.AddImpulseToPhysicObject
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                          Impulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysicsProp_C::AddImpulseToPhysicObject(const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsProp_C", "AddImpulseToPhysicObject");

	Params::BP_PhysicsProp_C_AddImpulseToPhysicObject Parms{};

	Parms.Impulse = std::move(Impulse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysicsProp.BP_PhysicsProp_C.SetPhysicsObjectConfig
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCAGameDatabaseRowHandle         Config                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PhysicsProp_C::SetPhysicsObjectConfig(const struct FCAGameDatabaseRowHandle& Config)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsProp_C", "SetPhysicsObjectConfig");

	Params::BP_PhysicsProp_C_SetPhysicsObjectConfig Parms{};

	Parms.Config = std::move(Config);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysicsProp.BP_PhysicsProp_C.BndEvt__CACollision_K2Node_ComponentBoundEvent_0_SceneComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class USceneComponent*                  OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PhysicsProp_C::BndEvt__CACollision_K2Node_ComponentBoundEvent_0_SceneComponentBeginOverlapSignature__DelegateSignature(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsProp_C", "BndEvt__CACollision_K2Node_ComponentBoundEvent_0_SceneComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PhysicsProp_C_BndEvt__CACollision_K2Node_ComponentBoundEvent_0_SceneComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysicsProp.BP_PhysicsProp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhysicsProp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysicsProp_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
