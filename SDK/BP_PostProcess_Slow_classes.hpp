#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Slow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PostProcess_Slow.BP_PostProcess_Slow_C
// 0x0040 (0x02D0 - 0x0290)
class BP_PostProcess_Slow::ABP_PostProcess_Slow_C final : public ACAPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_0341EB824C5E192C853500B0EBAA0491; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_0341EB824C5E192C853500B0EBAA0491; // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A5[0x3];                                      // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_83CE7A4647F398175D0043BF2D34189A; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_83CE7A4647F398175D0043BF2D34189A; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoopAudioPlaying;                                // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x3];                                      // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OnCurseFrustrated;                                 // 0x02C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PostProcess_Slow(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnPlay();
	void OnStop();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	bool IsVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BP_PostProcess_Slow.BP_PostProcess_Slow_C", true, "BP_PostProcess_Slow_C">();
	}
	static class BP_PostProcess_Slow::ABP_PostProcess_Slow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BP_PostProcess_Slow::ABP_PostProcess_Slow_C>();
	}
};
static_assert(alignof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C) == 0x000008, "Wrong alignment on BP_PostProcess_Slow::ABP_PostProcess_Slow_C");
static_assert(sizeof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C) == 0x0002D0, "Wrong size on BP_PostProcess_Slow::ABP_PostProcess_Slow_C");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, UberGraphFrame) == 0x000290, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, DefaultSceneRoot) == 0x000298, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_1_NewTrack_0_0341EB824C5E192C853500B0EBAA0491) == 0x0002A0, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_1_NewTrack_0_0341EB824C5E192C853500B0EBAA0491' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_1__Direction_0341EB824C5E192C853500B0EBAA0491) == 0x0002A4, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_1__Direction_0341EB824C5E192C853500B0EBAA0491' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_1) == 0x0002A8, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_0_NewTrack_0_83CE7A4647F398175D0043BF2D34189A) == 0x0002B0, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_0_NewTrack_0_83CE7A4647F398175D0043BF2D34189A' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_0__Direction_83CE7A4647F398175D0043BF2D34189A) == 0x0002B4, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_0__Direction_83CE7A4647F398175D0043BF2D34189A' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, Timeline_0) == 0x0002B8, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, IsLoopAudioPlaying) == 0x0002C0, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::IsLoopAudioPlaying' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow::ABP_PostProcess_Slow_C, OnCurseFrustrated) == 0x0002C4, "Member 'BP_PostProcess_Slow::ABP_PostProcess_Slow_C::OnCurseFrustrated' has a wrong offset!");

}
