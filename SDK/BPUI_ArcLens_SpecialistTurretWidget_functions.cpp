#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_ArcLens_SpecialistTurretWidget

#include "Basic.hpp"

#include "BPUI_ArcLens_SpecialistTurretWidget_classes.hpp"
#include "BPUI_ArcLens_SpecialistTurretWidget_parameters.hpp"


namespace SDK
{

// Function BPUI_ArcLens_SpecialistTurretWidget.BPUI_ArcLens_SpecialistTurretWidget_C.GetMaxDistanceForCaching
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACACharacter_NPC*                 Turret_actor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBPUI_ArcLens_SpecialistTurretWidget_C::GetMaxDistanceForCaching(class ACACharacter_NPC* Turret_actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPUI_ArcLens_SpecialistTurretWidget_C", "GetMaxDistanceForCaching");

	Params::BPUI_ArcLens_SpecialistTurretWidget_C_GetMaxDistanceForCaching Parms{};

	Parms.Turret_actor = Turret_actor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

