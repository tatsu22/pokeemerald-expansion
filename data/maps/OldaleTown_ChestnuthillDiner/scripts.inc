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


OldaleTown_ChestnuthillDiner_EventScript_Woman1_Text_0:
	.string "He won't stop talking about cheese.$"

OldaleTown_ChestnuthillDiner_EventScript_Woman2_Text_0:
	.string "Take a seat and I'll be right with you.$"

OldaleTown_ChestnuthillDiner_EventScript_Man1_Text_0:
	.string "I think this is going well!$"
