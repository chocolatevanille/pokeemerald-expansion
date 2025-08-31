# 1 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
.set LOCALID_OPPONENT, 1
# 3 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT_1, 2
# 4 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
.set LOCALID_ATTENDANT_2, 3
# 5 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 6 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_MapScripts::
# 7 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerBattleRoom_OnFrame
# 8 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerBattleRoom_OnWarp
# 9 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_OnWarp:
# 12 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_SetUpObjects
# 13 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_SetUpObjects::
# 16 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SetInvisible
# 18 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_OnFrame:
# 21 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom
# 22 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom::
# 25 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 26 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerEnter
# 27 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 29 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter
# 30 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer
# 31 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant
# 33 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 34 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 35 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 36 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 37 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter::
# 39 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setopponent
# 40 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 41 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_OpponentEnter
# 42 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 43 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 44 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 46 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special DisplayParty
# 47 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 48 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special ReloadPlayerParty
# 49 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 50 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent
# 52 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTower_EventScript_WarpToLobbyLost::
# 53 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 54 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 55 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 56 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 57 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 58 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent::
# 60 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 61 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setbattlewon
# 62 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 64 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_OpponentExit
# 65 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	removeobject LOCALID_OPPONENT
# 67 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 68 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleTowerBattleRoom_EventScript_SecondAttendantEnter
# 69 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer
# 70 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 71 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant
# 72 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 73 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 75 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 76 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent::
# 78 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 79 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 80 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext
# 81 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 82 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent
# 83 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 84 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 85 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 86 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge
# 88 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle
# 89 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 90 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 91 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 92 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 94 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 95 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 96 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge
# 97 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 98 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 99 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 100 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 101 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle::
# 102 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 103 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 105 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 107 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_RecordBattle
# 108 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 109 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_RecordBattle::
# 111 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 112 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 113 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge::
# 115 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 116 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 118 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleTowerBattleRoom_EventScript_PauseChallenge
# 119 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 120 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge::
# 122 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 123 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 125 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 127 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_RetireChallenge
# 128 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 129 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 130 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge::
# 131 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 132 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle
# 133 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos
# 135 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter
# 137 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 138 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon::
# 139 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 140 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 141 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 142 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 143 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 144 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 145 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_PauseChallenge::
# 146 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
# 147 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 148 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_save CHALLENGE_STATUS_PAUSED
# 149 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playse SE_SAVE
# 150 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitse
# 151 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_reset
# 153 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 154 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 155 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent::
# 156 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 157 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 158 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor2ndOpponent
# 159 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor3rdOpponent
# 160 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor4thOpponent
# 161 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor5thOpponent
# 162 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor6thOpponent
# 163 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor7thOpponent
# 164 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 165 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor2ndOpponent::
# 166 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
# 167 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 169 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 170 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor3rdOpponent::
# 171 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
# 172 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 173 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 174 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor4thOpponent::
# 176 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
# 177 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 178 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 179 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 180 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor5thOpponent::
# 181 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
# 182 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 183 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 184 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 185 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor6thOpponent::
# 186 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
# 187 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 188 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 189 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 190 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor7thOpponent::
# 191 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
# 192 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 193 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 194 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 195 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_EventScript_IncrementWinStreak::
# 196 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_incrementstreak
# 197 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_SecondAttendantEnter::
# 200 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantEnter
# 201 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 202 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, Common_Movement_WalkInPlaceLeft
# 203 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 204 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playse SE_PIN
# 205 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, Common_Movement_ExclamationMark
# 206 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 207 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, Common_Movement_Delay48
# 208 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 209 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantDelay
# 210 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantFaceSecondAttendant
# 211 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 212 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantExit
# 213 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 214 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 215 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext::
# 217 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 218 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay, MSGBOX_DEFAULT
# 219 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 220 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden::
# 221 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
# 222 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 223 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 224 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord
# 225 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 226 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 227 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel
# 228 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle
# 229 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 230 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 231 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 232 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord::
# 234 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 235 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 236 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel
# 237 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 238 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 239 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 240 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 241 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel::
# 242 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 243 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 244 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle
# 245 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 246 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos
# 247 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 248 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	addobject LOCALID_OPPONENT
# 249 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_AnabelEnter
# 250 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 251 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 252 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro
# 253 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver
# 254 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold
# 255 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 256 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver
# 257 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel, MSGBOX_DEFAULT
# 258 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 259 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver::
# 260 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 262 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver
# 263 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 264 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver::
# 266 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 267 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getsymbols
# 268 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 269 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized, MSGBOX_DEFAULT
# 270 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 271 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
# 272 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 273 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 274 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_givesymbol
# 275 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime, MSGBOX_DEFAULT
# 276 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 277 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro::
# 279 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 280 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold
# 281 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack, MSGBOX_DEFAULT
# 282 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 283 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold::
# 284 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe, MSGBOX_DEFAULT
# 285 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 286 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold
# 287 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 288 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold::
# 290 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 291 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getsymbols
# 292 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 293 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 295 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
# 296 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 297 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 298 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_givesymbol
# 299 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain, MSGBOX_DEFAULT
# 300 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 301 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle::
# 303 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 304 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 305 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 306 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 307 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_TOWER
# 308 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 309 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special DoSpecialTrainerBattle
# 310 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 311 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_FRONTIER_BATTLE_MODE
# 312 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_0x8004, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerBattleRoom_EventScript_EndTowerBattle
# 313 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_restorehelditems
# 314 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 315 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_resetsketch
# 316 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EndTowerBattle::
# 317 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setinterviewdata
# 318 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 319 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_EventScript_SetBrainObjectGfx::
# 322 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_setbrainobj
# 323 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerEnter:
# 326 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 327 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 328 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 329 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 330 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 331 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant:
# 333 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_down
# 334 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 335 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle:
# 337 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 338 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 339 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_OpponentEnter:
# 341 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 342 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 343 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 344 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 345 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_left
# 346 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 347 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_OpponentExit:
# 349 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 350 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 351 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 352 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 353 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 354 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer:
# 356 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 357 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 358 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 359 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 360 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 361 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 362 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos:
# 363 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 364 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 365 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 366 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 367 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 368 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 369 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SetInvisible:
# 371 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_invisible
# 372 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 373 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantEnter:
# 375 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_visible
# 376 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 377 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 378 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 379 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 380 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_8
# 381 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 382 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantExit:
# 384 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 385 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 386 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 387 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_invisible
# 388 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 389 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantDelay:
# 391 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 392 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 393 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 394 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 395 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 396 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 397 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantFaceSecondAttendant:
# 398 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 399 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 400 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 401 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 402 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 403 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_in_place_right
# 404 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 405 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 406 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AnabelEnter:
# 407 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 408 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 409 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 410 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 411 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_left
# 412 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 413 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 414 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby::
# 415 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 416 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyDoubles
# 417 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyMultis
# 418 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyLinkMultis
# 419 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 6, 6
# 420 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 421 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 422 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 423 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyDoubles::
# 424 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 10, 6
# 425 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 426 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 427 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 428 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyMultis::
# 429 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 14, 6
# 430 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 431 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 432 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 433 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyLinkMultis::
# 434 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_closelink
# 435 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 18, 6
# 436 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 437 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 438 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 439 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_RetireChallenge::
# 440 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 441 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 442 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 443 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 444 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth:
# 445 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "We will restore your Pokémon to\n"
# 446 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "full health.$"
# 447 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
@ Unused
# 449 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent:
# 450 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. {STR_VAR_1}.\n"
# 451 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 452 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent:
# 454 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 2.\n"
# 455 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 456 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent:
# 458 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 3.\n"
# 459 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 460 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent:
# 462 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 4.\n"
# 463 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 464 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent:
# 466 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 5.\n"
# 467 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 468 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent:
# 470 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 6.\n"
# 471 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 472 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent:
# 474 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 7.\n"
# 475 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 476 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle:
# 478 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Record your battle on your\n"
# 479 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "FRONTIER PASS?$"
# 480 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass:
# 482 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "{PLAYER}'s battle was recorded\n"
# 483 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "on the FRONTIER PASS.$"
# 484 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame:
# 486 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Would you like to save and\n"
# 487 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "quit the game?$"
# 488 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait:
# 490 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Saving your battle data.\n"
# 491 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Please wait.$"
# 492 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge:
# 494 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Would you like to cancel your BATTLE\n"
# 495 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ROOM challenge?$"
# 496 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved::
# 498 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "There was an error of some sort.\n"
# 499 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your record could not be saved.$"
# 500 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay:
# 502 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Excuse me, but…\p"
# 503 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Our leader, the SALON MAIDEN, is on\n"
# 504 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "her way here in hopes of battling you.\p"
# 505 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "She should be arriving very shortly.$"
# 506 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 507 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden:
# 508 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing the SALON MAIDEN.\n"
# 509 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 510 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel:
# 512 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Greetings…\n"
# 513 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "My name is ANABEL.\p"
# 514 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I am the SALON MAIDEN, and I am in\n"
# 515 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "charge of running the BATTLE TOWER…\p"
# 516 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I have heard several rumors\n"
# 517 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "about you… Hoenn Champion.\p"
# 518 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "In all honesty, what I have heard does\n"
# 519 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "not seem attractive in any way…\p"
# 520 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Patrons of the BATTLE TOWER struggle\n"
# 521 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "to have any fun when you\l"
# 522 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "compete…\p"
# 523 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "And yet, the reason I've come to\n"
# 524 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "to see you…\p"
# 525 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Well, there is but one reason…\n"
# 526 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … …\n"
# 527 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 528 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent:
# 529 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Let me see your talent in\n"
# 530 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "its entirety…$"
# 531 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized:
# 533 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: Fufufu, nicely done…\p"
# 534 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please…\n"
# 535 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your talent shall be recognized.$"
# 536 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol:
# 538 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "The Ability Symbol was embossed on\n"
# 539 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 540 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 541 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime:
# 542 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 543 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You have confidence in your Pokémon\n"
# 544 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "battling talent, don't you?\p"
# 545 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I urge you to keep battling and\n"
# 546 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "keep on winning.\p"
# 547 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I will be waiting for you.\n"
# 548 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Until the next time we meet…$"
# 549 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack:
# 551 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: You really did come back to\n"
# 552 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "see me…\p"
# 553 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 554 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You've won straight matches to see me…\n"
# 555 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I won't have to hold back against you…\p"
# 556 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "It's been too long now…\p"
# 557 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Too long since I've been able to battle\n"
# 558 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "without thinking about anything…$"
# 559 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe:
# 561 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Let's begin, shall we?$"
# 562 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 563 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease:
# 564 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: Fufu, congratulations…\n"
# 565 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please…$"
# 566 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 567 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine:
# 568 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "The Ability Symbol took on\n"
# 569 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 570 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 571 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain:
# 572 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "That was fun…\p"
# 573 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I have never had a Pokémon battle\n"
# 574 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "so enjoyable before…\p"
# 575 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your talent is inspiring…\p"
# 576 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I will not forget this match…\p"
# 577 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I wish I could battle with you again…\p"
# 578 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … … … … … …\p"
