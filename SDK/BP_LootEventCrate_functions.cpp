#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootEventCrate

#include "Basic.hpp"

#include "BP_LootEventCrate_classes.hpp"
#include "BP_LootEventCrate_parameters.hpp"


namespace SDK
{

// Function BP_LootEventCrate.BP_LootEventCrate_C.ExecuteUbergraph_BP_LootEventCrate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LootEventCrate_C::ExecuteUbergraph_BP_LootEventCrate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootEventCrate_C", "ExecuteUbergraph_BP_LootEventCrate");

	Params::BP_LootEventCrate_C_ExecuteUbergraph_BP_LootEventCrate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LootEventCrate.BP_LootEventCrate_C.BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_1_UseAbilityCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LootEventCrate_C::BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_1_UseAbilityCompleted__DelegateSignature(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootEventCrate_C", "BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_1_UseAbilityCompleted__DelegateSignature");

	Params::BP_LootEventCrate_C_BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_1_UseAbilityCompleted__DelegateSignature Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LootEventCrate.BP_LootEventCrate_C.BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_0_UseAbilityActivated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LootEventCrate_C::BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_0_UseAbilityActivated__DelegateSignature(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootEventCrate_C", "BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_0_UseAbilityActivated__DelegateSignature");

	Params::BP_LootEventCrate_C_BndEvt__BPC_UseableGadgetBox_K2Node_ComponentBoundEvent_0_UseAbilityActivated__DelegateSignature Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LootEventCrate.BP_LootEventCrate_C.SetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LootEventCrate_C::SetParent(class AActor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootEventCrate_C", "SetParent");

	Params::BP_LootEventCrate_C_SetParent Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LootEventCrate.BP_LootEventCrate_C.OnRep_IsCollisionEnabled
// (BlueprintCallable, BlueprintEvent)

void ABP_LootEventCrate_C::OnRep_IsCollisionEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LootEventCrate_C", "OnRep_IsCollisionEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

}
