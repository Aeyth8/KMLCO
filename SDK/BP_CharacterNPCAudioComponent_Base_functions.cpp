#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterNPCAudioComponent_Base

#include "Basic.hpp"

#include "BP_CharacterNPCAudioComponent_Base_classes.hpp"
#include "BP_CharacterNPCAudioComponent_Base_parameters.hpp"


namespace SDK
{

// Function BP_CharacterNPCAudioComponent_Base.BP_CharacterNPCAudioComponent_Base_C.OnAwarenessStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_CharacterNPCAudioComponent_Base_C::OnAwarenessStateChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterNPCAudioComponent_Base_C", "OnAwarenessStateChange__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterNPCAudioComponent_Base.BP_CharacterNPCAudioComponent_Base_C.ExecuteUbergraph_BP_CharacterNPCAudioComponent_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterNPCAudioComponent_Base_C::ExecuteUbergraph_BP_CharacterNPCAudioComponent_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterNPCAudioComponent_Base_C", "ExecuteUbergraph_BP_CharacterNPCAudioComponent_Base");

	Params::BP_CharacterNPCAudioComponent_Base_C_ExecuteUbergraph_BP_CharacterNPCAudioComponent_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterNPCAudioComponent_Base.BP_CharacterNPCAudioComponent_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CharacterNPCAudioComponent_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterNPCAudioComponent_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
