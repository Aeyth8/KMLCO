#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_ReviveProgressWidget

#include "Basic.hpp"

#include "BPUI_HUD_ReviveProgressWidget_classes.hpp"
#include "BPUI_HUD_ReviveProgressWidget_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C.ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_ReviveProgressWidget_C::ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_ReviveProgressWidget_C", "ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget");

	Params::BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_ReviveProgressWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_ReviveProgressWidget_C", "Tick");

	Params::BPUI_HUD_ReviveProgressWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPUI_HUD_ReviveProgressWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUD_ReviveProgressWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
