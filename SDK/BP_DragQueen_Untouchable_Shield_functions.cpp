#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DragQueen_Untouchable_Shield

#include "Basic.hpp"

#include "BP_DragQueen_Untouchable_Shield_classes.hpp"
#include "BP_DragQueen_Untouchable_Shield_parameters.hpp"


namespace SDK
{

// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ExecuteUbergraph_BP_DragQueen_Untouchable_Shield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DragQueen_Untouchable_Shield_C::ExecuteUbergraph_BP_DragQueen_Untouchable_Shield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "ExecuteUbergraph_BP_DragQueen_Untouchable_Shield");

	Params::BP_DragQueen_Untouchable_Shield_C_ExecuteUbergraph_BP_DragQueen_Untouchable_Shield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DragQueen_Untouchable_Shield_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "ReceiveTick");

	Params::BP_DragQueen_Untouchable_Shield_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DragQueen_Untouchable_Shield_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "ReceiveEndPlay");

	Params::BP_DragQueen_Untouchable_Shield_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.Hit Recieved
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCADamageEffectInfo              Damage_effect_info                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DragQueen_Untouchable_Shield_C::Hit_Recieved(const struct FCADamageEffectInfo& Damage_effect_info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "Hit Recieved");

	Params::BP_DragQueen_Untouchable_Shield_C_Hit_Recieved Parms{};

	Parms.Damage_effect_info = std::move(Damage_effect_info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DragQueen_Untouchable_Shield_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "ReceiveActorBeginOverlap");

	Params::BP_DragQueen_Untouchable_Shield_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.OnFinish_6CDE9FE541C347ABBD0C47A44B168B04
// (BlueprintCallable, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::OnFinish_6CDE9FE541C347ABBD0C47A44B168B04()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "OnFinish_6CDE9FE541C347ABBD0C47A44B168B04");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.OnFinish_E072D22F4AE53D9FEE1C7D93CC036599
// (BlueprintCallable, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::OnFinish_E072D22F4AE53D9FEE1C7D93CC036599()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "OnFinish_E072D22F4AE53D9FEE1C7D93CC036599");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.Disable Projectile Explosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DragQueen_Untouchable_Shield_C::Disable_Projectile_Explosion(class AActor* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "Disable Projectile Explosion");

	Params::BP_DragQueen_Untouchable_Shield_C_Disable_Projectile_Explosion Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.AdjustShieldSizeAndPositionBasedOnActorPenetration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::AdjustShieldSizeAndPositionBasedOnActorPenetration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "AdjustShieldSizeAndPositionBasedOnActorPenetration");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.SetBalancingData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::SetBalancingData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "SetBalancingData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DragQueen_Untouchable_Shield.BP_DragQueen_Untouchable_Shield_C.SetupCapsule
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_DragQueen_Untouchable_Shield_C::SetupCapsule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DragQueen_Untouchable_Shield_C", "SetupCapsule");

	UObject::ProcessEvent(Func, nullptr);
}

}
