#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_MatchEndWidget

#include "Basic.hpp"

#include "BPUI_HUD_MatchEndWidget_classes.hpp"
#include "BPUI_HUD_MatchEndWidget_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_MatchEndWidget.BPUI_HUD_MatchEndWidget_C.ExecuteUbergraph_BPUI_HUD_MatchEndWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_MatchEndWidget_C::ExecuteUbergraph_BPUI_HUD_MatchEndWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_MatchEndWidget_C", "ExecuteUbergraph_BPUI_HUD_MatchEndWidget");

	Params::BPUI_HUD_MatchEndWidget_C_ExecuteUbergraph_BPUI_HUD_MatchEndWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_MatchEndWidget.BPUI_HUD_MatchEndWidget_C.MatchEndDialogue
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_MatchEndWidget_C::MatchEndDialogue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_MatchEndWidget_C", "MatchEndDialogue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_MatchEndWidget.BPUI_HUD_MatchEndWidget_C.OpenScreen
// (Event, Public, BlueprintEvent)

void UBPUI_HUD_MatchEndWidget_C::OpenScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_MatchEndWidget_C", "OpenScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUD_MatchEndWidget.BPUI_HUD_MatchEndWidget_C.CollapseLoseBox
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUD_MatchEndWidget_C::CollapseLoseBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_MatchEndWidget_C", "CollapseLoseBox");

	UObject::ProcessEvent(Func, nullptr);
}

}

