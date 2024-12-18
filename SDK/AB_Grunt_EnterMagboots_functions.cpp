#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_EnterMagboots

#include "Basic.hpp"

#include "AB_Grunt_EnterMagboots_classes.hpp"
#include "AB_Grunt_EnterMagboots_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_EnterMagboots.AB_Grunt_EnterMagboots_C.ExecuteUbergraph_AB_Grunt_EnterMagboots
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_EnterMagboots_C::ExecuteUbergraph_AB_Grunt_EnterMagboots(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_EnterMagboots_C", "ExecuteUbergraph_AB_Grunt_EnterMagboots");

	Params::AB_Grunt_EnterMagboots_C_ExecuteUbergraph_AB_Grunt_EnterMagboots Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_EnterMagboots.AB_Grunt_EnterMagboots_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_EnterMagboots_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_EnterMagboots_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_EnterMagboots_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_EnterMagboots.AB_Grunt_EnterMagboots_C.OnPerformAction_6BCDFA76408D7D0A45647487370C1749
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ActionNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_EnterMagboots_C::OnPerformAction_6BCDFA76408D7D0A45647487370C1749(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_EnterMagboots_C", "OnPerformAction_6BCDFA76408D7D0A45647487370C1749");

	Params::AB_Grunt_EnterMagboots_C_OnPerformAction_6BCDFA76408D7D0A45647487370C1749 Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_EnterMagboots.AB_Grunt_EnterMagboots_C.OnFinished_6BCDFA76408D7D0A45647487370C1749
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ActionNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_EnterMagboots_C::OnFinished_6BCDFA76408D7D0A45647487370C1749(int32 ActionNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_EnterMagboots_C", "OnFinished_6BCDFA76408D7D0A45647487370C1749");

	Params::AB_Grunt_EnterMagboots_C_OnFinished_6BCDFA76408D7D0A45647487370C1749 Parms{};

	Parms.ActionNumber = ActionNumber;

	UObject::ProcessEvent(Func, &Parms);
}

}

