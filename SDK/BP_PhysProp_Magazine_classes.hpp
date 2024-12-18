#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhysProp_Magazine

#include "Basic.hpp"

#include "BP_PhysicsProp_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PhysProp_Magazine.BP_PhysProp_Magazine_C
// 0x0008 (0x0290 - 0x0288)
class ABP_PhysProp_Magazine_C final : public ABP_PhysicsProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PhysProp_Magazine_C;             // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PhysProp_Magazine(int32 EntryPoint);
	void CopyMaterialsFromParent(class USkeletalMeshComponent* Parent);
	void UserConstructionScript();
	void GetMaterialIndexFromParent(class USkeletalMeshComponent* Parent, class FName Child_Slot_Name, int32* Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PhysProp_Magazine_C">();
	}
	static class ABP_PhysProp_Magazine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PhysProp_Magazine_C>();
	}
};
static_assert(alignof(ABP_PhysProp_Magazine_C) == 0x000008, "Wrong alignment on ABP_PhysProp_Magazine_C");
static_assert(sizeof(ABP_PhysProp_Magazine_C) == 0x000290, "Wrong size on ABP_PhysProp_Magazine_C");
static_assert(offsetof(ABP_PhysProp_Magazine_C, UberGraphFrame_BP_PhysProp_Magazine_C) == 0x000288, "Member 'ABP_PhysProp_Magazine_C::UberGraphFrame_BP_PhysProp_Magazine_C' has a wrong offset!");

}

