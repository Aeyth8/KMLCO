#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_TeleportIn

#include "Basic.hpp"

#include "GCA_TeleportIn_classes.hpp"
#include "GCA_TeleportIn_parameters.hpp"


namespace SDK
{

// Function GCA_TeleportIn.GCA_TeleportIn_C.ExecuteUbergraph_GCA_TeleportIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_TeleportIn_C::ExecuteUbergraph_GCA_TeleportIn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "ExecuteUbergraph_GCA_TeleportIn");

	Params::GCA_TeleportIn_C_ExecuteUbergraph_GCA_TeleportIn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_TeleportIn.GCA_TeleportIn_C.TeleportStart
// (BlueprintCallable, BlueprintEvent)

void AGCA_TeleportIn_C::TeleportStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "TeleportStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_TeleportIn.GCA_TeleportIn_C.TeleportEnd
// (BlueprintCallable, BlueprintEvent)

void AGCA_TeleportIn_C::TeleportEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "TeleportEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCA_TeleportIn.GCA_TeleportIn_C.TeleportAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECANPCType                              NPCType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCA_TeleportIn_C::TeleportAudio(ECANPCType NPCType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "TeleportAudio");

	Params::GCA_TeleportIn_C_TeleportAudio Parms{};

	Parms.NPCType = NPCType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCA_TeleportIn.GCA_TeleportIn_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_TeleportIn_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "OnRemove");

	Params::GCA_TeleportIn_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCA_TeleportIn.GCA_TeleportIn_C.WhileActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_TeleportIn_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_TeleportIn_C", "WhileActive");

	Params::GCA_TeleportIn_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
