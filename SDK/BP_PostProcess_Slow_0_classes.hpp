#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_Slow_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PostProcess_Slow.BP_PostProcess_Slow_C
// 0x0068 (0x02F8 - 0x0290)
class BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C final : public ACAPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  ShieldPostProcess;                                 // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_LowPassEnvelopeWwise_F4C80252402AE4D17BF40EBA959984FC; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_F4C80252402AE4D17BF40EBA959984FC; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_NewTrack_0_7D40D2EF4EAD1F5E061EA497B85D0762; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_7D40D2EF4EAD1F5E061EA497B85D0762; // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_D1718F244200246B7801DA8D99DFFF4D; // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_D1718F244200246B7801DA8D99DFFF4D; // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CD[0x3];                                      // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PPMaterial;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PPDynamicMat;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoopAudioPlaying;                                // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OnCurseFrustrated;                                 // 0x02EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PostProcess_Slow(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnPlay();
	void OnStop();
	void OnPlayOnce();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BP_PostProcess_Slow.BP_PostProcess_Slow_C", true, "BP_PostProcess_Slow_C">();
	}
	static class BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C>();
	}
};
static_assert(alignof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C) == 0x000008, "Wrong alignment on BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C");
static_assert(sizeof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C) == 0x0002F8, "Wrong size on BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, UberGraphFrame) == 0x000290, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, ShieldPostProcess) == 0x000298, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::ShieldPostProcess' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, DefaultSceneRoot) == 0x0002A0, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_2_LowPassEnvelopeWwise_F4C80252402AE4D17BF40EBA959984FC) == 0x0002A8, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_2_LowPassEnvelopeWwise_F4C80252402AE4D17BF40EBA959984FC' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_2__Direction_F4C80252402AE4D17BF40EBA959984FC) == 0x0002AC, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_2__Direction_F4C80252402AE4D17BF40EBA959984FC' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_2) == 0x0002B0, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_1_NewTrack_0_7D40D2EF4EAD1F5E061EA497B85D0762) == 0x0002B8, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_1_NewTrack_0_7D40D2EF4EAD1F5E061EA497B85D0762' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_1__Direction_7D40D2EF4EAD1F5E061EA497B85D0762) == 0x0002BC, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_1__Direction_7D40D2EF4EAD1F5E061EA497B85D0762' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_1) == 0x0002C0, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_0_NewTrack_0_D1718F244200246B7801DA8D99DFFF4D) == 0x0002C8, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_0_NewTrack_0_D1718F244200246B7801DA8D99DFFF4D' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_0__Direction_D1718F244200246B7801DA8D99DFFF4D) == 0x0002CC, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_0__Direction_D1718F244200246B7801DA8D99DFFF4D' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, Timeline_0) == 0x0002D0, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, PPMaterial) == 0x0002D8, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::PPMaterial' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, PPDynamicMat) == 0x0002E0, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::PPDynamicMat' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, IsLoopAudioPlaying) == 0x0002E8, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::IsLoopAudioPlaying' has a wrong offset!");
static_assert(offsetof(BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C, OnCurseFrustrated) == 0x0002EC, "Member 'BP_PostProcess_Slow_0::ABP_PostProcess_Slow_C::OnCurseFrustrated' has a wrong offset!");

}

