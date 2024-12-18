#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_RadialMenusSwitcher

#include "Basic.hpp"

#include "CALocalisationRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher
// 0x0148 (0x0148 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFeatureActive_ReturnValue;              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_LoadFeatureClass_Blocking_ReturnValue;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_LoadFeatureClass_Blocking_ReturnValue_1;  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_1;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFeatureActive_ReturnValue_1;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAText                                CallFunc_GetLabel_label_text;                      // 0x00A0(0x0030)()
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void(class UCAHUDRadialMenuSlotBase* Slot)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           K2Node_DynamicCast_AsPanel_Widget;                 // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCAHUDRadialMenuSlotBase*               K2Node_CustomEvent_slot;                           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCAHUDRadialMenuWidget*                 K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget;      // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCATextValid_ReturnValue;                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13A[0x2];                                      // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher) == 0x000148, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, EntryPoint) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetViewportSize_ReturnValue) == 0x000010, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000018, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_BreakVector2D_X) == 0x000020, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_FTrunc_ReturnValue) == 0x000028, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_FTrunc_ReturnValue_1) == 0x00002C, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_Event_IsDesignTime) == 0x000030, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_IsFeatureActive_ReturnValue) == 0x000031, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_IsFeatureActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_LoadFeatureClass_Blocking_ReturnValue) == 0x000040, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_LoadFeatureClass_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000048, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_ClassDynamicCast_bSuccess) == 0x000050, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Create_ReturnValue) == 0x000058, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_LoadFeatureClass_Blocking_ReturnValue_1) == 0x000060, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_LoadFeatureClass_Blocking_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000068, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_ClassDynamicCast_AsUser_Widget_1) == 0x000070, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_ClassDynamicCast_AsUser_Widget_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_ClassDynamicCast_bSuccess_1) == 0x000078, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_IsFeatureActive_ReturnValue_1) == 0x000079, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_IsFeatureActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Create_ReturnValue_1) == 0x000080, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_AddChild_ReturnValue) == 0x000088, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_AddChild_ReturnValue_1) == 0x000090, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000098, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetLabel_label_text) == 0x0000A0, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetLabel_label_text' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetAllChildren_ReturnValue) == 0x0000D0, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_DynamicCast_AsPanel_Widget) == 0x000108, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_DynamicCast_AsPanel_Widget' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_CustomEvent_slot) == 0x000118, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_CustomEvent_slot' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_GetChildAt_ReturnValue) == 0x000120, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget) == 0x000130, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_IsCATextValid_ReturnValue) == 0x000139, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_IsCATextValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, Temp_int_Loop_Counter_Variable) == 0x00013C, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Less_IntInt_ReturnValue) == 0x000140, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ExecuteUbergraph_BPUI_HUD_RadialMenusSwitcher::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.OnItemFocused
// 0x0008 (0x0008 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused final
{
public:
	class UCAHUDRadialMenuSlotBase*               Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused) == 0x000008, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused, Slot_0) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_OnItemFocused::Slot_0' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_PreConstruct) == 0x000001, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_PreConstruct");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_PreConstruct) == 0x000001, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_PreConstruct");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.CaptureInput
// 0x0018 (0x0018 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_CaptureInput final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_CaptureInput) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_CaptureInput");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_CaptureInput) == 0x000018, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_CaptureInput");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue_2) == 0x000010, "Member 'BPUI_HUD_RadialMenusSwitcher_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.ReleaseInput
// 0x0010 (0x0010 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput) == 0x000010, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput, PlayerController) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput::PlayerController' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_ReleaseInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.RefreshSwitchButtons
// 0x0010 (0x0010 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons final
{
public:
	ESlateVisibility                              New_visibility;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons) == 0x000004, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons) == 0x000010, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons, New_visibility) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons::New_visibility' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BPUI_HUD_RadialMenusSwitcher_C_RefreshSwitchButtons::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.UpdatePrompt
// 0x0078 (0x0078 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt final
{
public:
	int32                                         Page_index;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelWidget*                           Prompt;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCATextBlock*                           Label;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAText                                CallFunc_GetLabel_label_text;                      // 0x0018(0x0030)()
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                             K2Node_DynamicCast_AsNamed_Slot;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCAHUDRadialMenuWidget*                 K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidMenu_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt) == 0x000078, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, Page_index) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::Page_index' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, Prompt) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::Prompt' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, Label) == 0x000010, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::Label' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, CallFunc_GetLabel_label_text) == 0x000018, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::CallFunc_GetLabel_label_text' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000048, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, K2Node_DynamicCast_AsNamed_Slot) == 0x000050, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::K2Node_DynamicCast_AsNamed_Slot' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget) == 0x000068, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::K2Node_DynamicCast_AsCAHUDRadial_Menu_Widget' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt, CallFunc_IsValidMenu_ReturnValue) == 0x000071, "Member 'BPUI_HUD_RadialMenusSwitcher_C_UpdatePrompt::CallFunc_IsValidMenu_ReturnValue' has a wrong offset!");

// Function BPUI_HUD_RadialMenusSwitcher.BPUI_HUD_RadialMenusSwitcher_C.GetLabel
// 0x0040 (0x0040 - 0x0000)
struct BPUI_HUD_RadialMenusSwitcher_C_GetLabel final
{
public:
	int32                                         Page_index;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAText                                Label_text;                                        // 0x0008(0x0030)(Parm, OutParm)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_HUD_RadialMenusSwitcher_C_GetLabel) == 0x000008, "Wrong alignment on BPUI_HUD_RadialMenusSwitcher_C_GetLabel");
static_assert(sizeof(BPUI_HUD_RadialMenusSwitcher_C_GetLabel) == 0x000040, "Wrong size on BPUI_HUD_RadialMenusSwitcher_C_GetLabel");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_GetLabel, Page_index) == 0x000000, "Member 'BPUI_HUD_RadialMenusSwitcher_C_GetLabel::Page_index' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_GetLabel, Label_text) == 0x000008, "Member 'BPUI_HUD_RadialMenusSwitcher_C_GetLabel::Label_text' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_RadialMenusSwitcher_C_GetLabel, K2Node_SwitchInteger_CmpSuccess) == 0x000038, "Member 'BPUI_HUD_RadialMenusSwitcher_C_GetLabel::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

