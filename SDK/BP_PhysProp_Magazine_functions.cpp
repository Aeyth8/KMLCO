#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysProp_Magazine

#include "Basic.hpp"

#include "BP_PhysProp_Magazine_classes.hpp"
#include "BP_PhysProp_Magazine_parameters.hpp"


namespace SDK
{

// Function BP_PhysProp_Magazine.BP_PhysProp_Magazine_C.ExecuteUbergraph_BP_PhysProp_Magazine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysProp_Magazine_C::ExecuteUbergraph_BP_PhysProp_Magazine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysProp_Magazine_C", "ExecuteUbergraph_BP_PhysProp_Magazine");

	Params::BP_PhysProp_Magazine_C_ExecuteUbergraph_BP_PhysProp_Magazine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysProp_Magazine.BP_PhysProp_Magazine_C.CopyMaterialsFromParent
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysProp_Magazine_C::CopyMaterialsFromParent(class USkeletalMeshComponent* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysProp_Magazine_C", "CopyMaterialsFromParent");

	Params::BP_PhysProp_Magazine_C_CopyMaterialsFromParent Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhysProp_Magazine.BP_PhysProp_Magazine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhysProp_Magazine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysProp_Magazine_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PhysProp_Magazine.BP_PhysProp_Magazine_C.GetMaterialIndexFromParent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Child_Slot_Name                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhysProp_Magazine_C::GetMaterialIndexFromParent(class USkeletalMeshComponent* Parent, class FName Child_Slot_Name, int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhysProp_Magazine_C", "GetMaterialIndexFromParent");

	Params::BP_PhysProp_Magazine_C_GetMaterialIndexFromParent Parms{};

	Parms.Parent = Parent;
	Parms.Child_Slot_Name = Child_Slot_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}

}

