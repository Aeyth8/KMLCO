#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CAAIController_SemiAutoTurret

#include "Basic.hpp"

#include "BP_CAAIController_SemiAutoTurret_classes.hpp"
#include "BP_CAAIController_SemiAutoTurret_parameters.hpp"


namespace SDK
{

// Function BP_CAAIController_SemiAutoTurret.BP_CAAIController_SemiAutoTurret_C.ExecuteUbergraph_BP_CAAIController_SemiAutoTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAAIController_SemiAutoTurret_C::ExecuteUbergraph_BP_CAAIController_SemiAutoTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CAAIController_SemiAutoTurret_C", "ExecuteUbergraph_BP_CAAIController_SemiAutoTurret");

	Params::BP_CAAIController_SemiAutoTurret_C_ExecuteUbergraph_BP_CAAIController_SemiAutoTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CAAIController_SemiAutoTurret.BP_CAAIController_SemiAutoTurret_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CAAIController_SemiAutoTurret_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CAAIController_SemiAutoTurret_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

