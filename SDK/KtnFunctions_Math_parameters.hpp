#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KtnFunctions_Math

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SMinMax_structs.hpp"


namespace SDK::Params
{

// Function KtnFunctions_Math.KtnFunctions_Math_C.Clamp1f
// 0x0018 (0x0018 - 0x0000)
struct KtnFunctions_Math_C_Clamp1f final
{
public:
	float                                         Input;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Output;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_Clamp1f) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_Clamp1f");
static_assert(sizeof(KtnFunctions_Math_C_Clamp1f) == 0x000018, "Wrong size on KtnFunctions_Math_C_Clamp1f");
static_assert(offsetof(KtnFunctions_Math_C_Clamp1f, Input) == 0x000000, "Member 'KtnFunctions_Math_C_Clamp1f::Input' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Clamp1f, __WorldContext) == 0x000008, "Member 'KtnFunctions_Math_C_Clamp1f::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Clamp1f, Output) == 0x000010, "Member 'KtnFunctions_Math_C_Clamp1f::Output' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Clamp1f, CallFunc_FClamp_ReturnValue) == 0x000014, "Member 'KtnFunctions_Math_C_Clamp1f::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.Minus1f
// 0x0018 (0x0018 - 0x0000)
struct KtnFunctions_Math_C_Minus1f final
{
public:
	float                                         Input;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Output;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_Minus1f) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_Minus1f");
static_assert(sizeof(KtnFunctions_Math_C_Minus1f) == 0x000018, "Wrong size on KtnFunctions_Math_C_Minus1f");
static_assert(offsetof(KtnFunctions_Math_C_Minus1f, Input) == 0x000000, "Member 'KtnFunctions_Math_C_Minus1f::Input' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Minus1f, __WorldContext) == 0x000008, "Member 'KtnFunctions_Math_C_Minus1f::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Minus1f, Output) == 0x000010, "Member 'KtnFunctions_Math_C_Minus1f::Output' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_Minus1f, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'KtnFunctions_Math_C_Minus1f::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.1pCamDot
// 0x00C0 (0x00C0 - 0x0000)
struct KtnFunctions_Math_C_OnepCamDot final
{
public:
	class USceneComponent*                        Camera;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_InvertTransform_ReturnValue;              // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAtan2_ReturnValue;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_OnepCamDot) == 0x000010, "Wrong alignment on KtnFunctions_Math_C_OnepCamDot");
static_assert(sizeof(KtnFunctions_Math_C_OnepCamDot) == 0x0000C0, "Wrong size on KtnFunctions_Math_C_OnepCamDot");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, Camera) == 0x000000, "Member 'KtnFunctions_Math_C_OnepCamDot::Camera' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, Target) == 0x000008, "Member 'KtnFunctions_Math_C_OnepCamDot::Target' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, __WorldContext) == 0x000010, "Member 'KtnFunctions_Math_C_OnepCamDot::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, ReturnValue) == 0x000018, "Member 'KtnFunctions_Math_C_OnepCamDot::ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_InvertTransform_ReturnValue) == 0x000060, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_InvertTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_TransformLocation_ReturnValue) == 0x000090, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_BreakVector_X) == 0x00009C, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_BreakVector_Z) == 0x0000A4, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000A8, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000AC, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000B0, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0000B4, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_OnepCamDot, CallFunc_DegAtan2_ReturnValue) == 0x0000B8, "Member 'KtnFunctions_Math_C_OnepCamDot::CallFunc_DegAtan2_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.DistanceBetweenVectors
// 0x0038 (0x0038 - 0x0000)
struct KtnFunctions_Math_C_DistanceBetweenVectors final
{
public:
	struct FVector                                Source;                                            // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Target;                                            // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_DistanceBetweenVectors) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_DistanceBetweenVectors");
static_assert(sizeof(KtnFunctions_Math_C_DistanceBetweenVectors) == 0x000038, "Wrong size on KtnFunctions_Math_C_DistanceBetweenVectors");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, Source) == 0x000000, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::Source' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, Target) == 0x00000C, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::Target' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, __WorldContext) == 0x000018, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, Result) == 0x000020, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000024, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenVectors, CallFunc_VSize_ReturnValue) == 0x000030, "Member 'KtnFunctions_Math_C_DistanceBetweenVectors::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.DistanceBetweenActors
// 0x0048 (0x0048 - 0x0000)
struct KtnFunctions_Math_C_DistanceBetweenActors final
{
public:
	class AActor*                                 Source;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_DistanceBetweenActors) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_DistanceBetweenActors");
