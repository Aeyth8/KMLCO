#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TextChat_Screen

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function BP_TextChat_Screen.BP_TextChat_Screen_C.ExecuteUbergraph_BP_TextChat_Screen
// 0x000C (0x000C - 0x0000)
struct BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldBeVisible;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_WasTextEmpty;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen) == 0x000004, "Wrong alignment on BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen");
static_assert(sizeof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen) == 0x00000C, "Wrong size on BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, EntryPoint) == 0x000000, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, Temp_bool_Variable) == 0x000004, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, Temp_byte_Variable) == 0x000005, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, Temp_byte_Variable_1) == 0x000006, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, K2Node_CustomEvent_ShouldBeVisible) == 0x000007, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::K2Node_CustomEvent_ShouldBeVisible' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, K2Node_CustomEvent_WasTextEmpty) == 0x000008, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::K2Node_CustomEvent_WasTextEmpty' has a wrong offset!");
static_assert(offsetof(BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen, K2Node_Select_Default) == 0x000009, "Member 'BP_TextChat_Screen_C_ExecuteUbergraph_BP_TextChat_Screen::K2Node_Select_Default' has a wrong offset!");

// Function BP_TextChat_Screen.BP_TextChat_Screen_C.OnShowHistoryOnly
// 0x0001 (0x0001 - 0x0000)
struct BP_TextChat_Screen_C_OnShowHistoryOnly final
{
public:
	bool                                          WasTextEmpty;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TextChat_Screen_C_OnShowHistoryOnly) == 0x000001, "Wrong alignment on BP_TextChat_Screen_C_OnShowHistoryOnly");
static_assert(sizeof(BP_TextChat_Screen_C_OnShowHistoryOnly) == 0x000001, "Wrong size on BP_TextChat_Screen_C_OnShowHistoryOnly");
static_assert(offsetof(BP_TextChat_Screen_C_OnShowHistoryOnly, WasTextEmpty) == 0x000000, "Member 'BP_TextChat_Screen_C_OnShowHistoryOnly::WasTextEmpty' has a wrong offset!");

// Function BP_TextChat_Screen.BP_TextChat_Screen_C.SetWidgetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_TextChat_Screen_C_SetWidgetVisibility final
{
public:
	bool                                          ShouldBeVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TextChat_Screen_C_SetWidgetVisibility) == 0x000001, "Wrong alignment on BP_TextChat_Screen_C_SetWidgetVisibility");
static_assert(sizeof(BP_TextChat_Screen_C_SetWidgetVisibility) == 0x000001, "Wrong size on BP_TextChat_Screen_C_SetWidgetVisibility");
static_assert(offsetof(BP_TextChat_Screen_C_SetWidgetVisibility, ShouldBeVisible) == 0x000000, "Member 'BP_TextChat_Screen_C_SetWidgetVisibility::ShouldBeVisible' has a wrong offset!");

}
