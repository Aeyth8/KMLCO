#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlMapPanel

#include "Basic.hpp"

#include "ControlMapPanel_classes.hpp"
#include "ControlMapPanel_parameters.hpp"


namespace SDK
{

// Function ControlMapPanel.ControlMapPanel_C.ExecuteUbergraph_ControlMapPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlMapPanel_C::ExecuteUbergraph_ControlMapPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlMapPanel_C", "ExecuteUbergraph_ControlMapPanel");

	Params::ControlMapPanel_C_ExecuteUbergraph_ControlMapPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlMapPanel.ControlMapPanel_C.OnInputModeChanged
// (Event, Public, BlueprintEvent)

void UControlMapPanel_C::OnInputModeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlMapPanel_C", "OnInputModeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlMapPanel.ControlMapPanel_C.OnShow
// (BlueprintCallable, BlueprintEvent)

void UControlMapPanel_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlMapPanel_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControlMapPanel.ControlMapPanel_C.InitialiseBasedOnControlMode
// (Public, BlueprintCallable, BlueprintEvent)

void UControlMapPanel_C::InitialiseBasedOnControlMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlMapPanel_C", "InitialiseBasedOnControlMode");

	UObject::ProcessEvent(Func, nullptr);
}

}

