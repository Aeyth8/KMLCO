#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Weapon_AR_Grunt

#include "Basic.hpp"

#include "ABP_Weapon_AR_Grunt_classes.hpp"
#include "ABP_Weapon_AR_Grunt_parameters.hpp"


namespace SDK
{

// Function ABP_Weapon_AR_Grunt.ABP_Weapon_AR_Grunt_C.ExecuteUbergraph_ABP_Weapon_AR_Grunt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Weapon_AR_Grunt_C::ExecuteUbergraph_ABP_Weapon_AR_Grunt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_AR_Grunt_C", "ExecuteUbergraph_ABP_Weapon_AR_Grunt");

	Params::ABP_Weapon_AR_Grunt_C_ExecuteUbergraph_ABP_Weapon_AR_Grunt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Weapon_AR_Grunt.ABP_Weapon_AR_Grunt_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Weapon_AR_Grunt_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Weapon_AR_Grunt_C", "AnimGraph");

	Params::ABP_Weapon_AR_Grunt_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

