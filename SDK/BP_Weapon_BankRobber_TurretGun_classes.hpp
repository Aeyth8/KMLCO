#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_BankRobber_TurretGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Weapon_Instant_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Weapon_BankRobber_TurretGun.BP_Weapon_BankRobber_TurretGun_C
// 0x0020 (0x1220 - 0x1200)
class ABP_Weapon_BankRobber_TurretGun_C final : public ABP_Weapon_Instant_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Weapon_BankRobber_TurretGun_C;   // 0x1200(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCALaserSightComponent*                 CALaserSight;                                      // 0x1208(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         UpgradeLevel;                                      // 0x1210(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1214[0x4];                                     // 0x1214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           DeployMontage;                                     // 0x1218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Weapon_BankRobber_TurretGun(int32 EntryPoint);
	void PlayDeployMontage();
	void ReceiveBeginPlay();
	void OnCompleted_424CCC3345C7FF2E8B5AA8A676EF0B09(class FName NotifyName);
	void OnBlendOut_424CCC3345C7FF2E8B5AA8A676EF0B09(class FName NotifyName);
	void OnInterrupted_424CCC3345C7FF2E8B5AA8A676EF0B09(class FName NotifyName);
	void OnNotifyBegin_424CCC3345C7FF2E8B5AA8A676EF0B09(class FName NotifyName);
	void OnNotifyEnd_424CCC3345C7FF2E8B5AA8A676EF0B09(class FName NotifyName);
	void OnCompleted_D55A74FF4CD502059906438B64C3F4F4(class FName NotifyName);
	void OnBlendOut_D55A74FF4CD502059906438B64C3F4F4(class FName NotifyName);
	void OnInterrupted_D55A74FF4CD502059906438B64C3F4F4(class FName NotifyName);
	void OnNotifyBegin_D55A74FF4CD502059906438B64C3F4F4(class FName NotifyName);
	void OnNotifyEnd_D55A74FF4CD502059906438B64C3F4F4(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Weapon_BankRobber_TurretGun_C">();
	}
	static class ABP_Weapon_BankRobber_TurretGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Weapon_BankRobber_TurretGun_C>();
	}
};
static_assert(alignof(ABP_Weapon_BankRobber_TurretGun_C) == 0x000008, "Wrong alignment on ABP_Weapon_BankRobber_TurretGun_C");
static_assert(sizeof(ABP_Weapon_BankRobber_TurretGun_C) == 0x001220, "Wrong size on ABP_Weapon_BankRobber_TurretGun_C");
static_assert(offsetof(ABP_Weapon_BankRobber_TurretGun_C, UberGraphFrame_BP_Weapon_BankRobber_TurretGun_C) == 0x001200, "Member 'ABP_Weapon_BankRobber_TurretGun_C::UberGraphFrame_BP_Weapon_BankRobber_TurretGun_C' has a wrong offset!");
static_assert(offsetof(ABP_Weapon_BankRobber_TurretGun_C, CALaserSight) == 0x001208, "Member 'ABP_Weapon_BankRobber_TurretGun_C::CALaserSight' has a wrong offset!");
static_assert(offsetof(ABP_Weapon_BankRobber_TurretGun_C, UpgradeLevel) == 0x001210, "Member 'ABP_Weapon_BankRobber_TurretGun_C::UpgradeLevel' has a wrong offset!");
static_assert(offsetof(ABP_Weapon_BankRobber_TurretGun_C, DeployMontage) == 0x001218, "Member 'ABP_Weapon_BankRobber_TurretGun_C::DeployMontage' has a wrong offset!");

}
