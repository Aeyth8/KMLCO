#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MuzzleEffect_Grunt

#include "Basic.hpp"

#include "BP_MuzzleEffect_Grunt_classes.hpp"
#include "BP_MuzzleEffect_Grunt_parameters.hpp"


namespace SDK
{

// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.ExecuteUbergraph_BP_MuzzleEffect_Grunt
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MuzzleEffect_Grunt_C::ExecuteUbergraph_BP_MuzzleEffect_Grunt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "ExecuteUbergraph_BP_MuzzleEffect_Grunt");

	Params::BP_MuzzleEffect_Grunt_C_ExecuteUbergraph_BP_MuzzleEffect_Grunt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnFire
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnEquip
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnReload
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnReload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnReload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnIdle
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnSecondaryAction
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnSecondaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnSecondaryAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MuzzleEffect_Grunt.BP_MuzzleEffect_Grunt_C.OnPrimaryAction
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MuzzleEffect_Grunt_C::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MuzzleEffect_Grunt_C", "OnPrimaryAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

