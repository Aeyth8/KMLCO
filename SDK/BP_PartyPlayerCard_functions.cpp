#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PartyPlayerCard

#include "Basic.hpp"

#include "BP_PartyPlayerCard_classes.hpp"
#include "BP_PartyPlayerCard_parameters.hpp"


namespace SDK
{

// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnCardActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PartyPlayerCard_C*            Card                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::OnCardActivated__DelegateSignature(class UBP_PartyPlayerCard_C* Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnCardActivated__DelegateSignature");

	Params::BP_PartyPlayerCard_C_OnCardActivated__DelegateSignature Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnPartyPlayerCardStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PartyPlayerCard_C*            PartyPlayerCard                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECAPartyPlayerCardState                 PartyCardState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::OnPartyPlayerCardStateChanged__DelegateSignature(class UBP_PartyPlayerCard_C* PartyPlayerCard, ECAPartyPlayerCardState PartyCardState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnPartyPlayerCardStateChanged__DelegateSignature");

	Params::BP_PartyPlayerCard_C_OnPartyPlayerCardStateChanged__DelegateSignature Parms{};

	Parms.PartyPlayerCard = PartyPlayerCard;
	Parms.PartyCardState = PartyCardState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.ExecuteUbergraph_BP_PartyPlayerCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::ExecuteUbergraph_BP_PartyPlayerCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "ExecuteUbergraph_BP_PartyPlayerCard");

	Params::BP_PartyPlayerCard_C_ExecuteUbergraph_BP_PartyPlayerCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnMuteListUpdated
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::OnMuteListUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnMuteListUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnManualHUDBackButtonSelect
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::OnManualHUDBackButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnManualHUDBackButtonSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetActionsCardState
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetActionsCardState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetActionsCardState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_19_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_19_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_19_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_19_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_18_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_18_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_18_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_back_btn_K2Node_ComponentBoundEvent_18_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_17_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_17_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_17_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_17_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_16_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_16_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_16_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_unmute_btn_K2Node_ComponentBoundEvent_16_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_15_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_15_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_15_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_15_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_14_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_14_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_14_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_hud_mute_btn_K2Node_ComponentBoundEvent_14_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_13_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_13_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_13_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_13_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_unmute_btn_K2Node_ComponentBoundEvent_12_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_11_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_11_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_11_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_11_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_mute_btn_K2Node_ComponentBoundEvent_10_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnCardInactive
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::OnCardInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnCardInactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetDisconnectedState
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetDisconnectedState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetDisconnectedState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetActiveState
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetActiveState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetActiveState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PartyPlayerCard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnReturnFromPlayerOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAUIEventData                   Event_data                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PartyPlayerCard_C::OnReturnFromPlayerOptions(const struct FCAUIEventData& Event_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnReturnFromPlayerOptions");

	Params::BP_PartyPlayerCard_C_OnReturnFromPlayerOptions Parms{};

	Parms.Event_data = std::move(Event_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetupSpecialistDisplay
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetupSpecialistDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetupSpecialistDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_9_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_9_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_9_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_9_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_invite_to_party_button_K2Node_ComponentBoundEvent_8_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyPlayerCard_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnMouseLeave");

	Params::BP_PartyPlayerCard_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyPlayerCard_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnMouseEnter");

	Params::BP_PartyPlayerCard_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_7_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_7_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_7_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_7_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_promote_to_leader_K2Node_ComponentBoundEvent_6_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_5_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_5_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_5_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_5_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_kick_from_party_K2Node_ComponentBoundEvent_4_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetFocusOnFirstValidButton
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetFocusOnFirstValidButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetFocusOnFirstValidButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PartyPlayerCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.UpdateButtonStates
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::UpdateButtonStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "UpdateButtonStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_3_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_3_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_3_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_3_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_detail_button_K2Node_ComponentBoundEvent_2_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_1_UIElementInternalClick__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCABaseUIElement*                 button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyPlayerCard_C::BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature(class UCABaseUIElement* button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");

	Params::BP_PartyPlayerCard_C_BndEvt__BP_PartyPlayerCard_back_button_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature Parms{};

	Parms.button = button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetEmptyState
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyPlayerCard_C::SetEmptyState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetEmptyState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAPartyMemberUIData             Member_data                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyPlayerCard_C::SetData(const struct FCAPartyMemberUIData& Member_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "SetData");

	Params::BP_PartyPlayerCard_C_SetData Parms{};

	Parms.Member_data = std::move(Member_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UBP_PartyPlayerCard_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "OnFocusReceived");

	Params::BP_PartyPlayerCard_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PartyPlayerCard.BP_PartyPlayerCard_C.UpdateMuteButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMuted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PartyPlayerCard_C::UpdateMuteButtonState(bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPlayerCard_C", "UpdateMuteButtonState");

	Params::BP_PartyPlayerCard_C_UpdateMuteButtonState Parms{};

	Parms.IsMuted = IsMuted;

	UObject::ProcessEvent(Func, &Parms);
}

}

