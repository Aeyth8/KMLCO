#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartUp_HandleServicesViolation_FlowState

#include "Basic.hpp"

#include "StartUp_HandleServicesViolation_FlowState_classes.hpp"
#include "StartUp_HandleServicesViolation_FlowState_parameters.hpp"


namespace SDK
{

// Function StartUp_HandleServicesViolation_FlowState.StartUp_HandleServicesViolation_FlowState_C.ExecuteUbergraph_StartUp_HandleServicesViolation_FlowState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartUp_HandleServicesViolation_FlowState_C::ExecuteUbergraph_StartUp_HandleServicesViolation_FlowState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartUp_HandleServicesViolation_FlowState_C", "ExecuteUbergraph_StartUp_HandleServicesViolation_FlowState");

	Params::StartUp_HandleServicesViolation_FlowState_C_ExecuteUbergraph_StartUp_HandleServicesViolation_FlowState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StartUp_HandleServicesViolation_FlowState.StartUp_HandleServicesViolation_FlowState_C.OnNotificationRetry
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStartUp_HandleServicesViolation_FlowState_C::OnNotificationRetry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartUp_HandleServicesViolation_FlowState_C", "OnNotificationRetry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StartUp_HandleServicesViolation_FlowState.StartUp_HandleServicesViolation_FlowState_C.OnNotificationContinue
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStartUp_HandleServicesViolation_FlowState_C::OnNotificationContinue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartUp_HandleServicesViolation_FlowState_C", "OnNotificationContinue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StartUp_HandleServicesViolation_FlowState.StartUp_HandleServicesViolation_FlowState_C.OnEnterState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UStartUp_HandleServicesViolation_FlowState_C::OnEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StartUp_HandleServicesViolation_FlowState_C", "OnEnterState");

	UObject::ProcessEvent(Func, nullptr);
}

}

