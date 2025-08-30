# 1 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 7
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_MULTIS, 8
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
.set LOCALID_ATTENDANT_LINK_MULTIS, 9
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Note: LOCALID_BATTLE_TOWER_LOBBY_REPORTER is a local id for this map used elsewhere. It's defined in event_objects.h
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts::
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_OnResume
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_OnTransition
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_OnFrame
# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_OnWarp
# 14 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.byte 0
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnResume:
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition:
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice  @ VAR_0x8004 always TRUE here
# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_EventScript_HideApprentice
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::
# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 33 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice
# 34 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 35 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnWarp:
# 36 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth
# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnFrame:
# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus
# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 51 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 61 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 62 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 72 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 49, BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge
# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::
# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_EventScript_SaveBattle
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle::
# 141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_EventScript_BattleSaveFailed
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_BattleSaveFailed::
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetCantRecordBattle::
# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::
# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CheckParty, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE_FULL
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier6V6
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_FailEnteringChallenge
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge
# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FailEnteringChallenge::
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::
# 365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::
# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::
# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen
# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles
# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles
# 552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
# 553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles
# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS  @ No status provided, so it relies on VAR_0x8006 being 0 already
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER_BATTLE_TOWER
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetPartySize
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 6, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferModeText
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
# 623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:
# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::
# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti
# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::
# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::
# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant
# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_MULTIS
# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_LINK_MULTIS
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis
# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::
# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize
# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetLvlMode::
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8005, 3, BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection
# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::
# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 0, BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode
# 804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 1, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 2, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::
# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::
# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::
# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
# 820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::
# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_RulesTower
# 900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_RulesMons
# 901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_RulesSalon
# 902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink
# 903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesTower::
# 908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMons::
# 913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::
# 918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
# 924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExitRules::
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom:
# 933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'll direct you to your BATTLE ROOM now.$"
# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting:
# 936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge last time.\p"
# 939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven:
# 943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You've beaten all seven TRAINERS!\p"
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize:
# 949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\n"
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have earned this fabulous prize!\p"
# 951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReceivedPrize:
# 954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom:
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "see me.$"
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying:
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thank you for playing!\p"
# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved:
# 968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please wait.$"
# 970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou:
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We've been waiting for you!\p"
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved:
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
# 977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress will be saved. Please wait.$"
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer:
# 980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're finally about to face the\n"
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "50th TRAINER.\p"
# 982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "From here on, every time you beat seven\n"
# 983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "TRAINERS in a row, your Pokémon will\l"
# 984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "receive a commemorative RIBBON.\p"
# 985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Good luck!$"
# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons:
# 988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Here are some RIBBONS for beating\n"
# 989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven tough TRAINERS in a row.\p"
# 990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received some RIBBONS!$"
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons:
# 993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} put the RIBBONS on\n"
# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the challenger Pokémon.$"
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower:
# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me, do you have a moment?\p"
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can you describe your feelings when\n"
# 999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a BATTLE TOWER\l"
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match, or when you've either won or\l"
# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "lost a match?$"
# 1002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin:
# 1004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, what are your feelings when\n"
# 1005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you're about to begin a match?$"
# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon:
# 1008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "What do you feel when you've won\n"
# 1009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a match?$"
# 1010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost:
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can I hear about your feelings when\n"
# 1013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you have lost a match?$"
# 1014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt:
# 1016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, so you don't think much about it?\n"
# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're one cool customer.$"
# 1018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind:
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hunh? You changed your mind?\n"
# 1021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I guess you're fickle.$"
# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel:
# 1024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, so that's how you feel?\n"
# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "That's quite original.\p"
# 1026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thanks!$"
# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded:
# 1029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The number of matches you win in a row\n"
# 1030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is recorded.\p"
# 1031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'd better not get beaten in\n"
# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "an embarrassing way!$"
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins:
# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you've entered the BATTLE TOWER,\n"
# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you can't leave until you either lose\l"
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "or you beat seven TRAINERS in a row.\p"
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You'd best be certain that you're up\n"
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to the challenge.$"
# 1040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction:
# 1043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOUBLE BATTLE CORNER!\p"
# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 1046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction:
# 1052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLE CORNER!\p"
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Unfortunately, the BATTLE ROOMS\n"
# 1055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are still under construction.\p"
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come back when the work\n"
# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is completed.$"
# 1058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge:
# 1060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We look forward to seeing you on\n"
# 1061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "another challenge!$"
# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode:
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE ROOM offers two levels\n"
# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 1066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which is your choice?$"
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons:
# 1070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the Pokémon you wish\n"
# 1071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.$"
# 1072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering:
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "progress must be saved. Is that okay?$"
# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom:
# 1078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now show you to the\n"
# 1079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} BATTLE ROOM.$"
# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch:
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Shall I record your last BATTLE TOWER\n"
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 1084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50:
# 1087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible Pokémon.\p"
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different Pokémon\n"
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen:
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have {STR_VAR_2} eligible Pokémon.\p"
# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have {STR_VAR_2} different Pokémon\n"
# 1101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles:
# 1108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have three eligible Pokémon.\p"
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have three different Pokémon\n"
# 1111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles:
# 1118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have six eligible Pokémon.\p"
# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have six different Pokémon\n"
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eggs are ineligible.\p"
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles:
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible Pokémon.\p"
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different Pokémon\n"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles:
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have four eligible Pokémon.\p"
# 1138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have four different Pokémon\n"
# 1139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis:
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible Pokémon.\p"
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different Pokémon\n"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis:
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You don't have two eligible Pokémon.\p"
# 1158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must have two different Pokémon\n"
# 1159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to enter.\p"
# 1160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kinds of items.\p"
# 1162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle:
# 1166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 1169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the SINGLE\n"
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS, a series of 6V6 with\l"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the best trainers in the world.$"
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge:
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the SINGLE\n"
# 1175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge:
# 1178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's SINGLE BATTLE\n"
# 1179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 1180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "SINGLE BATTLES with three Pokémon.\p"
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many SINGLE BATTLE ROOMS\n"
# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the SINGLE BATTLE ROOMS,\n"
# 1184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven TRAINERS await your challenge.\p"
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons:
# 1193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the three Pokémon\n"
# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CheckParty:
# 1197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now check if your party\n"
# 1198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is eligible.$"
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle:
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the DOUBLE\n"
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge:
# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the DOUBLE\n"
# 1209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 1210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge:
# 1212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's DOUBLE BATTLE\n"
# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "DOUBLE BATTLES with four Pokémon.\p"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many DOUBLE BATTLE ROOMS\n"
# 1216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 1217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In each of the DOUBLE BATTLE ROOMS,\n"
# 1218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "seven TRAINERS await your challenge.\p"
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven,\n"
# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will earn Battle Points.\p"
# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons:
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the four Pokémon\n"
# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle:
# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the MULTI\n"
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 1236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge:
# 1238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the MULTI\n"
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 1240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge:
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
# 1243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES.\p"
# 1245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For MULTI BATTLES, you must partner\n"
# 1246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with a TRAINER in the TOWER and enter\l"
# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "with two Pokémon each.\p"
# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Inside the TOWER is a room named\n"
# 1249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the BATTLE SALON where you may meet\l"
# 1250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "other TRAINERS.\p"
# 1251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There, you must find a TRAINER to act\n"
# 1252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "as your partner in MULTI BATTLES.\p"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you have partnered up, you will\n"
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "be shown to a MULTI BATTLE ROOM.\p"
# 1255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In the MULTI BATTLE ROOM, seven\n"
# 1256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await your challenge.\p"
# 1257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 1258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons:
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two Pokémon\n"
# 1266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle:
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
# 1270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "are put to the test!\p"
# 1271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER!\p"
# 1272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I am your guide to the LINK MULTI\n"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOMS.$"
# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge:
# 1276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the LINK MULTI\n"
# 1277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE ROOM challenge?$"
# 1278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge:
# 1280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ROOMS are facilities for conducting\l"
# 1282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES with a friend.\p"
# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must link with your friend using\n"
# 1284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a Game Boy\l"
# 1285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Advance Game Link cable.\p"
# 1286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must partner with your friend and\n"
# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "enter two different kinds of Pokémon.\p"
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "There are many MULTI BATTLE ROOMS\n"
# 1289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the BATTLE TOWER for team battles.\p"
# 1290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In a MULTI BATTLE ROOM, seven\n"
# 1291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "tag teams await you and your friend\l"
# 1292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "to make a tag-team challenge.\p"
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "If you manage to defeat all seven\n"
# 1294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teams, you will earn Battle Points.\p"
# 1295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please beware that unlike other ROOMS,\n"
# 1296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you may not interrupt your challenge.\p"
# 1297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you start, you must battle seven\n"
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "MULTI BATTLES in a row nonstop.$"
# 1299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2:
# 1301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two Pokémon\n"
# 1302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "that are to be entered.$"
# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend:
# 1306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
# 1307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon as your friend.\p"
# 1308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two Pokémon different\n"
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 1310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 1311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers:
# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE ROOM challenge\n"
# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "is only for two linked players.$"
# 1315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon:
# 1317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Pokémon {STR_VAR_1}.$"
# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons:
# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 1322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon {STR_VAR_1} and {STR_VAR_2}.$"
# 1323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode:
# 1325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.$"
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon:
# 1330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the Pokémon {STR_VAR_1}.$"
# 1334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons:
# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "battle level.\p"
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
# 1340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon {STR_VAR_1} and {STR_VAR_2}.$"
# 1341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode:
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two Pokémon different\n"
# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from your friend's, match the level\l"
# 1345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "you wish to enter, and register again.$"
# 1346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn:
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will save the game before\n"
# 1349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "showing you in. Please wait.$"
# 1350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden:
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
# 1353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have defeated the SALON MAIDEN\l"
# 1354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and swept seven TRAINERS!$"
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints:
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In recognition of your infinite talent,\n"
# 1358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 1359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_Text_ObtainedXBattlePoints:
# 1361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RulesAreListed:
# 1364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER rules are listed.$"
# 1365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading:
# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules:
# 1370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER is a facility where\n"
# 1371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "four types of battles are waged--\l"
# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "SINGLE BATTLE, DOUBLE BATTLE, MULTI\l"
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "BATTLE, and LINK MULTI BATTLE.\p"
# 1374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For each of these types, there are\n"
# 1375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "separate BATTLE ROOMS.\p"
# 1376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please speak with a guide offering\n"
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the type of battle you wish to enter.$"
# 1378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMonRules:
# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Depending on the BATTLE ROOM you are\n"
# 1381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "entering, you will be required to take\l"
# 1382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "a certain number of Pokémon.\p"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The SINGLE BATTLE mode requires\n"
# 1384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "three Pokémon.\p"
# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The DOUBLE BATTLE mode requires four,\n"
# 1386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "and the MULTI modes both require two.$"
# 1387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules:
# 1389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE SALON is where you must\n"
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "find a partner to form a tag team for\l"
# 1391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the MULTI BATTLE ROOM challenge.\p"
# 1392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Choose the best partner for you by\n"
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "examining other TRAINERS'\l"
# 1394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon and their moves.\p"
# 1395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may choose a new tag partner\n"
# 1396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "after winning seven straight matches.$"
# 1397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules:
# 1399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE Mode is for two\n"
# 1400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "friends to mount a challenge together.\p"
# 1401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You and your friend must be linked with\n"
# 1402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wireless Adapters or a GBA Game Link\l"
# 1403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "cable.\p"
# 1404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You must choose two Pokémon at\n"
# 1405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "the registration counter.\p"
# 1406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "These Pokémon must be different\n"
# 1407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "from those of your friend.\p"
# 1408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You may not interrupt this challenge\n"
# 1409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in the middle, unlike other modes.$"
