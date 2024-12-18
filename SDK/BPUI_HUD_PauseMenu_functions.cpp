#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PauseMenu

#include "Basic.hpp"

#include "BPUI_HUD_PauseMenu_classes.hpp"
#include "BPUI_HUD_PauseMenu_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.PermissionToLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Granted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::PermissionToLeave__DelegateSignature(bool Granted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "PermissionToLeave__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_PermissionToLeave__DelegateSignature Parms{};

	Parms.Granted = Granted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ExecuteUbergraph_BPUI_HUD_PauseMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::ExecuteUbergraph_BPUI_HUD_PauseMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ExecuteUbergraph_BPUI_HUD_PauseMenu");

	Params::BPUI_HUD_PauseMenu_C_ExecuteUbergraph_BPUI_HUD_PauseMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.LeavePauseMenu
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::LeavePauseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "LeavePauseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ShowLeaveMatchButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::ShowLeaveMatchButton(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ShowLeaveMatchButton");

	Params::BPUI_HUD_PauseMenu_C_ShowLeaveMatchButton Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnInputDismissed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::OnInputDismissed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnInputDismissed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ShowReturnToMenuButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::ShowReturnToMenuButton(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ShowReturnToMenuButton");

	Params::BPUI_HUD_PauseMenu_C_ShowReturnToMenuButton Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ShowSkipTutorialButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::ShowSkipTutorialButton(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ShowSkipTutorialButton");

	Params::BPUI_HUD_PauseMenu_C_ShowSkipTutorialButton Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__BPUI_HUD_PauseMenu_skip_tutorial_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__BPUI_HUD_PauseMenu_skip_tutorial_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__BPUI_HUD_PauseMenu_skip_tutorial_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__BPUI_HUD_PauseMenu_skip_tutorial_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.HideSaveButton
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::HideSaveButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "HideSaveButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.FixMouseCursor
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::FixMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "FixMouseCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ForceEndPreCloseScreenOperations
// (BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::ForceEndPreCloseScreenOperations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ForceEndPreCloseScreenOperations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SetTitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAText                          Parent_Title                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCAText                          Screen_Title                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPUI_HUD_PauseMenu_C::SetTitles(const struct FCAText& Parent_Title, const struct FCAText& Screen_Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SetTitles");

	Params::BPUI_HUD_PauseMenu_C_SetTitles Parms{};

	Parms.Parent_Title = std::move(Parent_Title);
	Parms.Screen_Title = std::move(Screen_Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.StartPreCloseScreenOperations
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Force_sync_close                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::StartPreCloseScreenOperations(bool Force_sync_close)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "StartPreCloseScreenOperations");

	Params::BPUI_HUD_PauseMenu_C_StartPreCloseScreenOperations Parms{};

	Parms.Force_sync_close = Force_sync_close;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.PauseMenuCatpureInput
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::PauseMenuCatpureInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "PauseMenuCatpureInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnPermissionToLeaveHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Granted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::OnPermissionToLeaveHandler(bool Granted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnPermissionToLeaveHandler");

	Params::BPUI_HUD_PauseMenu_C_OnPermissionToLeaveHandler Parms{};

	Parms.Granted = Granted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.RequestReturnToMainMenu
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::RequestReturnToMainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "RequestReturnToMainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnReturnToMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnReturnToMenu(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnReturnToMenu");

	Params::BPUI_HUD_PauseMenu_C_OnReturnToMenu Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__BPUI_HUD_PauseMenu_return_to_menu_btn_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__BPUI_HUD_PauseMenu_return_to_menu_btn_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__BPUI_HUD_PauseMenu_return_to_menu_btn_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__BPUI_HUD_PauseMenu_return_to_menu_btn_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnSaveOptionSDismiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnSaveOptionSDismiss(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnSaveOptionSDismiss");

	Params::BPUI_HUD_PauseMenu_C_OnSaveOptionSDismiss Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SaveOptions
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::SaveOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SaveOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnResetToDefaultsDismiss
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnResetToDefaultsDismiss(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnResetToDefaultsDismiss");

	Params::BPUI_HUD_PauseMenu_C_OnResetToDefaultsDismiss Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__BPUI_HUD_PauseMenu_save_options_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__BPUI_HUD_PauseMenu_save_options_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__BPUI_HUD_PauseMenu_save_options_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__BPUI_HUD_PauseMenu_save_options_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.HandleOnMatchStartActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_active                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::HandleOnMatchStartActive(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "HandleOnMatchStartActive");

	Params::BPUI_HUD_PauseMenu_C_HandleOnMatchStartActive Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.FocusCurrentWidget
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::FocusCurrentWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "FocusCurrentWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.RequestResetToDefaults
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::RequestResetToDefaults()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "RequestResetToDefaults");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.RequestExit
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::RequestExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "RequestExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnDismissExcuded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnDismissExcuded(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnDismissExcuded");

	Params::BPUI_HUD_PauseMenu_C_OnDismissExcuded Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnDismissAlreadyBound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnDismissAlreadyBound(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnDismissAlreadyBound");

	Params::BPUI_HUD_PauseMenu_C_OnDismissAlreadyBound Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnInputSelected
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::OnInputSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnInputSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnDiscardChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnDiscardChanges(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnDiscardChanges");

	Params::BPUI_HUD_PauseMenu_C_OnDiscardChanges Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnShowExitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECADialogueResult                       Results                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnShowExitGame(ECADialogueResult Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnShowExitGame");

	Params::BPUI_HUD_PauseMenu_C_OnShowExitGame Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__exit_game_btn_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__exit_game_btn_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__exit_game_btn_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__exit_game_btn_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.RequestPermissionToLeave
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::RequestPermissionToLeave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "RequestPermissionToLeave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__back_btn_1_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__back_btn_1_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__back_btn_1_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__back_btn_1_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.BndEvt__back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::BndEvt__back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "BndEvt__back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");

	Params::BPUI_HUD_PauseMenu_C_BndEvt__back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "Tick");

	Params::BPUI_HUD_PauseMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnPaawnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            NewPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnPaawnChanged(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnPaawnChanged");

	Params::BPUI_HUD_PauseMenu_C_OnPaawnChanged Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.HidePauseMenu
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::HidePauseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "HidePauseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.CloseKeyRebindsOverlayPanel
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::CloseKeyRebindsOverlayPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "CloseKeyRebindsOverlayPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ShowKeyRebindsOverlayPanel
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::ShowKeyRebindsOverlayPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ShowKeyRebindsOverlayPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnOptionSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::OnOptionSelected(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnOptionSelected");

	Params::BPUI_HUD_PauseMenu_C_OnOptionSelected Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SocialParty_Pressed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::SocialParty_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SocialParty_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.OnTabChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             Id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has_entries                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_PauseMenu_C::OnTabChanged(class FName Id, bool Has_entries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "OnTabChanged");

	Params::BPUI_HUD_PauseMenu_C_OnTabChanged Parms{};

	Parms.Id = Id;
	Parms.Has_entries = Has_entries;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.Inventory_Pressed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::Inventory_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "Inventory_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ControllerMapSecondaryTab_Pressed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::ControllerMapSecondaryTab_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ControllerMapSecondaryTab_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.KeyBindingSecondaryTab_Pressed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::KeyBindingSecondaryTab_Pressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "KeyBindingSecondaryTab_Pressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SetOptionCategory
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::SetOptionCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SetOptionCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SwitchWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Menu_index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PauseMenu_C::SwitchWidget(int32 Menu_index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SwitchWidget");

	Params::BPUI_HUD_PauseMenu_C_SwitchWidget Parms{};

	Parms.Menu_index = Menu_index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.HidePreviousMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::HidePreviousMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "HidePreviousMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.ShowCurrentMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::ShowCurrentMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "ShowCurrentMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.PrimaryNavLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::PrimaryNavLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "PrimaryNavLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.PrimaryNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::PrimaryNavRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "PrimaryNavRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SecondaryNavLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::SecondaryNavLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SecondaryNavLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.SecondaryNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::SecondaryNavRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "SecondaryNavRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.CacheSubscreensIndices
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PauseMenu_C::CacheSubscreensIndices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "CacheSubscreensIndices");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PauseMenu.BPUI_HUD_PauseMenu_C.IsInventoryTabOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBPUI_HUD_PauseMenu_C::IsInventoryTabOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PauseMenu_C", "IsInventoryTabOpen");

	Params::BPUI_HUD_PauseMenu_C_IsInventoryTabOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

