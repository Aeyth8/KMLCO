#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_ZeroG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PostProcess_ZeroG.BP_PostProcess_ZeroG_C
// 0x0058 (0x02E8 - 0x0290)
class ABP_PostProcess_ZeroG_C final : public ACAPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_BrightnessBoost_8265C15E42050D1959E200925FF7A3CB; // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_LinesOpacity_8265C15E42050D1959E200925FF7A3CB; // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Transition_8265C15E42050D1959E200925FF7A3CB; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_8265C15E42050D1959E200925FF7A3CB; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_BrightnessBoost_79E7D2A64BDE6A3F3F9E99A26438031D; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_LinesOpacity_79E7D2A64BDE6A3F3F9E99A26438031D; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Transition_79E7D2A64BDE6A3F3F9E99A26438031D; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_79E7D2A64BDE6A3F3F9E99A26438031D; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               PPMaterial;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceTravelled;                                 // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MsxSpeed;                                          // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSpeed;                                          // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PostProcess_ZeroG(int32 EntryPoint);
	void OnStop();
	void ReceiveBeginPlay();
	void OnPlay();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	bool IsVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PostProcess_ZeroG_C">();
	}
	static class ABP_PostProcess_ZeroG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PostProcess_ZeroG_C>();
	}
};
static_assert(alignof(ABP_PostProcess_ZeroG_C) == 0x000008, "Wrong alignment on ABP_PostProcess_ZeroG_C");
static_assert(sizeof(ABP_PostProcess_ZeroG_C) == 0x0002E8, "Wrong size on ABP_PostProcess_ZeroG_C");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, UberGraphFrame) == 0x000290, "Member 'ABP_PostProcess_ZeroG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_PostProcess_ZeroG_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_1_BrightnessBoost_8265C15E42050D1959E200925FF7A3CB) == 0x0002A0, "Member 'ABP_PostProcess_ZeroG_C::Timeline_1_BrightnessBoost_8265C15E42050D1959E200925FF7A3CB' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_1_LinesOpacity_8265C15E42050D1959E200925FF7A3CB) == 0x0002A4, "Member 'ABP_PostProcess_ZeroG_C::Timeline_1_LinesOpacity_8265C15E42050D1959E200925FF7A3CB' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_1_Transition_8265C15E42050D1959E200925FF7A3CB) == 0x0002A8, "Member 'ABP_PostProcess_ZeroG_C::Timeline_1_Transition_8265C15E42050D1959E200925FF7A3CB' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_1__Direction_8265C15E42050D1959E200925FF7A3CB) == 0x0002AC, "Member 'ABP_PostProcess_ZeroG_C::Timeline_1__Direction_8265C15E42050D1959E200925FF7A3CB' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_1) == 0x0002B0, "Member 'ABP_PostProcess_ZeroG_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_0_BrightnessBoost_79E7D2A64BDE6A3F3F9E99A26438031D) == 0x0002B8, "Member 'ABP_PostProcess_ZeroG_C::Timeline_0_BrightnessBoost_79E7D2A64BDE6A3F3F9E99A26438031D' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_0_LinesOpacity_79E7D2A64BDE6A3F3F9E99A26438031D) == 0x0002BC, "Member 'ABP_PostProcess_ZeroG_C::Timeline_0_LinesOpacity_79E7D2A64BDE6A3F3F9E99A26438031D' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_0_Transition_79E7D2A64BDE6A3F3F9E99A26438031D) == 0x0002C0, "Member 'ABP_PostProcess_ZeroG_C::Timeline_0_Transition_79E7D2A64BDE6A3F3F9E99A26438031D' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_0__Direction_79E7D2A64BDE6A3F3F9E99A26438031D) == 0x0002C4, "Member 'ABP_PostProcess_ZeroG_C::Timeline_0__Direction_79E7D2A64BDE6A3F3F9E99A26438031D' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, Timeline_0) == 0x0002C8, "Member 'ABP_PostProcess_ZeroG_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, PPMaterial) == 0x0002D0, "Member 'ABP_PostProcess_ZeroG_C::PPMaterial' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, DistanceTravelled) == 0x0002D8, "Member 'ABP_PostProcess_ZeroG_C::DistanceTravelled' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, MsxSpeed) == 0x0002DC, "Member 'ABP_PostProcess_ZeroG_C::MsxSpeed' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_ZeroG_C, MinSpeed) == 0x0002E0, "Member 'ABP_PostProcess_ZeroG_C::MinSpeed' has a wrong offset!");

}
