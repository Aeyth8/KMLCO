#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_HeroLootPreConversionSpin

#include "Basic.hpp"

#include "LS_HeroLootPreConversionSpin_classes.hpp"
#include "LS_HeroLootPreConversionSpin_parameters.hpp"


namespace SDK
{

// Function LS_HeroLootPreConversionSpin.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*                 SM_HeroMerch_Sonic_Loot_01                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_HeroLootPreConversionSpin::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AStaticMeshActor* SM_HeroMerch_Sonic_Loot_01)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.SM_HeroMerch_Sonic_Loot_01 = SM_HeroMerch_Sonic_Loot_01;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_HeroLootPreConversionSpin.SequenceDirector_C.Load all mips into the memory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStaticMeshActor*                 SM_HeroMerch_Sonic_Loot_01                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_HeroLootPreConversionSpin::USequenceDirector_C::Load_all_mips_into_the_memory(class AStaticMeshActor* SM_HeroMerch_Sonic_Loot_01)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "Load all mips into the memory");

	Params::SequenceDirector_C_Load_all_mips_into_the_memory Parms{};

	Parms.SM_HeroMerch_Sonic_Loot_01 = SM_HeroMerch_Sonic_Loot_01;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_HeroLootPreConversionSpin.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_HeroLootPreConversionSpin::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

