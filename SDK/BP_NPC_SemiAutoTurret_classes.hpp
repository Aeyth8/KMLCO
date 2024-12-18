#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_SemiAutoTurret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BP_NPC_Character_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_SemiAutoTurret.BP_NPC_SemiAutoTurret_C
// 0x0060 (0x20D0 - 0x2070)
class ABP_NPC_SemiAutoTurret_C final : public ABP_NPC_Character_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NPC_SemiAutoTurret_C;            // 0x2070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x2078(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_NPCLootSpawner_C*                  BPC_NPCLootSpawner;                                // 0x2080(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACAEquipmentBase*                       MainWeapon;                                        // 0x2088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            Gameplay_Effect_Class;                             // 0x2090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   ObjectiveLoopIds;                                  // 0x2098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   ObjectiveLoopMessages;                             // 0x20A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACAObjectiveLoop*>               ObjectiveLoopsOwners;                              // 0x20B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_NPC_SemiAutoTurret(int32 EntryPoint);
	void SetObjectiveLoopIds(const TArray<struct FGameplayTag>& Objective_loops_ids);
	void RemoveObjectiveLoopOwner(const class ACAObjectiveLoop* Objective_loop);
	void AddObjectiveLoopOwner(const class ACAObjectiveLoop* Objective_loop);
	void BndEvt__BP_NPC_RailgunTurret_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnHitReceived__DelegateSignature(const struct FCADamageEffectInfo& Damage_effect_info);
	void OnMesssagesFromObjectiveLoopReceived(const TArray<struct FGameplayTag>& Messages);
	void DelayingIdleAudio();
	void OnPoolStatusChanged(bool Is_in_pool);
	void SetStartsOnline(bool Starts_online);
	void Death_stop_sound_event(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer);
	void ReceiveTick(float DeltaSeconds);
	void RemoveObjectiveLoopId(const struct FGameplayTag& Objective_loop_tag);
	void DeactivateObjectiveLoopObject();
	void AddObjectiveLoopId(const struct FGameplayTag& Objective_loop_tag);
	void ActivateObjectiveLoopObject();
	void GetObjectiveLoopIds(TArray<struct FGameplayTag>* Out_objective_loop_ids);
	void ReceiveBeginPlay();

	bool IsAssignedToObjectiveLoop(const struct FGameplayTag& Objective_loop_tag) const;
	bool IsAssignedToAnyObjectiveLoop() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_SemiAutoTurret_C">();
	}
	static class ABP_NPC_SemiAutoTurret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_SemiAutoTurret_C>();
	}
};
static_assert(alignof(ABP_NPC_SemiAutoTurret_C) == 0x000010, "Wrong alignment on ABP_NPC_SemiAutoTurret_C");
static_assert(sizeof(ABP_NPC_SemiAutoTurret_C) == 0x0020D0, "Wrong size on ABP_NPC_SemiAutoTurret_C");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, UberGraphFrame_BP_NPC_SemiAutoTurret_C) == 0x002070, "Member 'ABP_NPC_SemiAutoTurret_C::UberGraphFrame_BP_NPC_SemiAutoTurret_C' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, Sphere) == 0x002078, "Member 'ABP_NPC_SemiAutoTurret_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, BPC_NPCLootSpawner) == 0x002080, "Member 'ABP_NPC_SemiAutoTurret_C::BPC_NPCLootSpawner' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, MainWeapon) == 0x002088, "Member 'ABP_NPC_SemiAutoTurret_C::MainWeapon' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, Gameplay_Effect_Class) == 0x002090, "Member 'ABP_NPC_SemiAutoTurret_C::Gameplay_Effect_Class' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, ObjectiveLoopIds) == 0x002098, "Member 'ABP_NPC_SemiAutoTurret_C::ObjectiveLoopIds' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, ObjectiveLoopMessages) == 0x0020A8, "Member 'ABP_NPC_SemiAutoTurret_C::ObjectiveLoopMessages' has a wrong offset!");
static_assert(offsetof(ABP_NPC_SemiAutoTurret_C, ObjectiveLoopsOwners) == 0x0020B8, "Member 'ABP_NPC_SemiAutoTurret_C::ObjectiveLoopsOwners' has a wrong offset!");

}

