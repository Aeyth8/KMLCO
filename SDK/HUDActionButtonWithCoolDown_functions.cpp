#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDActionButtonWithCoolDown

#include "Basic.hpp"

#include "HUDActionButtonWithCoolDown_classes.hpp"
#include "HUDActionButtonWithCoolDown_parameters.hpp"


namespace SDK
{

// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.ExecuteUbergraph_HUDActionButtonWithCoolDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDActionButtonWithCoolDown_C::ExecuteUbergraph_HUDActionButtonWithCoolDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "ExecuteUbergraph_HUDActionButtonWithCoolDown");

	Params::HUDActionButtonWithCoolDown_C_ExecuteUbergraph_HUDActionButtonWithCoolDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnInputChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Is_controller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECAInputMode                            Input_mode                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDActionButtonWithCoolDown_C::OnInputChanged(bool Is_controller, const ECAInputMode Input_mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnInputChanged");

	Params::HUDActionButtonWithCoolDown_C_OnInputChanged Parms{};

	Parms.Is_controller = Is_controller;
	Parms.Input_mode = Input_mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.SetUnfocusedState
// (BlueprintCallable, BlueprintEvent)

void UHUDActionButtonWithCoolDown_C::SetUnfocusedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "SetUnfocusedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.SetFocusedState
// (BlueprintCallable, BlueprintEvent)

void UHUDActionButtonWithCoolDown_C::SetFocusedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "SetFocusedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnUserSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Using_mouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDActionButtonWithCoolDown_C::OnUserSelected(bool Using_mouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnUserSelected");

	Params::HUDActionButtonWithCoolDown_C_OnUserSelected Parms{};

	Parms.Using_mouse = Using_mouse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDActionButtonWithCoolDown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUDActionButtonWithCoolDown_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnMouseEnter");

	Params::HUDActionButtonWithCoolDown_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUDActionButtonWithCoolDown_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnMouseLeave");

	Params::HUDActionButtonWithCoolDown_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.BndEvt__m_internal_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHUDActionButtonWithCoolDown_C::BndEvt__m_internal_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "BndEvt__m_internal_button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnUserLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Using_mouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDActionButtonWithCoolDown_C::OnUserLostFocus(bool Using_mouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnUserLostFocus");

	Params::HUDActionButtonWithCoolDown_C_OnUserLostFocus Parms{};

	Parms.Using_mouse = Using_mouse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDActionButtonWithCoolDown.HUDActionButtonWithCoolDown_C.OnUserFocused
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Using_mouse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDActionButtonWithCoolDown_C::OnUserFocused(bool Using_mouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDActionButtonWithCoolDown_C", "OnUserFocused");

	Params::HUDActionButtonWithCoolDown_C_OnUserFocused Parms{};

	Parms.Using_mouse = Using_mouse;

	UObject::ProcessEvent(Func, &Parms);
}

}
