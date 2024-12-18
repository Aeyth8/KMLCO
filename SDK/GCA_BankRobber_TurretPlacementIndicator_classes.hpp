#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCA_BankRobber_TurretPlacementIndicator

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCA_BankRobber_TurretPlacementIndicator.GCA_BankRobber_TurretPlacementIndicator_C
// 0x0018 (0x02D8 - 0x02C0)
class AGCA_BankRobber_TurretPlacementIndicator_C final : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Maximum_Deployment_Distance;                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BankRobber_PlaceTurret_Indicator_C* Turret_Indicator;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void On_Spectated_Player_Changed(class APawn* New_Spectated_Player);
	void Spawn_Turret_Indicator(class ABP_BankRobber_PlaceTurret_Indicator_C** Indicator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCA_BankRobber_TurretPlacementIndicator_C">();
	}
	static class AGCA_BankRobber_TurretPlacementIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCA_BankRobber_TurretPlacementIndicator_C>();
	}
};
static_assert(alignof(AGCA_BankRobber_TurretPlacementIndicator_C) == 0x000008, "Wrong alignment on AGCA_BankRobber_TurretPlacementIndicator_C");
static_assert(sizeof(AGCA_BankRobber_TurretPlacementIndicator_C) == 0x0002D8, "Wrong size on AGCA_BankRobber_TurretPlacementIndicator_C");
static_assert(offsetof(AGCA_BankRobber_TurretPlacementIndicator_C, DefaultSceneRoot) == 0x0002C0, "Member 'AGCA_BankRobber_TurretPlacementIndicator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGCA_BankRobber_TurretPlacementIndicator_C, Maximum_Deployment_Distance) == 0x0002C8, "Member 'AGCA_BankRobber_TurretPlacementIndicator_C::Maximum_Deployment_Distance' has a wrong offset!");
static_assert(offsetof(AGCA_BankRobber_TurretPlacementIndicator_C, Turret_Indicator) == 0x0002D0, "Member 'AGCA_BankRobber_TurretPlacementIndicator_C::Turret_Indicator' has a wrong offset!");

}

