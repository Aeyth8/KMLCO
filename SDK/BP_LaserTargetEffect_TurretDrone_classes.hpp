#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserTargetEffect_TurretDrone

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LaserTargetEffect_TurretDrone.BP_LaserTargetEffect_TurretDrone_C
// 0x00B0 (0x0310 - 0x0260)
class ABP_LaserTargetEffect_TurretDrone_C final : public ACALaserTargetEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      LaserPointer;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CurrentColour;                                     // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IdleColour;                                        // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Charge0Colour;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Charge1Colour;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Charge2Colour;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Parent;                                            // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x02C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Weapon_Instant_Base_C*              OwningWeapon;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ChargeTimerHandle;                                 // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOffline;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x7];                                      // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OwningActor;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OfflineColour;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsVisible;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Owner_Is_Moving;                                   // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Target_Laser_Visible;                           // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_LaserTargetEffect_TurretDrone(int32 EntryPoint);
	void Owner_Pool_State_Change(bool Is_in_pool);
	void Target_Laser_State_Change(bool Is_active);
	void ChangeLaser();
	void WeaponCharge();
	void OnSetupBeam(class USceneComponent* Parent_component);
	void OnTargetLocationChange(const struct FVector& Target_location);
	void ReceiveBeginPlay();
	void Set_Laser_Colour(float Charge, bool FadeOut);
	void SetLaserStart(const struct FVector& Location);
	void SetLaserEnd(const struct FVector& Location);
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LaserTargetEffect_TurretDrone_C">();
	}
	static class ABP_LaserTargetEffect_TurretDrone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LaserTargetEffect_TurretDrone_C>();
	}
};
static_assert(alignof(ABP_LaserTargetEffect_TurretDrone_C) == 0x000008, "Wrong alignment on ABP_LaserTargetEffect_TurretDrone_C");
static_assert(sizeof(ABP_LaserTargetEffect_TurretDrone_C) == 0x000310, "Wrong size on ABP_LaserTargetEffect_TurretDrone_C");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, UberGraphFrame) == 0x000260, "Member 'ABP_LaserTargetEffect_TurretDrone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, LaserPointer) == 0x000268, "Member 'ABP_LaserTargetEffect_TurretDrone_C::LaserPointer' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, CurrentColour) == 0x000270, "Member 'ABP_LaserTargetEffect_TurretDrone_C::CurrentColour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, IdleColour) == 0x000280, "Member 'ABP_LaserTargetEffect_TurretDrone_C::IdleColour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Charge0Colour) == 0x000290, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Charge0Colour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Charge1Colour) == 0x0002A0, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Charge1Colour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Charge2Colour) == 0x0002B0, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Charge2Colour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Parent) == 0x0002C0, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Parent' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, TargetLocation) == 0x0002C8, "Member 'ABP_LaserTargetEffect_TurretDrone_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, OwningWeapon) == 0x0002D8, "Member 'ABP_LaserTargetEffect_TurretDrone_C::OwningWeapon' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, ChargeTimerHandle) == 0x0002E0, "Member 'ABP_LaserTargetEffect_TurretDrone_C::ChargeTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, IsOffline) == 0x0002E8, "Member 'ABP_LaserTargetEffect_TurretDrone_C::IsOffline' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, OwningActor) == 0x0002F0, "Member 'ABP_LaserTargetEffect_TurretDrone_C::OwningActor' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, OfflineColour) == 0x0002F8, "Member 'ABP_LaserTargetEffect_TurretDrone_C::OfflineColour' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, IsVisible) == 0x000308, "Member 'ABP_LaserTargetEffect_TurretDrone_C::IsVisible' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Owner_Is_Moving) == 0x000309, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Owner_Is_Moving' has a wrong offset!");
static_assert(offsetof(ABP_LaserTargetEffect_TurretDrone_C, Is_Target_Laser_Visible) == 0x00030A, "Member 'ABP_LaserTargetEffect_TurretDrone_C::Is_Target_Laser_Visible' has a wrong offset!");

}
