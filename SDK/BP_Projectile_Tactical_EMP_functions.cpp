#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Tactical_EMP

#include "Basic.hpp"

#include "BP_Projectile_Tactical_EMP_classes.hpp"
#include "BP_Projectile_Tactical_EMP_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.ExecuteUbergraph_BP_Projectile_Tactical_EMP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tactical_EMP_C::ExecuteUbergraph_BP_Projectile_Tactical_EMP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "ExecuteUbergraph_BP_Projectile_Tactical_EMP");

	Params::BP_Projectile_Tactical_EMP_C_ExecuteUbergraph_BP_Projectile_Tactical_EMP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.BndEvt__BP_Projectile_Tactical_EMP_m_predicted_physics_component_K2Node_ComponentBoundEvent_1_OnPairedWithPredictedActor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Predicted_actor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tactical_EMP_C::BndEvt__BP_Projectile_Tactical_EMP_m_predicted_physics_component_K2Node_ComponentBoundEvent_1_OnPairedWithPredictedActor__DelegateSignature(class AActor* Predicted_actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "BndEvt__BP_Projectile_Tactical_EMP_m_predicted_physics_component_K2Node_ComponentBoundEvent_1_OnPairedWithPredictedActor__DelegateSignature");

	Params::BP_Projectile_Tactical_EMP_C_BndEvt__BP_Projectile_Tactical_EMP_m_predicted_physics_component_K2Node_ComponentBoundEvent_1_OnPairedWithPredictedActor__DelegateSignature Parms{};

	Parms.Predicted_actor = Predicted_actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.Defuse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::Defuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "Defuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.OnProjFinalImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Tactical_EMP_C::OnProjFinalImpact(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "OnProjFinalImpact");

	Params::BP_Projectile_Tactical_EMP_C_OnProjFinalImpact Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.OnDetonate
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::OnDetonate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "OnDetonate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.PlayArmingAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HitShield                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Projectile_Tactical_EMP_C::PlayArmingAudio(bool HitShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "PlayArmingAudio");

	Params::BP_Projectile_Tactical_EMP_C_PlayArmingAudio Parms{};

	Parms.HitShield = HitShield;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.PrimeFuse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::PrimeFuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "PrimeFuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.StopSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::StopSFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "StopSFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.OnEffectSphereSpawned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Tactical_EffectSphere_EMP_C*  Effect_Sphere                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tactical_EMP_C::OnEffectSphereSpawned(class ABP_Tactical_EffectSphere_EMP_C*& Effect_Sphere)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "OnEffectSphereSpawned");

	Params::BP_Projectile_Tactical_EMP_C_OnEffectSphereSpawned Parms{};

	Parms.Effect_Sphere = Effect_Sphere;

	UObject::ProcessEvent(Func, &Parms);

	Effect_Sphere = Parms.Effect_Sphere;
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.SFX Projectile Travel Audio Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAAudioSwitchNameType           Switch_Group                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FCAAudioSwitchValueType          Switch_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FCAAudioEventType                In_Flight_Audio_Event                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_Projectile_Tactical_EMP_C::SFX_Projectile_Travel_Audio_Start(const struct FCAAudioSwitchNameType& Switch_Group, const struct FCAAudioSwitchValueType& Switch_Value, const struct FCAAudioEventType& In_Flight_Audio_Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "SFX Projectile Travel Audio Start");

	Params::BP_Projectile_Tactical_EMP_C_SFX_Projectile_Travel_Audio_Start Parms{};

	Parms.Switch_Group = std::move(Switch_Group);
	Parms.Switch_Value = std::move(Switch_Value);
	Parms.In_Flight_Audio_Event = std::move(In_Flight_Audio_Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.SFX Projectile Travel Audio Stop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAAudioEventType                Stop_In_Flight_Audio_Event                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_Projectile_Tactical_EMP_C::SFX_Projectile_Travel_Audio_Stop(const struct FCAAudioEventType& Stop_In_Flight_Audio_Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "SFX Projectile Travel Audio Stop");

	Params::BP_Projectile_Tactical_EMP_C_SFX_Projectile_Travel_Audio_Stop Parms{};

	Parms.Stop_In_Flight_Audio_Event = std::move(Stop_In_Flight_Audio_Event);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.UpgradeGadgetToCurrentLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Tactical_EMP_C::UpgradeGadgetToCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "UpgradeGadgetToCurrentLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.BP_GetProjectileGravityScale
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Upgrade_level                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Projectile_Tactical_EMP_C::BP_GetProjectileGravityScale(int32 Upgrade_level) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "BP_GetProjectileGravityScale");

	Params::BP_Projectile_Tactical_EMP_C_BP_GetProjectileGravityScale Parms{};

	Parms.Upgrade_level = Upgrade_level;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.IsPlayerInFutureDamageArea
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Projectile_Tactical_EMP_C::IsPlayerInFutureDamageArea() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "IsPlayerInFutureDamageArea");

	Params::BP_Projectile_Tactical_EMP_C_IsPlayerInFutureDamageArea Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Projectile_Tactical_EMP.BP_Projectile_Tactical_EMP_C.GetRadiusFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    Upgraded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ZeroG                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsNPCThrown                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Tactical_EMP_C::GetRadiusFromDT(bool Upgraded, bool ZeroG, bool IsNPCThrown, float* Radius) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Tactical_EMP_C", "GetRadiusFromDT");

	Params::BP_Projectile_Tactical_EMP_C_GetRadiusFromDT Parms{};

	Parms.Upgraded = Upgraded;
	Parms.ZeroG = ZeroG;
	Parms.IsNPCThrown = IsNPCThrown;

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;
}

}
