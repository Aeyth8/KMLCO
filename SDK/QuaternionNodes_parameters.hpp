#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuaternionNodes

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function QuaternionNodes.QuaternionNodes_C.ToQuaternion (Rotator)
// 0x0050 (0x0050 - 0x0000)
struct QuaternionNodes_C_ToQuaternion__Rotator_ final
{
public:
	struct FRotator                               InRot;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Return_Value;                                      // 0x0020(0x0010)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  CallFunc_Conv_VectorToQuaternion_ReturnValue;      // 0x0040(0x0010)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuaternionNodes_C_ToQuaternion__Rotator_) == 0x000010, "Wrong alignment on QuaternionNodes_C_ToQuaternion__Rotator_");
static_assert(sizeof(QuaternionNodes_C_ToQuaternion__Rotator_) == 0x000050, "Wrong size on QuaternionNodes_C_ToQuaternion__Rotator_");
static_assert(offsetof(QuaternionNodes_C_ToQuaternion__Rotator_, InRot) == 0x000000, "Member 'QuaternionNodes_C_ToQuaternion__Rotator_::InRot' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_ToQuaternion__Rotator_, __WorldContext) == 0x000010, "Member 'QuaternionNodes_C_ToQuaternion__Rotator_::__WorldContext' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_ToQuaternion__Rotator_, Return_Value) == 0x000020, "Member 'QuaternionNodes_C_ToQuaternion__Rotator_::Return_Value' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_ToQuaternion__Rotator_, CallFunc_GetForwardVector_ReturnValue) == 0x000030, "Member 'QuaternionNodes_C_ToQuaternion__Rotator_::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_ToQuaternion__Rotator_, CallFunc_Conv_VectorToQuaternion_ReturnValue) == 0x000040, "Member 'QuaternionNodes_C_ToQuaternion__Rotator_::CallFunc_Conv_VectorToQuaternion_ReturnValue' has a wrong offset!");

// Function QuaternionNodes.QuaternionNodes_C.GetBaseAimRotation (Quat)
// 0x0050 (0x0050 - 0x0000)
struct QuaternionNodes_C_GetBaseAimRotation__Quat_ final
{
public:
	class APawn*                                  Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  Return_Value;                                      // 0x0010(0x0010)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;           // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  CallFunc_Conv_VectorToQuaternion_ReturnValue;      // 0x0040(0x0010)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuaternionNodes_C_GetBaseAimRotation__Quat_) == 0x000010, "Wrong alignment on QuaternionNodes_C_GetBaseAimRotation__Quat_");
static_assert(sizeof(QuaternionNodes_C_GetBaseAimRotation__Quat_) == 0x000050, "Wrong size on QuaternionNodes_C_GetBaseAimRotation__Quat_");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, Target) == 0x000000, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::Target' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, __WorldContext) == 0x000008, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::__WorldContext' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, Return_Value) == 0x000010, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::Return_Value' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, CallFunc_GetBaseAimRotation_ReturnValue) == 0x000020, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, CallFunc_GetForwardVector_ReturnValue) == 0x00002C, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetBaseAimRotation__Quat_, CallFunc_Conv_VectorToQuaternion_ReturnValue) == 0x000040, "Member 'QuaternionNodes_C_GetBaseAimRotation__Quat_::CallFunc_Conv_VectorToQuaternion_ReturnValue' has a wrong offset!");

// Function QuaternionNodes.QuaternionNodes_C.GetActorRotation (Quat)
// 0x0040 (0x0040 - 0x0000)
struct QuaternionNodes_C_GetActorRotation__Quat_ final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                  Return_Value;                                      // 0x0010(0x0010)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  CallFunc_Conv_VectorToQuaternion_ReturnValue;      // 0x0030(0x0010)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuaternionNodes_C_GetActorRotation__Quat_) == 0x000010, "Wrong alignment on QuaternionNodes_C_GetActorRotation__Quat_");
static_assert(sizeof(QuaternionNodes_C_GetActorRotation__Quat_) == 0x000040, "Wrong size on QuaternionNodes_C_GetActorRotation__Quat_");
static_assert(offsetof(QuaternionNodes_C_GetActorRotation__Quat_, Target) == 0x000000, "Member 'QuaternionNodes_C_GetActorRotation__Quat_::Target' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetActorRotation__Quat_, __WorldContext) == 0x000008, "Member 'QuaternionNodes_C_GetActorRotation__Quat_::__WorldContext' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetActorRotation__Quat_, Return_Value) == 0x000010, "Member 'QuaternionNodes_C_GetActorRotation__Quat_::Return_Value' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetActorRotation__Quat_, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'QuaternionNodes_C_GetActorRotation__Quat_::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuaternionNodes_C_GetActorRotation__Quat_, CallFunc_Conv_VectorToQuaternion_ReturnValue) == 0x000030, "Member 'QuaternionNodes_C_GetActorRotation__Quat_::CallFunc_Conv_VectorToQuaternion_ReturnValue' has a wrong offset!");

}
