#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DoorSwitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAAudio_structs.hpp"
#include "BP_BaseSwitch_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DoorSwitch.BP_DoorSwitch_C
// 0x0090 (0x0490 - 0x0400)
class ABP_DoorSwitch_C final : public ABP_BaseSwitch_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DoorSwitch_C;                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   AR_bg;                                             // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      DoorUsedAR;                                        // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorSwitchARMesh;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DoorActor;                                         // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      ARClosedMaterial;                                  // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      AROpenMaterial;                                    // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      CooldownScreenMaterial;                            // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      AvailableScreenMaterial;                           // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DoorStateComponent_C*               DoorStateMachineComponent;                         // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         DoorAROpen;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         DoorARClosed;                                      // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioEventType                      DoorSwitchOpenAudio;                               // 0x0460(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCAAudioEventType                      DoorSwitchCloseAudio;                              // 0x0464(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FActiveGameplayEffectHandle            FoamedGE;                                          // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ClosedGE;                                          // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DoorClosed;                                        // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_479[0x3];                                      // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            EMP_GE;                                            // 0x047C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      ARCooldownMaterial;                                // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DoorSwitch(int32 EntryPoint);
	void BndEvt__BP_SwitchStateMachine_K2Node_ComponentBoundEvent_4_EventDisabled__DelegateSignature();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_0_EventEnabled__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_7_EventCooldownToOff__DelegateSignature();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_6_EventCooldownToOn__DelegateSignature();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_5_EventSwitchedOff__DelegateSignature();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_3_EventSwitchedOn__DelegateSignature();
	void CE_DoorEMPFinished();
	void CE_DoorEMP();
	void CE_GameStarted();
	void Foamed();
	void Unfoamed();
	void CE_DoorMoving();
	void BndEvt__BP_DoorSwitch_BP_SwitchStateMachine_K2Node_ComponentBoundEvent_2_StateTagChangedDelegate__DelegateSignature(const struct FGameplayTag& Tag, bool Added);
	void SwitchAR(bool DoorClosedARActive);
	void GetOwnerDoorStateMachine();
	void EnableAR(bool UsedARActive);
	void Is_Door_Closed(bool* DoorClosed_0);
	void RefreshSwitchState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DoorSwitch_C">();
	}
	static class ABP_DoorSwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DoorSwitch_C>();
	}
};
static_assert(alignof(ABP_DoorSwitch_C) == 0x000008, "Wrong alignment on ABP_DoorSwitch_C");
static_assert(sizeof(ABP_DoorSwitch_C) == 0x000490, "Wrong size on ABP_DoorSwitch_C");
static_assert(offsetof(ABP_DoorSwitch_C, UberGraphFrame_BP_DoorSwitch_C) == 0x000400, "Member 'ABP_DoorSwitch_C::UberGraphFrame_BP_DoorSwitch_C' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, AR_bg) == 0x000408, "Member 'ABP_DoorSwitch_C::AR_bg' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorUsedAR) == 0x000410, "Member 'ABP_DoorSwitch_C::DoorUsedAR' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorSwitchARMesh) == 0x000418, "Member 'ABP_DoorSwitch_C::DoorSwitchARMesh' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorActor) == 0x000420, "Member 'ABP_DoorSwitch_C::DoorActor' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, ARClosedMaterial) == 0x000428, "Member 'ABP_DoorSwitch_C::ARClosedMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, AROpenMaterial) == 0x000430, "Member 'ABP_DoorSwitch_C::AROpenMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, CooldownScreenMaterial) == 0x000438, "Member 'ABP_DoorSwitch_C::CooldownScreenMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, AvailableScreenMaterial) == 0x000440, "Member 'ABP_DoorSwitch_C::AvailableScreenMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorStateMachineComponent) == 0x000448, "Member 'ABP_DoorSwitch_C::DoorStateMachineComponent' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorAROpen) == 0x000450, "Member 'ABP_DoorSwitch_C::DoorAROpen' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorARClosed) == 0x000458, "Member 'ABP_DoorSwitch_C::DoorARClosed' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorSwitchOpenAudio) == 0x000460, "Member 'ABP_DoorSwitch_C::DoorSwitchOpenAudio' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorSwitchCloseAudio) == 0x000464, "Member 'ABP_DoorSwitch_C::DoorSwitchCloseAudio' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, FoamedGE) == 0x000468, "Member 'ABP_DoorSwitch_C::FoamedGE' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, ClosedGE) == 0x000470, "Member 'ABP_DoorSwitch_C::ClosedGE' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, DoorClosed) == 0x000478, "Member 'ABP_DoorSwitch_C::DoorClosed' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, EMP_GE) == 0x00047C, "Member 'ABP_DoorSwitch_C::EMP_GE' has a wrong offset!");
static_assert(offsetof(ABP_DoorSwitch_C, ARCooldownMaterial) == 0x000488, "Member 'ABP_DoorSwitch_C::ARCooldownMaterial' has a wrong offset!");

}
