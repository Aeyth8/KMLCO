#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ThresholdMapRevealComponent

#include "Basic.hpp"

#include "BP_ThresholdMapRevealComponent_classes.hpp"
#include "BP_ThresholdMapRevealComponent_parameters.hpp"


namespace SDK
{

// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.ExecuteUbergraph_BP_ThresholdMapRevealComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ThresholdMapRevealComponent_C::ExecuteUbergraph_BP_ThresholdMapRevealComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "ExecuteUbergraph_BP_ThresholdMapRevealComponent");

	Params::BP_ThresholdMapRevealComponent_C_ExecuteUbergraph_BP_ThresholdMapRevealComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ThresholdMapRevealComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ThresholdMapRevealComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "ReceiveTick");

	Params::BP_ThresholdMapRevealComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.LootUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeamData                        Team_data                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ThresholdMapRevealComponent_C::LootUpdated(const struct FTeamData& Team_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "LootUpdated");

	Params::BP_ThresholdMapRevealComponent_C_LootUpdated Parms{};

	Parms.Team_data = std::move(Team_data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.GetPlayerLocationOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ActortoLocate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OffsetX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OffsetY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ValueX                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ValueY                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ValueZ                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ThresholdMapRevealComponent_C::GetPlayerLocationOffset(class AActor* ActortoLocate, float OffsetX, float OffsetY, float* ValueX, float* ValueY, float* ValueZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "GetPlayerLocationOffset");

	Params::BP_ThresholdMapRevealComponent_C_GetPlayerLocationOffset Parms{};

	Parms.ActortoLocate = ActortoLocate;
	Parms.OffsetX = OffsetX;
	Parms.OffsetY = OffsetY;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueX != nullptr)
		*ValueX = Parms.ValueX;

	if (ValueY != nullptr)
		*ValueY = Parms.ValueY;

	if (ValueZ != nullptr)
		*ValueZ = Parms.ValueZ;
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.Unregister Map Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACAPlayerState*                   PlayerStateToUnregister                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ThresholdMapRevealComponent_C::Unregister_Map_Icon(class ACAPlayerState* PlayerStateToUnregister)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "Unregister Map Icon");

	Params::BP_ThresholdMapRevealComponent_C_Unregister_Map_Icon Parms{};

	Parms.PlayerStateToUnregister = PlayerStateToUnregister;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.RegisterMapIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACAPlayerState*>           PlayerStates                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCATeamID>                TeamsToNotify                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ThresholdMapRevealComponent_C::RegisterMapIcon(TArray<class ACAPlayerState*>& PlayerStates, TArray<struct FCATeamID>& TeamsToNotify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "RegisterMapIcon");

	Params::BP_ThresholdMapRevealComponent_C_RegisterMapIcon Parms{};

	Parms.PlayerStates = std::move(PlayerStates);
	Parms.TeamsToNotify = std::move(TeamsToNotify);

	UObject::ProcessEvent(Func, &Parms);

	PlayerStates = std::move(Parms.PlayerStates);
	TeamsToNotify = std::move(Parms.TeamsToNotify);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.UpdateMapIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ThresholdMapRevealComponent_C::UpdateMapIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "UpdateMapIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.GetAllTeamsExceptPlayerStateTeam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACAPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCATeamID>                TeamsIdArray                                           (Parm, OutParm)

