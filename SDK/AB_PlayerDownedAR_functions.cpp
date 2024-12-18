#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_PlayerDownedAR

#include "Basic.hpp"

#include "AB_PlayerDownedAR_classes.hpp"
#include "AB_PlayerDownedAR_parameters.hpp"


namespace SDK
{

// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.ExecuteUbergraph_AB_PlayerDownedAR
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerDownedAR_C::ExecuteUbergraph_AB_PlayerDownedAR(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "ExecuteUbergraph_AB_PlayerDownedAR");

	Params::AB_PlayerDownedAR_C_ExecuteUbergraph_AB_PlayerDownedAR Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.Server Set Downed Hit Information
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::Server_Set_Downed_Hit_Information()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "Server Set Downed Hit Information");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAB_PlayerDownedAR_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_PlayerDownedAR_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "K2_OnEndAbility");

	Params::AB_PlayerDownedAR_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.ProcessRecoveryTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     DownedTransitionMontage                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     RecoveryTransitionMontage                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerDownedAR_C::ProcessRecoveryTransition(class UAnimMontage* DownedTransitionMontage, class UAnimMontage* RecoveryTransitionMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "ProcessRecoveryTransition");

	Params::AB_PlayerDownedAR_C_ProcessRecoveryTransition Parms{};

	Parms.DownedTransitionMontage = DownedTransitionMontage;
	Parms.RecoveryTransitionMontage = RecoveryTransitionMontage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.ProcessDownedTransition
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::ProcessDownedTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "ProcessDownedTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.Client Set Downed Hit Information
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::Client_Set_Downed_Hit_Information()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "Client Set Downed Hit Information");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnStopped_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnStopped_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnStopped_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnCompleted_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnCompleted_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnCompleted_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnBlendOut_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnBlendOut_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnBlendOut_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnInterrupted_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnInterrupted_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnInterrupted_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnCancelled_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnCancelled_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnCancelled_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnSkipped_18EB3FCB4B64EAC2A94E479475C9A1D6
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnSkipped_18EB3FCB4B64EAC2A94E479475C9A1D6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnSkipped_18EB3FCB4B64EAC2A94E479475C9A1D6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnFinish_E2FD291E45685D6F12BFB0A5FC4CED02
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnFinish_E2FD291E45685D6F12BFB0A5FC4CED02()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnFinish_E2FD291E45685D6F12BFB0A5FC4CED02");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnFinish_8C63E55249B08797D94C9BAFECD57818
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnFinish_8C63E55249B08797D94C9BAFECD57818()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnFinish_8C63E55249B08797D94C9BAFECD57818");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnCompleted_06341AF040F7C2790230998B7F001725
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnCompleted_06341AF040F7C2790230998B7F001725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnCompleted_06341AF040F7C2790230998B7F001725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnBlendOut_06341AF040F7C2790230998B7F001725
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnBlendOut_06341AF040F7C2790230998B7F001725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnBlendOut_06341AF040F7C2790230998B7F001725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnInterrupted_06341AF040F7C2790230998B7F001725
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnInterrupted_06341AF040F7C2790230998B7F001725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnInterrupted_06341AF040F7C2790230998B7F001725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnCancelled_06341AF040F7C2790230998B7F001725
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnCancelled_06341AF040F7C2790230998B7F001725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnCancelled_06341AF040F7C2790230998B7F001725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnSkipped_06341AF040F7C2790230998B7F001725
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnSkipped_06341AF040F7C2790230998B7F001725()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnSkipped_06341AF040F7C2790230998B7F001725");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.OnSync_EF68CDDA471F01D59058E78269F66E6C
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerDownedAR_C::OnSync_EF68CDDA471F01D59058E78269F66E6C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "OnSync_EF68CDDA471F01D59058E78269F66E6C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.GetSkillfulKillsDeathAndRecoveryAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     DownedMontage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     RecoveryMontage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerDownedAR_C::GetSkillfulKillsDeathAndRecoveryAnim(class UAnimMontage** DownedMontage, class UAnimMontage** RecoveryMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "GetSkillfulKillsDeathAndRecoveryAnim");

	Params::AB_PlayerDownedAR_C_GetSkillfulKillsDeathAndRecoveryAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DownedMontage != nullptr)
		*DownedMontage = Parms.DownedMontage;

	if (RecoveryMontage != nullptr)
		*RecoveryMontage = Parms.RecoveryMontage;
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.Check Client Downing Hit Valid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hit_Valid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAB_PlayerDownedAR_C::Check_Client_Downing_Hit_Valid(bool* Hit_Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "Check Client Downing Hit Valid");

	Params::AB_PlayerDownedAR_C_Check_Client_Downing_Hit_Valid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hit_Valid != nullptr)
		*Hit_Valid = Parms.Hit_Valid;
}


// Function AB_PlayerDownedAR.AB_PlayerDownedAR_C.DetermineSkillfulTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Skillful_Tag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerDownedAR_C::DetermineSkillfulTag(struct FGameplayTag* Skillful_Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerDownedAR_C", "DetermineSkillfulTag");

	Params::AB_PlayerDownedAR_C_DetermineSkillfulTag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skillful_Tag != nullptr)
		*Skillful_Tag = std::move(Parms.Skillful_Tag);
}

}

