#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VaultGateComponent

#include "Basic.hpp"

#include "BP_VaultGateComponent_classes.hpp"
#include "BP_VaultGateComponent_parameters.hpp"


namespace SDK
{

// Function BP_VaultGateComponent.BP_VaultGateComponent_C.ExecuteUbergraph_BP_VaultGateComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::ExecuteUbergraph_BP_VaultGateComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "ExecuteUbergraph_BP_VaultGateComponent");

	Params::BP_VaultGateComponent_C_ExecuteUbergraph_BP_VaultGateComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.NotifyTagRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::NotifyTagRemoved(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "NotifyTagRemoved");

	Params::BP_VaultGateComponent_C_NotifyTagRemoved Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.NotifyDisabled
// (Event, Public, BlueprintEvent)

void UBP_VaultGateComponent_C::NotifyDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "NotifyDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.NotifyTagAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::NotifyTagAdded(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "NotifyTagAdded");

	Params::BP_VaultGateComponent_C_NotifyTagAdded Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.InteractionComplete
// (BlueprintCallable, BlueprintEvent)

void UBP_VaultGateComponent_C::InteractionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "InteractionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.NotifyAbilityEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WasCancelled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_VaultGateComponent_C::NotifyAbilityEnded(class AActor* User, bool WasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "NotifyAbilityEnded");

	Params::BP_VaultGateComponent_C_NotifyAbilityEnded Parms{};

	Parms.User = User;
	Parms.WasCancelled = WasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.NotifyAbilityActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::NotifyAbilityActivated(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "NotifyAbilityActivated");

	Params::BP_VaultGateComponent_C_NotifyAbilityActivated Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_VaultGateComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.UpdateMapMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECAUIHUDEntityId                        Entity_id                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::UpdateMapMarker(ECAUIHUDEntityId Entity_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "UpdateMapMarker");

	Params::BP_VaultGateComponent_C_UpdateMapMarker Parms{};

	Parms.Entity_id = Entity_id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.SetVaultLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::SetVaultLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "SetVaultLevel");

	Params::BP_VaultGateComponent_C_SetVaultLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.CalculatePhaseProgressStamps
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VaultGateComponent_C::CalculatePhaseProgressStamps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "CalculatePhaseProgressStamps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.OnReleaseProgressUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::OnReleaseProgressUpdate(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "OnReleaseProgressUpdate");

	Params::BP_VaultGateComponent_C_OnReleaseProgressUpdate Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.OnVaultRelease
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCATeamID                        Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::OnVaultRelease(const struct FCATeamID& Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "OnVaultRelease");

	Params::BP_VaultGateComponent_C_OnVaultRelease Parms{};

	Parms.Team = std::move(Team);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.Set Icon Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          RelativeOffsetLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::Set_Icon_Location(const struct FVector& RelativeOffsetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "Set Icon Location");

	Params::BP_VaultGateComponent_C_Set_Icon_Location Parms{};

	Parms.RelativeOffsetLocation = std::move(RelativeOffsetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.RemoveVaultFromSecurity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_VaultGateComponent_C::RemoveVaultFromSecurity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "RemoveVaultFromSecurity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.GetSecurityAreas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>                   Areas                                                  (Parm, OutParm)

void UBP_VaultGateComponent_C::GetSecurityAreas(TArray<class AActor*>* Areas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "GetSecurityAreas");

	Params::BP_VaultGateComponent_C_GetSecurityAreas Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Areas != nullptr)
		*Areas = std::move(Parms.Areas);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.AddVaultToSecurityArea
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AgentDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     SecurityMissionTrigger                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::AddVaultToSecurityArea(float AgentDuration, const struct FGameplayTag& SecurityMissionTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "AddVaultToSecurityArea");

	Params::BP_VaultGateComponent_C_AddVaultToSecurityArea Parms{};

	Parms.AgentDuration = AgentDuration;
	Parms.SecurityMissionTrigger = std::move(SecurityMissionTrigger);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.BindToReleaseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_VaultGateComponent_C::BindToReleaseEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "BindToReleaseEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.ApplySecurityTrigger
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Mission_trigger                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::ApplySecurityTrigger(const struct FGameplayTag& Mission_trigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "ApplySecurityTrigger");

	Params::BP_VaultGateComponent_C_ApplySecurityTrigger Parms{};

	Parms.Mission_trigger = std::move(Mission_trigger);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.SetVaultName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCAText                          Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_VaultGateComponent_C::SetVaultName(const struct FCAText& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "SetVaultName");

	Params::BP_VaultGateComponent_C_SetVaultName Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.CanGiveAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_VaultGateComponent_C::CanGiveAbility(class AActor* User) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "CanGiveAbility");

	Params::BP_VaultGateComponent_C_CanGiveAbility Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.CanUseAbility
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_VaultGateComponent_C::CanUseAbility(class AActor* User) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "CanUseAbility");

	Params::BP_VaultGateComponent_C_CanUseAbility Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.GetAbilityUseProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_VaultGateComponent_C::GetAbilityUseProgress(class AActor* User) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "GetAbilityUseProgress");

	Params::BP_VaultGateComponent_C_GetAbilityUseProgress Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_VaultGateComponent.BP_VaultGateComponent_C.GetPrimaryMessageType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             Event_type                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VaultGateComponent_C::GetPrimaryMessageType(class FName* Event_type) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VaultGateComponent_C", "GetPrimaryMessageType");

	Params::BP_VaultGateComponent_C_GetPrimaryMessageType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Event_type != nullptr)
		*Event_type = Parms.Event_type;
}

}

