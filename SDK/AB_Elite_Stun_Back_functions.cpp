#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_Stun_Back

#include "Basic.hpp"

#include "AB_Elite_Stun_Back_classes.hpp"
#include "AB_Elite_Stun_Back_parameters.hpp"


namespace SDK
{

// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.ExecuteUbergraph_AB_Elite_Stun_Back
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Elite_Stun_Back_C::ExecuteUbergraph_AB_Elite_Stun_Back(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "ExecuteUbergraph_AB_Elite_Stun_Back");

	Params::AB_Elite_Stun_Back_C_ExecuteUbergraph_AB_Elite_Stun_Back Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Elite_Stun_Back_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "K2_OnEndAbility");

	Params::AB_Elite_Stun_Back_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_Elite_Stun_Back_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.OnCompleted_8249074849698DB6A1BF5DA98D91882A
// (BlueprintCallable, BlueprintEvent)

void UAB_Elite_Stun_Back_C::OnCompleted_8249074849698DB6A1BF5DA98D91882A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "OnCompleted_8249074849698DB6A1BF5DA98D91882A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.OnBlendOut_8249074849698DB6A1BF5DA98D91882A
// (BlueprintCallable, BlueprintEvent)

void UAB_Elite_Stun_Back_C::OnBlendOut_8249074849698DB6A1BF5DA98D91882A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "OnBlendOut_8249074849698DB6A1BF5DA98D91882A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.OnInterrupted_8249074849698DB6A1BF5DA98D91882A
// (BlueprintCallable, BlueprintEvent)

void UAB_Elite_Stun_Back_C::OnInterrupted_8249074849698DB6A1BF5DA98D91882A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "OnInterrupted_8249074849698DB6A1BF5DA98D91882A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.OnCancelled_8249074849698DB6A1BF5DA98D91882A
// (BlueprintCallable, BlueprintEvent)

void UAB_Elite_Stun_Back_C::OnCancelled_8249074849698DB6A1BF5DA98D91882A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "OnCancelled_8249074849698DB6A1BF5DA98D91882A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Elite_Stun_Back.AB_Elite_Stun_Back_C.OnSkipped_8249074849698DB6A1BF5DA98D91882A
// (BlueprintCallable, BlueprintEvent)

void UAB_Elite_Stun_Back_C::OnSkipped_8249074849698DB6A1BF5DA98D91882A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Elite_Stun_Back_C", "OnSkipped_8249074849698DB6A1BF5DA98D91882A");

	UObject::ProcessEvent(Func, nullptr);
}

}
