#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_EliteTank_Stun_ShieldLost

#include "Basic.hpp"

#include "AB_EliteTank_Stun_ShieldLost_classes.hpp"
#include "AB_EliteTank_Stun_ShieldLost_parameters.hpp"


namespace SDK
{

// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.ExecuteUbergraph_AB_EliteTank_Stun_ShieldLost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_EliteTank_Stun_ShieldLost_C::ExecuteUbergraph_AB_EliteTank_Stun_ShieldLost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "ExecuteUbergraph_AB_EliteTank_Stun_ShieldLost");

	Params::AB_EliteTank_Stun_ShieldLost_C_ExecuteUbergraph_AB_EliteTank_Stun_ShieldLost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_EliteTank_Stun_ShieldLost_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "K2_OnEndAbility");

	Params::AB_EliteTank_Stun_ShieldLost_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.OnCompleted_769ED323480281A018A3DD8EE08440C7
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::OnCompleted_769ED323480281A018A3DD8EE08440C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "OnCompleted_769ED323480281A018A3DD8EE08440C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.OnBlendOut_769ED323480281A018A3DD8EE08440C7
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::OnBlendOut_769ED323480281A018A3DD8EE08440C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "OnBlendOut_769ED323480281A018A3DD8EE08440C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.OnInterrupted_769ED323480281A018A3DD8EE08440C7
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::OnInterrupted_769ED323480281A018A3DD8EE08440C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "OnInterrupted_769ED323480281A018A3DD8EE08440C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.OnCancelled_769ED323480281A018A3DD8EE08440C7
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::OnCancelled_769ED323480281A018A3DD8EE08440C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "OnCancelled_769ED323480281A018A3DD8EE08440C7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_EliteTank_Stun_ShieldLost.AB_EliteTank_Stun_ShieldLost_C.OnSkipped_769ED323480281A018A3DD8EE08440C7
// (BlueprintCallable, BlueprintEvent)

void UAB_EliteTank_Stun_ShieldLost_C::OnSkipped_769ED323480281A018A3DD8EE08440C7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EliteTank_Stun_ShieldLost_C", "OnSkipped_769ED323480281A018A3DD8EE08440C7");

	UObject::ProcessEvent(Func, nullptr);
}

}

