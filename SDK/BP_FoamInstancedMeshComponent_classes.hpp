#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FoamInstancedMeshComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Keaton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FoamInstancedMeshComponent.BP_FoamInstancedMeshComponent_C
// 0x0010 (0x08B0 - 0x08A0)
class UBP_FoamInstancedMeshComponent_C final : public UCAFoamInstancedMeshComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 Destroying;                                        // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FoamInstancedMeshComponent(int32 EntryPoint);
	void OnFoamForming(const struct FVector& Location);
	void OnFoamDestroyed(const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FoamInstancedMeshComponent_C">();
	}
	static class UBP_FoamInstancedMeshComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FoamInstancedMeshComponent_C>();
	}
};
static_assert(alignof(UBP_FoamInstancedMeshComponent_C) == 0x000010, "Wrong alignment on UBP_FoamInstancedMeshComponent_C");
static_assert(sizeof(UBP_FoamInstancedMeshComponent_C) == 0x0008B0, "Wrong size on UBP_FoamInstancedMeshComponent_C");
static_assert(offsetof(UBP_FoamInstancedMeshComponent_C, UberGraphFrame) == 0x0008A0, "Member 'UBP_FoamInstancedMeshComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FoamInstancedMeshComponent_C, Destroying) == 0x0008A8, "Member 'UBP_FoamInstancedMeshComponent_C::Destroying' has a wrong offset!");

}
