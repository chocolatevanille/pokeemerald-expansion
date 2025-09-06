# 1 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
.set LOCALID_ATTENDANT_SINGLES, 1
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
.set LOCALID_ATTENDANT_DOUBLES, 6
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts::
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame
# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnWarp:
# 11 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 17 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnFrame:
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 40 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
# 50 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 56 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 80 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 81 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 82 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 83 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
# 110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen
# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	release
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
# 233 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
# 234 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 245 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
# 251 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
# 254 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_SINGLES
# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ATTENDANT_DOUBLES
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
# 267 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
# 270 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
# 275 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
# 282 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 287 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 288 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 289 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 306 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 307 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 308 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 310 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 311 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 313 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 317 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
# 318 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 321 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
# 322 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
# 326 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 329 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 335 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 338 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 345 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 350 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 351 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 352 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 357 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 360 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 362 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 365 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 366 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 370 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 371 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 372 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 375 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 376 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 377 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle:
# 378 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "are put to the test.\p"
# 380 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I welcome you to the BATTLE PALACE.\p"
# 381 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I accept challenges to the SINGLE\n"
# 382 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE HALLS.$"
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge:
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
# 386 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the SINGLE BATTLE HALL challenge?$"
# 387 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge:
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "several auditoriums for SINGLE BATTLES\l"
# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "that are named SINGLE BATTLE HALLS.\p"
# 392 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The SINGLE BATTLES are conducted in\n"
# 393 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the usual way, except with one crucial\l"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rule that must be obeyed.\p"
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are permitted only to switch\n"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "their Pokémon in and out.\p"
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are otherwise forbidden to\n"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "command their Pokémon.\p"
# 399 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The Pokémon are to behave according\n"
# 400 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "to their nature and battle on their own.\p"
# 401 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You must put your trust in your\n"
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon and watch over them.\p"
# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you achieve the honor of beating\n"
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we will present you with Battle Points.\p"
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 407 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "challenge, you must save the game.\p"
# 408 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 409 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you will be disqualified.$"
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified:
# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When you have fortified your heart\n"
# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and Pokémon, you must return.$"
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhichChallenge:
# 416 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are two BATTLE HALLS,\n"
# 417 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 418 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Which is your choice of a challenge?$"
# 419 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50:
# 421 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 422 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You do not have the three Pokémon\n"
# 423 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "required for the challenge.\p"
# 424 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To enter, you must provide three\n"
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "different kinds of Pokémon.\p"
# 426 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "These Pokémon must all be of\n"
# 427 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Level 50 or lower.\p"
# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "They also must not be holding\n"
# 429 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the same kinds of items.\p"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 431 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Come back when you have made\n"
# 432 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your preparations.$"
# 433 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen:
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 436 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You do not have the three Pokémon\n"
# 437 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "required for the challenge.\p"
# 438 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To enter, you must provide three\n"
# 439 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "different kinds of Pokémon.\p"
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "They also must not be holding\n"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the same kinds of items.\p"
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 443 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Come back when you have made\n"
# 444 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your preparations.$"
# 445 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons:
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good. Now, you must select your\n"
# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "three Pokémon.$"
# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2:
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the BATTLE HALL. Is that okay?$"
# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FollowMe:
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good.\n"
# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Now, follow me.$"
# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded:
# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I feel privileged for having seen\n"
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your Pokémon's exploits.\p"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The results will be recorded.\n"
# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must ask you to briefly wait.$"
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak:
# 465 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To achieve a 7-win streak…\p"
# 466 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The bonds that bind your heart with\n"
# 467 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your Pokémon seem firm and true.$"
# 468 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded:
# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Your feat will be recorded.\n"
# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must ask you to briefly wait.$"
# 472 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak:
# 475 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For the feat of your 7-win streak,\n"
# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we present you with Battle Point(s).$"
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize:
# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You seem to have no space for\n"
# 480 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "our prize.\p"
# 481 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You should return when you have\n"
# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "organized your BAG.$"
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting:
# 485 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "We have been waiting for you…$"
# 486 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge:
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the BATTLE HALL. Is that okay?$"
# 490 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge:
# 492 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 493 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You failed to save before you ended\n"
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "As a result, your challenge has been\n"
# 496 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "disqualified. It is most unfortunate.$"
# 497 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 499 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize:
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 501 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 503 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink:
# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For a hardy fellow like me,\n"
# 505 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "hardy Pokémon are the best.\p"
# 506 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Offense is the best defense!\n"
# 507 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A relentless attack is the ultimate!\p"
# 508 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But that's not what I wanted to chat\n"
# 509 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "about.\p"
# 510 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Every so often a really cute lady\n"
# 511 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "swings by here.\p"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "She says that she can tell what\n"
# 513 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon are thinking.\p"
# 514 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I don't know about that part,\n"
# 515 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "but she is really cute.\p"
# 516 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Huh?\n"
# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Why are you looking at me like that?$"
# 518 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere:
# 520 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hmm…\p"
# 521 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It appears that the nature of Pokémon\n"
# 522 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and the moves that they have been\l"
# 523 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "taught are the keys to battle here.\p"
# 524 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To be more precise, it's how well\n"
# 525 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the moves match the nature of\l"
# 526 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the Pokémon.\p"
# 527 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If your Pokémon is in trouble and\n"
# 528 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "unable to live up to its potential,\l"
# 529 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you may need to examine how well\l"
# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "its moves match its nature.$"
# 531 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms:
# 533 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "My Pokémon is usually very docile.\p"
# 534 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But when it's in a BATTLE HALL,\n"
# 535 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "it sometimes seems to become\l"
# 536 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "transformed into something wicked!\p"
# 537 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It becomes totally intimidating.\n"
# 538 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It's shocking, even.$"
# 539 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway:
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I wonder what sort of nature a Pokémon\n"
# 542 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "would have if it favored enfeebling its\l"
# 543 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "opponents and chipping away slowly.\p"
# 544 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I'd be surprised if it was a LAX nature.\p"
# 545 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But, nah, that can't be right.$"
# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle:
# 548 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
# 549 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "are put to the test.\p"
# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I welcome you to the BATTLE PALACE.\p"
# 551 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I accept challenges to the DOUBLE\n"
# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE HALLS.$"
# 553 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge:
# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
# 556 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the DOUBLE BATTLE HALL challenge?$"
# 557 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge:
# 559 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
# 560 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "several auditoriums for DOUBLE BATTLES\l"
# 561 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "that are named DOUBLE BATTLE HALLS.\p"
# 562 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The DOUBLE BATTLES are conducted in\n"
# 563 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the usual way, except with one crucial\l"
# 564 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rule that must be obeyed.\p"
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are permitted only to switch\n"
# 566 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "their Pokémon in and out.\p"
# 567 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are otherwise forbidden to\n"
# 568 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "command their Pokémon.\p"
# 569 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The Pokémon are to behave according\n"
# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "to their nature and battle on their own.\p"
# 571 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You must put your trust in your\n"
# 572 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon and watch over them.\p"
# 573 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you achieve the honor of beating\n"
# 574 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 575 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we will present you with Battle Points.\p"
# 576 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 577 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 578 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 579 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you will be disqualified.$"
# 580 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers:
# 582 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To defeat the PALACE MAVEN\n"
# 583 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and seven TRAINERS in a row…$"
# 584 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 585 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints:
# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In honor of the bond you share with\n"
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your Pokémon, we present you with\l"
# 588 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "these Battle Point(s).$"
# 589 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 590 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch:
# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Would you like to record your latest\n"
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE PALACE match on your\l"
# 593 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 594 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 595 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_RulesAreListed:
# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The BATTLE HALL rules are listed.$"
# 597 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading:
# 599 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 600 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics:
# 602 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Here, Pokémon are required to think\n"
# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and battle by themselves.\p"
# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Unlike in the wild, Pokémon that live\n"
# 605 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "with people behave differently\l"
# 606 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "depending on their nature.$"
# 607 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature:
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a Pokémon\n"
# 610 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "may prefer to attack no matter what.\p"
# 611 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Another Pokémon may prefer to protect\n"
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "itself from any harm.\p"
# 613 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Yet another may enjoy vexing or\n"
# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "confounding its foes.\p"
# 615 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Due to its nature, a Pokémon\n"
# 616 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "will have favorite moves that it is good\l"
# 617 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "at using.\p"
# 618 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It may also dislike certain moves that\n"
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "it has trouble using.$"
# 620 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves:
# 622 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are offensive moves that inflict\n"
# 623 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "direct damage on the foe.\p"
# 624 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are defensive moves that are\n"
# 625 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "used to prepare for enemy attacks or\l"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "used to heal HP and so on.\p"
# 627 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are also other somewhat-odd\n"
# 628 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "moves that may enfeeble the foes with\l"
# 629 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "stat problems including poison and \l"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "paralysis.\p"
# 631 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon will consider using moves in\n"
# 632 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "these three categories.$"
# 633 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 634 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered:
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When not under command by its TRAINER,\n"
# 636 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "a Pokémon may be unable to effectively\l"
# 637 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "use certain moves.\p"
# 638 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A Pokémon is not good at using any\n"
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "move that it dislikes.\p"
# 640 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If a Pokémon only knows moves that\n"
# 641 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "do not match its nature, it will often\l"
# 642 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "be unable to live up to its potential.$"
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 644 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger:
# 645 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a Pokémon may\n"
# 646 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "start using moves that don't match its\l"
# 647 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "nature when it is in trouble.\p"
# 648 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If a Pokémon begins behaving oddly\n"
# 649 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "in a pinch, watch it carefully.$"
