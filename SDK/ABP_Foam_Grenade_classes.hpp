#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Foam_Grenade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Foam_Grenade.ABP_Foam_Grenade_C
// 0x03D0 (0x06A0 - 0x02D0)
class UABP_Foam_Grenade_C final : public UCAAnimInstance_WeaponNGadget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0310(0x00E8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x03F8(0x00E8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x04E0(0x00E8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x05C8(0x00A0)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x0668(0x0018)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0680(0x0018)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_ABP_Foam_Grenade(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Foam_Grenade_C">();
	}
	static class UABP_Foam_Grenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Foam_Grenade_C>();
	}
};
static_assert(alignof(UABP_Foam_Grenade_C) == 0x000010, "Wrong alignment on UABP_Foam_Grenade_C");
static_assert(sizeof(UABP_Foam_Grenade_C) == 0x0006A0, "Wrong size on UABP_Foam_Grenade_C");
static_assert(offsetof(UABP_Foam_Grenade_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_Foam_Grenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_Slot_2) == 0x000310, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_Slot_1) == 0x0003F8, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_Slot) == 0x0004E0, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_BlendListByBool) == 0x0005C8, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_LocalRefPose_1) == 0x000668, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Foam_Grenade_C, AnimGraphNode_LocalRefPose) == 0x000680, "Member 'UABP_Foam_Grenade_C::AnimGraphNode_LocalRefPose' has a wrong offset!");

}
