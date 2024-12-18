#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_ArcLens_NPCWidget

#include "Basic.hpp"

#include "S_UI_SegBarColours_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPUI_ArcLens_NPCWidget.BPUI_ArcLens_NPCWidget_C.ExecuteUbergraph_BPUI_ArcLens_NPCWidget
// 0x0078 (0x0078 - 0x0000)
struct BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBPUI_HUD_Mk5_SegBar_C*                 K2Node_DynamicCast_AsBPUI_HUD_Mk_5_Seg_Bar;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_UI_SegBarColours                    K2Node_MakeStruct_S_UI_SegBarColours;              // 0x0014(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_health;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_old_health;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_health_scale;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget) == 0x000008, "Wrong alignment on BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget");
static_assert(sizeof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget) == 0x000078, "Wrong size on BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, EntryPoint) == 0x000000, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_DynamicCast_AsBPUI_HUD_Mk_5_Seg_Bar) == 0x000008, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_DynamicCast_AsBPUI_HUD_Mk_5_Seg_Bar' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_MakeStruct_S_UI_SegBarColours) == 0x000014, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_MakeStruct_S_UI_SegBarColours' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_Event_health) == 0x000060, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_Event_health' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_Event_old_health) == 0x000064, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_Event_old_health' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, K2Node_Event_health_scale) == 0x000068, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::K2Node_Event_health_scale' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, CallFunc_Less_FloatFloat_ReturnValue) == 0x00006C, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget, CallFunc_MakeVector2D_ReturnValue) == 0x000070, "Member 'BPUI_ArcLens_NPCWidget_C_ExecuteUbergraph_BPUI_ArcLens_NPCWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function BPUI_ArcLens_NPCWidget.BPUI_ArcLens_NPCWidget_C.UpdateHealthScale
// 0x0004 (0x0004 - 0x0000)
struct BPUI_ArcLens_NPCWidget_C_UpdateHealthScale final
{
public:
	float                                         Health_scale;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_ArcLens_NPCWidget_C_UpdateHealthScale) == 0x000004, "Wrong alignment on BPUI_ArcLens_NPCWidget_C_UpdateHealthScale");
static_assert(sizeof(BPUI_ArcLens_NPCWidget_C_UpdateHealthScale) == 0x000004, "Wrong size on BPUI_ArcLens_NPCWidget_C_UpdateHealthScale");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_UpdateHealthScale, Health_scale) == 0x000000, "Member 'BPUI_ArcLens_NPCWidget_C_UpdateHealthScale::Health_scale' has a wrong offset!");

// Function BPUI_ArcLens_NPCWidget.BPUI_ArcLens_NPCWidget_C.OnHealthChanged
// 0x0008 (0x0008 - 0x0000)
struct BPUI_ArcLens_NPCWidget_C_OnHealthChanged final
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Old_health;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_ArcLens_NPCWidget_C_OnHealthChanged) == 0x000004, "Wrong alignment on BPUI_ArcLens_NPCWidget_C_OnHealthChanged");
static_assert(sizeof(BPUI_ArcLens_NPCWidget_C_OnHealthChanged) == 0x000008, "Wrong size on BPUI_ArcLens_NPCWidget_C_OnHealthChanged");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_OnHealthChanged, Health) == 0x000000, "Member 'BPUI_ArcLens_NPCWidget_C_OnHealthChanged::Health' has a wrong offset!");
static_assert(offsetof(BPUI_ArcLens_NPCWidget_C_OnHealthChanged, Old_health) == 0x000004, "Member 'BPUI_ArcLens_NPCWidget_C_OnHealthChanged::Old_health' has a wrong offset!");

}

