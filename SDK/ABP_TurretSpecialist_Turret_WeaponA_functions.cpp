#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_TurretSpecialist_Turret_WeaponA

#include "Basic.hpp"

#include "ABP_TurretSpecialist_Turret_WeaponA_classes.hpp"
#include "ABP_TurretSpecialist_Turret_WeaponA_parameters.hpp"


namespace SDK
{

// Function ABP_TurretSpecialist_Turret_WeaponA.ABP_TurretSpecialist_Turret_WeaponA_C.ExecuteUbergraph_ABP_TurretSpecialist_Turret_WeaponA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_TurretSpecialist_Turret_WeaponA_C::ExecuteUbergraph_ABP_TurretSpecialist_Turret_WeaponA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_TurretSpecialist_Turret_WeaponA_C", "ExecuteUbergraph_ABP_TurretSpecialist_Turret_WeaponA");

	Params::ABP_TurretSpecialist_Turret_WeaponA_C_ExecuteUbergraph_ABP_TurretSpecialist_Turret_WeaponA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_TurretSpecialist_Turret_WeaponA.ABP_TurretSpecialist_Turret_WeaponA_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_TurretSpecialist_Turret_WeaponA_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_TurretSpecialist_Turret_WeaponA_C", "AnimGraph");

	Params::ABP_TurretSpecialist_Turret_WeaponA_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
