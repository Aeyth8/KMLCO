#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Common_SecondaryButton

#include "Basic.hpp"

#include "Common_SecondaryButton_classes.hpp"
#include "Common_SecondaryButton_parameters.hpp"


namespace SDK
{

// Function Common_SecondaryButton.Common_SecondaryButton_C.ExecuteUbergraph_Common_SecondaryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommon_SecondaryButton_C::ExecuteUbergraph_Common_SecondaryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "ExecuteUbergraph_Common_SecondaryButton");

	Params::Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommon_SecondaryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "PreConstruct");

	Params::Common_SecondaryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.BndEvt__Common_SecondaryButton_m_internal_button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCommon_SecondaryButton_C::BndEvt__Common_SecondaryButton_m_internal_button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "BndEvt__Common_SecondaryButton_m_internal_button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.BndEvt__Common_CTAButton_m_internal_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommon_SecondaryButton_C::BndEvt__Common_CTAButton_m_internal_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "BndEvt__Common_CTAButton_m_internal_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.SetUnfocusedState
// (BlueprintCallable, BlueprintEvent)

void UCommon_SecondaryButton_C::SetUnfocusedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "SetUnfocusedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.SetFocusedState
// (BlueprintCallable, BlueprintEvent)

void UCommon_SecondaryButton_C::SetFocusedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "SetFocusedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommon_SecondaryButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "OnMouseEnter");

	Params::Common_SecondaryButton_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommon_SecondaryButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "OnMouseLeave");

	Params::Common_SecondaryButton_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Common_SecondaryButton.Common_SecondaryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommon_SecondaryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Common_SecondaryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
