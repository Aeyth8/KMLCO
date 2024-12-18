#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_ForceFeedback

#include "Basic.hpp"

#include "BPC_ForceFeedback_classes.hpp"
#include "BPC_ForceFeedback_parameters.hpp"


namespace SDK
{

// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ExecuteUbergraph_BPC_ForceFeedback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ForceFeedback_C::ExecuteUbergraph_BPC_ForceFeedback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "ExecuteUbergraph_BPC_ForceFeedback");

	Params::BPC_ForceFeedback_C_ExecuteUbergraph_BPC_ForceFeedback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ZeroGBoostStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Successful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   New_speed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed_delta                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Yaw_delta                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pitch_delta                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   boosts_remaining                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ForceFeedback_C::ZeroGBoostStarted(bool Successful, float New_speed, float Speed_delta, float Yaw_delta, float Pitch_delta, int32 boosts_remaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "ZeroGBoostStarted");

	Params::BPC_ForceFeedback_C_ZeroGBoostStarted Parms{};

	Parms.Successful = Successful;
	Parms.New_speed = New_speed;
	Parms.Speed_delta = Speed_delta;
	Parms.Yaw_delta = Yaw_delta;
	Parms.Pitch_delta = Pitch_delta;
	Parms.boosts_remaining = boosts_remaining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.TeamReachedThreshold
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeamData                        Team_data                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBPC_ForceFeedback_C::TeamReachedThreshold(const struct FTeamData& Team_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "TeamReachedThreshold");

	Params::BPC_ForceFeedback_C_TeamReachedThreshold Parms{};

	Parms.Team_data = std::move(Team_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_ForceFeedback_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.GravHookRumble
// (BlueprintCallable, BlueprintEvent)

void UBPC_ForceFeedback_C::GravHookRumble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "GravHookRumble");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.AbilityModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECAPlayerAbilityMode                    PrevAbilityMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECAPlayerAbilityMode                    AbilityMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ForceFeedback_C::AbilityModeChanged(class ACharacter* Character, ECAPlayerAbilityMode PrevAbilityMode, ECAPlayerAbilityMode AbilityMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "AbilityModeChanged");

	Params::BPC_ForceFeedback_C_AbilityModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevAbilityMode = PrevAbilityMode;
	Parms.AbilityMode = AbilityMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.ZeroGStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_in_zerog                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_ForceFeedback_C::ZeroGStateChange(bool Is_in_zerog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "ZeroGStateChange");

	Params::BPC_ForceFeedback_C_ZeroGStateChange Parms{};

	Parms.Is_in_zerog = Is_in_zerog;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.InitializeVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_ForceFeedback_C::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "InitializeVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.MMChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECAPlayerAbilityMode                    PreviousMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECAPlayerAbilityMode                    CurrentMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ForceFeedback_C::MMChange(ECAPlayerAbilityMode PreviousMode, ECAPlayerAbilityMode CurrentMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "MMChange");

	Params::BPC_ForceFeedback_C_MMChange Parms{};

	Parms.PreviousMode = PreviousMode;
	Parms.CurrentMode = CurrentMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.CheckForGravHookEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECAPlayerAbilityMode                    PreviousMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECAPlayerAbilityMode                    CurrentMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ForceFeedback_C::CheckForGravHookEnd(ECAPlayerAbilityMode PreviousMode, ECAPlayerAbilityMode CurrentMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "CheckForGravHookEnd");

	Params::BPC_ForceFeedback_C_CheckForGravHookEnd Parms{};

	Parms.PreviousMode = PreviousMode;
	Parms.CurrentMode = CurrentMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ForceFeedback.BPC_ForceFeedback_C.OnRep_TeamAtThreshold
// (BlueprintCallable, BlueprintEvent)

void UBPC_ForceFeedback_C::OnRep_TeamAtThreshold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ForceFeedback_C", "OnRep_TeamAtThreshold");

	UObject::ProcessEvent(Func, nullptr);
}

}

