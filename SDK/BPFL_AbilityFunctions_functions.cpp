#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_AbilityFunctions

#include "Basic.hpp"

#include "BPFL_AbilityFunctions_classes.hpp"
#include "BPFL_AbilityFunctions_parameters.hpp"


namespace SDK
{

// Function BPFL_AbilityFunctions.BPFL_AbilityFunctions_C.ShowGenericProgressWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TargetTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCAText                          ProgressLabel                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FCAText                          FinishedLabel                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AutoDestroyOnComplete                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPUI_HUD_GenericProgress_C*      WidgetReference                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityFunctions_C::ShowGenericProgressWidget(float TargetTime, const struct FCAText& ProgressLabel, const struct FCAText& FinishedLabel, bool AutoDestroyOnComplete, class UObject* __WorldContext, class UBPUI_HUD_GenericProgress_C** WidgetReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AbilityFunctions_C", "ShowGenericProgressWidget");

	Params::BPFL_AbilityFunctions_C_ShowGenericProgressWidget Parms{};

	Parms.TargetTime = TargetTime;
	Parms.ProgressLabel = std::move(ProgressLabel);
	Parms.FinishedLabel = std::move(FinishedLabel);
	Parms.AutoDestroyOnComplete = AutoDestroyOnComplete;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WidgetReference != nullptr)
		*WidgetReference = Parms.WidgetReference;
}


// Function BPFL_AbilityFunctions.BPFL_AbilityFunctions_C.HideGenericProgressWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPUI_HUD_GenericProgress_C*      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityFunctions_C::HideGenericProgressWidget(class UBPUI_HUD_GenericProgress_C* Widget, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AbilityFunctions_C", "HideGenericProgressWidget");

	Params::BPFL_AbilityFunctions_C_HideGenericProgressWidget Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPFL_AbilityFunctions.BPFL_AbilityFunctions_C.CAPrint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Print_to_Screen                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     Colour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityFunctions_C::CAPrint(const class FString& String, bool Print_to_Screen, const struct FLinearColor& Colour, float Duration, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_AbilityFunctions_C", "CAPrint");

	Params::BPFL_AbilityFunctions_C_CAPrint Parms{};

	Parms.String = std::move(String);
	Parms.Print_to_Screen = Print_to_Screen;
	Parms.Colour = std::move(Colour);
	Parms.Duration = Duration;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
