#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PartyFooterWidget

#include "Basic.hpp"

#include "BP_PartyFooterWidget_classes.hpp"
#include "BP_PartyFooterWidget_parameters.hpp"


namespace SDK
{

// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.ExecuteUbergraph_BP_PartyFooterWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PartyFooterWidget_C::ExecuteUbergraph_BP_PartyFooterWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "ExecuteUbergraph_BP_PartyFooterWidget");

	Params::BP_PartyFooterWidget_C_ExecuteUbergraph_BP_PartyFooterWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.OnTalkersUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Talkers                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PartyFooterWidget_C::OnTalkersUpdated(const TArray<class FString>& Talkers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "OnTalkersUpdated");

	Params::BP_PartyFooterWidget_C_OnTalkersUpdated Parms{};

	Parms.Talkers = std::move(Talkers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.OnMatchmakingStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAUIEventData                   Event_data                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PartyFooterWidget_C::OnMatchmakingStopped(const struct FCAUIEventData& Event_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "OnMatchmakingStopped");

	Params::BP_PartyFooterWidget_C_OnMatchmakingStopped Parms{};

	Parms.Event_data = std::move(Event_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAUIEventData                   Event_data                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PartyFooterWidget_C::OnMatchmakingStarted(const struct FCAUIEventData& Event_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "OnMatchmakingStarted");

	Params::BP_PartyFooterWidget_C_OnMatchmakingStarted Parms{};

	Parms.Event_data = std::move(Event_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.ResetDynamicPartyElements
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyFooterWidget_C::ResetDynamicPartyElements()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "ResetDynamicPartyElements");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.SetupLocalPlayer
// (BlueprintCallable, BlueprintEvent)

void UBP_PartyFooterWidget_C::SetupLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "SetupLocalPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PartyFooterWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.OnPartyMemberStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAUIEventData                   Event_data                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PartyFooterWidget_C::OnPartyMemberStateChanged(const struct FCAUIEventData& Event_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "OnPartyMemberStateChanged");

	Params::BP_PartyFooterWidget_C_OnPartyMemberStateChanged Parms{};

	Parms.Event_data = std::move(Event_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyFooterWidget.BP_PartyFooterWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PartyFooterWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyFooterWidget_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}
