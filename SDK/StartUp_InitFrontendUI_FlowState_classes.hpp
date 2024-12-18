#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartUp_InitFrontendUI_FlowState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StartUp_InitFrontendUI_FlowState.Startup_InitFrontendUI_FlowState_C
// 0x0388 (0x0498 - 0x0110)
class UStartup_InitFrontendUI_FlowState_C final : public UCABaseResetContextBranch
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FCAScreenRequest                       Request_header;                                    // 0x0118(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request_subheader;                                 // 0x0198(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request_player_card;                               // 0x0218(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request_footer;                                    // 0x0298(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request_text_chat;                                 // 0x0318(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request_video;                                     // 0x0398(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FCAScreenRequest                       Request;                                           // 0x0418(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Startup_InitFrontendUI_FlowState(int32 EntryPoint);
	void OnEnterState();
	void SetUp();
	void OnAlreadyShowing_DC185C8A46F35410D5AE52BFAA78CFB3(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_DC185C8A46F35410D5AE52BFAA78CFB3(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_DC185C8A46F35410D5AE52BFAA78CFB3(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_DC185C8A46F35410D5AE52BFAA78CFB3(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnAlreadyShowing_02A78B4C49AD47E9B80653848BEE152F(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_02A78B4C49AD47E9B80653848BEE152F(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_02A78B4C49AD47E9B80653848BEE152F(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_02A78B4C49AD47E9B80653848BEE152F(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnAlreadyShowing_4B87D80E4B2F26E34114FE8FD0F548D7(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_4B87D80E4B2F26E34114FE8FD0F548D7(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_4B87D80E4B2F26E34114FE8FD0F548D7(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_4B87D80E4B2F26E34114FE8FD0F548D7(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnAlreadyShowing_3F98C80C44D47E5BBC2A55B84A19F90E(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_3F98C80C44D47E5BBC2A55B84A19F90E(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_3F98C80C44D47E5BBC2A55B84A19F90E(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_3F98C80C44D47E5BBC2A55B84A19F90E(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnAlreadyShowing_F74873D94F04318ECAB4B3B8E32FDE56(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_F74873D94F04318ECAB4B3B8E32FDE56(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_F74873D94F04318ECAB4B3B8E32FDE56(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_F74873D94F04318ECAB4B3B8E32FDE56(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnAlreadyShowing_029035CC4A3D3BD2E6C66F8F2C2A6BA6(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnShowing_029035CC4A3D3BD2E6C66F8F2C2A6BA6(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnMediatorReady_029035CC4A3D3BD2E6C66F8F2C2A6BA6(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);
	void OnError_029035CC4A3D3BD2E6C66F8F2C2A6BA6(class UCABaseScreen* Screen, class UCAViewMediator* Mediator);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Startup_InitFrontendUI_FlowState_C">();
	}
	static class UStartup_InitFrontendUI_FlowState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStartup_InitFrontendUI_FlowState_C>();
	}
};
static_assert(alignof(UStartup_InitFrontendUI_FlowState_C) == 0x000008, "Wrong alignment on UStartup_InitFrontendUI_FlowState_C");
static_assert(sizeof(UStartup_InitFrontendUI_FlowState_C) == 0x000498, "Wrong size on UStartup_InitFrontendUI_FlowState_C");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, UberGraphFrame) == 0x000110, "Member 'UStartup_InitFrontendUI_FlowState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_header) == 0x000118, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_header' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_subheader) == 0x000198, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_subheader' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_player_card) == 0x000218, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_player_card' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_footer) == 0x000298, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_footer' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_text_chat) == 0x000318, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_text_chat' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request_video) == 0x000398, "Member 'UStartup_InitFrontendUI_FlowState_C::Request_video' has a wrong offset!");
static_assert(offsetof(UStartup_InitFrontendUI_FlowState_C, Request) == 0x000418, "Member 'UStartup_InitFrontendUI_FlowState_C::Request' has a wrong offset!");

}

