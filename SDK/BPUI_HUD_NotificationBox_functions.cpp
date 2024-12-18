#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_NotificationBox

#include "Basic.hpp"

#include "BPUI_HUD_NotificationBox_classes.hpp"
#include "BPUI_HUD_NotificationBox_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnDismiss__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::OnDismiss__DelegateSignature(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnDismiss__DelegateSignature");

	Params::BPUI_HUD_NotificationBox_C_OnDismiss__DelegateSignature Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ExecuteUbergraph_BPUI_HUD_NotificationBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::ExecuteUbergraph_BPUI_HUD_NotificationBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ExecuteUbergraph_BPUI_HUD_NotificationBox");

	Params::BPUI_HUD_NotificationBox_C_ExecuteUbergraph_BPUI_HUD_NotificationBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowSkipTutorial
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowSkipTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowSkipTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowExitGame
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowExitGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowExitGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnConfirm
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnCancel
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnThirdOption
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::OnThirdOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnThirdOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.BndEvt__confirm_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::BndEvt__confirm_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "BndEvt__confirm_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_NotificationBox_C_BndEvt__confirm_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowReturnToFrontend
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowReturnToFrontend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowReturnToFrontend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowResetToDefaults
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowResetToDefaults()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowResetToDefaults");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowSaveOptions
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowSaveOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowSaveOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.BndEvt__BPUI_HUD_NotificationBox_third_option_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::BndEvt__BPUI_HUD_NotificationBox_third_option_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "BndEvt__BPUI_HUD_NotificationBox_third_option_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_NotificationBox_C_BndEvt__BPUI_HUD_NotificationBox_third_option_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.SetFocusOnButton
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::SetFocusOnButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "SetFocusOnButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.SetMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAText                          CAText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Text_to_inject                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPUI_HUD_NotificationBox_C::SetMsg(const struct FCAText& CAText, const class FText& Text_to_inject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "SetMsg");

	Params::BPUI_HUD_NotificationBox_C_SetMsg Parms{};

	Parms.CAText = std::move(CAText);
	Parms.Text_to_inject = std::move(Text_to_inject);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.SetTitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAText                          CAText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPUI_HUD_NotificationBox_C::SetTitle(const struct FCAText& CAText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "SetTitle");

	Params::BPUI_HUD_NotificationBox_C_SetTitle Parms{};

	Parms.CAText = std::move(CAText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.Show
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::Hide(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "Hide");

	Params::BPUI_HUD_NotificationBox_C_Hide Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowCanNotRebind
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowCanNotRebind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowCanNotRebind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowKeyAlreadyBound
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowKeyAlreadyBound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowKeyAlreadyBound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ShowDiscardChanges
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_NotificationBox_C::ShowDiscardChanges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ShowDiscardChanges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.SetFromData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text_to_inject                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPUI_HUD_NotificationBox_C::SetFromData(class FName Id, const class FText& Text_to_inject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "SetFromData");

	Params::BPUI_HUD_NotificationBox_C_SetFromData Parms{};

	Parms.Id = Id;
	Parms.Text_to_inject = std::move(Text_to_inject);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.BndEvt__cancel_button_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_NotificationBox_C::BndEvt__cancel_button_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "BndEvt__cancel_button_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_NotificationBox_C_BndEvt__cancel_button_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPUI_HUD_NotificationBox_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnMouseButtonUp");

	Params::BPUI_HUD_NotificationBox_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPUI_HUD_NotificationBox_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "OnMouseButtonDown");

	Params::BPUI_HUD_NotificationBox_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.GetMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (Parm, OutParm)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_NotificationBox_C::GetMessage(class FName Id, class FText* Message, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "GetMessage");

	Params::BPUI_HUD_NotificationBox_C_GetMessage Parms{};

	Parms.Id = Id;

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BPUI_HUD_NotificationBox.BPUI_HUD_NotificationBox_C.ConfigureButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCABaseHUDActionElement*          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCAText                          Ca_text                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPUI_HUD_NotificationBox_C::ConfigureButton(class UCABaseHUDActionElement* Target, const struct FCAText& Ca_text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_NotificationBox_C", "ConfigureButton");

	Params::BPUI_HUD_NotificationBox_C_ConfigureButton Parms{};

	Parms.Target = Target;
	Parms.Ca_text = std::move(Ca_text);

	UObject::ProcessEvent(Func, &Parms);
}

}

