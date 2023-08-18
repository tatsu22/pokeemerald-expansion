ChestnutHillDiner_MapScripts::
	.byte 0


ChestnutHillDiner_RestaurantSign::
	lockall
	msgbox ChestnutHillDiner_RestaurantSign_Text_0
	releaseall
	return


ChestnutHillDiner_RestaurantSign_Text_0:
	.string "ChestnutHill Diner$"
