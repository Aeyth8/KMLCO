#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPC_Character_DroneRusher

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_NPC_Character_classes.hpp"
#include "Keaton_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPC_Character_DroneRusher.BP_NPC_Character_DroneRusher_C
// 0x00A0 (0x2110 - 0x2070)
class ABP_NPC_Character_DroneRusher_C final : public ABP_NPC_Character_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NPC_Character_DroneRusher_C;     // 0x2070(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      DroneThruster_VFX;                                 // 0x2078(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      WeaponTraceOverlapCapsule;                         // 0x2080(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ArcLensInspectable_Projectile_C*    BP_ArcLensInspectable_Projectile;                  // 0x2088(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ScanVFX;                                           // 0x2090(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ViewCone;                                          // 0x2098(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ActivateChargeVFX;                                 // 0x20A0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20A1[0x3];                                     // 0x20A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Thruster_Colour;                                   // 0x20A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Light_Colour;                                      // 0x20B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Flame_Colour;                                      // 0x20C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ZeroG_Thruster_Colour;                             // 0x20D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ZeroG_Light_Colour;                                // 0x20E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ZeroG_Flame_Colour;                                // 0x20F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NPC_Character_DroneRusher(int32 EntryPoint);
	void BndEvt__BP_NPC_Character_DroneLight_m_ability_system_component_K2Node_ComponentBoundEvent_0_OnTrackedTagChange__DelegateSignature(const struct FGameplayTag& Tag, int32 Count);
	void ReceiveTick(float DeltaSeconds);
	void PlayAudioAfterDelay();
	void M_on_awareness_state_changed_Event_0(ECAAwarenessState Awareness_state);
	void DecreaseJetVFXIntensity();
	void IncreaseJetVFXIntensity();
	void SetScanIntensity(float Amount);
	void OnPoolStatusChanged(bool Is_in_pool);
	void M_on_death_delegate_Event_0(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();

	bool IsPlayerInFutureDamageArea() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPC_Character_DroneRusher_C">();
	}
	static class ABP_NPC_Character_DroneRusher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPC_Character_DroneRusher_C>();
	}
};
static_assert(alignof(ABP_NPC_Character_DroneRusher_C) == 0x000010, "Wrong alignment on ABP_NPC_Character_DroneRusher_C");
static_assert(sizeof(ABP_NPC_Character_DroneRusher_C) == 0x002110, "Wrong size on ABP_NPC_Character_DroneRusher_C");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, UberGraphFrame_BP_NPC_Character_DroneRusher_C) == 0x002070, "Member 'ABP_NPC_Character_DroneRusher_C::UberGraphFrame_BP_NPC_Character_DroneRusher_C' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, DroneThruster_VFX) == 0x002078, "Member 'ABP_NPC_Character_DroneRusher_C::DroneThruster_VFX' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, WeaponTraceOverlapCapsule) == 0x002080, "Member 'ABP_NPC_Character_DroneRusher_C::WeaponTraceOverlapCapsule' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, BP_ArcLensInspectable_Projectile) == 0x002088, "Member 'ABP_NPC_Character_DroneRusher_C::BP_ArcLensInspectable_Projectile' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ScanVFX) == 0x002090, "Member 'ABP_NPC_Character_DroneRusher_C::ScanVFX' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ViewCone) == 0x002098, "Member 'ABP_NPC_Character_DroneRusher_C::ViewCone' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ActivateChargeVFX) == 0x0020A0, "Member 'ABP_NPC_Character_DroneRusher_C::ActivateChargeVFX' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, Thruster_Colour) == 0x0020A4, "Member 'ABP_NPC_Character_DroneRusher_C::Thruster_Colour' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, Light_Colour) == 0x0020B4, "Member 'ABP_NPC_Character_DroneRusher_C::Light_Colour' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, Flame_Colour) == 0x0020C4, "Member 'ABP_NPC_Character_DroneRusher_C::Flame_Colour' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ZeroG_Thruster_Colour) == 0x0020D4, "Member 'ABP_NPC_Character_DroneRusher_C::ZeroG_Thruster_Colour' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ZeroG_Light_Colour) == 0x0020E4, "Member 'ABP_NPC_Character_DroneRusher_C::ZeroG_Light_Colour' has a wrong offset!");
static_assert(offsetof(ABP_NPC_Character_DroneRusher_C, ZeroG_Flame_Colour) == 0x0020F4, "Member 'ABP_NPC_Character_DroneRusher_C::ZeroG_Flame_Colour' has a wrong offset!");

}
