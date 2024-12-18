#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserTargetEffect_TurretDrone

#include "Basic.hpp"

#include "BP_LaserTargetEffect_TurretDrone_classes.hpp"
#include "BP_LaserTargetEffect_TurretDrone_parameters.hpp"


namespace SDK
{

// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.ExecuteUbergraph_BP_LaserTargetEffect_TurretDrone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LaserTargetEffect_TurretDrone_C::ExecuteUbergraph_BP_LaserTargetEffect_TurretDrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "ExecuteUbergraph_BP_LaserTargetEffect_TurretDrone");

	Params::BP_LaserTargetEffect_TurretDrone_C_ExecuteUbergraph_BP_LaserTargetEffect_TurretDrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.Owner Pool State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_in_pool                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LaserTargetEffect_TurretDrone_C::Owner_Pool_State_Change(bool Is_in_pool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "Owner Pool State Change");

	Params::BP_LaserTargetEffect_TurretDrone_C_Owner_Pool_State_Change Parms{};

	Parms.Is_in_pool = Is_in_pool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.Target Laser State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_active                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LaserTargetEffect_TurretDrone_C::Target_Laser_State_Change(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "Target Laser State Change");

	Params::BP_LaserTargetEffect_TurretDrone_C_Target_Laser_State_Change Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.ChangeLaser
// (BlueprintCallable, BlueprintEvent)

void ABP_LaserTargetEffect_TurretDrone_C::ChangeLaser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "ChangeLaser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.WeaponCharge
// (BlueprintCallable, BlueprintEvent)

void ABP_LaserTargetEffect_TurretDrone_C::WeaponCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "WeaponCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.OnSetupBeam
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Parent_component                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LaserTargetEffect_TurretDrone_C::OnSetupBeam(class USceneComponent* Parent_component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "OnSetupBeam");

	Params::BP_LaserTargetEffect_TurretDrone_C_OnSetupBeam Parms{};

	Parms.Parent_component = Parent_component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.OnTargetLocationChange
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target_location                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LaserTargetEffect_TurretDrone_C::OnTargetLocationChange(const struct FVector& Target_location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "OnTargetLocationChange");

	Params::BP_LaserTargetEffect_TurretDrone_C_OnTargetLocationChange Parms{};

	Parms.Target_location = std::move(Target_location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LaserTargetEffect_TurretDrone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.Set Laser Colour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Charge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FadeOut                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LaserTargetEffect_TurretDrone_C::Set_Laser_Colour(float Charge, bool FadeOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "Set Laser Colour");

	Params::BP_LaserTargetEffect_TurretDrone_C_Set_Laser_Colour Parms{};

	Parms.Charge = Charge;
	Parms.FadeOut = FadeOut;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.SetLaserStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LaserTargetEffect_TurretDrone_C::SetLaserStart(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "SetLaserStart");

	Params::BP_LaserTargetEffect_TurretDrone_C_SetLaserStart Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.SetLaserEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LaserTargetEffect_TurretDrone_C::SetLaserEnd(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "SetLaserEnd");

	Params::BP_LaserTargetEffect_TurretDrone_C_SetLaserEnd Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LaserTargetEffect_TurretDrone_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LaserTargetEffect_TurretDrone_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

