#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VaultStateComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VaultStateComponent.BP_VaultStateComponent_C
// 0x00C0 (0x0E20 - 0x0D60)
class UBP_VaultStateComponent_C final : public UCAStateMachineComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             EventDamageProgress;                               // 0x0D68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventIntact;                                       // 0x0D78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventDamaged;                                      // 0x0D88(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventBroken;                                       // 0x0D98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventComplete;                                     // 0x0DA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventCollapse;                                     // 0x0DB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventOnAlerted;                                    // 0x0DC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CachedAlertedFlag;                                 // 0x0DD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD9[0x7];                                      // 0x0DD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnLockdown;                                   // 0x0DE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventDamagedDeactivated;                           // 0x0DF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventHalted;                                       // 0x0E00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventCooldown;                                     // 0x0E10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventDamageProgress__DelegateSignature(float Progress);
	void EventIntact__DelegateSignature();
	void EventDamaged__DelegateSignature();
	void EventBroken__DelegateSignature();
	void EventComplete__DelegateSignature();
	void EventCollapse__DelegateSignature();
	void EventOnAlerted__DelegateSignature(bool Alerted);
	void EventOnLockdown__DelegateSignature(bool IsLockdown);
	void EventDamagedDeactivated__DelegateSignature();
	void EventHalted__DelegateSignature();
	void EventCooldown__DelegateSignature();
	void ExecuteUbergraph_BP_VaultStateComponent(int32 EntryPoint);
	void Cooldown();
	void Halted();
	void TagChanged(const struct FGameplayTag& Tag, bool Added);
	void Collapse();
	void BindDelegates();
	void Complete();
	void Broken();
	void Damaged();
	void Intact();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VaultStateComponent_C">();
	}
	static class UBP_VaultStateComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_VaultStateComponent_C>();
	}
};
static_assert(alignof(UBP_VaultStateComponent_C) == 0x000008, "Wrong alignment on UBP_VaultStateComponent_C");
static_assert(sizeof(UBP_VaultStateComponent_C) == 0x000E20, "Wrong size on UBP_VaultStateComponent_C");
static_assert(offsetof(UBP_VaultStateComponent_C, UberGraphFrame) == 0x000D60, "Member 'UBP_VaultStateComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventDamageProgress) == 0x000D68, "Member 'UBP_VaultStateComponent_C::EventDamageProgress' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventIntact) == 0x000D78, "Member 'UBP_VaultStateComponent_C::EventIntact' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventDamaged) == 0x000D88, "Member 'UBP_VaultStateComponent_C::EventDamaged' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventBroken) == 0x000D98, "Member 'UBP_VaultStateComponent_C::EventBroken' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventComplete) == 0x000DA8, "Member 'UBP_VaultStateComponent_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventCollapse) == 0x000DB8, "Member 'UBP_VaultStateComponent_C::EventCollapse' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventOnAlerted) == 0x000DC8, "Member 'UBP_VaultStateComponent_C::EventOnAlerted' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, CachedAlertedFlag) == 0x000DD8, "Member 'UBP_VaultStateComponent_C::CachedAlertedFlag' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventOnLockdown) == 0x000DE0, "Member 'UBP_VaultStateComponent_C::EventOnLockdown' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventDamagedDeactivated) == 0x000DF0, "Member 'UBP_VaultStateComponent_C::EventDamagedDeactivated' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventHalted) == 0x000E00, "Member 'UBP_VaultStateComponent_C::EventHalted' has a wrong offset!");
static_assert(offsetof(UBP_VaultStateComponent_C, EventCooldown) == 0x000E10, "Member 'UBP_VaultStateComponent_C::EventCooldown' has a wrong offset!");

}

