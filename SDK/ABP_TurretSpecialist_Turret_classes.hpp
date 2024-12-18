#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_TurretSpecialist_Turret

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_TurretSpecialist_Turret.ABP_TurretSpecialist_Turret_C
// 0x04A0 (0x08B0 - 0x0410)
class UABP_TurretSpecialist_Turret_C final : public UCAAnimInstance_NPC
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0418(0x0038)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0450(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0470(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0490(0x00E8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0578(0x0110)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0688(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x06B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x06D8(0x0028)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_2;                      // 0x0700(0x0018)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0718(0x0038)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x0750(0x0018)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0768(0x0038)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x07A0(0x0018)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07B8(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x07F0(0x00B0)()
	struct FRotator                               LocalAim;                                          // 0x08A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InThePool;                                         // 0x08AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_TurretSpecialist_Turret(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Get_local_aim(class APawn* Target, struct FRotator* LocalAim_0);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_TurretSpecialist_Turret_C">();
	}
	static class UABP_TurretSpecialist_Turret_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_TurretSpecialist_Turret_C>();
	}
};
static_assert(alignof(UABP_TurretSpecialist_Turret_C) == 0x000010, "Wrong alignment on UABP_TurretSpecialist_Turret_C");
static_assert(sizeof(UABP_TurretSpecialist_Turret_C) == 0x0008B0, "Wrong size on UABP_TurretSpecialist_Turret_C");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, UberGraphFrame) == 0x000410, "Member 'UABP_TurretSpecialist_Turret_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_Root) == 0x000418, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_ComponentToLocalSpace) == 0x000450, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_LocalToComponentSpace) == 0x000470, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_Slot) == 0x000490, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_ModifyBone) == 0x000578, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_TransitionResult_2) == 0x000688, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_TransitionResult_1) == 0x0006B0, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_TransitionResult) == 0x0006D8, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_LocalRefPose_2) == 0x000700, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_LocalRefPose_2' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_StateResult_2) == 0x000718, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_LocalRefPose_1) == 0x000750, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_StateResult_1) == 0x000768, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_LocalRefPose) == 0x0007A0, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_StateResult) == 0x0007B8, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, AnimGraphNode_StateMachine) == 0x0007F0, "Member 'UABP_TurretSpecialist_Turret_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, LocalAim) == 0x0008A0, "Member 'UABP_TurretSpecialist_Turret_C::LocalAim' has a wrong offset!");
static_assert(offsetof(UABP_TurretSpecialist_Turret_C, InThePool) == 0x0008AC, "Member 'UABP_TurretSpecialist_Turret_C::InThePool' has a wrong offset!");

}

