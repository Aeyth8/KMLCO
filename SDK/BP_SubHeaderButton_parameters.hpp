#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SubHeaderButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.ExecuteUbergraph_BP_SubHeaderButton
// 0x0150 (0x0150 - 0x0000)
struct BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeTextFromCAText_text;                  // 0x0010(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0080(0x0028)()
	bool                                          K2Node_Event_bInIsEnabled;                         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00B0(0x0028)()
	ESlateVisibility                              K2Node_Event_notification_visibility;              // 0x00D8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_notification_text;                    // 0x00E0(0x0018)(ConstParm)
	bool                                          K2Node_Event_using_mouse;                          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_using_mouse_1;                        // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_using_mouse_2;                        // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0108(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton) == 0x000008, "Wrong alignment on BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton");
static_assert(sizeof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton) == 0x000150, "Wrong size on BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, EntryPoint) == 0x000000, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_MakeTextFromCAText_text) == 0x000010, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_MakeTextFromCAText_text' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_MakeStruct_SlateColor_2) == 0x000080, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_bInIsEnabled) == 0x0000A8, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_bInIsEnabled' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_MakeStruct_SlateColor_3) == 0x0000B0, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_notification_visibility) == 0x0000D8, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_notification_visibility' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_notification_text) == 0x0000E0, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_notification_text' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_using_mouse) == 0x0000F8, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_using_mouse' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_IsValid_ReturnValue) == 0x0000F9, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_using_mouse_1) == 0x0000FA, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_using_mouse_1' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_IsValid_ReturnValue_1) == 0x0000FB, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_using_mouse_2) == 0x0000FC, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_using_mouse_2' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000100, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_MyGeometry) == 0x000108, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, K2Node_Event_InDeltaTime) == 0x000140, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000144, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000148, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton, CallFunc_FClamp_ReturnValue) == 0x00014C, "Member 'BP_SubHeaderButton_C_ExecuteUbergraph_BP_SubHeaderButton::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.Tick
// 0x003C (0x003C - 0x0000)
struct BP_SubHeaderButton_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SubHeaderButton_C_Tick) == 0x000004, "Wrong alignment on BP_SubHeaderButton_C_Tick");
static_assert(sizeof(BP_SubHeaderButton_C_Tick) == 0x00003C, "Wrong size on BP_SubHeaderButton_C_Tick");
static_assert(offsetof(BP_SubHeaderButton_C_Tick, MyGeometry) == 0x000000, "Member 'BP_SubHeaderButton_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_Tick, InDeltaTime) == 0x000038, "Member 'BP_SubHeaderButton_C_Tick::InDeltaTime' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.UpdateNotification
// 0x0020 (0x0020 - 0x0000)
struct BP_SubHeaderButton_C_UpdateNotification final
{
public:
	ESlateVisibility                              Notification_visibility;                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Notification_text;                                 // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_SubHeaderButton_C_UpdateNotification) == 0x000008, "Wrong alignment on BP_SubHeaderButton_C_UpdateNotification");
static_assert(sizeof(BP_SubHeaderButton_C_UpdateNotification) == 0x000020, "Wrong size on BP_SubHeaderButton_C_UpdateNotification");
static_assert(offsetof(BP_SubHeaderButton_C_UpdateNotification, Notification_visibility) == 0x000000, "Member 'BP_SubHeaderButton_C_UpdateNotification::Notification_visibility' has a wrong offset!");
static_assert(offsetof(BP_SubHeaderButton_C_UpdateNotification, Notification_text) == 0x000008, "Member 'BP_SubHeaderButton_C_UpdateNotification::Notification_text' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.OnIsEnabledChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_SubHeaderButton_C_OnIsEnabledChanged final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SubHeaderButton_C_OnIsEnabledChanged) == 0x000001, "Wrong alignment on BP_SubHeaderButton_C_OnIsEnabledChanged");
static_assert(sizeof(BP_SubHeaderButton_C_OnIsEnabledChanged) == 0x000001, "Wrong size on BP_SubHeaderButton_C_OnIsEnabledChanged");
static_assert(offsetof(BP_SubHeaderButton_C_OnIsEnabledChanged, bInIsEnabled) == 0x000000, "Member 'BP_SubHeaderButton_C_OnIsEnabledChanged::bInIsEnabled' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.OnUserSelected
// 0x0001 (0x0001 - 0x0000)
struct BP_SubHeaderButton_C_OnUserSelected final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SubHeaderButton_C_OnUserSelected) == 0x000001, "Wrong alignment on BP_SubHeaderButton_C_OnUserSelected");
static_assert(sizeof(BP_SubHeaderButton_C_OnUserSelected) == 0x000001, "Wrong size on BP_SubHeaderButton_C_OnUserSelected");
static_assert(offsetof(BP_SubHeaderButton_C_OnUserSelected, Using_mouse) == 0x000000, "Member 'BP_SubHeaderButton_C_OnUserSelected::Using_mouse' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.OnUserLostFocus
// 0x0001 (0x0001 - 0x0000)
struct BP_SubHeaderButton_C_OnUserLostFocus final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SubHeaderButton_C_OnUserLostFocus) == 0x000001, "Wrong alignment on BP_SubHeaderButton_C_OnUserLostFocus");
static_assert(sizeof(BP_SubHeaderButton_C_OnUserLostFocus) == 0x000001, "Wrong size on BP_SubHeaderButton_C_OnUserLostFocus");
static_assert(offsetof(BP_SubHeaderButton_C_OnUserLostFocus, Using_mouse) == 0x000000, "Member 'BP_SubHeaderButton_C_OnUserLostFocus::Using_mouse' has a wrong offset!");

// Function BP_SubHeaderButton.BP_SubHeaderButton_C.OnUserFocused
// 0x0001 (0x0001 - 0x0000)
struct BP_SubHeaderButton_C_OnUserFocused final
{
public:
	bool                                          Using_mouse;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SubHeaderButton_C_OnUserFocused) == 0x000001, "Wrong alignment on BP_SubHeaderButton_C_OnUserFocused");
static_assert(sizeof(BP_SubHeaderButton_C_OnUserFocused) == 0x000001, "Wrong size on BP_SubHeaderButton_C_OnUserFocused");
static_assert(offsetof(BP_SubHeaderButton_C_OnUserFocused, Using_mouse) == 0x000000, "Member 'BP_SubHeaderButton_C_OnUserFocused::Using_mouse' has a wrong offset!");

}

