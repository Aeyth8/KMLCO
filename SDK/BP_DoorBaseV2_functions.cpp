#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoorBaseV2

#include "Basic.hpp"

#include "BP_DoorBaseV2_classes.hpp"
#include "BP_DoorBaseV2_parameters.hpp"


namespace SDK
{

// Function BP_DoorBaseV2.BP_DoorBaseV2_C.ExecuteUbergraph_BP_DoorBaseV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorBaseV2_C::ExecuteUbergraph_BP_DoorBaseV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "ExecuteUbergraph_BP_DoorBaseV2");

	Params::BP_DoorBaseV2_C_ExecuteUbergraph_BP_DoorBaseV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_11_EventEMPFinished__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_11_EventEMPFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_11_EventEMPFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_10_EventEMP__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_10_EventEMP__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_10_EventEMP__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DoorBaseV2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_9_EventLocked__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_9_EventLocked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_9_EventLocked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.OnProjectileAttached
// (Event, Public, BlueprintEvent)

void ABP_DoorBaseV2_C::OnProjectileAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "OnProjectileAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_0_EventOpen__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_0_EventOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_0_EventOpen__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_1_EventClosed__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_1_EventClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_1_EventClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_7_StateTagChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                                    Added                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_7_StateTagChangedDelegate__DelegateSignature(const struct FGameplayTag& Tag, bool Added)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_7_StateTagChangedDelegate__DelegateSignature");

	Params::BP_DoorBaseV2_C_BndEvt__BP_DoorBaseV2_StateMachineComponent_K2Node_ComponentBoundEvent_7_StateTagChangedDelegate__DelegateSignature Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Added = Added;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_2_EventOpening__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_2_EventOpening__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_2_EventOpening__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.OnActorEndBlocking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorBaseV2_C::OnActorEndBlocking(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "OnActorEndBlocking");

	Params::BP_DoorBaseV2_C_OnActorEndBlocking Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.OnActorBlocking
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DoorBaseV2_C::OnActorBlocking(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "OnActorBlocking");

	Params::BP_DoorBaseV2_C_OnActorBlocking Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_3_EventClosing__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_3_EventClosing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_3_EventClosing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_8_EventTick__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_8_EventTick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_8_EventTick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_6_EventStopped__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_6_EventStopped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_6_EventStopped__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_5_EventMoving__DelegateSignature
// (BlueprintEvent)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_5_EventMoving__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_5_EventMoving__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_4_UpdateOpen__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Percentage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorBaseV2_C::BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_4_UpdateOpen__DelegateSignature(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_4_UpdateOpen__DelegateSignature");

	Params::BP_DoorBaseV2_C_BndEvt__StateMachineComponent_K2Node_ComponentBoundEvent_4_UpdateOpen__DelegateSignature Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Open                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::SetOpen(bool Open)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "SetOpen");

	Params::BP_DoorBaseV2_C_SetOpen Parms{};

	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.ShowLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowLocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::ShowLockedState(bool ShowLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "ShowLockedState");

	Params::BP_DoorBaseV2_C_ShowLockedState Parms{};

	Parms.ShowLocked = ShowLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.EnableFoam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::EnableFoam(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "EnableFoam");

	Params::BP_DoorBaseV2_C_EnableFoam Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.UpdateLockedStatus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::UpdateLockedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "UpdateLockedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.GetDoorSwitchLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::GetDoorSwitchLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "GetDoorSwitchLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.SpawnDoorSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::SpawnDoorSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "SpawnDoorSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.Set Actor Start Blocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorBaseV2_C::Set_Actor_Start_Blocking(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "Set Actor Start Blocking");

	Params::BP_DoorBaseV2_C_Set_Actor_Start_Blocking Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.Set Actor End Blocking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorBaseV2_C::Set_Actor_End_Blocking(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "Set Actor End Blocking");

	Params::BP_DoorBaseV2_C_Set_Actor_End_Blocking Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.UpdateDoorSwitchSide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::UpdateDoorSwitchSide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "UpdateDoorSwitchSide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.Update Door Switch Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              DoorSwitchType                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_DoorBaseV2_C::Update_Door_Switch_Type(const struct FDataTableRowHandle& DoorSwitchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "Update Door Switch Type");

	Params::BP_DoorBaseV2_C_Update_Door_Switch_Type Parms{};

	Parms.DoorSwitchType = std::move(DoorSwitchType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.ResetDoorSwitchLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::ResetDoorSwitchLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "ResetDoorSwitchLocations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.FindSnapTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       NearestSnapPoint                                       (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FBox                             BoundsDebugBox                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::FindSnapTarget(bool* Found, struct FTransform* NearestSnapPoint, struct FBox* BoundsDebugBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "FindSnapTarget");

	Params::BP_DoorBaseV2_C_FindSnapTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (NearestSnapPoint != nullptr)
		*NearestSnapPoint = std::move(Parms.NearestSnapPoint);

	if (BoundsDebugBox != nullptr)
		*BoundsDebugBox = std::move(Parms.BoundsDebugBox);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.Construct Snap to Frame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::Construct_Snap_to_Frame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "Construct Snap to Frame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.SnapToFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DoorBaseV2_C::SnapToFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "SnapToFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.Update Switch Unlocked Tag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Locked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::Update_Switch_Unlocked_Tag(bool Is_Locked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "Update Switch Unlocked Tag");

	Params::BP_DoorBaseV2_C_Update_Switch_Unlocked_Tag Parms{};

	Parms.Is_Locked = Is_Locked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.RequiresAuthorization
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DoorBaseV2_C::RequiresAuthorization() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "RequiresAuthorization");

	Params::BP_DoorBaseV2_C_RequiresAuthorization Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.HasAuthorization
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DoorBaseV2_C::HasAuthorization(class AActor* User) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "HasAuthorization");

	Params::BP_DoorBaseV2_C_HasAuthorization Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.IsOwningTeam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           User                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::IsOwningTeam(class AActor* User, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "IsOwningTeam");

	Params::BP_DoorBaseV2_C_IsOwningTeam Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.GetObjectiveLoopElementComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* ABP_DoorBaseV2_C::GetObjectiveLoopElementComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "GetObjectiveLoopElementComponent");

	Params::BP_DoorBaseV2_C_GetObjectiveLoopElementComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.IsAnySwitchLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Locked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DoorBaseV2_C::IsAnySwitchLocked(bool* Locked) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "IsAnySwitchLocked");

	Params::BP_DoorBaseV2_C_IsAnySwitchLocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;
}


// Function BP_DoorBaseV2.BP_DoorBaseV2_C.GetRelatedActorsToIgnoreLOSChecks
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          Aoe_centre                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Aoe_radius                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AActor*> ABP_DoorBaseV2_C::GetRelatedActorsToIgnoreLOSChecks(const struct FVector& Aoe_centre, const float Aoe_radius, const class AActor* Instigator_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DoorBaseV2_C", "GetRelatedActorsToIgnoreLOSChecks");

	Params::BP_DoorBaseV2_C_GetRelatedActorsToIgnoreLOSChecks Parms{};

	Parms.Aoe_centre = std::move(Aoe_centre);
	Parms.Aoe_radius = Aoe_radius;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

