#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_Throw_Grenade

#include "Basic.hpp"

#include "AB_Grunt_Throw_Grenade_classes.hpp"
#include "AB_Grunt_Throw_Grenade_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.ExecuteUbergraph_AB_Grunt_Throw_Grenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_Throw_Grenade_C::ExecuteUbergraph_AB_Grunt_Throw_Grenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "ExecuteUbergraph_AB_Grunt_Throw_Grenade");

	Params::AB_Grunt_Throw_Grenade_C_ExecuteUbergraph_AB_Grunt_Throw_Grenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Grunt_Throw_Grenade_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "K2_OnEndAbility");

	Params::AB_Grunt_Throw_Grenade_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.LaunchIfNeeded
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::LaunchIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "LaunchIfNeeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.LaunchGrenade
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::LaunchGrenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "LaunchGrenade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_Throw_Grenade_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_Throw_Grenade_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.EventReceived_B33119F04D6CC9CC6232A3B7D2FAFF58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Grunt_Throw_Grenade_C::EventReceived_B33119F04D6CC9CC6232A3B7D2FAFF58(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "EventReceived_B33119F04D6CC9CC6232A3B7D2FAFF58");

	Params::AB_Grunt_Throw_Grenade_C_EventReceived_B33119F04D6CC9CC6232A3B7D2FAFF58 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.Success_55C0843545E2F0C410EACA9F12ECAA53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_Throw_Grenade_C::Success_55C0843545E2F0C410EACA9F12ECAA53(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "Success_55C0843545E2F0C410EACA9F12ECAA53");

	Params::AB_Grunt_Throw_Grenade_C_Success_55C0843545E2F0C410EACA9F12ECAA53 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.DidNotSpawn_55C0843545E2F0C410EACA9F12ECAA53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_Throw_Grenade_C::DidNotSpawn_55C0843545E2F0C410EACA9F12ECAA53(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "DidNotSpawn_55C0843545E2F0C410EACA9F12ECAA53");

	Params::AB_Grunt_Throw_Grenade_C_DidNotSpawn_55C0843545E2F0C410EACA9F12ECAA53 Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.OnCompleted_318E738B44B69E07201D68B810BDAE7F
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::OnCompleted_318E738B44B69E07201D68B810BDAE7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "OnCompleted_318E738B44B69E07201D68B810BDAE7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.OnBlendOut_318E738B44B69E07201D68B810BDAE7F
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::OnBlendOut_318E738B44B69E07201D68B810BDAE7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "OnBlendOut_318E738B44B69E07201D68B810BDAE7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.OnInterrupted_318E738B44B69E07201D68B810BDAE7F
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::OnInterrupted_318E738B44B69E07201D68B810BDAE7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "OnInterrupted_318E738B44B69E07201D68B810BDAE7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.OnCancelled_318E738B44B69E07201D68B810BDAE7F
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::OnCancelled_318E738B44B69E07201D68B810BDAE7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "OnCancelled_318E738B44B69E07201D68B810BDAE7F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_Throw_Grenade.AB_Grunt_Throw_Grenade_C.OnSkipped_318E738B44B69E07201D68B810BDAE7F
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_Throw_Grenade_C::OnSkipped_318E738B44B69E07201D68B810BDAE7F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_Throw_Grenade_C", "OnSkipped_318E738B44B69E07201D68B810BDAE7F");

	UObject::ProcessEvent(Func, nullptr);
}

}
