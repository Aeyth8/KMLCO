#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_Helmet

#include "Basic.hpp"

#include "AB_Grunt_Helmet_classes.hpp"
#include "AB_Grunt_Helmet_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.ExecuteUbergraph_AB_Grunt_Helmet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_Helmet_C::ExecuteUbergraph_AB_Grunt_Helmet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "ExecuteUbergraph_AB_Grunt_Helmet");

	Params::AB_Grunt_Helmet_C_ExecuteUbergraph_AB_Grunt_Helmet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_Helmet_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_Helmet_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Grunt_Helmet_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "K2_OnEndAbility");

	Params::AB_Grunt_Helmet_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnFinish_BD4B18354258DF23D4E06989D2FDD387
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnFinish_BD4B18354258DF23D4E06989D2FDD387()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnFinish_BD4B18354258DF23D4E06989D2FDD387");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnCompleted_E6D6D96744A9E5198BF9BCBB708E0518
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnCompleted_E6D6D96744A9E5198BF9BCBB708E0518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnCompleted_E6D6D96744A9E5198BF9BCBB708E0518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnBlendOut_E6D6D96744A9E5198BF9BCBB708E0518
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnBlendOut_E6D6D96744A9E5198BF9BCBB708E0518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnBlendOut_E6D6D96744A9E5198BF9BCBB708E0518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnInterrupted_E6D6D96744A9E5198BF9BCBB708E0518
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnInterrupted_E6D6D96744A9E5198BF9BCBB708E0518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnInterrupted_E6D6D96744A9E5198BF9BCBB708E0518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnCancelled_E6D6D96744A9E5198BF9BCBB708E0518
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnCancelled_E6D6D96744A9E5198BF9BCBB708E0518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnCancelled_E6D6D96744A9E5198BF9BCBB708E0518");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Helmet.AB_Grunt_Helmet_C.OnSkipped_E6D6D96744A9E5198BF9BCBB708E0518
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Helmet_C::OnSkipped_E6D6D96744A9E5198BF9BCBB708E0518()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Helmet_C", "OnSkipped_E6D6D96744A9E5198BF9BCBB708E0518");

	UObject::ProcessEvent(Func, nullptr);
}

}

