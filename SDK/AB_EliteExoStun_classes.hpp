#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteExoStun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAGameDatabase_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_EliteExoStun.AB_EliteExoStun_C
// 0x0050 (0x04E0 - 0x0490)
class UAB_EliteExoStun_C final : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   LeftComponentBoneName;                             // 0x0498(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RightComponentBoneName;                            // 0x04A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           LeftStunComponentAnim;                             // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           RightStunComponentAnim;                            // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           StunComponentAnim;                                 // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCADataTableRowHandle                  WeakpointStun;                                     // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AB_EliteExoStun(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnCompleted_863BBA114F071B5B3227958268ED90FC();
	void OnBlendOut_863BBA114F071B5B3227958268ED90FC();
	void OnInterrupted_863BBA114F071B5B3227958268ED90FC();
	void OnCancelled_863BBA114F071B5B3227958268ED90FC();
	void OnSkipped_863BBA114F071B5B3227958268ED90FC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_EliteExoStun_C">();
	}
	static class UAB_EliteExoStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_EliteExoStun_C>();
	}
};
static_assert(alignof(UAB_EliteExoStun_C) == 0x000008, "Wrong alignment on UAB_EliteExoStun_C");
static_assert(sizeof(UAB_EliteExoStun_C) == 0x0004E0, "Wrong size on UAB_EliteExoStun_C");
static_assert(offsetof(UAB_EliteExoStun_C, UberGraphFrame) == 0x000490, "Member 'UAB_EliteExoStun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, LeftComponentBoneName) == 0x000498, "Member 'UAB_EliteExoStun_C::LeftComponentBoneName' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, RightComponentBoneName) == 0x0004A4, "Member 'UAB_EliteExoStun_C::RightComponentBoneName' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, LeftStunComponentAnim) == 0x0004B0, "Member 'UAB_EliteExoStun_C::LeftStunComponentAnim' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, RightStunComponentAnim) == 0x0004B8, "Member 'UAB_EliteExoStun_C::RightStunComponentAnim' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, StunComponentAnim) == 0x0004C0, "Member 'UAB_EliteExoStun_C::StunComponentAnim' has a wrong offset!");
static_assert(offsetof(UAB_EliteExoStun_C, WeakpointStun) == 0x0004C8, "Member 'UAB_EliteExoStun_C::WeakpointStun' has a wrong offset!");

}
