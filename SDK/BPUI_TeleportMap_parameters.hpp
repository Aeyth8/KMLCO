#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_TeleportMap

#include "Basic.hpp"

#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BPUI_TeleportMap.BPUI_TeleportMap_C.ExecuteUbergraph_BPUI_TeleportMap
// 0x0128 (0x0128 - 0x0000)
struct BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_is_gamepad;                           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0014)(ZeroConstructor, NoDestructor)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x0050(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue_1;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_2;                          // 0x0070(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0088(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x00A0(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_2;            // 0x00B8(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_2;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_3;                          // 0x00CC(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_4;                          // 0x00E0(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_3;            // 0x00F8(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_3;                 // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_4;            // 0x0110(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_4;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap) == 0x000008, "Wrong alignment on BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap");
static_assert(sizeof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap) == 0x000128, "Wrong size on BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, EntryPoint) == 0x000000, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, Temp_delegate_Variable) == 0x000004, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_IsVisible_ReturnValue) == 0x000020, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, K2Node_Event_is_gamepad) == 0x000021, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::K2Node_Event_is_gamepad' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_Get3DMapManager_ReturnValue) == 0x000038, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_Get3DMapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_GetMapView_ReturnValue) == 0x000040, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_GetMapView_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_Get3DMapManager_ReturnValue_1) == 0x000048, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_Get3DMapManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, Temp_delegate_Variable_1) == 0x000050, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_GetMapView_ReturnValue_1) == 0x000068, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_GetMapView_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, Temp_delegate_Variable_2) == 0x000070, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_playback_instance) == 0x000088, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_play_success) == 0x000098, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_playback_instance_1) == 0x0000A0, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_play_success_1) == 0x0000B0, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_playback_instance_2) == 0x0000B8, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_playback_instance_2' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_play_success_2) == 0x0000C8, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_play_success_2' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, Temp_delegate_Variable_3) == 0x0000CC, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::Temp_delegate_Variable_3' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, Temp_delegate_Variable_4) == 0x0000E0, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::Temp_delegate_Variable_4' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_playback_instance_3) == 0x0000F8, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_playback_instance_3' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_play_success_3) == 0x000108, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_play_success_3' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_playback_instance_4) == 0x000110, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_playback_instance_4' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap, CallFunc_PlayEvent_play_success_4) == 0x000120, "Member 'BPUI_TeleportMap_C_ExecuteUbergraph_BPUI_TeleportMap::CallFunc_PlayEvent_play_success_4' has a wrong offset!");

// Function BPUI_TeleportMap.BPUI_TeleportMap_C.OnInputModeChanged
// 0x0001 (0x0001 - 0x0000)
struct BPUI_TeleportMap_C_OnInputModeChanged final
{
public:
	bool                                          Is_gamepad;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_TeleportMap_C_OnInputModeChanged) == 0x000001, "Wrong alignment on BPUI_TeleportMap_C_OnInputModeChanged");
static_assert(sizeof(BPUI_TeleportMap_C_OnInputModeChanged) == 0x000001, "Wrong size on BPUI_TeleportMap_C_OnInputModeChanged");
static_assert(offsetof(BPUI_TeleportMap_C_OnInputModeChanged, Is_gamepad) == 0x000000, "Member 'BPUI_TeleportMap_C_OnInputModeChanged::Is_gamepad' has a wrong offset!");

