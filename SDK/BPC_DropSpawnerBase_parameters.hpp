#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_DropSpawnerBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Keaton_structs.hpp"
#include "Struct_NPCLootTableStructure_structs.hpp"


namespace SDK::Params
{

// Function BPC_DropSpawnerBase.BPC_DropSpawnerBase_C.CalculateTotalSpawnChance
// 0x0030 (0x0030 - 0x0000)
struct BPC_DropSpawnerBase_C_CalculateTotalSpawnChance final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_Map_Values_Values;                        // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance) == 0x000008, "Wrong alignment on BPC_DropSpawnerBase_C_CalculateTotalSpawnChance");
static_assert(sizeof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance) == 0x000030, "Wrong size on BPC_DropSpawnerBase_C_CalculateTotalSpawnChance");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Map_Values_Values) == 0x000010, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Array_Get_Item) == 0x000024, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_CalculateTotalSpawnChance, CallFunc_Add_FloatFloat_ReturnValue) == 0x00002C, "Member 'BPC_DropSpawnerBase_C_CalculateTotalSpawnChance::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BPC_DropSpawnerBase.BPC_DropSpawnerBase_C.RollForLoot
// 0x00A0 (0x00A0 - 0x0000)
struct BPC_DropSpawnerBase_C_RollForLoot final
{
public:
	TSoftObjectPtr<class UCAInventoryItem>        ChosenLoot;                                        // 0x0000(0x0030)(Parm, OutParm, HasGetValueTypeHash)
	float                                         RandomValue;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UCAInventoryItem>> CallFunc_Map_Keys_Keys;                            // 0x0040(0x0010)(ReferenceParm)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UCAInventoryItem>        CallFunc_Array_Get_Item;                           // 0x0058(0x0030)(HasGetValueTypeHash)
	float                                         CallFunc_Map_Find_Value;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_DropSpawnerBase_C_RollForLoot) == 0x000008, "Wrong alignment on BPC_DropSpawnerBase_C_RollForLoot");
