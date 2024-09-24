# 1 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"

# 2 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
LittlerootTown_ApartmentSmall1_MapScripts::
# 3 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	.byte 0

LittlerootTown_Apartmentsmall1_EventScript_GayMan1::
# 7 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	lockall
# 8 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	msgbox Text_GayMan1, MSGBOX_AUTOCLOSE
# 9 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	waitmessage
# 10 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	releaseall
	end


LittlerootTown_Apartmentsmall1_EventScript_GayMan2::
# 15 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	lockall
# 16 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	msgbox Text_GayMan2, MSGBOX_AUTOCLOSE
# 17 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	waitmessage
# 18 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	releaseall
	end


Text_GayMan1::
# 22 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	.string "My husband and I are pretty lucky that\n"
	.string "we're able to afford a place in this\l"
	.string "town. Though we do have to rent out our\l"
	.string "upstairs...$"

Text_GayMan2::
# 27 "data/maps/LittlerootTown_ApartmentSmall1/scripts.pory"
	.string "Sorry this place is suck a piece of shit.\n"
	.string "It was all we could get. If you look\l"
	.string "closely at the tiling, you can see where\l"
	.string "the pixel artist messed up.$"
