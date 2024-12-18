#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteExoFaceplate

#include "Basic.hpp"

#include "AB_EliteExoFaceplate_classes.hpp"
#include "AB_EliteExoFaceplate_parameters.hpp"


namespace SDK
{

// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.ExecuteUbergraph_AB_EliteExoFaceplate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_EliteExoFaceplate_C::ExecuteUbergraph_AB_EliteExoFaceplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "ExecuteUbergraph_AB_EliteExoFaceplate");

	Params::AB_EliteExoFaceplate_C_ExecuteUbergraph_AB_EliteExoFaceplate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_EliteExoFaceplate_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "K2_OnEndAbility");

	Params::AB_EliteExoFaceplate_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_EliteExoFaceplate_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.OnCompleted_7105410E46F0B5CB2D26A69A0945794B
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoFaceplate_C::OnCompleted_7105410E46F0B5CB2D26A69A0945794B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "OnCompleted_7105410E46F0B5CB2D26A69A0945794B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.OnBlendOut_7105410E46F0B5CB2D26A69A0945794B
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoFaceplate_C::OnBlendOut_7105410E46F0B5CB2D26A69A0945794B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "OnBlendOut_7105410E46F0B5CB2D26A69A0945794B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.OnInterrupted_7105410E46F0B5CB2D26A69A0945794B
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoFaceplate_C::OnInterrupted_7105410E46F0B5CB2D26A69A0945794B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "OnInterrupted_7105410E46F0B5CB2D26A69A0945794B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.OnCancelled_7105410E46F0B5CB2D26A69A0945794B
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoFaceplate_C::OnCancelled_7105410E46F0B5CB2D26A69A0945794B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "OnCancelled_7105410E46F0B5CB2D26A69A0945794B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteExoFaceplate.AB_EliteExoFaceplate_C.OnSkipped_7105410E46F0B5CB2D26A69A0945794B
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteExoFaceplate_C::OnSkipped_7105410E46F0B5CB2D26A69A0945794B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteExoFaceplate_C", "OnSkipped_7105410E46F0B5CB2D26A69A0945794B");

	UObject::ProcessEvent(Func, nullptr);
}

}

