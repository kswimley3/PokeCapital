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
# 22 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 23 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 24 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 25 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 26 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 27 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH
# 28 "data/maps/Starter_Shack/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	return


Starter_Shack_Pokeball_1_Pickup::
# 33 "data/maps/Starter_Shack/scripts.pory"
	lockall
# 34 "data/maps/Starter_Shack/scripts.pory"
	showmonpic SPECIES_MAGBY, 10, 3
# 35 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_0, MSGBOX_YESNO
# 36 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_2
# 62 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 63 "data/maps/Starter_Shack/scripts.pory"
	msgbox Text_Pokemon_Not_Chosen
Starter_Shack_Pokeball_1_Pickup_1:
# 65 "data/maps/Starter_Shack/scripts.pory"
	releaseall
	return

Starter_Shack_Pokeball_1_Pickup_2:
# 37 "data/maps/Starter_Shack/scripts.pory"
	givemon SPECIES_MAGBY, 10, ITEM_MASTER_BALL
# 38 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 39 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 0
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_6
Starter_Shack_Pokeball_1_Pickup_5:
# 42 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_8
# 49 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Shack_Pokeball_1_Pickup_9
# 57 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 58 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_3
	goto Starter_Shack_Pokeball_1_Pickup_1

Starter_Shack_Pokeball_1_Pickup_6:
# 40 "data/maps/Starter_Shack/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	goto Starter_Shack_Pokeball_1_Pickup_5

Starter_Shack_Pokeball_1_Pickup_8:
# 43 "data/maps/Starter_Shack/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_1
# 45 "data/maps/Starter_Shack/scripts.pory"
	removeobject 1
# 46 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_STARTER_BALL_1
# 47 "data/maps/Starter_Shack/scripts.pory"
	call NickNamePartyMon
	goto Starter_Shack_Pokeball_1_Pickup_1

Starter_Shack_Pokeball_1_Pickup_9:
# 50 "data/maps/Starter_Shack/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/Starter_Shack/scripts.pory"
	msgbox Starter_Shack_Pokeball_1_Pickup_Text_2
# 52 "data/maps/Starter_Shack/scripts.pory"
	removeobject 1
# 53 "data/maps/Starter_Shack/scripts.pory"
	setflag FLAG_STARTER_BALL_1
# 54 "data/maps/Starter_Shack/scripts.pory"
	call NickNameBoxMon
	goto Starter_Shack_Pokeball_1_Pickup_1


NickNamePartyMon::
# 69 "data/maps/Starter_Shack/scripts.pory"
	msgbox NickNamePartyMon_Text_0, MSGBOX_YESNO
# 70 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 71 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NickNamePartyMon_1
	return

NickNamePartyMon_1:
# 72 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 73 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NickNameBoxMon::
# 78 "data/maps/Starter_Shack/scripts.pory"
	msgbox NickNamePartyMon_Text_0, MSGBOX_YESNO
# 79 "data/maps/Starter_Shack/scripts.pory"
	hidemonpic
# 80 "data/maps/Starter_Shack/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NickNameBoxMon_2
NickNameBoxMon_1:
# 83 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NickNameBoxMon_2:
# 81 "data/maps/Starter_Shack/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NickNameBoxMon_1


# 90 "data/maps/Starter_Shack/scripts.pory"
Movement_StarterPickup:
# 91 "data/maps/Starter_Shack/scripts.pory"
	walk_up
	step_end

Starter_Shack_ForcePokePickup_Text_0:
# 8 "data/maps/Starter_Shack/scripts.pory"
	.string "Go pick up a Pokemon.$"

Starter_Shack_Pokeball_1_Pickup_Text_0:
# 35 "data/maps/Starter_Shack/scripts.pory"
	.string "Would you like to select MAGBY?$"

Starter_Shack_Pokeball_1_Pickup_Text_1:
# 44 "data/maps/Starter_Shack/scripts.pory"
	.string "Picked up MAGBY$"

Starter_Shack_Pokeball_1_Pickup_Text_2:
# 51 "data/maps/Starter_Shack/scripts.pory"
	.string "Received MAGBY$"

Starter_Shack_Pokeball_1_Pickup_Text_3:
# 58 "data/maps/Starter_Shack/scripts.pory"
	.string "No more room$"

NickNamePartyMon_Text_0:
# 69 "data/maps/Starter_Shack/scripts.pory"
	.string "Give it a nickname?$"

Text_Pokemon_Not_Chosen::
# 86 "data/maps/Starter_Shack/scripts.pory"
	.string "Did not choose Pokemon$"
