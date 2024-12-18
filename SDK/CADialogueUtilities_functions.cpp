#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CADialogueUtilities

#include "Basic.hpp"

#include "CADialogueUtilities_classes.hpp"
#include "CADialogueUtilities_parameters.hpp"


namespace SDK
{

// Function CADialogueUtilities.CADialogueUtilities_C.PlayerDialogueTrigger
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter_MainPlayer*          Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TriggerName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::PlayerDialogueTrigger(class ACACharacter_MainPlayer* Player, class FName TriggerName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "PlayerDialogueTrigger");

	Params::CADialogueUtilities_C_PlayerDialogueTrigger Parms{};

	Parms.Player = Player;
	Parms.TriggerName = TriggerName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Dialogue On Rival Gadget Destroy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Killing_Instigator                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCATeamID                        GadgetTeamID                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAbilityDestroyed_                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    AlwaysPlayAbilityDestroyed_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             AbilityDestroyedTriggerName                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Dialogue_On_Rival_Gadget_Destroy(class AActor* Killing_Instigator, const struct FCATeamID& GadgetTeamID, class AActor* Owner, bool PlayAbilityDestroyed_, bool AlwaysPlayAbilityDestroyed_, class FName AbilityDestroyedTriggerName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Dialogue On Rival Gadget Destroy");

	Params::CADialogueUtilities_C_Dialogue_On_Rival_Gadget_Destroy Parms{};

	Parms.Killing_Instigator = Killing_Instigator;
	Parms.GadgetTeamID = std::move(GadgetTeamID);
	Parms.Owner = Owner;
	Parms.PlayAbilityDestroyed_ = PlayAbilityDestroyed_;
	Parms.AlwaysPlayAbilityDestroyed_ = AlwaysPlayAbilityDestroyed_;
	Parms.AbilityDestroyedTriggerName = AbilityDestroyedTriggerName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.DialoguePlayEffortVocalisation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter_MainPlayer*          Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCAAudioSwitchValueType          GeneralVox                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   Cooldown                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreCurrentCooldown                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::DialoguePlayEffortVocalisation(class ACACharacter_MainPlayer* Player, const struct FCAAudioSwitchValueType& GeneralVox, float Cooldown, bool IgnoreCurrentCooldown, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "DialoguePlayEffortVocalisation");

	Params::CADialogueUtilities_C_DialoguePlayEffortVocalisation Parms{};

	Parms.Player = Player;
	Parms.GeneralVox = std::move(GeneralVox);
	Parms.Cooldown = Cooldown;
	Parms.IgnoreCurrentCooldown = IgnoreCurrentCooldown;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Play Downed Dialogue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACACharacter_MainPlayer*          Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Play_Downed_Dialogue(class ACACharacter_MainPlayer* Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Play Downed Dialogue");

	Params::CADialogueUtilities_C_Play_Downed_Dialogue Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player Throw Grenade Dialogue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TriggerName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Check_Can_Affect_Allies                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_Throw_Grenade_Dialogue(class AActor* Player, class FName TriggerName, bool Check_Can_Affect_Allies, int32 Level, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player Throw Grenade Dialogue");

	Params::CADialogueUtilities_C_Player_Throw_Grenade_Dialogue Parms{};

	Parms.Player = Player;
	Parms.TriggerName = TriggerName;
	Parms.Check_Can_Affect_Allies = Check_Can_Affect_Allies;
	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player Taken Damage Vocalisation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNetworkedHit                    Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           Hit_Actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_Taken_Damage_Vocalisation(const struct FNetworkedHit& Hit, class AActor* Hit_Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player Taken Damage Vocalisation");

	Params::CADialogueUtilities_C_Player_Taken_Damage_Vocalisation Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Hit_Actor = Hit_Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player Taken Damage DelayedFPVox
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNetworkedHit                    Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           Hit_Actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_Taken_Damage_DelayedFPVox(const struct FNetworkedHit& Hit, class AActor* Hit_Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player Taken Damage DelayedFPVox");

	Params::CADialogueUtilities_C_Player_Taken_Damage_DelayedFPVox Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Hit_Actor = Hit_Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player Taken Damage Curses
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNetworkedHit                    Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           Hit_Actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_Taken_Damage_Curses(const struct FNetworkedHit& Hit, class AActor* Hit_Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player Taken Damage Curses");

	Params::CADialogueUtilities_C_Player_Taken_Damage_Curses Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Hit_Actor = Hit_Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player Ammo Low Dialogue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_Ammo_Low_Dialogue(class AActor* Owner, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player Ammo Low Dialogue");

	Params::CADialogueUtilities_C_Player_Ammo_Low_Dialogue Parms{};

	Parms.Owner = Owner;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player onDownedTarget Dialogue
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACACharacter_MainPlayer*          DownedPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_onDownedTarget_Dialogue(class AActor* Instigator, class ACACharacter_MainPlayer* DownedPlayer, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player onDownedTarget Dialogue");

	Params::CADialogueUtilities_C_Player_onDownedTarget_Dialogue Parms{};

	Parms.Instigator = Instigator;
	Parms.DownedPlayer = DownedPlayer;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CADialogueUtilities.CADialogueUtilities_C.Player RivalHitReceived Dialogue
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Cooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCADialogueUtilities_C::Player_RivalHitReceived_Dialogue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext, float* Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CADialogueUtilities_C", "Player RivalHitReceived Dialogue");

	Params::CADialogueUtilities_C_Player_RivalHitReceived_Dialogue Parms{};

	Parms.Actor = Actor;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Cooldown != nullptr)
		*Cooldown = Parms.Cooldown;
}

}

