#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MusicConductor_EmptyBase

#include "Basic.hpp"

#include "BP_MusicConductor_EmptyBase_classes.hpp"
#include "BP_MusicConductor_EmptyBase_parameters.hpp"


namespace SDK
{

// Function BP_MusicConductor_EmptyBase.BP_MusicConductor_EmptyBase_C.IsInVaultHackingOrBreachedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MusicConductor_EmptyBase_C::IsInVaultHackingOrBreachedState(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MusicConductor_EmptyBase_C", "IsInVaultHackingOrBreachedState");

	Params::BP_MusicConductor_EmptyBase_C_IsInVaultHackingOrBreachedState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

