#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Player_DownedAR

#include "Basic.hpp"

#include "ABP_Player_DownedAR_classes.hpp"
#include "ABP_Player_DownedAR_parameters.hpp"


namespace SDK
{

// Function ABP_Player_DownedAR.ABP_Player_DownedAR_C.ExecuteUbergraph_ABP_Player_DownedAR
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_DownedAR_C::ExecuteUbergraph_ABP_Player_DownedAR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_DownedAR_C", "ExecuteUbergraph_ABP_Player_DownedAR");

	Params::ABP_Player_DownedAR_C_ExecuteUbergraph_ABP_Player_DownedAR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Player_DownedAR.ABP_Player_DownedAR_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Player_DownedAR_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Player_DownedAR_C", "AnimGraph");

	Params::ABP_Player_DownedAR_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
