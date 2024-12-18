#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BTS_PolitenessBehaviourInProgress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BTS_PolitenessBehaviourInProgress.BP_BTS_PolitenessBehaviourInProgress_C
// 0x0028 (0x00D0 - 0x00A8)
class UBP_BTS_PolitenessBehaviourInProgress_C final : public UBTService_CABlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCANPCPolitenessBehaviourComponent*     Politeness_Behaviour_Component;                    // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCANPCPolitenessBehaviourComponent*     PolitenessBehaviourComponent;                      // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Channel;                                           // 0x00C0(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BTS_PolitenessBehaviourInProgress(int32 EntryPoint);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BTS_PolitenessBehaviourInProgress_C">();
	}
	static class UBP_BTS_PolitenessBehaviourInProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BTS_PolitenessBehaviourInProgress_C>();
	}
};
static_assert(alignof(UBP_BTS_PolitenessBehaviourInProgress_C) == 0x000008, "Wrong alignment on UBP_BTS_PolitenessBehaviourInProgress_C");
static_assert(sizeof(UBP_BTS_PolitenessBehaviourInProgress_C) == 0x0000D0, "Wrong size on UBP_BTS_PolitenessBehaviourInProgress_C");
static_assert(offsetof(UBP_BTS_PolitenessBehaviourInProgress_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_BTS_PolitenessBehaviourInProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BTS_PolitenessBehaviourInProgress_C, Politeness_Behaviour_Component) == 0x0000B0, "Member 'UBP_BTS_PolitenessBehaviourInProgress_C::Politeness_Behaviour_Component' has a wrong offset!");
static_assert(offsetof(UBP_BTS_PolitenessBehaviourInProgress_C, PolitenessBehaviourComponent) == 0x0000B8, "Member 'UBP_BTS_PolitenessBehaviourInProgress_C::PolitenessBehaviourComponent' has a wrong offset!");
static_assert(offsetof(UBP_BTS_PolitenessBehaviourInProgress_C, Channel) == 0x0000C0, "Member 'UBP_BTS_PolitenessBehaviourInProgress_C::Channel' has a wrong offset!");

}