void UBP_ThresholdMapRevealComponent_C::GetAllTeamsExceptPlayerStateTeam(class ACAPlayerState* PlayerState, TArray<struct FCATeamID>* TeamsIdArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "GetAllTeamsExceptPlayerStateTeam");

	Params::BP_ThresholdMapRevealComponent_C_GetAllTeamsExceptPlayerStateTeam Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (TeamsIdArray != nullptr)
		*TeamsIdArray = std::move(Parms.TeamsIdArray);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.OnLootUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeamData                        TeamData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ThresholdMapRevealComponent_C::OnLootUpdated(const struct FTeamData& TeamData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "OnLootUpdated");

	Params::BP_ThresholdMapRevealComponent_C_OnLootUpdated Parms{};

	Parms.TeamData = std::move(TeamData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.GetMVPSafe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCATeamID                        Team_id                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class ACAPlayerState*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ACAPlayerState* UBP_ThresholdMapRevealComponent_C::GetMVPSafe(const struct FCATeamID& Team_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "GetMVPSafe");

	Params::BP_ThresholdMapRevealComponent_C_GetMVPSafe Parms{};

	Parms.Team_id = std::move(Team_id);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.CheckForThresholdRevealPlayerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ThresholdMapRevealComponent_C::CheckForThresholdRevealPlayerUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "CheckForThresholdRevealPlayerUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.GetTeamsToNotify
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACAPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCATeamID>                TeamsIdArray                                           (Parm, OutParm)

void UBP_ThresholdMapRevealComponent_C::GetTeamsToNotify(class ACAPlayerState* PlayerState, TArray<struct FCATeamID>* TeamsIdArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "GetTeamsToNotify");

	Params::BP_ThresholdMapRevealComponent_C_GetTeamsToNotify Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (TeamsIdArray != nullptr)
		*TeamsIdArray = std::move(Parms.TeamsIdArray);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.Get Threshold Teams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCATeamID>                ThresholdTeamArray                                     (Parm, OutParm)
// TArray<struct FCATeamID>                NonThresholdTeamArray                                  (Parm, OutParm)

void UBP_ThresholdMapRevealComponent_C::Get_Threshold_Teams(TArray<struct FCATeamID>* ThresholdTeamArray, TArray<struct FCATeamID>* NonThresholdTeamArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "Get Threshold Teams");

	Params::BP_ThresholdMapRevealComponent_C_Get_Threshold_Teams Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ThresholdTeamArray != nullptr)
		*ThresholdTeamArray = std::move(Parms.ThresholdTeamArray);

	if (NonThresholdTeamArray != nullptr)
		*NonThresholdTeamArray = std::move(Parms.NonThresholdTeamArray);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.GetPlayerStatesFromTeamMembers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FTeamMember>              TeamMemberArray                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ACAPlayerState*>           PlayerStatesArray                                      (Parm, OutParm)

void UBP_ThresholdMapRevealComponent_C::GetPlayerStatesFromTeamMembers(TArray<struct FTeamMember>& TeamMemberArray, TArray<class ACAPlayerState*>* PlayerStatesArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "GetPlayerStatesFromTeamMembers");

	Params::BP_ThresholdMapRevealComponent_C_GetPlayerStatesFromTeamMembers Parms{};

	Parms.TeamMemberArray = std::move(TeamMemberArray);

	UObject::ProcessEvent(Func, &Parms);

	TeamMemberArray = std::move(Parms.TeamMemberArray);

	if (PlayerStatesArray != nullptr)
		*PlayerStatesArray = std::move(Parms.PlayerStatesArray);
}


// Function BP_ThresholdMapRevealComponent.BP_ThresholdMapRevealComponent_C.AreArraysTheSame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCATeamID>                ArrayA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FCATeamID>                ArrayB                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    AreTheSame                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ThresholdMapRevealComponent_C::AreArraysTheSame(TArray<struct FCATeamID>& ArrayA, const TArray<struct FCATeamID>& ArrayB, bool* AreTheSame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ThresholdMapRevealComponent_C", "AreArraysTheSame");

	Params::BP_ThresholdMapRevealComponent_C_AreArraysTheSame Parms{};

	Parms.ArrayA = std::move(ArrayA);
	Parms.ArrayB = std::move(ArrayB);

	UObject::ProcessEvent(Func, &Parms);

	ArrayA = std::move(Parms.ArrayA);

	if (AreTheSame != nullptr)
		*AreTheSame = Parms.AreTheSame;
}

}
