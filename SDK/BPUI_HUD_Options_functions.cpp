#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_Options

#include "Basic.hpp"

#include "BPUI_HUD_Options_classes.hpp"
#include "BPUI_HUD_Options_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_Options.BPUI_HUD_Options_C.ExecuteUbergraph_BPUI_HUD_Options
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_Options_C::ExecuteUbergraph_BPUI_HUD_Options(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "ExecuteUbergraph_BPUI_HUD_Options");

	Params::BPUI_HUD_Options_C_ExecuteUbergraph_BPUI_HUD_Options Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.BlockInputEvent
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_Options_C::BlockInputEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "BlockInputEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.SetTitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAText                          Parent_Title                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCAText                          Screen_Title                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPUI_HUD_Options_C::SetTitles(const struct FCAText& Parent_Title, const struct FCAText& Screen_Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "SetTitles");

	Params::BPUI_HUD_Options_C_SetTitles Parms{};

	Parms.Parent_Title = std::move(Parent_Title);
	Parms.Screen_Title = std::move(Screen_Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.OnHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_Options_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.OnShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_Options_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBPUI_HUD_Options_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "OnFocusReceived");

	Params::BPUI_HUD_Options_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.CaptureInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_Options_C::CaptureInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "CaptureInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_Options.BPUI_HUD_Options_C.ReleaseInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_Options_C::ReleaseInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_Options_C", "ReleaseInput");

	UObject::ProcessEvent(Func, nullptr);
}

}

