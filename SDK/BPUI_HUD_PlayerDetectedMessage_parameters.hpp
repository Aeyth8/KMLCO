#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_PlayerDetectedMessage

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Keaton_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_PlayerDetectedMessage.BPUI_HUD_PlayerDetectedMessage_C.ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage
// 0x0310 (0x0310 - 0x0000)
struct BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAPrimaryMessageTypesTableRow         CallFunc_GetMessageConfigData_ReturnValue;         // 0x0008(0x00D0)(ConstParm)
	struct FCAPrimaryMessagingData                CallFunc_GetMessagePayload_ReturnValue;            // 0x00D8(0x00E0)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01B8(0x0028)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01E0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0220(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0238(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue; // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeTextFromCAText_text;                  // 0x0298(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02B8(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x02D0(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x02E8(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0309(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage) == 0x000008, "Wrong alignment on BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage");
static_assert(sizeof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage) == 0x000310, "Wrong size on BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, EntryPoint) == 0x000000, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_byte_Variable) == 0x000004, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_bool_Variable) == 0x000005, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_byte_Variable_1) == 0x000006, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_byte_Variable_2) == 0x000007, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_GetMessageConfigData_ReturnValue) == 0x000008, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_GetMessageConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_GetMessagePayload_ReturnValue) == 0x0000D8, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_GetMessagePayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_MakeStruct_SlateColor) == 0x0001B8, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_MakeStruct_FormatArgumentData) == 0x0001E0, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000220, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_MakeStruct_FormatArgumentData_1) == 0x000238, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue) == 0x000278, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_MakeArray_Array) == 0x000280, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_Select_Default) == 0x000290, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_MakeTextFromCAText_text) == 0x000298, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_MakeTextFromCAText_text' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_byte_Variable_3) == 0x0002B0, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_Format_ReturnValue) == 0x0002B8, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_TextToUpper_ReturnValue) == 0x0002D0, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_CreateDelegate_OutputDelegate) == 0x0002E8, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, CallFunc_PlayAnimation_ReturnValue) == 0x000300, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, Temp_bool_Variable_1) == 0x000308, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage, K2Node_Select_Default_1) == 0x000309, "Member 'BPUI_HUD_PlayerDetectedMessage_C_ExecuteUbergraph_BPUI_HUD_PlayerDetectedMessage::K2Node_Select_Default_1' has a wrong offset!");

// Function BPUI_HUD_PlayerDetectedMessage.BPUI_HUD_PlayerDetectedMessage_C.PlayFadeAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation) == 0x000008, "Wrong alignment on BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation");
static_assert(sizeof(BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation) == 0x000008, "Wrong size on BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation");
static_assert(offsetof(BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BPUI_HUD_PlayerDetectedMessage_C_PlayFadeAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
