#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPUI_HUD_Interface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BPUI_HUD_Interface.BPUI_HUD_Interface_C.GetCAHUD
// 0x0038 (0x0038 - 0x0000)
struct BPUI_HUD_Interface_C_GetCAHUD final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAHUD_InGameMain*                      As_CA_UI_HUD_in_Game;                              // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACAPlayerController*                    CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAHUD_InGameMain*                      K2Node_DynamicCast_AsCAHUD_in_Game_Main;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_HUD_Interface_C_GetCAHUD) == 0x000008, "Wrong alignment on BPUI_HUD_Interface_C_GetCAHUD");
static_assert(sizeof(BPUI_HUD_Interface_C_GetCAHUD) == 0x000038, "Wrong size on BPUI_HUD_Interface_C_GetCAHUD");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, __WorldContext) == 0x000000, "Member 'BPUI_HUD_Interface_C_GetCAHUD::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, As_CA_UI_HUD_in_Game) == 0x000008, "Member 'BPUI_HUD_Interface_C_GetCAHUD::As_CA_UI_HUD_in_Game' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'BPUI_HUD_Interface_C_GetCAHUD::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, CallFunc_GetHUD_ReturnValue) == 0x000018, "Member 'BPUI_HUD_Interface_C_GetCAHUD::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BPUI_HUD_Interface_C_GetCAHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, K2Node_DynamicCast_AsCAHUD_in_Game_Main) == 0x000028, "Member 'BPUI_HUD_Interface_C_GetCAHUD::K2Node_DynamicCast_AsCAHUD_in_Game_Main' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_GetCAHUD, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPUI_HUD_Interface_C_GetCAHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BPUI_HUD_Interface.BPUI_HUD_Interface_C.IsActorInPlayerView
// 0x0178 (0x0178 - 0x0000)
struct BPUI_HUD_Interface_C_IsActorInPlayerView final
{
public:
	class AActor*                                 Target_actor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayerCharacter_ReturnValue_1;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x005C(0x0090)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EF[0x1];                                       // 0x00EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPUI_HUD_Interface_C_IsActorInPlayerView) == 0x000008, "Wrong alignment on BPUI_HUD_Interface_C_IsActorInPlayerView");
static_assert(sizeof(BPUI_HUD_Interface_C_IsActorInPlayerView) == 0x000178, "Wrong size on BPUI_HUD_Interface_C_IsActorInPlayerView");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, Target_actor) == 0x000000, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::Target_actor' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, __WorldContext) == 0x000008, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, Result) == 0x000010, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::Result' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000018, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_GetLocalPlayerCharacter_ReturnValue_1) == 0x000020, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_GetLocalPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, K2Node_MakeArray_Array) == 0x000028, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_GetActorEyesViewPoint_OutLocation) == 0x000038, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_GetActorEyesViewPoint_OutLocation' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_GetActorEyesViewPoint_OutRotation) == 0x000044, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_GetActorEyesViewPoint_OutRotation' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_LineTraceSingle_OutHit) == 0x00005C, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_LineTraceSingle_ReturnValue) == 0x0000EC, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_bBlockingHit) == 0x0000ED, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000EE, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_Time) == 0x0000F0, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_Distance) == 0x0000F4, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_Location) == 0x0000F8, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_ImpactPoint) == 0x000104, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_Normal) == 0x000110, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_ImpactNormal) == 0x00011C, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_PhysMat) == 0x000128, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_HitActor) == 0x000130, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_HitComponent) == 0x000138, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_HitBoneName) == 0x000140, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_HitItem) == 0x00014C, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_ElementIndex) == 0x000150, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_FaceIndex) == 0x000154, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_TraceStart) == 0x000158, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_BreakHitResult_TraceEnd) == 0x000164, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BPUI_HUD_Interface_C_IsActorInPlayerView, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000170, "Member 'BPUI_HUD_Interface_C_IsActorInPlayerView::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
