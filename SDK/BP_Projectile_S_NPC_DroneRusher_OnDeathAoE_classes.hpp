#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_S_NPC_DroneRusher_OnDeathAoE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Projectile_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Projectile_S_NPC_DroneRusher_OnDeathAoE.BP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C
// 0x0010 (0x0550 - 0x0540)
class ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C final : public ABP_Projectile_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C; // 0x0538(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCustomiseSkeletalMeshComponent*        VisibleSkeletalMesh;                               // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_ProjectileAoE_C*                   BPC_ProjectileAoE;                                 // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Projectile_S_NPC_DroneRusher_OnDeathAoE(int32 EntryPoint);
	void Defuse();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C">();
	}
	static class ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C>();
	}
};
static_assert(alignof(ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C) == 0x000010, "Wrong alignment on ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C");
static_assert(sizeof(ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C) == 0x000550, "Wrong size on ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C");
static_assert(offsetof(ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C, UberGraphFrame_BP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C) == 0x000538, "Member 'ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C::UberGraphFrame_BP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C, VisibleSkeletalMesh) == 0x000540, "Member 'ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C::VisibleSkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C, BPC_ProjectileAoE) == 0x000548, "Member 'ABP_Projectile_S_NPC_DroneRusher_OnDeathAoE_C::BPC_ProjectileAoE' has a wrong offset!");

}
