#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_Cosplayer_InDisguise_IdentityThief

#include "Basic.hpp"

#include "GCA_Cosplayer_InDisguise_IdentityThief_classes.hpp"
#include "GCA_Cosplayer_InDisguise_IdentityThief_parameters.hpp"


namespace SDK
{

// Function GCA_Cosplayer_InDisguise_IdentityThief.GCA_Cosplayer_InDisguise_IdentityThief_C.WhileActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCA_Cosplayer_InDisguise_IdentityThief_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCA_Cosplayer_InDisguise_IdentityThief_C", "WhileActive");

	Params::GCA_Cosplayer_InDisguise_IdentityThief_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
