#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StandardOutlineButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_StandardOutlineButton.BP_StandardOutlineButton_C.ExecuteUbergraph_BP_StandardOutlineButton
// 0x00E0 (0x00E0 - 0x0000)
struct BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_using_mouse_2;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_using_mouse_1;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeTextFromCAText_text;                  // 0x0008(0x0018)()
	bool                                          K2Node_Event_using_mouse;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00A0(0x0028)()
	class FText                                   K2Node_Event_label;                                // 0x00C8(0x0018)(ConstParm)
};
static_assert(alignof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton) == 0x000008, "Wrong alignment on BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton");
static_assert(sizeof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton) == 0x0000E0, "Wrong size on BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, EntryPoint) == 0x000000, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_Event_using_mouse_2) == 0x000004, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_Event_using_mouse_2' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_Event_using_mouse_1) == 0x000005, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_Event_using_mouse_1' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, CallFunc_MakeTextFromCAText_text) == 0x000008, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::CallFunc_MakeTextFromCAText_text' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_Event_using_mouse) == 0x000020, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_Event_using_mouse' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_MakeStruct_SlateColor_2) == 0x000078, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_MakeStruct_SlateColor_3) == 0x0000A0, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton, K2Node_Event_label) == 0x0000C8, "Member 'BP_StandardOutlineButton_C_ExecuteUbergraph_BP_StandardOutlineButton::K2Node_Event_label' has a wrong offset!");

// Function BP_StandardOutlineButton.BP_StandardOutlineButton_C.SetLabel
// 0x0018 (0x0018 - 0x0000)
struct BP_StandardOutlineButton_C_SetLabel final
{
public:
	class FText                                   Label;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_StandardOutlineButton_C_SetLabel) == 0x000008, "Wrong alignment on BP_StandardOutlineButton_C_SetLabel");
static_assert(sizeof(BP_StandardOutlineButton_C_SetLabel) == 0x000018, "Wrong size on BP_StandardOutlineButton_C_SetLabel");
static_assert(offsetof(BP_StandardOutlineButton_C_SetLabel, Label) == 0x000000, "Member 'BP_StandardOutlineButton_C_SetLabel::Label' has a wrong offset!");

// Function BP_StandardOutlineButton.BP_StandardOutlineButton_C.OnUserSelected
// 0x0001 (0x0001 - 0x0000)
struct BP_StandardOutlineButton_C_OnUserSelected final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_StandardOutlineButton_C_OnUserSelected) == 0x000001, "Wrong alignment on BP_StandardOutlineButton_C_OnUserSelected");
static_assert(sizeof(BP_StandardOutlineButton_C_OnUserSelected) == 0x000001, "Wrong size on BP_StandardOutlineButton_C_OnUserSelected");
static_assert(offsetof(BP_StandardOutlineButton_C_OnUserSelected, Using_mouse) == 0x000000, "Member 'BP_StandardOutlineButton_C_OnUserSelected::Using_mouse' has a wrong offset!");

// Function BP_StandardOutlineButton.BP_StandardOutlineButton_C.OnUserFocused
// 0x0001 (0x0001 - 0x0000)
struct BP_StandardOutlineButton_C_OnUserFocused final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_StandardOutlineButton_C_OnUserFocused) == 0x000001, "Wrong alignment on BP_StandardOutlineButton_C_OnUserFocused");
static_assert(sizeof(BP_StandardOutlineButton_C_OnUserFocused) == 0x000001, "Wrong size on BP_StandardOutlineButton_C_OnUserFocused");
static_assert(offsetof(BP_StandardOutlineButton_C_OnUserFocused, Using_mouse) == 0x000000, "Member 'BP_StandardOutlineButton_C_OnUserFocused::Using_mouse' has a wrong offset!");

// Function BP_StandardOutlineButton.BP_StandardOutlineButton_C.OnUserLostFocus
// 0x0001 (0x0001 - 0x0000)
struct BP_StandardOutlineButton_C_OnUserLostFocus final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_StandardOutlineButton_C_OnUserLostFocus) == 0x000001, "Wrong alignment on BP_StandardOutlineButton_C_OnUserLostFocus");
static_assert(sizeof(BP_StandardOutlineButton_C_OnUserLostFocus) == 0x000001, "Wrong size on BP_StandardOutlineButton_C_OnUserLostFocus");
static_assert(offsetof(BP_StandardOutlineButton_C_OnUserLostFocus, Using_mouse) == 0x000000, "Member 'BP_StandardOutlineButton_C_OnUserLostFocus::Using_mouse' has a wrong offset!");

}

