#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUDVideoWidget

#include "Basic.hpp"

#include "BPUI_HUDVideoWidget_classes.hpp"
#include "BPUI_HUDVideoWidget_parameters.hpp"


namespace SDK
{

// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.ExecuteUbergraph_BPUI_HUDVideoWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUDVideoWidget_C::ExecuteUbergraph_BPUI_HUDVideoWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "ExecuteUbergraph_BPUI_HUDVideoWidget");

	Params::BPUI_HUDVideoWidget_C_ExecuteUbergraph_BPUI_HUDVideoWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.OnCoolDownComplete
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUDVideoWidget_C::OnCoolDownComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "OnCoolDownComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.OnSkipReleased
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUDVideoWidget_C::OnSkipReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "OnSkipReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.OnSkipPressed
// (BlueprintCallable, BlueprintEvent)

void UBPUI_HUDVideoWidget_C::OnSkipPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "OnSkipPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.BndEvt__BPUI_HUDVideoWidget_skip_btn_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUDVideoWidget_C::BndEvt__BPUI_HUDVideoWidget_skip_btn_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "BndEvt__BPUI_HUDVideoWidget_skip_btn_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature");

	Params::BPUI_HUDVideoWidget_C_BndEvt__BPUI_HUDVideoWidget_skip_btn_K2Node_ComponentBoundEvent_1_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPUI_HUDVideoWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPUI_HUDVideoWidget.BPUI_HUDVideoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPUI_HUDVideoWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_HUDVideoWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
