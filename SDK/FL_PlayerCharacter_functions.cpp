#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FL_PlayerCharacter

#include "Basic.hpp"

#include "FL_PlayerCharacter_classes.hpp"
#include "FL_PlayerCharacter_parameters.hpp"


namespace SDK
{

// Function FL_PlayerCharacter.FL_PlayerCharacter_C.SetPlayersLegsVisiblity
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   Original_mesh                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    New_visibilty                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::SetPlayersLegsVisiblity(class UMeshComponent* Original_mesh, bool New_visibilty, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "SetPlayersLegsVisiblity");

	Params::FL_PlayerCharacter_C_SetPlayersLegsVisiblity Parms{};

	Parms.Original_mesh = Original_mesh;
	Parms.New_visibilty = New_visibilty;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_PlayerCharacter.FL_PlayerCharacter_C.ShowMeleeWeapon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   OriginalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::ShowMeleeWeapon(class UMeshComponent* OriginalMesh, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "ShowMeleeWeapon");

	Params::FL_PlayerCharacter_C_ShowMeleeWeapon Parms{};

	Parms.OriginalMesh = OriginalMesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_PlayerCharacter.FL_PlayerCharacter_C.ResetMeleeVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   OriginalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::ResetMeleeVisibility(class UMeshComponent* OriginalMesh, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "ResetMeleeVisibility");

	Params::FL_PlayerCharacter_C_ResetMeleeVisibility Parms{};

	Parms.OriginalMesh = OriginalMesh;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_PlayerCharacter.FL_PlayerCharacter_C.SetHeldDeviceVisiblity
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   OriginalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                     Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::SetHeldDeviceVisiblity(class UMeshComponent* OriginalMesh, bool Visible, const struct FGameplayTag& Reason, class UAnimSequenceBase* Animation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "SetHeldDeviceVisiblity");

	Params::FL_PlayerCharacter_C_SetHeldDeviceVisiblity Parms{};

	Parms.OriginalMesh = OriginalMesh;
	Parms.Visible = Visible;
	Parms.Reason = std::move(Reason);
	Parms.Animation = Animation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function FL_PlayerCharacter.FL_PlayerCharacter_C.WhatAreWeLookingAt
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Viewer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxDistanceAhead                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusOfSweep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::WhatAreWeLookingAt(class APawn* Viewer, float MaxDistanceAhead, float RadiusOfSweep, class UObject* __WorldContext, class AActor** HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "WhatAreWeLookingAt");

	Params::FL_PlayerCharacter_C_WhatAreWeLookingAt Parms{};

	Parms.Viewer = Viewer;
	Parms.MaxDistanceAhead = MaxDistanceAhead;
	Parms.RadiusOfSweep = RadiusOfSweep;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HitActor != nullptr)
		*HitActor = Parms.HitActor;
}


// Function FL_PlayerCharacter.FL_PlayerCharacter_C.SetPropVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   OriginalMesh                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             PropName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_PlayerCharacter_C::SetPropVisibility(class UMeshComponent* OriginalMesh, bool Visible, class FName PropName, class UAnimSequenceBase* Animation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FL_PlayerCharacter_C", "SetPropVisibility");

	Params::FL_PlayerCharacter_C_SetPropVisibility Parms{};

	Parms.OriginalMesh = OriginalMesh;
	Parms.Visible = Visible;
	Parms.PropName = PropName;
	Parms.Animation = Animation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
