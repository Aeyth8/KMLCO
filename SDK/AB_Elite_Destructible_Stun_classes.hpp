#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Elite_Destructible_Stun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAGameDatabase_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Elite_Destructible_Stun.AB_Elite_Destructible_Stun_C
// 0x0038 (0x04C8 - 0x0490)
class UAB_Elite_Destructible_Stun_C : public UCAGameplayAbility_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           StunComponentAnim;                                 // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCADataTableRowHandle                  Stun;                                              // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAnimMontage*                           GroundAnim;                                        // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           AirAnim;                                           // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_Elite_Destructible_Stun(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5ABDFA2F4821151FD0B253BF5A60F6FD();
	void OnBlendOut_5ABDFA2F4821151FD0B253BF5A60F6FD();
	void OnInterrupted_5ABDFA2F4821151FD0B253BF5A60F6FD();
	void OnCancelled_5ABDFA2F4821151FD0B253BF5A60F6FD();
	void OnSkipped_5ABDFA2F4821151FD0B253BF5A60F6FD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Elite_Destructible_Stun_C">();
	}
	static class UAB_Elite_Destructible_Stun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Elite_Destructible_Stun_C>();
	}
};
static_assert(alignof(UAB_Elite_Destructible_Stun_C) == 0x000008, "Wrong alignment on UAB_Elite_Destructible_Stun_C");
static_assert(sizeof(UAB_Elite_Destructible_Stun_C) == 0x0004C8, "Wrong size on UAB_Elite_Destructible_Stun_C");
static_assert(offsetof(UAB_Elite_Destructible_Stun_C, UberGraphFrame) == 0x000490, "Member 'UAB_Elite_Destructible_Stun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_Elite_Destructible_Stun_C, StunComponentAnim) == 0x000498, "Member 'UAB_Elite_Destructible_Stun_C::StunComponentAnim' has a wrong offset!");
static_assert(offsetof(UAB_Elite_Destructible_Stun_C, Stun) == 0x0004A0, "Member 'UAB_Elite_Destructible_Stun_C::Stun' has a wrong offset!");
static_assert(offsetof(UAB_Elite_Destructible_Stun_C, GroundAnim) == 0x0004B8, "Member 'UAB_Elite_Destructible_Stun_C::GroundAnim' has a wrong offset!");
static_assert(offsetof(UAB_Elite_Destructible_Stun_C, AirAnim) == 0x0004C0, "Member 'UAB_Elite_Destructible_Stun_C::AirAnim' has a wrong offset!");

}

