#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_TutorialScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPUI_TutorialScreen.BPUI_TutorialScreen_C.ExecuteUbergraph_BPUI_TutorialScreen
// 0x00E0 (0x00E0 - 0x0000)
struct BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCAGameModeConfiguration*               K2Node_DynamicCast_AsCAGame_Mode_Configuration;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UCAGameModeConfiguration> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0020(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0014)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0014)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCABaseUIElement*                       K2Node_ComponentBoundEvent_button;                 // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_6;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_7;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen) == 0x000008, "Wrong alignment on BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen");
static_assert(sizeof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen) == 0x0000E0, "Wrong size on BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, EntryPoint) == 0x000000, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, Temp_object_Variable) == 0x000008, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_DynamicCast_AsCAGame_Mode_Configuration) == 0x000010, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_DynamicCast_AsCAGame_Mode_Configuration' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000020, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_CustomEvent_Loaded) == 0x000078, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetUIHUDInterface_ReturnValue) == 0x000080, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, K2Node_ComponentBoundEvent_button) == 0x000088, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::K2Node_ComponentBoundEvent_button' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue) == 0x000090, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_K2_GetPawn_ReturnValue) == 0x0000A0, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000A8, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_3) == 0x0000B0, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_4) == 0x0000B8, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_5) == 0x0000C0, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_6) == 0x0000C8, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_GetPlayerController_ReturnValue_7) == 0x0000D0, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_GetPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen, CallFunc_K2_GetPawn_ReturnValue_1) == 0x0000D8, "Member 'BPUI_TutorialScreen_C_ExecuteUbergraph_BPUI_TutorialScreen::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");

// Function BPUI_TutorialScreen.BPUI_TutorialScreen_C.BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature final
{
public:
	class UCABaseUIElement*                       button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature) == 0x000008, "Wrong alignment on BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");
static_assert(sizeof(BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature) == 0x000008, "Wrong size on BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature");
static_assert(offsetof(BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature, button) == 0x000000, "Member 'BPUI_TutorialScreen_C_BndEvt__BPUI_TutorialScreen_back_btn_K2Node_ComponentBoundEvent_0_UIElementSelected__DelegateSignature::button' has a wrong offset!");

// Function BPUI_TutorialScreen.BPUI_TutorialScreen_C.OnLoaded_6AECB6764F5AC039527E919ED39554FB
// 0x0008 (0x0008 - 0x0000)
struct BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB) == 0x000008, "Wrong alignment on BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB");
static_assert(sizeof(BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB) == 0x000008, "Wrong size on BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB");
static_assert(offsetof(BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB, Loaded) == 0x000000, "Member 'BPUI_TutorialScreen_C_OnLoaded_6AECB6764F5AC039527E919ED39554FB::Loaded' has a wrong offset!");

}

