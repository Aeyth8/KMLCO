#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcess_TeleportIn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PostProcess_TeleportIn.BP_PostProcess_TeleportIn_C
// 0x0038 (0x02C8 - 0x0290)
class ABP_PostProcess_TeleportIn_C final : public ACAPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_FadeOut_3E28C31648E3774AB4B8D6AB9E07036B; // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3E28C31648E3774AB4B8D6AB9E07036B; // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AD[0x3];                                      // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEvoArmour;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               PPMaterialInstance;                                // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PostProcess_TeleportIn(int32 EntryPoint);
	void OnPlayOnce();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PostProcess_TeleportIn_C">();
	}
	static class ABP_PostProcess_TeleportIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PostProcess_TeleportIn_C>();
	}
};
static_assert(alignof(ABP_PostProcess_TeleportIn_C) == 0x000008, "Wrong alignment on ABP_PostProcess_TeleportIn_C");
static_assert(sizeof(ABP_PostProcess_TeleportIn_C) == 0x0002C8, "Wrong size on ABP_PostProcess_TeleportIn_C");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, UberGraphFrame) == 0x000290, "Member 'ABP_PostProcess_TeleportIn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, PostProcess) == 0x000298, "Member 'ABP_PostProcess_TeleportIn_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_PostProcess_TeleportIn_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, Timeline_0_FadeOut_3E28C31648E3774AB4B8D6AB9E07036B) == 0x0002A8, "Member 'ABP_PostProcess_TeleportIn_C::Timeline_0_FadeOut_3E28C31648E3774AB4B8D6AB9E07036B' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, Timeline_0__Direction_3E28C31648E3774AB4B8D6AB9E07036B) == 0x0002AC, "Member 'ABP_PostProcess_TeleportIn_C::Timeline_0__Direction_3E28C31648E3774AB4B8D6AB9E07036B' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, Timeline_0) == 0x0002B0, "Member 'ABP_PostProcess_TeleportIn_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, IsEvoArmour) == 0x0002B8, "Member 'ABP_PostProcess_TeleportIn_C::IsEvoArmour' has a wrong offset!");
static_assert(offsetof(ABP_PostProcess_TeleportIn_C, PPMaterialInstance) == 0x0002C0, "Member 'ABP_PostProcess_TeleportIn_C::PPMaterialInstance' has a wrong offset!");

}
