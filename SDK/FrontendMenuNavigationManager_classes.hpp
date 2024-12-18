#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendMenuNavigationManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendMenuNavigationManager.FrontendMenuNavigationManager_C
// 0x0008 (0x01C0 - 0x01B8)
class UFrontendMenuNavigationManager_C final : public UCAMenuNavigationManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnMatchmakingStarted(const struct FCAUIEventData& Event_data);
	void OnMatchmakingStopped(const struct FCAUIEventData& Event_data);
	void OnPendingSpecialistChanged(const struct FCAUIEventData& Event_data);
	void OnChallengesSubHeaderElementUpdate(const struct FCAUIEventData& Event_data);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FrontendMenuNavigationManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendMenuNavigationManager_C">();
	}
	static class UFrontendMenuNavigationManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendMenuNavigationManager_C>();
	}
};
static_assert(alignof(UFrontendMenuNavigationManager_C) == 0x000008, "Wrong alignment on UFrontendMenuNavigationManager_C");
static_assert(sizeof(UFrontendMenuNavigationManager_C) == 0x0001C0, "Wrong size on UFrontendMenuNavigationManager_C");
static_assert(offsetof(UFrontendMenuNavigationManager_C, UberGraphFrame) == 0x0001B8, "Member 'UFrontendMenuNavigationManager_C::UberGraphFrame' has a wrong offset!");

}