static_assert(sizeof(KtnFunctions_Math_C_DistanceBetweenActors) == 0x000048, "Wrong size on KtnFunctions_Math_C_DistanceBetweenActors");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, Source) == 0x000000, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::Source' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, Target) == 0x000008, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::Target' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, __WorldContext) == 0x000010, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, Result) == 0x000018, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000028, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000034, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_DistanceBetweenActors, CallFunc_VSize_ReturnValue) == 0x000040, "Member 'KtnFunctions_Math_C_DistanceBetweenActors::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.ClampToMinMax
// 0x0020 (0x0020 - 0x0000)
struct KtnFunctions_Math_C_ClampToMinMax final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMinMax                               SMinMax;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Result;                                            // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_ClampToMinMax) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_ClampToMinMax");
static_assert(sizeof(KtnFunctions_Math_C_ClampToMinMax) == 0x000020, "Wrong size on KtnFunctions_Math_C_ClampToMinMax");
static_assert(offsetof(KtnFunctions_Math_C_ClampToMinMax, Value) == 0x000000, "Member 'KtnFunctions_Math_C_ClampToMinMax::Value' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampToMinMax, SMinMax) == 0x000004, "Member 'KtnFunctions_Math_C_ClampToMinMax::SMinMax' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampToMinMax, __WorldContext) == 0x000010, "Member 'KtnFunctions_Math_C_ClampToMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampToMinMax, Result) == 0x000018, "Member 'KtnFunctions_Math_C_ClampToMinMax::Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampToMinMax, CallFunc_FClamp_ReturnValue) == 0x00001C, "Member 'KtnFunctions_Math_C_ClampToMinMax::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.ClampVec2dToMinMax
// 0x0038 (0x0038 - 0x0000)
struct KtnFunctions_Math_C_ClampVec2dToMinMax final
{
public:
	struct FVector2D                              InVec;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMinMax                               MinMaxX;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMinMax                               MinMaxY;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClampToMinMax_Result;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ClampToMinMax_Result_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_ClampVec2dToMinMax) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_ClampVec2dToMinMax");
