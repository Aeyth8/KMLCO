#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_SecondaryMessageGenericWithSubheader

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Keaton_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_SecondaryMessageGenericWithSubheader.BPUI_HUD_SecondaryMessageGenericWithSubheader_C.ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader
// 0x0298 (0x0298 - 0x0000)
struct BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAPrimaryMessageTypesTableRow         CallFunc_GetMessageConfigData_ReturnValue;         // 0x0010(0x00D0)(ConstParm)
	struct FCAPrimaryMessagingData                CallFunc_GetMessagePayload_ReturnValue;            // 0x00E0(0x00E0)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01C0(0x0028)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x01E8(0x0018)()
	bool                                          CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue; // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeTextFromCAText_text;                  // 0x0208(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0220(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeTextFromCAText_text_1;                // 0x0240(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0258(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26D[0x3];                                      // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0270(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader) == 0x000008, "Wrong alignment on BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader");
static_assert(sizeof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader) == 0x000298, "Wrong size on BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, EntryPoint) == 0x000000, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_byte_Variable) == 0x000004, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_byte_Variable_1) == 0x000005, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_bool_Variable) == 0x000006, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_byte_Variable_2) == 0x000007, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_byte_Variable_3) == 0x000008, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_bool_Variable_1) == 0x000009, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_GetMessageConfigData_ReturnValue) == 0x000010, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_GetMessageConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_GetMessagePayload_ReturnValue) == 0x0000E0, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_GetMessagePayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, K2Node_MakeStruct_SlateColor) == 0x0001C0, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_TextToUpper_ReturnValue) == 0x0001E8, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue) == 0x000200, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_MakeTextFromCAText_text) == 0x000208, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_MakeTextFromCAText_text' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_TextToUpper_ReturnValue_1) == 0x000220, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, K2Node_Select_Default) == 0x000238, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_MakeTextFromCAText_text_1) == 0x000240, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_MakeTextFromCAText_text_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, K2Node_CreateDelegate_OutputDelegate) == 0x000258, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_TextIsEmpty_ReturnValue) == 0x00026C, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, K2Node_Select_Default_1) == 0x000270, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, CallFunc_PlayAnimation_ReturnValue) == 0x000288, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, Temp_bool_Variable_2) == 0x000290, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader, K2Node_Select_Default_2) == 0x000291, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_ExecuteUbergraph_BPUI_HUD_SecondaryMessageGenericWithSubheader::K2Node_Select_Default_2' has a wrong offset!");

// Function BPUI_HUD_SecondaryMessageGenericWithSubheader.BPUI_HUD_SecondaryMessageGenericWithSubheader_C.PlayFadeAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation) == 0x000008, "Wrong alignment on BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation");
static_assert(sizeof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation) == 0x000008, "Wrong size on BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation");
static_assert(offsetof(BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BPUI_HUD_SecondaryMessageGenericWithSubheader_C_PlayFadeAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

