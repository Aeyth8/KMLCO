#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathEffect_NPCTurret

#include "Basic.hpp"

#include "CAAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_DeathEffect_NPCTurret.BP_DeathEffect_NPCTurret_C.ExecuteUbergraph_BP_DeathEffect_NPCTurret
// 0x0128 (0x0128 - 0x0000)
struct BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetPawnMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0060(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_SphereOverlapComponents_OutComponents;    // 0x0088(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_SphereOverlapComponents_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x00AC(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x00E8(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EffectProp_ElitePart_C*             CallFunc_SpawnCAEffectProp_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret) == 0x000008, "Wrong alignment on BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret");
static_assert(sizeof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret) == 0x000128, "Wrong size on BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, EntryPoint) == 0x000000, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_GetPawnMesh_ReturnValue) == 0x000008, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_GetPawnMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_GetSocketRotation_ReturnValue) == 0x000014, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_GetSocketLocation_ReturnValue) == 0x000020, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_RandomFloatInRange_ReturnValue) == 0x00002C, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Add_VectorVector_ReturnValue) == 0x000030, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000040, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000048, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, K2Node_MakeArray_Array) == 0x000050, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, K2Node_MakeArray_Array_1) == 0x000060, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_SphereOverlapComponents_OutComponents) == 0x000088, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_SphereOverlapComponents_OutComponents' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_SphereOverlapComponents_ReturnValue) == 0x000098, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_SphereOverlapComponents_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000A0, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, Temp_delegate_Variable) == 0x0000AC, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, Temp_int_Variable) == 0x0000C0, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Less_IntInt_ReturnValue) == 0x0000D0, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000D4, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_MakeVector_ReturnValue) == 0x0000D8, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_PlayEvent_playback_instance) == 0x0000E8, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_PlayEvent_play_success) == 0x0000F8, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000FC, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, Temp_int_Variable_1) == 0x000108, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_SpawnCAEffectProp_ReturnValue) == 0x000110, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_SpawnCAEffectProp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000118, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_Add_IntInt_ReturnValue_1) == 0x00011C, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret, CallFunc_IsValid_ReturnValue_1) == 0x000121, "Member 'BP_DeathEffect_NPCTurret_C_ExecuteUbergraph_BP_DeathEffect_NPCTurret::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}
