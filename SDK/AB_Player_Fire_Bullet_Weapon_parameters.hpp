#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Player_Fire_Bullet_Weapon

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function AB_Player_Fire_Bullet_Weapon.AB_Player_Fire_Bullet_Weapon_C.ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon
// 0x01A0 (0x01A0 - 0x0000)
struct AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0008(0x00B8)()
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x00C0(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D8(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon) == 0x000008, "Wrong alignment on AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon");
static_assert(sizeof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon) == 0x0001A0, "Wrong size on AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, EntryPoint) == 0x000000, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, K2Node_CustomEvent_Payload) == 0x000008, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, K2Node_CreateDelegate_OutputDelegate) == 0x0000C0, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, Temp_struct_Variable) == 0x0000D8, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000190, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon, CallFunc_IsValid_ReturnValue) == 0x000198, "Member 'AB_Player_Fire_Bullet_Weapon_C_ExecuteUbergraph_AB_Player_Fire_Bullet_Weapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AB_Player_Fire_Bullet_Weapon.AB_Player_Fire_Bullet_Weapon_C.EventReceived_B32842924ACAED916598D1A2CA0EBB69
// 0x00B8 (0x00B8 - 0x0000)
struct AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69) == 0x000008, "Wrong alignment on AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69");
static_assert(sizeof(AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69) == 0x0000B8, "Wrong size on AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69, Payload) == 0x000000, "Member 'AB_Player_Fire_Bullet_Weapon_C_EventReceived_B32842924ACAED916598D1A2CA0EBB69::Payload' has a wrong offset!");

// Function AB_Player_Fire_Bullet_Weapon.AB_Player_Fire_Bullet_Weapon_C.K2_ShouldAbilityRespondToEvent
// 0x0110 (0x0110 - 0x0000)
struct AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                     Payload;                                           // 0x0050(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x0108(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent) == 0x000110, "Wrong size on AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000050, "Member 'AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x000108, "Member 'AB_Player_Fire_Bullet_Weapon_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");

}
