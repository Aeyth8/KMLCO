#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_ZeroG_GravHook

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AB_Player_ManagedBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AB_Player_ZeroG_GravHook.AB_Player_ZeroG_GravHook_C
// 0x0018 (0x04B8 - 0x04A0)
class UAB_Player_ZeroG_GravHook_C final : public UAB_Player_ManagedBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AB_Player_ZeroG_GravHook_C;         // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      LineVFX;                                           // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanCancel;                                         // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AB_Player_ZeroG_GravHook(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_1532085041E1A0A6BC738191027EE98E();
	void OnFinish_7EEE7155484EB859190785869F6D5B88();
	void OnCompleted_32514C2C4D94D0228AEB1B9F250001CD();
	void OnBlendOut_32514C2C4D94D0228AEB1B9F250001CD();
	void OnInterrupted_32514C2C4D94D0228AEB1B9F250001CD();
	void OnCancelled_32514C2C4D94D0228AEB1B9F250001CD();
	void OnSkipped_32514C2C4D94D0228AEB1B9F250001CD();
	void EventReceived_3911D6CC48DF466C12FED4BDE50C8C58(const struct FGameplayEventData& Payload);
	void EventReceived_5F335ED14F1127FC329AEC8829CE1E37(const struct FGameplayEventData& Payload);
	void EventReceived_6291DE2542B60926F663D2B30029133B(const struct FGameplayEventData& Payload);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_Player_ZeroG_GravHook_C">();
	}
	static class UAB_Player_ZeroG_GravHook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_Player_ZeroG_GravHook_C>();
	}
};
static_assert(alignof(UAB_Player_ZeroG_GravHook_C) == 0x000008, "Wrong alignment on UAB_Player_ZeroG_GravHook_C");
static_assert(sizeof(UAB_Player_ZeroG_GravHook_C) == 0x0004B8, "Wrong size on UAB_Player_ZeroG_GravHook_C");
static_assert(offsetof(UAB_Player_ZeroG_GravHook_C, UberGraphFrame_AB_Player_ZeroG_GravHook_C) == 0x0004A0, "Member 'UAB_Player_ZeroG_GravHook_C::UberGraphFrame_AB_Player_ZeroG_GravHook_C' has a wrong offset!");
static_assert(offsetof(UAB_Player_ZeroG_GravHook_C, LineVFX) == 0x0004A8, "Member 'UAB_Player_ZeroG_GravHook_C::LineVFX' has a wrong offset!");
static_assert(offsetof(UAB_Player_ZeroG_GravHook_C, CanCancel) == 0x0004B0, "Member 'UAB_Player_ZeroG_GravHook_C::CanCancel' has a wrong offset!");

}

