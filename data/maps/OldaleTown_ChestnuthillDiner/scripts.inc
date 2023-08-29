OldaleTown_ChestnuthillDiner_MapScripts::
	.byte 0


OldaleTown_ChestnuthillDiner_EventScript_Woman1::
	lockall
	faceplayer
	msgbox OldaleTown_ChestnuthillDiner_EventScript_Woman1_Text_0
	releaseall
	return


OldaleTown_ChestnuthillDiner_EventScript_Woman2::
	lockall
	faceplayer
	msgbox OldaleTown_ChestnuthillDiner_EventScript_Woman2_Text_0
	releaseall
	return


OldaleTown_ChestnuthillDiner_EventScript_Man1::
	lockall
	faceplayer
	msgbox OldaleTown_ChestnuthillDiner_EventScript_Man1_Text_0
	releaseall
	return


OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North::
	lockall
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceLeft
	waitmovement 0
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerNorth
	waitmovement 0
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_1
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableNorth
	waitmovement 0
	waitmovement 0
	call OldaleTown_ChestnuthillDiner_EventScript_FirstDate
	end


OldaleTown_ChestnuthillDiner_EventScript_FirstDate_NorthWest::
	lockall
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceLeft
	waitmovement 0
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerNorthWest
	waitmovement 0
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_1
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableWNW
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableNorthWest
	waitmovement 0
	waitmovement 0
	call OldaleTown_ChestnuthillDiner_EventScript_FirstDate
	end


OldaleTown_ChestnuthillDiner_EventScript_FirstDate_East::
	lockall
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceUp
	waitmovement 0
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerEast
	waitmovement 0
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_1
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableEast
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableEast
	waitmovement 0
	waitmovement 0
	call OldaleTown_ChestnuthillDiner_EventScript_FirstDate
	end


OldaleTown_ChestnuthillDiner_EventScript_FirstDate_West::
	lockall
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceUp
	waitmovement 0
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerWest
	waitmovement 0
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_1
	applymovement 3, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableWNW
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableWest
	waitmovement 0
	waitmovement 0
	call OldaleTown_ChestnuthillDiner_EventScript_FirstDate
	end


OldaleTown_ChestnuthillDiner_EventScript_FirstDate::
	setflag FLAG_CHESTNUTHILL_DINER_HIDE_TYLER
	clearflag FLAG_OLDALE_TOWN_HIDE_TYLER
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_0
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_1
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_2
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_3
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_2
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_4
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_2
	msgbox OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_2
	setvar VAR_RELATIONSHIP_COUNTER, 1
	warp MAP_OLDALE_TOWN, 32, 9
	waitstate
	releaseall
	end


OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerNorth:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerNorthWest:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerEast:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkToPlayerWest:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableWNW:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_WalkBackToTableEast:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_right
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableWest:
	walk_up
	walk_left
	walk_left
	walk_up
	face_left
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableNorthWest:
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerWalkToTableEast:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceLeft:
	face_left
	step_end

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_PlayerFaceUp:
	face_up
	step_end

OldaleTown_ChestnuthillDiner_EventScript_Woman1_Text_0:
	.string "He won't stop talking about cheese...$"

OldaleTown_ChestnuthillDiner_EventScript_Woman2_Text_0:
	.string "Take a seat and I'll be right with you.$"

OldaleTown_ChestnuthillDiner_EventScript_Man1_Text_0:
	.string "We're on our first date! \n"
	.string "I think it's going well!$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_0:
	.string "TYLER: Hey, Tara!$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_North_Text_1:
	.string "TYLER: I, uh, got us a table.$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_0:
	.string "TYLER: So... uh... $"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_1:
	.string "Do you like your new Pokemon?$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_2:
	.string "...$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_3:
	.string "That's great! What else \ndo you like to do?$"

OldaleTown_ChestnuthillDiner_EventScript_FirstDate_Text_4:
	.string "That sounds fun! What do \nyou like about it?$"
