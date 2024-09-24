# 1 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
LittlerootTown_ApartmentSmall1_2F_MapScripts::
# 3 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	.byte 0

LittlerootTown_Apartmentsmall1_2F_EventScript_Nurse::
# 7 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	lockall
# 8 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	face_player
# 9 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	msgbox Text_Nurse, MSGBOX_AUTOCLOSE
# 10 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	waitmessage
# 11 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	releaseall
	end


LittlerootTown_Apartmentsmall1_2F_EventScript_LittleGirl::
# 16 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	lockall
# 17 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	face_player
# 18 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	msgbox Text_LittleGirl, MSGBOX_AUTOCLOSE
# 19 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	waitmessage
# 20 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	face_original_direction
# 21 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	releaseall
	end


LittlerootTown_Apartmentsmall1_2F_EventScript_Plant::
# 35 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	lockall
# 36 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	msgbox Text_Plant, MSGBOX_AUTOCLOSE
# 37 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	waitmessage
# 38 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	releaseall
	end


LittlerootTown_Apartmentsmall1_2F_EventScript_Poster::
# 47 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	lockall
# 48 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	msgbox Text_Poster, MSGBOX_AUTOCLOSE
# 49 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	waitmessage
# 50 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	releaseall
	end


Text_Nurse::
# 25 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	.string "Gosh, times have been tough here ever\n"
	.string "since they closed down the Pokemon\l"
	.string "Center. I'm pretty worried about making\l"
	.string "rent this month.$"

Text_LittleGirl::
# 29 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	.string "There's not much that I enjoy around\n"
	.string "this town. The kids are mean, the\l"
	.string "streets stink, and not many POKEMON\l"
	.string "roam around here. But at least I can\l"
	.string "look at my plant when I come home. Yay!$"

Text_Plant::
# 42 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	.string "It looks like it's dying.$"

Text_Poster::
# 54 "data/maps/LittlerootTown_ApartmentSmall1_2F/scripts.pory"
	.string "It's a poster for a local band: THE\n"
	.string "PUSHERS. They look like they suck.$"
