#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_IdleConversationTarget

#include "Basic.hpp"

#include "AB_Grunt_IdleConversationTarget_classes.hpp"
#include "AB_Grunt_IdleConversationTarget_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.ExecuteUbergraph_AB_Grunt_IdleConversationTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_IdleConversationTarget_C::ExecuteUbergraph_AB_Grunt_IdleConversationTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "ExecuteUbergraph_AB_Grunt_IdleConversationTarget");

	Params::AB_Grunt_IdleConversationTarget_C_ExecuteUbergraph_AB_Grunt_IdleConversationTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_IdleConversationTarget_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_IdleConversationTarget_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.OnCompleted_DCAC669248564674049B248892B03C4C
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationTarget_C::OnCompleted_DCAC669248564674049B248892B03C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "OnCompleted_DCAC669248564674049B248892B03C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.OnBlendOut_DCAC669248564674049B248892B03C4C
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationTarget_C::OnBlendOut_DCAC669248564674049B248892B03C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "OnBlendOut_DCAC669248564674049B248892B03C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.OnInterrupted_DCAC669248564674049B248892B03C4C
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationTarget_C::OnInterrupted_DCAC669248564674049B248892B03C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "OnInterrupted_DCAC669248564674049B248892B03C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.OnCancelled_DCAC669248564674049B248892B03C4C
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationTarget_C::OnCancelled_DCAC669248564674049B248892B03C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "OnCancelled_DCAC669248564674049B248892B03C4C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationTarget.AB_Grunt_IdleConversationTarget_C.OnSkipped_DCAC669248564674049B248892B03C4C
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationTarget_C::OnSkipped_DCAC669248564674049B248892B03C4C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationTarget_C", "OnSkipped_DCAC669248564674049B248892B03C4C");

	UObject::ProcessEvent(Func, nullptr);
}

}
