#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_ReviveProgressWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C.ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget
// 0x0060 (0x0060 - 0x0000)
struct BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget) == 0x000008, "Wrong alignment on BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget");
static_assert(sizeof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget) == 0x000060, "Wrong size on BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, EntryPoint) == 0x000000, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000010, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, K2Node_Event_MyGeometry) == 0x000014, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000058, "Member 'BPUI_HUD_ReviveProgressWidget_C_ExecuteUbergraph_BPUI_HUD_ReviveProgressWidget::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

// Function BPUI_HUD_ReviveProgressWidget.BPUI_HUD_ReviveProgressWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct BPUI_HUD_ReviveProgressWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_ReviveProgressWidget_C_Tick) == 0x000004, "Wrong alignment on BPUI_HUD_ReviveProgressWidget_C_Tick");
static_assert(sizeof(BPUI_HUD_ReviveProgressWidget_C_Tick) == 0x00003C, "Wrong size on BPUI_HUD_ReviveProgressWidget_C_Tick");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_Tick, MyGeometry) == 0x000000, "Member 'BPUI_HUD_ReviveProgressWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_ReviveProgressWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'BPUI_HUD_ReviveProgressWidget_C_Tick::InDeltaTime' has a wrong offset!");

}

