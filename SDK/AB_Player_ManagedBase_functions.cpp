#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_ManagedBase

#include "Basic.hpp"

#include "AB_Player_ManagedBase_classes.hpp"
#include "AB_Player_ManagedBase_parameters.hpp"


namespace SDK
{

// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.ExecuteUbergraph_AB_Player_ManagedBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_ManagedBase_C::ExecuteUbergraph_AB_Player_ManagedBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "ExecuteUbergraph_AB_Player_ManagedBase");

	Params::AB_Player_ManagedBase_C_ExecuteUbergraph_AB_Player_ManagedBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.PlayCurrentWeaponEquipAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StopWhenAbilityEnds                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_Player_ManagedBase_C::PlayCurrentWeaponEquipAnim(bool StopWhenAbilityEnds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "PlayCurrentWeaponEquipAnim");

	Params::AB_Player_ManagedBase_C_PlayCurrentWeaponEquipAnim Parms{};

	Parms.StopWhenAbilityEnds = StopWhenAbilityEnds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Player_ManagedBase_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Player_ManagedBase_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.OnCompleted_6835C4F34BA9BE95766CF29927142649
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ManagedBase_C::OnCompleted_6835C4F34BA9BE95766CF29927142649()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "OnCompleted_6835C4F34BA9BE95766CF29927142649");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.OnBlendOut_6835C4F34BA9BE95766CF29927142649
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ManagedBase_C::OnBlendOut_6835C4F34BA9BE95766CF29927142649()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "OnBlendOut_6835C4F34BA9BE95766CF29927142649");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.OnInterrupted_6835C4F34BA9BE95766CF29927142649
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ManagedBase_C::OnInterrupted_6835C4F34BA9BE95766CF29927142649()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "OnInterrupted_6835C4F34BA9BE95766CF29927142649");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.OnCancelled_6835C4F34BA9BE95766CF29927142649
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ManagedBase_C::OnCancelled_6835C4F34BA9BE95766CF29927142649()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "OnCancelled_6835C4F34BA9BE95766CF29927142649");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.OnSkipped_6835C4F34BA9BE95766CF29927142649
// (BlueprintCallable, BlueprintEvent)

void UAB_Player_ManagedBase_C::OnSkipped_6835C4F34BA9BE95766CF29927142649()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "OnSkipped_6835C4F34BA9BE95766CF29927142649");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.EventReceived_C2DC32E344FE1074D6A5F7BC28775170
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_ManagedBase_C::EventReceived_C2DC32E344FE1074D6A5F7BC28775170(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "EventReceived_C2DC32E344FE1074D6A5F7BC28775170");

	Params::AB_Player_ManagedBase_C_EventReceived_C2DC32E344FE1074D6A5F7BC28775170 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.EventReceived_6C98CA5C41D6C042F7CD2592EAA46138
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UAB_Player_ManagedBase_C::EventReceived_6C98CA5C41D6C042F7CD2592EAA46138(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "EventReceived_6C98CA5C41D6C042F7CD2592EAA46138");

	Params::AB_Player_ManagedBase_C_EventReceived_6C98CA5C41D6C042F7CD2592EAA46138 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_ManagedBase.AB_Player_ManagedBase_C.GetCurrentWeaponEquipAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     Equip_Anim                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_ManagedBase_C::GetCurrentWeaponEquipAnim(class UAnimMontage** Equip_Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_ManagedBase_C", "GetCurrentWeaponEquipAnim");

	Params::AB_Player_ManagedBase_C_GetCurrentWeaponEquipAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Equip_Anim != nullptr)
		*Equip_Anim = Parms.Equip_Anim;
}

}
