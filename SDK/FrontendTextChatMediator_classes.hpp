#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontendTextChatMediator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontendTextChatMediator.FrontendTextChatMediator_C
// 0x0010 (0x0140 - 0x0130)
class UFrontendTextChatMediator_C final : public UCAViewMediator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TextChat_Screen_C*                  Client;                                            // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FrontendTextChatMediator(int32 EntryPoint);
	void OnShowHistoryOnly(const struct FCAUIEventData& Event_data);
	void OnWidgetVisible(const struct FCAUIEventData& Event_data);
	void SetClient(class UObject* Client_0);
	void OnExitState();
	void OnEnterState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontendTextChatMediator_C">();
	}
	static class UFrontendTextChatMediator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontendTextChatMediator_C>();
	}
};
static_assert(alignof(UFrontendTextChatMediator_C) == 0x000008, "Wrong alignment on UFrontendTextChatMediator_C");
static_assert(sizeof(UFrontendTextChatMediator_C) == 0x000140, "Wrong size on UFrontendTextChatMediator_C");
static_assert(offsetof(UFrontendTextChatMediator_C, UberGraphFrame) == 0x000130, "Member 'UFrontendTextChatMediator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontendTextChatMediator_C, Client) == 0x000138, "Member 'UFrontendTextChatMediator_C::Client' has a wrong offset!");

}