// Function BPUI_TeleportMap.BPUI_TeleportMap_C.CaptureInput
// 0x0018 (0x0018 - 0x0000)
struct BPUI_TeleportMap_C_CaptureInput final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_TeleportMap_C_CaptureInput) == 0x000008, "Wrong alignment on BPUI_TeleportMap_C_CaptureInput");
static_assert(sizeof(BPUI_TeleportMap_C_CaptureInput) == 0x000018, "Wrong size on BPUI_TeleportMap_C_CaptureInput");
static_assert(offsetof(BPUI_TeleportMap_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BPUI_TeleportMap_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000008, "Member 'BPUI_TeleportMap_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_CaptureInput, CallFunc_GetPlayerController_ReturnValue_2) == 0x000010, "Member 'BPUI_TeleportMap_C_CaptureInput::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function BPUI_TeleportMap.BPUI_TeleportMap_C.ReleaseInput
// 0x0020 (0x0020 - 0x0000)
struct BPUI_TeleportMap_C_ReleaseInput final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPUI_TeleportMap_C_ReleaseInput) == 0x000008, "Wrong alignment on BPUI_TeleportMap_C_ReleaseInput");
static_assert(sizeof(BPUI_TeleportMap_C_ReleaseInput) == 0x000020, "Wrong size on BPUI_TeleportMap_C_ReleaseInput");
static_assert(offsetof(BPUI_TeleportMap_C_ReleaseInput, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BPUI_TeleportMap_C_ReleaseInput::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ReleaseInput, CallFunc_GetPlayerController_ReturnValue_1) == 0x000008, "Member 'BPUI_TeleportMap_C_ReleaseInput::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ReleaseInput, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BPUI_TeleportMap_C_ReleaseInput::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ReleaseInput, CallFunc_GetPlayerController_ReturnValue_2) == 0x000018, "Member 'BPUI_TeleportMap_C_ReleaseInput::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function BPUI_TeleportMap.BPUI_TeleportMap_C.ToggleVisibility
// 0x00C8 (0x00C8 - 0x0000)
struct BPUI_TeleportMap_C_ToggleVisibility final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue_1;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable_1;                          // 0x003C(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0050(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_2;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_3;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue_2;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance_1;            // 0x0080(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success_1;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_4;            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapManager*                        CallFunc_Get3DMapManager_ReturnValue_5;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACA3DMapView*                           CallFunc_GetMapView_ReturnValue_3;                 // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UCAUIHUDInterface*                CallFunc_GetUIHUDInterface_ReturnValue;            // 0x00B8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsProductionHud_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_TeleportMap_C_ToggleVisibility) == 0x000008, "Wrong alignment on BPUI_TeleportMap_C_ToggleVisibility");
static_assert(sizeof(BPUI_TeleportMap_C_ToggleVisibility) == 0x0000C8, "Wrong size on BPUI_TeleportMap_C_ToggleVisibility");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, IsVisible_0) == 0x000000, "Member 'BPUI_TeleportMap_C_ToggleVisibility::IsVisible_0' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, Temp_delegate_Variable) == 0x000004, "Member 'BPUI_TeleportMap_C_ToggleVisibility::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue) == 0x000018, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue_1) == 0x000020, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetMapView_ReturnValue) == 0x000028, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetMapView_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetMapView_ReturnValue_1) == 0x000030, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetMapView_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, Temp_delegate_Variable_1) == 0x00003C, "Member 'BPUI_TeleportMap_C_ToggleVisibility::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_PlayEvent_playback_instance) == 0x000050, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_PlayEvent_play_success) == 0x000060, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue_2) == 0x000068, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue_3) == 0x000070, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetMapView_ReturnValue_2) == 0x000078, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetMapView_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_PlayEvent_playback_instance_1) == 0x000080, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_PlayEvent_playback_instance_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_PlayEvent_play_success_1) == 0x000090, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_PlayEvent_play_success_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue_4) == 0x000098, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_Get3DMapManager_ReturnValue_5) == 0x0000A0, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_Get3DMapManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetMapView_ReturnValue_3) == 0x0000A8, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetMapView_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetUIHUDInterface_ReturnValue) == 0x0000B8, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetUIHUDInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_TeleportMap_C_ToggleVisibility, CallFunc_GetIsProductionHud_ReturnValue) == 0x0000C0, "Member 'BPUI_TeleportMap_C_ToggleVisibility::CallFunc_GetIsProductionHud_ReturnValue' has a wrong offset!");

}

