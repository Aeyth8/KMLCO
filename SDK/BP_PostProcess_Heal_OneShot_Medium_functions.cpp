#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Heal_OneShot_Medium

#include "Basic.hpp"

#include "BP_PostProcess_Heal_OneShot_Medium_classes.hpp"
#include "BP_PostProcess_Heal_OneShot_Medium_parameters.hpp"


namespace SDK
{

// Function BP_PostProcess_Heal_OneShot_Medium.BP_PostProcess_Heal_OneShot_Medium_C.ExecuteUbergraph_BP_PostProcess_Heal_OneShot_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void BP_PostProcess_Heal_OneShot_Medium::ABP_PostProcess_Heal_OneShot_Medium_C::ExecuteUbergraph_BP_PostProcess_Heal_OneShot_Medium(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Heal_OneShot_Medium_C", "ExecuteUbergraph_BP_PostProcess_Heal_OneShot_Medium");

	Params::BP_PostProcess_Heal_OneShot_Medium_C_ExecuteUbergraph_BP_PostProcess_Heal_OneShot_Medium Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcess_Heal_OneShot_Medium.BP_PostProcess_Heal_OneShot_Medium_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void BP_PostProcess_Heal_OneShot_Medium::ABP_PostProcess_Heal_OneShot_Medium_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Heal_OneShot_Medium_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Heal_OneShot_Medium.BP_PostProcess_Heal_OneShot_Medium_C.OnPlay
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void BP_PostProcess_Heal_OneShot_Medium::ABP_PostProcess_Heal_OneShot_Medium_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Heal_OneShot_Medium_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Heal_OneShot_Medium.BP_PostProcess_Heal_OneShot_Medium_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void BP_PostProcess_Heal_OneShot_Medium::ABP_PostProcess_Heal_OneShot_Medium_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Heal_OneShot_Medium_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcess_Heal_OneShot_Medium.BP_PostProcess_Heal_OneShot_Medium_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void BP_PostProcess_Heal_OneShot_Medium::ABP_PostProcess_Heal_OneShot_Medium_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcess_Heal_OneShot_Medium_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

