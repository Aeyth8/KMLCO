#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartUp_Video_Mediator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FTUE_VideoBase_Mediator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StartUp_Video_Mediator.StartUp_Video_Mediator_C
// 0x0008 (0x0150 - 0x0148)
class UStartUp_Video_Mediator_C final : public UFTUE_VideoBase_Mediator_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_StartUp_Video_Mediator_C;           // 0x0148(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_StartUp_Video_Mediator(int32 EntryPoint);
	void PlayFTUEConversion();
	void PlaySyncScreen();
	void PlayPunchIn();
	void OnRequestVideoStop(const struct FCAUIEventData& Event_data);
	void OnRequestVideoStart(const struct FCAUIEventData& Event_data);
	void PlayOnboarding();
	void PlayPunchOut();
	void PlaySplashScreen();
	void PlaySplashLogos();
	void OnEnterState();
	void TryPlayFromDataItem(class UObject* Payload, bool* Results);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StartUp_Video_Mediator_C">();
	}
	static class UStartUp_Video_Mediator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStartUp_Video_Mediator_C>();
	}
};
static_assert(alignof(UStartUp_Video_Mediator_C) == 0x000008, "Wrong alignment on UStartUp_Video_Mediator_C");
static_assert(sizeof(UStartUp_Video_Mediator_C) == 0x000150, "Wrong size on UStartUp_Video_Mediator_C");
static_assert(offsetof(UStartUp_Video_Mediator_C, UberGraphFrame_StartUp_Video_Mediator_C) == 0x000148, "Member 'UStartUp_Video_Mediator_C::UberGraphFrame_StartUp_Video_Mediator_C' has a wrong offset!");

}
