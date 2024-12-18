#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextChatFooterButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Keaton_structs.hpp"


namespace SDK::Params
{

// Function TextChatFooterButton.TextChatFooterButton_C.ExecuteUbergraph_TextChatFooterButton
// 0x0138 (0x0138 - 0x0000)
struct TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_using_mouse_2;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_using_mouse_1;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0008(0x0078)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0078)(ConstParm)
	bool                                          K2Node_Event_using_mouse;                          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_is_controller;                        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECAInputMode                                  K2Node_Event_input_mode;                           // 0x0132(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton) == 0x000008, "Wrong alignment on TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton");
static_assert(sizeof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton) == 0x000138, "Wrong size on TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, EntryPoint) == 0x000000, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_using_mouse_2) == 0x000004, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_using_mouse_2' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_using_mouse_1) == 0x000005, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_using_mouse_1' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_MouseEvent_1) == 0x000008, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_MyGeometry) == 0x000080, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_using_mouse) == 0x000130, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_using_mouse' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_is_controller) == 0x000131, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_is_controller' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton, K2Node_Event_input_mode) == 0x000132, "Member 'TextChatFooterButton_C_ExecuteUbergraph_TextChatFooterButton::K2Node_Event_input_mode' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnInputChanged
// 0x0002 (0x0002 - 0x0000)
struct TextChatFooterButton_C_OnInputChanged final
{
public:
	bool                                          Is_controller;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECAInputMode                                  Input_mode;                                        // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TextChatFooterButton_C_OnInputChanged) == 0x000001, "Wrong alignment on TextChatFooterButton_C_OnInputChanged");
static_assert(sizeof(TextChatFooterButton_C_OnInputChanged) == 0x000002, "Wrong size on TextChatFooterButton_C_OnInputChanged");
static_assert(offsetof(TextChatFooterButton_C_OnInputChanged, Is_controller) == 0x000000, "Member 'TextChatFooterButton_C_OnInputChanged::Is_controller' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_OnInputChanged, Input_mode) == 0x000001, "Member 'TextChatFooterButton_C_OnInputChanged::Input_mode' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnUserSelected
// 0x0001 (0x0001 - 0x0000)
struct TextChatFooterButton_C_OnUserSelected final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatFooterButton_C_OnUserSelected) == 0x000001, "Wrong alignment on TextChatFooterButton_C_OnUserSelected");
static_assert(sizeof(TextChatFooterButton_C_OnUserSelected) == 0x000001, "Wrong size on TextChatFooterButton_C_OnUserSelected");
static_assert(offsetof(TextChatFooterButton_C_OnUserSelected, Using_mouse) == 0x000000, "Member 'TextChatFooterButton_C_OnUserSelected::Using_mouse' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct TextChatFooterButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextChatFooterButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on TextChatFooterButton_C_OnMouseEnter");
static_assert(sizeof(TextChatFooterButton_C_OnMouseEnter) == 0x0000B0, "Wrong size on TextChatFooterButton_C_OnMouseEnter");
static_assert(offsetof(TextChatFooterButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'TextChatFooterButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(TextChatFooterButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'TextChatFooterButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct TextChatFooterButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TextChatFooterButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on TextChatFooterButton_C_OnMouseLeave");
static_assert(sizeof(TextChatFooterButton_C_OnMouseLeave) == 0x000078, "Wrong size on TextChatFooterButton_C_OnMouseLeave");
static_assert(offsetof(TextChatFooterButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'TextChatFooterButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnUserFocused
// 0x0001 (0x0001 - 0x0000)
struct TextChatFooterButton_C_OnUserFocused final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatFooterButton_C_OnUserFocused) == 0x000001, "Wrong alignment on TextChatFooterButton_C_OnUserFocused");
static_assert(sizeof(TextChatFooterButton_C_OnUserFocused) == 0x000001, "Wrong size on TextChatFooterButton_C_OnUserFocused");
static_assert(offsetof(TextChatFooterButton_C_OnUserFocused, Using_mouse) == 0x000000, "Member 'TextChatFooterButton_C_OnUserFocused::Using_mouse' has a wrong offset!");

// Function TextChatFooterButton.TextChatFooterButton_C.OnUserLostFocus
// 0x0001 (0x0001 - 0x0000)
struct TextChatFooterButton_C_OnUserLostFocus final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TextChatFooterButton_C_OnUserLostFocus) == 0x000001, "Wrong alignment on TextChatFooterButton_C_OnUserLostFocus");
static_assert(sizeof(TextChatFooterButton_C_OnUserLostFocus) == 0x000001, "Wrong size on TextChatFooterButton_C_OnUserLostFocus");
static_assert(offsetof(TextChatFooterButton_C_OnUserLostFocus, Using_mouse) == 0x000000, "Member 'TextChatFooterButton_C_OnUserLostFocus::Using_mouse' has a wrong offset!");

}