static_assert(sizeof(BPC_DropSpawnerBase_C_RollForLoot) == 0x0000A0, "Wrong size on BPC_DropSpawnerBase_C_RollForLoot");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, ChosenLoot) == 0x000000, "Member 'BPC_DropSpawnerBase_C_RollForLoot::ChosenLoot' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, RandomValue) == 0x000030, "Member 'BPC_DropSpawnerBase_C_RollForLoot::RandomValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, Temp_int_Array_Index_Variable) == 0x000034, "Member 'BPC_DropSpawnerBase_C_RollForLoot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BPC_DropSpawnerBase_C_RollForLoot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Map_Keys_Keys) == 0x000040, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_RandomFloatInRange_ReturnValue) == 0x000050, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Array_Get_Item) == 0x000058, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Map_Find_Value) == 0x000088, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Map_Find_ReturnValue) == 0x00008C, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000090, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000094, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_RollForLoot, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'BPC_DropSpawnerBase_C_RollForLoot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BPC_DropSpawnerBase.BPC_DropSpawnerBase_C.Create Loot Map
// 0x0060 (0x0060 - 0x0000)
struct BPC_DropSpawnerBase_C_Create_Loot_Map final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_NPCLootTableStructure          CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPC_DropSpawnerBase_C_Create_Loot_Map) == 0x000008, "Wrong alignment on BPC_DropSpawnerBase_C_Create_Loot_Map");
static_assert(sizeof(BPC_DropSpawnerBase_C_Create_Loot_Map) == 0x000060, "Wrong size on BPC_DropSpawnerBase_C_Create_Loot_Map");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_Array_Get_Item) == 0x00000C, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000058, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Create_Loot_Map, CallFunc_Less_IntInt_ReturnValue) == 0x000059, "Member 'BPC_DropSpawnerBase_C_Create_Loot_Map::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BPC_DropSpawnerBase.BPC_DropSpawnerBase_C.Drop Item
// 0x01C0 (0x01C0 - 0x0000)
struct BPC_DropSpawnerBase_C_Drop_Item final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Angle_between_directions;                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Upwards_Inclination;                               // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Throw_Cone_Max_Half_Angle;                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Throw_Velocity;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Throw;                                             // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseRightVector;                                    // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACAPickUp*>                      ItemSpawned;                                       // 0x0028(0x0010)(Parm, OutParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAPickupThrowDirectionCalculationData K2Node_MakeStruct_CAPickupThrowDirectionCalculationData; // 0x0060(0x0028)(NoDestructor)
	TArray<struct FVector>                        CallFunc_GetThrowDirectionsForLootBoxes_ReturnValue; // 0x0088(0x0010)(ReferenceParm)
	TSoftObjectPtr<class UCAInventoryItem>        CallFunc_RollForLoot_ChosenLoot;                   // 0x0098(0x0030)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_RandomFromStream_OutItem;           // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_RandomFromStream_OutIndex;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCAInventoryItem*                       K2Node_DynamicCast_AsCAInventory_Item;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCAPickupSpawnData                     K2Node_MakeStruct_CAPickupSpawnData;               // 0x0100(0x0090)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACAPickUp*                              CallFunc_SpawnPickup_ReturnValue;                  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x01B0(0x0010)(ReferenceParm)
};
static_assert(alignof(BPC_DropSpawnerBase_C_Drop_Item) == 0x000010, "Wrong alignment on BPC_DropSpawnerBase_C_Drop_Item");
static_assert(sizeof(BPC_DropSpawnerBase_C_Drop_Item) == 0x0001C0, "Wrong size on BPC_DropSpawnerBase_C_Drop_Item");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Amount) == 0x000000, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Amount' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Angle_between_directions) == 0x000004, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Angle_between_directions' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Upwards_Inclination) == 0x000008, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Upwards_Inclination' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Throw_Cone_Max_Half_Angle) == 0x00000C, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Throw_Cone_Max_Half_Angle' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Throw_Velocity) == 0x000010, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Throw_Velocity' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Offset) == 0x000014, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Offset' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Throw) == 0x000020, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Throw' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, UseRightVector) == 0x000021, "Member 'BPC_DropSpawnerBase_C_Drop_Item::UseRightVector' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, ItemSpawned) == 0x000028, "Member 'BPC_DropSpawnerBase_C_Drop_Item::ItemSpawned' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, Temp_int_Variable) == 0x00003C, "Member 'BPC_DropSpawnerBase_C_Drop_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_GetOwner_ReturnValue_1) == 0x000050, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_IsValidClass_ReturnValue) == 0x000058, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, K2Node_MakeStruct_CAPickupThrowDirectionCalculationData) == 0x000060, "Member 'BPC_DropSpawnerBase_C_Drop_Item::K2Node_MakeStruct_CAPickupThrowDirectionCalculationData' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_GetThrowDirectionsForLootBoxes_ReturnValue) == 0x000088, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_GetThrowDirectionsForLootBoxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_RollForLoot_ChosenLoot) == 0x000098, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_RollForLoot_ChosenLoot' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Array_RandomFromStream_OutItem) == 0x0000C8, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Array_RandomFromStream_OutItem' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Array_RandomFromStream_OutIndex) == 0x0000D4, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Array_RandomFromStream_OutIndex' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000D8, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000E0, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, K2Node_DynamicCast_AsCAInventory_Item) == 0x0000F0, "Member 'BPC_DropSpawnerBase_C_Drop_Item::K2Node_DynamicCast_AsCAInventory_Item' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'BPC_DropSpawnerBase_C_Drop_Item::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, K2Node_MakeStruct_CAPickupSpawnData) == 0x000100, "Member 'BPC_DropSpawnerBase_C_Drop_Item::K2Node_MakeStruct_CAPickupSpawnData' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_SpawnPickup_ReturnValue) == 0x000198, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_SpawnPickup_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_BooleanAND_ReturnValue) == 0x0001A0, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_Array_AddUnique_ReturnValue) == 0x0001A4, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_IsValid_ReturnValue_1) == 0x0001A8, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPC_DropSpawnerBase_C_Drop_Item, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0001B0, "Member 'BPC_DropSpawnerBase_C_Drop_Item::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

}

