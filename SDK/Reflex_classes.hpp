#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reflex

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Reflex_structs.hpp"


namespace SDK
{

// Class Reflex.ReflexBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UReflexBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool GetFlashIndicatorEnabled();
	static float GetGameLatencyInMs();
	static float GetGameToRenderLatencyInMs();
	static bool GetReflexAvailable();
	static EReflexMode GetReflexMode();
	static float GetRenderLatencyInMs();
	static void SetFlashIndicatorEnabled(const bool bEnabled);
	static void SetReflexMode(const EReflexMode Mode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReflexBlueprintLibrary">();
	}
	static class UReflexBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReflexBlueprintLibrary>();
	}
};
static_assert(alignof(UReflexBlueprintLibrary) == 0x000008, "Wrong alignment on UReflexBlueprintLibrary");
static_assert(sizeof(UReflexBlueprintLibrary) == 0x000030, "Wrong size on UReflexBlueprintLibrary");

}
