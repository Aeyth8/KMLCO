#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Weapon_AR_Grunt

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Weapon_AR_Grunt.ABP_Weapon_AR_Grunt_C
// 0x0230 (0x04F0 - 0x02C0)
class UABP_Weapon_AR_Grunt_C final : public UCAAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0038)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0300(0x00E8)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x03E8(0x0018)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0400(0x00E8)()

public:
	void ExecuteUbergraph_ABP_Weapon_AR_Grunt(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Weapon_AR_Grunt_C">();
	}
	static class UABP_Weapon_AR_Grunt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Weapon_AR_Grunt_C>();
	}
};
static_assert(alignof(UABP_Weapon_AR_Grunt_C) == 0x000010, "Wrong alignment on UABP_Weapon_AR_Grunt_C");
static_assert(sizeof(UABP_Weapon_AR_Grunt_C) == 0x0004F0, "Wrong size on UABP_Weapon_AR_Grunt_C");
static_assert(offsetof(UABP_Weapon_AR_Grunt_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Weapon_AR_Grunt_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Weapon_AR_Grunt_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_Weapon_AR_Grunt_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Weapon_AR_Grunt_C, AnimGraphNode_Slot_1) == 0x000300, "Member 'UABP_Weapon_AR_Grunt_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_Weapon_AR_Grunt_C, AnimGraphNode_LocalRefPose) == 0x0003E8, "Member 'UABP_Weapon_AR_Grunt_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_Weapon_AR_Grunt_C, AnimGraphNode_Slot) == 0x000400, "Member 'UABP_Weapon_AR_Grunt_C::AnimGraphNode_Slot' has a wrong offset!");

}

