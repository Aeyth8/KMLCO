#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_BankRobberTurret

#include "Basic.hpp"

#include "CAAudio_structs.hpp"


namespace SDK::Params
{

// Function BPC_BankRobberTurret.BPC_BankRobberTurret_C.ExecuteUbergraph_BPC_BankRobberTurret
// 0x0048 (0x0048 - 0x0000)
struct BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCAAudioEventType& Event_name)> Temp_delegate_Variable;                            // 0x0004(0x0014)(ConstParm, ZeroConstructor, NoDestructor)
	class ACACharacter_MainPlayer*                CallFunc_GetLocalPlayer_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCAAudioPlaybackInstance               CallFunc_PlayEvent_playback_instance;              // 0x0030(0x0010)()
	bool                                          CallFunc_PlayEvent_play_success;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret) == 0x000008, "Wrong alignment on BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret");
static_assert(sizeof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret) == 0x000048, "Wrong size on BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, EntryPoint) == 0x000000, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, Temp_delegate_Variable) == 0x000004, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_GetLocalPlayer_ReturnValue) == 0x000018, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_GetLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_GetOwner_ReturnValue_1) == 0x000028, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_PlayEvent_playback_instance) == 0x000030, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_PlayEvent_playback_instance' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_PlayEvent_play_success) == 0x000040, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_PlayEvent_play_success' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000042, "Member 'BPC_BankRobberTurret_C_ExecuteUbergraph_BPC_BankRobberTurret::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