static_assert(sizeof(KtnFunctions_Math_C_ClampVec2dToMinMax) == 0x000038, "Wrong size on KtnFunctions_Math_C_ClampVec2dToMinMax");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, InVec) == 0x000000, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::InVec' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, MinMaxX) == 0x000008, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::MinMaxX' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, MinMaxY) == 0x000010, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::MinMaxY' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, __WorldContext) == 0x000018, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, CallFunc_BreakVector2D_X) == 0x000020, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, CallFunc_BreakVector2D_Y) == 0x000024, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, CallFunc_ClampToMinMax_Result) == 0x000028, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::CallFunc_ClampToMinMax_Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, CallFunc_ClampToMinMax_Result_1) == 0x00002C, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::CallFunc_ClampToMinMax_Result_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ClampVec2dToMinMax, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'KtnFunctions_Math_C_ClampVec2dToMinMax::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.ScaleMinMax
// 0x0030 (0x0030 - 0x0000)
struct KtnFunctions_Math_C_ScaleMinMax final
{
public:
	struct FSMinMax                               Value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scalar;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMinMax                               Result;                                            // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSMinMax                               K2Node_MakeStruct_sMinMax;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_ScaleMinMax) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_ScaleMinMax");
static_assert(sizeof(KtnFunctions_Math_C_ScaleMinMax) == 0x000030, "Wrong size on KtnFunctions_Math_C_ScaleMinMax");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, Value) == 0x000000, "Member 'KtnFunctions_Math_C_ScaleMinMax::Value' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, Scalar) == 0x000008, "Member 'KtnFunctions_Math_C_ScaleMinMax::Scalar' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, __WorldContext) == 0x000010, "Member 'KtnFunctions_Math_C_ScaleMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, Result) == 0x000018, "Member 'KtnFunctions_Math_C_ScaleMinMax::Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'KtnFunctions_Math_C_ScaleMinMax::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000024, "Member 'KtnFunctions_Math_C_ScaleMinMax::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ScaleMinMax, K2Node_MakeStruct_sMinMax) == 0x000028, "Member 'KtnFunctions_Math_C_ScaleMinMax::K2Node_MakeStruct_sMinMax' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.ApplyRotatorToForwardVector
// 0x0070 (0x0070 - 0x0000)
struct KtnFunctions_Math_C_ApplyRotatorToForwardVector final
{
public:
	struct FVector                                ForwardVector;                                     // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotator;                                           // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Result;                                            // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_ApplyRotatorToForwardVector) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_ApplyRotatorToForwardVector");
static_assert(sizeof(KtnFunctions_Math_C_ApplyRotatorToForwardVector) == 0x000070, "Wrong size on KtnFunctions_Math_C_ApplyRotatorToForwardVector");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, ForwardVector) == 0x000000, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::ForwardVector' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, Rotator) == 0x00000C, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::Rotator' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, __WorldContext) == 0x000018, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, Result) == 0x000020, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::Result' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_X) == 0x00002C, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_Y) == 0x000030, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_Z) == 0x000034, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000038, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_Normal_ReturnValue) == 0x000044, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_X_1) == 0x000050, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_Y_1) == 0x000054, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_BreakVector_Z_1) == 0x000058, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_Add_FloatFloat_ReturnValue) == 0x00005C, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000060, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_ApplyRotatorToForwardVector, CallFunc_MakeVector_ReturnValue) == 0x000064, "Member 'KtnFunctions_Math_C_ApplyRotatorToForwardVector::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function KtnFunctions_Math.KtnFunctions_Math_C.GetPitchFromTwoVectors
// 0x0048 (0x0048 - 0x0000)
struct KtnFunctions_Math_C_GetPitchFromTwoVectors final
{
public:
	struct FVector                                A;                                                 // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                B;                                                 // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch;                                             // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetYawPitchFromVector_Yaw;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetYawPitchFromVector_Pitch;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KtnFunctions_Math_C_GetPitchFromTwoVectors) == 0x000008, "Wrong alignment on KtnFunctions_Math_C_GetPitchFromTwoVectors");
static_assert(sizeof(KtnFunctions_Math_C_GetPitchFromTwoVectors) == 0x000048, "Wrong size on KtnFunctions_Math_C_GetPitchFromTwoVectors");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, A) == 0x000000, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::A' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, B) == 0x00000C, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::B' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, __WorldContext) == 0x000018, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::__WorldContext' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, Pitch) == 0x000020, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::Pitch' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, CallFunc_FindLookAtRotation_ReturnValue) == 0x000024, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, CallFunc_GetForwardVector_ReturnValue) == 0x000030, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, CallFunc_GetYawPitchFromVector_Yaw) == 0x00003C, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::CallFunc_GetYawPitchFromVector_Yaw' has a wrong offset!");
static_assert(offsetof(KtnFunctions_Math_C_GetPitchFromTwoVectors, CallFunc_GetYawPitchFromVector_Pitch) == 0x000040, "Member 'KtnFunctions_Math_C_GetPitchFromTwoVectors::CallFunc_GetYawPitchFromVector_Pitch' has a wrong offset!");

}
