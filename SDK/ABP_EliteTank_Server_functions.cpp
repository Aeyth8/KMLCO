#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EliteTank_Server

#include "Basic.hpp"

#include "ABP_EliteTank_Server_classes.hpp"
#include "ABP_EliteTank_Server_parameters.hpp"


namespace SDK
{

// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_EliteTank_Server_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "AnimGraph");

	Params::ABP_EliteTank_Server_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_CF3F8ED746DCF1AFCD93A5B579FC72B1
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_CF3F8ED746DCF1AFCD93A5B579FC72B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_CF3F8ED746DCF1AFCD93A5B579FC72B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_BF401AC043E3F6622570BF9D83893DFE
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_BF401AC043E3F6622570BF9D83893DFE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_BF401AC043E3F6622570BF9D83893DFE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_1FAB655147BBED116C99D290207D1651
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_1FAB655147BBED116C99D290207D1651()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_1FAB655147BBED116C99D290207D1651");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_3A0D19154EE3101AAA0C42ABA6A10DE1
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_3A0D19154EE3101AAA0C42ABA6A10DE1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_3A0D19154EE3101AAA0C42ABA6A10DE1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "BlueprintUpdateAnimation");

	Params::ABP_EliteTank_Server_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_EliteTank_Server_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.OnDeath
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec              Death_gameplay_effect_spec                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   Damage_magnitude                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNetworkedHit                    Networked_hit                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class AActor*                           Killer                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::OnDeath(class ACACharacter* Character, const struct FGameplayEffectSpec& Death_gameplay_effect_spec, float Damage_magnitude, const struct FNetworkedHit& Networked_hit, const class AActor* Killer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "OnDeath");

	Params::ABP_EliteTank_Server_C_OnDeath Parms{};

	Parms.Character = Character;
	Parms.Death_gameplay_effect_spec = std::move(Death_gameplay_effect_spec);
	Parms.Damage_magnitude = Damage_magnitude;
	Parms.Networked_hit = std::move(Networked_hit);
	Parms.Killer = Killer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_EliteTank_Server_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.OnPoolStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_in_pool                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_EliteTank_Server_C::OnPoolStateChanged(bool Is_in_pool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "OnPoolStateChanged");

	Params::ABP_EliteTank_Server_C_OnPoolStateChanged Parms{};

	Parms.Is_in_pool = Is_in_pool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.OnBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "OnBeginOverlap");

	Params::ABP_EliteTank_Server_C_OnBeginOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.OnEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OverlappedActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "OnEndOverlap");

	Params::ABP_EliteTank_Server_C_OnEndOverlap Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.OnMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "OnMovementModeChanged");

	Params::ABP_EliteTank_Server_C_OnMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_44892742419A8806ABB3B19CC03BCF5F
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_44892742419A8806ABB3B19CC03BCF5F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_44892742419A8806ABB3B19CC03BCF5F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_6BB8B2EA4BB700446FB159911AE7500D
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_6BB8B2EA4BB700446FB159911AE7500D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_6BB8B2EA4BB700446FB159911AE7500D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)

void UABP_EliteTank_Server_C::BlueprintPostEvaluateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "BlueprintPostEvaluateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_C483F79348AE2B743A72ED948455A5DF
// (BlueprintEvent)

void UABP_EliteTank_Server_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_C483F79348AE2B743A72ED948455A5DF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EliteTank_Server_AnimGraphNode_TransitionResult_C483F79348AE2B743A72ED948455A5DF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EliteTank_Server.ABP_EliteTank_Server_C.ExecuteUbergraph_ABP_EliteTank_Server
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EliteTank_Server_C::ExecuteUbergraph_ABP_EliteTank_Server(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EliteTank_Server_C", "ExecuteUbergraph_ABP_EliteTank_Server");

	Params::ABP_EliteTank_Server_C_ExecuteUbergraph_ABP_EliteTank_Server Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

