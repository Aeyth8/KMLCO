#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_UnstableReaction_Explosion

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_UnstableReaction_Explosion.GC_UnstableReaction_Explosion_C
// 0x0000 (0x0050 - 0x0050)
class UGC_UnstableReaction_Explosion_C final : public UGameplayCueNotify_Static
{
public:
	void GetRadius(bool IsPlayer, bool IsEliteNPC, float PlayerRadius, float EliteNPCRadius, float GeneralNPCRadius, float* Radius);

	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_UnstableReaction_Explosion_C">();
	}
	static class UGC_UnstableReaction_Explosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_UnstableReaction_Explosion_C>();
	}
};
static_assert(alignof(UGC_UnstableReaction_Explosion_C) == 0x000008, "Wrong alignment on UGC_UnstableReaction_Explosion_C");
static_assert(sizeof(UGC_UnstableReaction_Explosion_C) == 0x000050, "Wrong size on UGC_UnstableReaction_Explosion_C");

}
