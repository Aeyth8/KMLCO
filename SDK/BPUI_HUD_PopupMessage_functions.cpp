#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PopupMessage

#include "Basic.hpp"

#include "BPUI_HUD_PopupMessage_classes.hpp"
#include "BPUI_HUD_PopupMessage_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C.ExecuteUbergraph_BPUI_HUD_PopupMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_PopupMessage_C::ExecuteUbergraph_BPUI_HUD_PopupMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PopupMessage_C", "ExecuteUbergraph_BPUI_HUD_PopupMessage");

	Params::BPUI_HUD_PopupMessage_C_ExecuteUbergraph_BPUI_HUD_PopupMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C.EmptyEvent
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PopupMessage_C::EmptyEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PopupMessage_C", "EmptyEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C.OnHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PopupMessage_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PopupMessage_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C.OnShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_PopupMessage_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PopupMessage_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_PopupMessage.BPUI_HUD_PopupMessage_C.Block Game Input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       Callback                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UBPUI_HUD_PopupMessage_C::Block_Game_Input(TDelegate<void()> Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_PopupMessage_C", "Block Game Input");

	Params::BPUI_HUD_PopupMessage_C_Block_Game_Input Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);
}

}
