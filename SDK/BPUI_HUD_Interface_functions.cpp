#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_Interface

#include "Basic.hpp"

#include "BPUI_HUD_Interface_classes.hpp"
#include "BPUI_HUD_Interface_parameters.hpp"


namespace SDK
{

// Function BPUI_HUD_Interface.BPUI_HUD_Interface_C.GetCAHUD
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACAHUD_InGameMain*                As_CA_UI_HUD_in_Game                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPUI_HUD_Interface_C::GetCAHUD(class UObject* __WorldContext, class ACAHUD_InGameMain** As_CA_UI_HUD_in_Game)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPUI_HUD_Interface_C", "GetCAHUD");

	Params::BPUI_HUD_Interface_C_GetCAHUD Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (As_CA_UI_HUD_in_Game != nullptr)
		*As_CA_UI_HUD_in_Game = Parms.As_CA_UI_HUD_in_Game;
}


// Function BPUI_HUD_Interface.BPUI_HUD_Interface_C.IsActorInPlayerView
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target_actor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPUI_HUD_Interface_C::IsActorInPlayerView(class AActor* Target_actor, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPUI_HUD_Interface_C", "IsActorInPlayerView");

	Params::BPUI_HUD_Interface_C_IsActorInPlayerView Parms{};

	Parms.Target_actor = Target_actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
