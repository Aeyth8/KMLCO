#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Common_SecondaryButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function Common_SecondaryButton.Common_SecondaryButton_C.ExecuteUbergraph_Common_SecondaryButton
// 0x0168 (0x0168 - 0x0000)
struct Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0018(0x0078)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0090(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayer_ReturnValue;               // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0150(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton) == 0x000008, "Wrong alignment on Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton");
static_assert(sizeof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton) == 0x000168, "Wrong size on Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, EntryPoint) == 0x000000, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, Temp_delegate_Variable) == 0x000004, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, K2Node_Event_MouseEvent_1) == 0x000018, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, K2Node_Event_MyGeometry) == 0x000090, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, CallFunc_PlayAnimation_ReturnValue) == 0x000140, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, CallFunc_GetLocalPlayer_ReturnValue) == 0x000148, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::CallFunc_GetLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, CallFunc_PlayEvent_playback_instance) == 0x000150, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, CallFunc_PlayEvent_play_success) == 0x000160, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton, K2Node_Event_IsDesignTime) == 0x000161, "Member 'Common_SecondaryButton_C_ExecuteUbergraph_Common_SecondaryButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function Common_SecondaryButton.Common_SecondaryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Common_SecondaryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Common_SecondaryButton_C_PreConstruct) == 0x000001, "Wrong alignment on Common_SecondaryButton_C_PreConstruct");
static_assert(sizeof(Common_SecondaryButton_C_PreConstruct) == 0x000001, "Wrong size on Common_SecondaryButton_C_PreConstruct");
static_assert(offsetof(Common_SecondaryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Common_SecondaryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Common_SecondaryButton.Common_SecondaryButton_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct Common_SecondaryButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Common_SecondaryButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on Common_SecondaryButton_C_OnMouseEnter");
static_assert(sizeof(Common_SecondaryButton_C_OnMouseEnter) == 0x0000B0, "Wrong size on Common_SecondaryButton_C_OnMouseEnter");
static_assert(offsetof(Common_SecondaryButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'Common_SecondaryButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(Common_SecondaryButton_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'Common_SecondaryButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function Common_SecondaryButton.Common_SecondaryButton_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct Common_SecondaryButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Common_SecondaryButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on Common_SecondaryButton_C_OnMouseLeave");
static_assert(sizeof(Common_SecondaryButton_C_OnMouseLeave) == 0x000078, "Wrong size on Common_SecondaryButton_C_OnMouseLeave");
static_assert(offsetof(Common_SecondaryButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'Common_SecondaryButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
