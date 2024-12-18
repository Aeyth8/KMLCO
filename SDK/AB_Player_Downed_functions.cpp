#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Downed

#include "Basic.hpp"

#include "AB_Player_Downed_classes.hpp"
#include "AB_Player_Downed_parameters.hpp"


namespace SDK
{

// Function AB_Player_Downed.AB_Player_Downed_C.ExecuteUbergraph_AB_Player_Downed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_Downed_C::ExecuteUbergraph_AB_Player_Downed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "ExecuteUbergraph_AB_Player_Downed");

	Params::AB_Player_Downed_C_ExecuteUbergraph_AB_Player_Downed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Player_Downed_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "K2_OnEndAbility");

	Params::AB_Player_Downed_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.NPCDialogueTaunt
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::NPCDialogueTaunt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "NPCDialogueTaunt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_Player_Downed_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.EventReceived_F86395594E31F39D0CEC4DAFE5E52D5B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_Downed_C::EventReceived_F86395594E31F39D0CEC4DAFE5E52D5B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "EventReceived_F86395594E31F39D0CEC4DAFE5E52D5B");

	Params::AB_Player_Downed_C_EventReceived_F86395594E31F39D0CEC4DAFE5E52D5B Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.EventReceived_61FD251841C407851B607BA32C3F5389
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_Downed_C::EventReceived_61FD251841C407851B607BA32C3F5389(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "EventReceived_61FD251841C407851B607BA32C3F5389");

	Params::AB_Player_Downed_C_EventReceived_61FD251841C407851B607BA32C3F5389 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.Removed_3C6CA96A43CEFE5D1B1461AEAEDFCF1D
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::Removed_3C6CA96A43CEFE5D1B1461AEAEDFCF1D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "Removed_3C6CA96A43CEFE5D1B1461AEAEDFCF1D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.OnSync_43485C614A39287369CF9CB256A7F7BA
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::OnSync_43485C614A39287369CF9CB256A7F7BA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "OnSync_43485C614A39287369CF9CB256A7F7BA");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.Removed_858D8120456354904731ED85D4C09D0E
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::Removed_858D8120456354904731ED85D4C09D0E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "Removed_858D8120456354904731ED85D4C09D0E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.EventReceived_FC9E62204E144ED2C51ECA88F63CD671
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_Downed_C::EventReceived_FC9E62204E144ED2C51ECA88F63CD671(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "EventReceived_FC9E62204E144ED2C51ECA88F63CD671");

	Params::AB_Player_Downed_C_EventReceived_FC9E62204E144ED2C51ECA88F63CD671 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.IsMovementDowned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDowned                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsWrongType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Player_Downed_C::IsMovementDowned(bool* IsDowned, bool* IsWrongType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "IsMovementDowned");

	Params::AB_Player_Downed_C_IsMovementDowned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDowned != nullptr)
		*IsDowned = Parms.IsDowned;

	if (IsWrongType != nullptr)
		*IsWrongType = Parms.IsWrongType;
}


// Function AB_Player_Downed.AB_Player_Downed_C.ReviveCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::ReviveCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "ReviveCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_Downed.AB_Player_Downed_C.ExecuteCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_Downed_C::ExecuteCharacter(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "ExecuteCharacter");

	Params::AB_Player_Downed_C_ExecuteCharacter Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Downed.AB_Player_Downed_C.SelfRevive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAB_Player_Downed_C::SelfRevive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Downed_C", "SelfRevive");

	UObject::ProcessEvent(Func, nullptr);
}

}

