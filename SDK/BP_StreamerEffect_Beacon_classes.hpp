#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StreamerEffect_Beacon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StreamerEffect_Beacon.BP_StreamerEffect_Beacon_C
// 0x0018 (0x0270 - 0x0258)
class ABP_StreamerEffect_Beacon_C final : public ACAStreamerEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_BeaconTrail;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_StreamerEffect_Beacon(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StreamerEffect_Beacon_C">();
	}
	static class ABP_StreamerEffect_Beacon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StreamerEffect_Beacon_C>();
	}
};
static_assert(alignof(ABP_StreamerEffect_Beacon_C) == 0x000008, "Wrong alignment on ABP_StreamerEffect_Beacon_C");
static_assert(sizeof(ABP_StreamerEffect_Beacon_C) == 0x000270, "Wrong size on ABP_StreamerEffect_Beacon_C");
static_assert(offsetof(ABP_StreamerEffect_Beacon_C, UberGraphFrame) == 0x000258, "Member 'ABP_StreamerEffect_Beacon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StreamerEffect_Beacon_C, NS_BeaconTrail) == 0x000260, "Member 'ABP_StreamerEffect_Beacon_C::NS_BeaconTrail' has a wrong offset!");
static_assert(offsetof(ABP_StreamerEffect_Beacon_C, DefaultSceneRoot) == 0x000268, "Member 'ABP_StreamerEffect_Beacon_C::DefaultSceneRoot' has a wrong offset!");

}
