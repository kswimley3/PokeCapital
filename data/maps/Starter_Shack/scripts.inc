# 1 "data/maps/Starter_Shack/scripts.pory"

# 2 "data/maps/Starter_Shack/scripts.pory"
Starter_Shack_MapScripts::
# 3 "data/maps/Starter_Shack/scripts.pory"
	.byte 0

Starter_Shack_ForcePokePickup::
# 7 "data/maps/Starter_Shack/scripts.pory"
	lockall
# 8 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_ForcePokePickup_Text_0
# 9 "data/maps/Starter_Shack/scripts.pory"
	waitmessage
# 10 "data/maps/Starter_Shack/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_StarterPickup
# 11 "data/maps/Starter_Shack/scripts.pory"
	waitmovement 0
# 12 "data/maps/Starter_Shack/scripts.pory"
	releaseall
	return


Starter_Shack_SetIntroState::
# 18 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 19 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 20 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 21 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
	return


Starter_Shack_Pokeball_1_Pickup::
# 28 "data/maps/Starter_Shack/scripts.pory"
	lockall
# 29 "data/maps/Starter_Shack/scripts.pory"
	showmonpic SPECIES_PHANTUMP, 10, 3
# 30 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_0, MSGBOX_YESNO
# 31 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_2
# 57 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 58 "data/maps/Starter_Shack/scripts.pory"
	msgbox Text_Pokemon_Not_Chosen
Starter_Shack_Pokeball_1_Pickup_1:
# 60 "data/maps/Starter_Shack/scripts.pory"
	releaseall
	return

Starter_Shack_Pokeball_1_Pickup_2:
# 32 "data/maps/Starter_Shack/scripts.pory"
	givemon SPECIES_PHANTUMP, 99, ITEM_MASTER_BALL
# 33 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 34 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_6
Starter_Shack_Pokeball_1_Pickup_5:
# 37 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_8
# 44 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_9
# 52 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 53 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_3
	goto Starter_Shack_Pokeball_1_Pickup_1

Starter_Shack_Pokeball_1_Pickup_6:
# 35 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	goto Starter_Shack_Pokeball_1_Pickup_5

Starter_Shack_Pokeball_1_Pickup_8:
# 38 "data/maps/Starter_Shack/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_1
# 40 "data/maps/Starter_Shack/scripts.pory"
	removeobject 1
# 41 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_STARTER_BALL_1
# 42 "data/maps/Starter_Shack/scripts.pory"
	call NickNamePartyMon
	goto Starter_Shack_Pokeball_1_Pickup_1

Starter_Shack_Pokeball_1_Pickup_9:
# 45 "data/maps/Starter_Shack/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_2
# 47 "data/maps/Starter_Shack/scripts.pory"
	removeobject 1
# 48 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_STARTER_BALL_1
# 49 "data/maps/Starter_Shack/scripts.pory"
	call NickNameBoxMon
	goto Starter_Shack_Pokeball_1_Pickup_1


NickNamePartyMon::
# 64 "data/maps/Starter_Shack/scripts.pory"
	msgbox NickNamePartyMon_Text_0, MSGBOX_YESNO
# 65 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 66 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NickNamePartyMon_1
	return

NickNamePartyMon_1:
# 67 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 68 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NickNameBoxMon::
# 73 "data/maps/Starter_Shack/scripts.pory"
	msgbox NickNamePartyMon_Text_0, MSGBOX_YESNO
# 74 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 75 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NickNameBoxMon_2
NickNameBoxMon_1:
# 78 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NickNameBoxMon_2:
# 76 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NickNameBoxMon_1


# 85 "data/maps/Starter_Shack/scripts.pory"
Movement_StarterPickup:
# 86 "data/maps/Starter_Shack/scripts.pory"
	walk_up
	step_end

Starter_Shack_ForcePokePickup_Text_0:
# 8 "data/maps/Starter_Shack/scripts.pory"
	.string "Go pick up a Pokemon.$"

Starter_Shack_Pokeball_1_Pickup_Text_0:
# 30 "data/maps/Starter_Shack/scripts.pory"
	.string "Would you like to select PHANTUMP?$"

Starter_Shack_Pokeball_1_Pickup_Text_1:
# 39 "data/maps/Starter_Shack/scripts.pory"
	.string "Picked up PHANTUMP$"

Starter_Shack_Pokeball_1_Pickup_Text_2:
# 46 "data/maps/Starter_Shack/scripts.pory"
	.string "Received PHANTUMP$"

Starter_Shack_Pokeball_1_Pickup_Text_3:
# 53 "data/maps/Starter_Shack/scripts.pory"
	.string "No more room$"

NickNamePartyMon_Text_0:
# 64 "data/maps/Starter_Shack/scripts.pory"
	.string "Give it a nickname?$"

Text_Pokemon_Not_Chosen::
# 81 "data/maps/Starter_Shack/scripts.pory"
	.string "Did not choose Pokemon$"
