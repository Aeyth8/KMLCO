#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_JumpStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CAGameDatabase_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Elite_JumpStart.AB_Elite_JumpStart_C
// 0x0088 (0x0518 - 0x0490)
class UAB_Elite_JumpStart_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           Takeoff_Large;                                     // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Takeoff_Medium;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Takeoff_Small;                                     // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Jump_Vectors;                                      // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   OnCombatEvasiveElite;                              // 0x04C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCADataTableRowHandle                  JumpTimeSmall;                                     // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCADataTableRowHandle                  JumpTimeMedium;                                    // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCADataTableRowHandle                  JumpTimeLarge;                                     // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AB_Elite_JumpStart(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCompleted_BF059C14494E7A75A719F8AFB20D02D4();
	void OnBlendOut_BF059C14494E7A75A719F8AFB20D02D4();
	void OnInterrupted_BF059C14494E7A75A719F8AFB20D02D4();
	void OnCancelled_BF059C14494E7A75A719F8AFB20D02D4();
	void OnSkipped_BF059C14494E7A75A719F8AFB20D02D4();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Elite_JumpStart_C">();
	}
	static class UAB_Elite_JumpStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Elite_JumpStart_C>();
	}
};
static_assert(alignof(UAB_Elite_JumpStart_C) == 0x000008, "Wrong alignment on UAB_Elite_JumpStart_C");
static_assert(sizeof(UAB_Elite_JumpStart_C) == 0x000518, "Wrong size on UAB_Elite_JumpStart_C");
static_assert(offsetof(UAB_Elite_JumpStart_C, UberGraphFrame) == 0x000490, "Member 'UAB_Elite_JumpStart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, Takeoff_Large) == 0x000498, "Member 'UAB_Elite_JumpStart_C::Takeoff_Large' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, Takeoff_Medium) == 0x0004A0, "Member 'UAB_Elite_JumpStart_C::Takeoff_Medium' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, Takeoff_Small) == 0x0004A8, "Member 'UAB_Elite_JumpStart_C::Takeoff_Small' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, Jump_Vectors) == 0x0004B0, "Member 'UAB_Elite_JumpStart_C::Jump_Vectors' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, OnCombatEvasiveElite) == 0x0004C0, "Member 'UAB_Elite_JumpStart_C::OnCombatEvasiveElite' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, JumpTimeSmall) == 0x0004D0, "Member 'UAB_Elite_JumpStart_C::JumpTimeSmall' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, JumpTimeMedium) == 0x0004E8, "Member 'UAB_Elite_JumpStart_C::JumpTimeMedium' has a wrong offset!");
static_assert(offsetof(UAB_Elite_JumpStart_C, JumpTimeLarge) == 0x000500, "Member 'UAB_Elite_JumpStart_C::JumpTimeLarge' has a wrong offset!");

}
