#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysicsProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CAGameDatabase_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhysicsProp.BP_PhysicsProp_C
// 0x0030 (0x0288 - 0x0258)
class ABP_PhysicsProp_C : public ACAPhysicsPropClientOnly
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCACollisionComponent*                  CACollision;                                       // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCAPhysicsPropComponent*                CAPhysicsProp;                                     // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FCAGameDatabaseRowHandle               PropType;                                          // 0x0270(0x0018)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_PhysicsProp(int32 EntryPoint);
	void AddImpulseToPhysicObject(const struct FVector& Impulse);
	void SetPhysicsObjectConfig(const struct FCAGameDatabaseRowHandle& Config);
	void BndEvt__CACollision_K2Node_ComponentBoundEvent_0_SceneComponentBeginOverlapSignature__DelegateSignature(class USceneComponent* OverlappedComponent, class AActor* OtherActor, class USceneComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhysicsProp_C">();
	}
	static class ABP_PhysicsProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhysicsProp_C>();
	}
};
static_assert(alignof(ABP_PhysicsProp_C) == 0x000008, "Wrong alignment on ABP_PhysicsProp_C");
static_assert(sizeof(ABP_PhysicsProp_C) == 0x000288, "Wrong size on ABP_PhysicsProp_C");
static_assert(offsetof(ABP_PhysicsProp_C, UberGraphFrame) == 0x000258, "Member 'ABP_PhysicsProp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PhysicsProp_C, CACollision) == 0x000260, "Member 'ABP_PhysicsProp_C::CACollision' has a wrong offset!");
static_assert(offsetof(ABP_PhysicsProp_C, CAPhysicsProp) == 0x000268, "Member 'ABP_PhysicsProp_C::CAPhysicsProp' has a wrong offset!");
static_assert(offsetof(ABP_PhysicsProp_C, PropType) == 0x000270, "Member 'ABP_PhysicsProp_C::PropType' has a wrong offset!");

}

