#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SZeroGScreenEffect

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SZeroGScreenEffect.SZeroGScreenEffect
// 0x0010 (0x0010 - 0x0000)
struct FSZeroGScreenEffect final
{
public:
	bool                                          IsActive_1_979A8A374D589CEDFD286681FCCA9138;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               ParticleSystem_5_DA9190B04B4201C96B4FD29B5D9A50B8; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSZeroGScreenEffect) == 0x000008, "Wrong alignment on FSZeroGScreenEffect");
static_assert(sizeof(FSZeroGScreenEffect) == 0x000010, "Wrong size on FSZeroGScreenEffect");
static_assert(offsetof(FSZeroGScreenEffect, IsActive_1_979A8A374D589CEDFD286681FCCA9138) == 0x000000, "Member 'FSZeroGScreenEffect::IsActive_1_979A8A374D589CEDFD286681FCCA9138' has a wrong offset!");
static_assert(offsetof(FSZeroGScreenEffect, ParticleSystem_5_DA9190B04B4201C96B4FD29B5D9A50B8) == 0x000008, "Member 'FSZeroGScreenEffect::ParticleSystem_5_DA9190B04B4201C96B4FD29B5D9A50B8' has a wrong offset!");

}
