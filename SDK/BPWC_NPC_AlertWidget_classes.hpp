#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPWC_NPC_AlertWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPWC_NPC_AlertWidget.BPWC_NPC_AlertWidget_C
// 0x0088 (0x0198 - 0x0110)
class UBPWC_NPC_AlertWidget_C final : public UCAHUDNpcAlertComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACACharacter_NPC*                       Owning_NPC_Character;                              // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCASysAreaSensorComponent*              SecurirtyAreaSensor;                               // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACASecurityArea*                        CurrentSecurityArea;                               // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCANPCEscalatorManagerStateMachineComponent* NPCEscalatorManager;                               // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ShowIconStateNames;                                // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   AlertStateName;                                    // 0x0148(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EscalationCompletedStateName;                      // 0x0154(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Status_Tags_for_Highlighting;                  // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACASecurityArea*                        SecurityArea;                                      // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  StatusTagsToEnableOn;                              // 0x0170(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          ShowIconFromStatus;                                // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BPWC_NPC_AlertWidget(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnSecurityAreaEnter(class ACASecurityArea* Security_area);
	void ReceiveBeginPlay();
	void SetVisibleInternal();
	void SetHiddenInternal();
	void Tick();
	void OnEscalationCompletedActviated();
	void OnEscalationAlertedActivated();
	void BindEscalatorStateEvents(class UCAStateMachineComponent* EscalatorManager);
	void UnbindEscalatorStateEvents(class UCAStateMachineComponent* EscalatorManager);
	void SecurityAreaStateChanged(class UCAFiniteState* State);
	void AllowShowingFromStatusTag(bool bEnabled);
	void CheckStatusTagToEnableOn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPWC_NPC_AlertWidget_C">();
	}
	static class UBPWC_NPC_AlertWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPWC_NPC_AlertWidget_C>();
	}
};
static_assert(alignof(UBPWC_NPC_AlertWidget_C) == 0x000008, "Wrong alignment on UBPWC_NPC_AlertWidget_C");
static_assert(sizeof(UBPWC_NPC_AlertWidget_C) == 0x000198, "Wrong size on UBPWC_NPC_AlertWidget_C");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, UberGraphFrame) == 0x000110, "Member 'UBPWC_NPC_AlertWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, Owning_NPC_Character) == 0x000118, "Member 'UBPWC_NPC_AlertWidget_C::Owning_NPC_Character' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, SecurirtyAreaSensor) == 0x000120, "Member 'UBPWC_NPC_AlertWidget_C::SecurirtyAreaSensor' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, CurrentSecurityArea) == 0x000128, "Member 'UBPWC_NPC_AlertWidget_C::CurrentSecurityArea' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, NPCEscalatorManager) == 0x000130, "Member 'UBPWC_NPC_AlertWidget_C::NPCEscalatorManager' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, ShowIconStateNames) == 0x000138, "Member 'UBPWC_NPC_AlertWidget_C::ShowIconStateNames' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, AlertStateName) == 0x000148, "Member 'UBPWC_NPC_AlertWidget_C::AlertStateName' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, EscalationCompletedStateName) == 0x000154, "Member 'UBPWC_NPC_AlertWidget_C::EscalationCompletedStateName' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, Use_Status_Tags_for_Highlighting) == 0x000160, "Member 'UBPWC_NPC_AlertWidget_C::Use_Status_Tags_for_Highlighting' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, SecurityArea) == 0x000168, "Member 'UBPWC_NPC_AlertWidget_C::SecurityArea' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, StatusTagsToEnableOn) == 0x000170, "Member 'UBPWC_NPC_AlertWidget_C::StatusTagsToEnableOn' has a wrong offset!");
static_assert(offsetof(UBPWC_NPC_AlertWidget_C, ShowIconFromStatus) == 0x000190, "Member 'UBPWC_NPC_AlertWidget_C::ShowIconFromStatus' has a wrong offset!");

}
