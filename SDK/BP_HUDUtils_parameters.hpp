#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDUtils

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_HUDUtils.BP_HUDUtils_C.PauseMenuReleaseInput
// 0x0080 (0x0080 - 0x0000)
struct BP_HUDUtils_C_PauseMenuReleaseInput final
{
public:
	class UUserWidget*                            Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMatchStartActive;                                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCAHUDScreenManager*                    CallFunc_GetHudScreenManager_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0054(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetActiveScreenPerScreenType_ReturnValue; // 0x0060(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HUDUtils_C_PauseMenuReleaseInput) == 0x000008, "Wrong alignment on BP_HUDUtils_C_PauseMenuReleaseInput");
static_assert(sizeof(BP_HUDUtils_C_PauseMenuReleaseInput) == 0x000080, "Wrong size on BP_HUDUtils_C_PauseMenuReleaseInput");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, Target) == 0x000000, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::Target' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, IsMatchStartActive) == 0x000008, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::IsMatchStartActive' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, __WorldContext) == 0x000010, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000020, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetPlayerController_ReturnValue_2) == 0x000028, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000038, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetPlayerController_ReturnValue_3) == 0x000040, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetHudScreenManager_ReturnValue) == 0x000048, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetHudScreenManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000054, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetActiveScreenPerScreenType_ReturnValue) == 0x000060, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetActiveScreenPerScreenType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_IsGameplayTagValid_ReturnValue) == 0x00006C, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_GetPlayerController_ReturnValue_4) == 0x000070, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuReleaseInput, CallFunc_Not_PreBool_ReturnValue) == 0x000078, "Member 'BP_HUDUtils_C_PauseMenuReleaseInput::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_HUDUtils.BP_HUDUtils_C.PauseMenuCaptureInput
// 0x0078 (0x0078 - 0x0000)
struct BP_HUDUtils_C_PauseMenuCaptureInput final
{
public:
	class UUserWidget*                            Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             Callback;                                          // 0x0008(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0050(0x000C)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCAHUDScreenManager*                    CallFunc_GetHudScreenManager_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetActiveScreenPerScreenType_ReturnValue; // 0x0068(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;           // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_HUDUtils_C_PauseMenuCaptureInput) == 0x000008, "Wrong alignment on BP_HUDUtils_C_PauseMenuCaptureInput");
static_assert(sizeof(BP_HUDUtils_C_PauseMenuCaptureInput) == 0x000078, "Wrong size on BP_HUDUtils_C_PauseMenuCaptureInput");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, Target) == 0x000000, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::Target' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, Callback) == 0x000008, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::Callback' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, __WorldContext) == 0x000020, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_K2_GetPawn_ReturnValue) == 0x000038, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetPlayerController_ReturnValue_2) == 0x000040, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetPlayerController_ReturnValue_3) == 0x000048, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000050, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetHudScreenManager_ReturnValue) == 0x000060, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetHudScreenManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_GetActiveScreenPerScreenType_ReturnValue) == 0x000068, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_GetActiveScreenPerScreenType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_PauseMenuCaptureInput, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000075, "Member 'BP_HUDUtils_C_PauseMenuCaptureInput::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

// Function BP_HUDUtils.BP_HUDUtils_C.Block Game Input
// 0x0028 (0x0028 - 0x0000)
struct BP_HUDUtils_C_Block_Game_Input final
{
public:
	class UUserWidget*                            Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             Callback;                                          // 0x0008(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HUDUtils_C_Block_Game_Input) == 0x000008, "Wrong alignment on BP_HUDUtils_C_Block_Game_Input");
static_assert(sizeof(BP_HUDUtils_C_Block_Game_Input) == 0x000028, "Wrong size on BP_HUDUtils_C_Block_Game_Input");
static_assert(offsetof(BP_HUDUtils_C_Block_Game_Input, Target) == 0x000000, "Member 'BP_HUDUtils_C_Block_Game_Input::Target' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_Block_Game_Input, Callback) == 0x000008, "Member 'BP_HUDUtils_C_Block_Game_Input::Callback' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_Block_Game_Input, __WorldContext) == 0x000020, "Member 'BP_HUDUtils_C_Block_Game_Input::__WorldContext' has a wrong offset!");

// Function BP_HUDUtils.BP_HUDUtils_C.GetThreeDigitsTextFromInt
// 0x01D0 (0x01D0 - 0x0000)
struct BP_HUDUtils_C_GetThreeDigitsTextFromInt final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Result;                                            // 0x0010(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C8(0x0018)()
	bool                                          CallFunc_InRange_IntInt_ReturnValue;               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InRange_IntInt_ReturnValue_1;             // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x2];                                       // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_3;                           // 0x00F8(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0110(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0128(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0168(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B8(0x0018)()
};
static_assert(alignof(BP_HUDUtils_C_GetThreeDigitsTextFromInt) == 0x000008, "Wrong alignment on BP_HUDUtils_C_GetThreeDigitsTextFromInt");
static_assert(sizeof(BP_HUDUtils_C_GetThreeDigitsTextFromInt) == 0x0001D0, "Wrong size on BP_HUDUtils_C_GetThreeDigitsTextFromInt");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Value) == 0x000000, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Value' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, __WorldContext) == 0x000008, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Result) == 0x000010, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Result' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_bool_Variable) == 0x000028, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_text_Variable) == 0x000030, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_bool_Variable_1) == 0x000048, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_int_Variable) == 0x00004C, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_int_Variable_1) == 0x000050, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_bool_Variable_2) == 0x000054, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_int_Variable_2) == 0x000058, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_bool_Variable_3) == 0x00005C, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_int_Variable_3) == 0x000060, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_int_Variable_4) == 0x000064, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_text_Variable_1) == 0x000068, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_text_Variable_2) == 0x000080, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_text_Variable_3) == 0x000098, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, Temp_text_Variable_4) == 0x0000B0, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C8, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_InRange_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_InRange_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_InRange_IntInt_ReturnValue_1) == 0x0000E1, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_InRange_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_Select_Default) == 0x0000E4, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_Select_Default_1) == 0x0000EC, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000F0, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_Select_Default_2) == 0x0000F4, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_Select_Default_3) == 0x0000F8, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_Select_Default_4) == 0x000110, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_MakeStruct_FormatArgumentData) == 0x000128, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_MakeStruct_FormatArgumentData_1) == 0x000168, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, K2Node_MakeArray_Array) == 0x0001A8, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_HUDUtils_C_GetThreeDigitsTextFromInt, CallFunc_Format_ReturnValue) == 0x0001B8, "Member 'BP_HUDUtils_C_GetThreeDigitsTextFromInt::CallFunc_Format_ReturnValue' has a wrong offset!");

}
