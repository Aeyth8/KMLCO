#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Grunt_IdleConversationStarter

#include "Basic.hpp"

#include "AB_Grunt_IdleConversationStarter_classes.hpp"
#include "AB_Grunt_IdleConversationStarter_parameters.hpp"


namespace SDK
{

// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.ExecuteUbergraph_AB_Grunt_IdleConversationStarter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_IdleConversationStarter_C::ExecuteUbergraph_AB_Grunt_IdleConversationStarter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "ExecuteUbergraph_AB_Grunt_IdleConversationStarter");

	Params::AB_Grunt_IdleConversationStarter_C_ExecuteUbergraph_AB_Grunt_IdleConversationStarter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAB_Grunt_IdleConversationStarter_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "K2_ActivateAbilityFromEvent");

	Params::AB_Grunt_IdleConversationStarter_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.OnCompleted_F92446C54570A5583B16619FE6BC7F3D
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::OnCompleted_F92446C54570A5583B16619FE6BC7F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "OnCompleted_F92446C54570A5583B16619FE6BC7F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.OnBlendOut_F92446C54570A5583B16619FE6BC7F3D
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::OnBlendOut_F92446C54570A5583B16619FE6BC7F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "OnBlendOut_F92446C54570A5583B16619FE6BC7F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.OnInterrupted_F92446C54570A5583B16619FE6BC7F3D
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::OnInterrupted_F92446C54570A5583B16619FE6BC7F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "OnInterrupted_F92446C54570A5583B16619FE6BC7F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.OnCancelled_F92446C54570A5583B16619FE6BC7F3D
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::OnCancelled_F92446C54570A5583B16619FE6BC7F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "OnCancelled_F92446C54570A5583B16619FE6BC7F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.OnSkipped_F92446C54570A5583B16619FE6BC7F3D
// (BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::OnSkipped_F92446C54570A5583B16619FE6BC7F3D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "OnSkipped_F92446C54570A5583B16619FE6BC7F3D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.SetRandomAnimIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UAB_Grunt_IdleConversationStarter_C::SetRandomAnimIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "SetRandomAnimIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_Grunt_IdleConversationStarter.AB_Grunt_IdleConversationStarter_C.Get Random Dialogue Trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Trigger                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Grunt_IdleConversationStarter_C::Get_Random_Dialogue_Trigger(class FName* Trigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Grunt_IdleConversationStarter_C", "Get Random Dialogue Trigger");

	Params::AB_Grunt_IdleConversationStarter_C_Get_Random_Dialogue_Trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Trigger != nullptr)
		*Trigger = Parms.Trigger;
}

}
