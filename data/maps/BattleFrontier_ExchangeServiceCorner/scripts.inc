# 1 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_MapScripts::
# 3 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 7 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
# 8 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 9 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 14 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_BUFF_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 21 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DEFENSE_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_OFFENSE_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkitemspace VAR_0x8009
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_0x8009
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_BUFF_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DEFENSE_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_OFFENSE_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
# 42 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 45 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 47 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BuffClerk::
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_BUFF_CLERK
# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem::
# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_BUFF_ITEM_VENDOR
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 60 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Protein
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_Iron
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_PPMax
# 69 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtein, MSGBOX_YESNO
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PROTEIN
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCalcium, MSGBOX_YESNO
# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CALCIUM
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 87 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 89 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
# 90 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmIron, MSGBOX_YESNO
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_IRON
# 94 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmZinc, MSGBOX_YESNO
# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ZINC
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 103 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
# 106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmCarbos, MSGBOX_YESNO
# 107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CARBOS
# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmHPUp, MSGBOX_YESNO
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 1
# 117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_HP_UP
# 118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PPMax::
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPPMax, MSGBOX_YESNO
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseBuffItem
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 4
# 125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PP_MAX
# 126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DefenseClerk::
# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DEFENSE_CLERK
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 137 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem::
# 138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DEFENSE_ITEM_VENDOR
# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_AbilityShield
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SafetyGoggles
# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ShedShell
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ShellBell
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_WeaknessPolicy
# 149 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_AirBalloon
# 150 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClearAmulet
# 151 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
# 152 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
# 153 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_SalacBerry
# 154 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_SitrusBerry
# 155 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 11, BattleFrontier_ExchangeServiceCorner_EventScript_AssaultVest
# 156 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 12, BattleFrontier_ExchangeServiceCorner_EventScript_FocusSash
# 157 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 13, BattleFrontier_ExchangeServiceCorner_EventScript_RockyHelmet
# 158 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 14, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 159 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 160 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 161 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_AbilityShield::
# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmAbilityShield, MSGBOX_YESNO
# 164 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 165 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 166 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ABILITY_SHIELD
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 169 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 170 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SafetyGoggles::
# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSafetyGoggles, MSGBOX_YESNO
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SAFETY_GOGGLES
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ShedShell::
# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmShedShell, MSGBOX_YESNO
# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SHED_SHELL
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 184 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 185 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ShellBell::
# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmShellBell, MSGBOX_YESNO
# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 189 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 190 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SHELL_BELL
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_WeaknessPolicy::
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmWeaknessPolicy, MSGBOX_YESNO
# 196 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_WEAKNESS_POLICY
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 200 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_AirBalloon::
# 203 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmAirBalloon, MSGBOX_YESNO
# 204 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_AIR_BALLOON
# 207 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 208 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClearAmulet::
# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmClearAmulet, MSGBOX_YESNO
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CLEAR_AMULET
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 217 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers, MSGBOX_YESNO
# 220 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 221 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 222 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_LEFTOVERS
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 224 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 225 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 226 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb, MSGBOX_YESNO
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 229 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 230 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_MENTAL_HERB
# 231 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 232 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 234 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SalacBerry::
# 235 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSalacBerry, MSGBOX_YESNO
# 236 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 237 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 238 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SALAC_BERRY
# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 240 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 241 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 242 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SitrusBerry::
# 243 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSitrusBerry, MSGBOX_YESNO
# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 245 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SITRUS_BERRY
# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 250 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_AssaultVest::
# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmAssaultVest, MSGBOX_YESNO
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 253 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 254 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ASSAULT_VEST
# 255 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_FocusSash::
# 259 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusSash, MSGBOX_YESNO
# 260 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_FOCUS_SASH
# 263 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 264 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RockyHelmet::
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmRockyHelmet, MSGBOX_YESNO
# 268 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDefenseItem
# 269 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 270 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ROCKY_HELMET
# 271 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 273 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_OffenseClerk::
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 276 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 277 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_OFFENSE_CLERK
# 278 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 279 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 280 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 282 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem::
# 283 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_OFFENSE_ITEM_VENDOR
# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 285 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 287 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 288 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LoadedDice
# 290 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ProtectivePads
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_PunchingGlove
# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ExpertBelt
# 293 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ThroatSpray
# 294 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
# 295 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_PowerHerb
# 296 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
# 297 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceScarf
# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceSpecs
# 299 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_LifeOrb
# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 11, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 301 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 302 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 304 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_LoadedDice::
# 305 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLoadedDice, MSGBOX_YESNO
# 306 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_LOADED_DICE
# 309 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 310 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 311 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 312 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ProtectivePads::
# 313 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtectivePads, MSGBOX_YESNO
# 314 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 315 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 316 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PROTECTIVE_PADS
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 320 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PunchingGlove::
# 321 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPunchingGlove, MSGBOX_YESNO
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 324 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PUNCHING_GLOVE
# 325 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 326 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ExpertBelt::
# 329 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmExpertBelt, MSGBOX_YESNO
# 330 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 331 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_EXPERT_BELT
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 334 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 336 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ThroatSpray::
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmThroatSpray, MSGBOX_YESNO
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 339 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 340 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_THROAT_SPRAY
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 344 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
# 345 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb, MSGBOX_YESNO
# 346 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 347 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 348 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_WHITE_HERB
# 349 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 352 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PowerHerb::
# 353 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPowerHerb, MSGBOX_YESNO
# 354 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 355 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 48
# 356 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_POWER_HERB
# 357 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 358 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_LifeOrb::
# 361 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmLifeOrb, MSGBOX_YESNO
# 362 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 363 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 364 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_LIFE_ORB
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 366 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 367 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
# 369 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand, MSGBOX_YESNO
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 371 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 372 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CHOICE_BAND
# 373 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 374 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceScarf::
# 377 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceScarf, MSGBOX_YESNO
# 378 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 379 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CHOICE_SCARF
# 381 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 382 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 384 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceSpecs::
# 385 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceSpecs, MSGBOX_YESNO
# 386 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseOffenseItem
# 387 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 64
# 388 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_CHOICE_SPECS
# 389 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 391 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_UtilityClerk::
# 393 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 394 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 395 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_UTILITY_CLERK
# 396 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 397 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 398 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 399 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem::
# 401 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_UTILITY_ITEM_VENDOR
# 402 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 403 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 404 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 406 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ElectricSeed
# 408 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_GrassySeed
# 409 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_MistySeed
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_PsychicSeed
# 411 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_TerrainExtender
# 412 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_BoosterEnergy
# 413 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_SoulDew
# 414 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 416 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 417 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 418 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ElectricSeed::
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmElectricSeed, MSGBOX_YESNO
# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 421 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 422 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_ELECTRIC_SEED
# 423 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 426 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_GrassySeed::
# 427 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmGrassySeed, MSGBOX_YESNO
# 428 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_GRASSY_SEED
# 431 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 432 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 433 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MistySeed::
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmMistySeed, MSGBOX_YESNO
# 436 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 437 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 438 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_MISTY_SEED
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 441 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 442 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PsychicSeed::
# 443 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPsychicSeed, MSGBOX_YESNO
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 445 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 16
# 446 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_PSYCHIC_SEED
# 447 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 448 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 450 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TerrainExtender::
# 451 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmTerrainExtender, MSGBOX_YESNO
# 452 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 453 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 32
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_TERRAIN_EXTENDER
# 455 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 456 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 457 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 458 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BoosterEnergy::
# 459 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmBoosterEnergy, MSGBOX_YESNO
# 460 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 461 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 80
# 462 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_BOOSTER_ENERGY
# 463 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 464 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 465 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 466 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SoulDew::
# 467 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmSoulDew, MSGBOX_YESNO
# 468 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseUtilityItem
# 469 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, 100
# 470 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, ITEM_SOUL_DEW
# 471 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 472 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 473 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 474 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 475 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
# 476 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 477 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 478 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 479 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
# 480 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 481 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 482 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 483 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 484 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
# 485 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 486 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 487 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 488 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 489 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
# 490 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 491 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 492 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 493 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
# 494 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 495 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 496 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
# 497 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hello, this is the EXCHANGE SERVICE\n"
# 498 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "CORNER.\p"
# 499 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We exchange the Battle Points you\n"
# 500 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "have collected for lovely prizes.\p"
# 501 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 502 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 503 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
@ Unused
# 504 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
# 505 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 506 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 507 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtein:
# 508 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the PROTEIN.\n"
# 509 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 510 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 511 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCalcium:
# 512 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CALCIUM.\n"
# 513 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 514 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 515 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmIron:
# 516 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the IRON.\n"
# 517 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 518 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 519 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmZinc:
# 520 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the ZINC.\n"
# 521 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 522 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 523 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmCarbos:
# 524 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CARBOS.\n"
# 525 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 526 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 527 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmHPUp:
# 528 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the HP UP.\n"
# 529 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 530 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 531 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPPMax:
# 532 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the PP MAX.\n"
# 533 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 534 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 535 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmAbilityShield:
# 536 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the ABILITY SHIELD.\n"
# 537 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 538 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 539 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSafetyGoggles:
# 540 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SAFETY GOGGLES.\n"
# 541 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 542 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 543 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmShedShell:
# 544 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SHED SHELL.\n"
# 545 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 546 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 547 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmShellBell:
# 548 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SHELL BELL.\n"
# 549 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 550 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 551 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmWeaknessPolicy:
# 552 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the WEAKNESS POLICY.\n"
# 553 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 554 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 555 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmAirBalloon:
# 556 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the AIR BALLOON.\n"
# 557 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 558 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 559 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmClearAmulet:
# 560 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CLEAR AMULET.\n"
# 561 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 562 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 563 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmLeftovers:
# 564 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the LEFTOVERS.\n"
# 565 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 566 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 567 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmMentalHerb:
# 568 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the MENTAL HERB.\n"
# 569 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 570 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 571 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSalacBerry:
# 572 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SALAC BERRY.\n"
# 573 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 574 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 575 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSitrusBerry:
# 576 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SITRUS BERRY.\n"
# 577 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 578 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 579 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmAssaultVest:
# 580 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the ASSAULT VEST.\n"
# 581 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 582 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 583 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmFocusSash:
# 584 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the FOCUS SASH.\n"
# 585 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 586 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 587 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmRockyHelmet:
# 588 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the ROCKY HELMET.\n"
# 589 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 590 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 591 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmLoadedDice:
# 592 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the LOADED DICE.\n"
# 593 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 594 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 595 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmProtectivePads:
# 596 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the PROTECTIVE PADS.\n"
# 597 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 598 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 599 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPunchingGlove:
# 600 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the PUNCHING GLOVE.\n"
# 601 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 602 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 603 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmExpertBelt:
# 604 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the EXPERT BELT.\n"
# 605 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 606 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 607 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmThroatSpray:
# 608 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the THROAT SPRAY.\n"
# 609 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 610 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 611 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmWhiteHerb:
# 612 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the WHITE HERB.\n"
# 613 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 614 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 615 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPowerHerb:
# 616 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the POWER HERB.\n"
# 617 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 618 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 619 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceBand:
# 620 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CHOICE BAND.\n"
# 621 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 622 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 623 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceScarf:
# 624 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CHOICE SCARF.\n"
# 625 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 626 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 627 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmChoiceSpecs:
# 628 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the CHOICE SPECS.\n"
# 629 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 630 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 631 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmLifeOrb:
# 632 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the LIFE ORB.\n"
# 633 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 634 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 635 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmElectricSeed:
# 636 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the ELECTRIC SEED.\n"
# 637 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 638 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 639 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmGrassySeed:
# 640 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the GRASSY SEED.\n"
# 641 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 642 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 643 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmMistySeed:
# 644 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the MISTY SEED.\n"
# 645 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 646 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 647 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPsychicSeed:
# 648 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the PSYCHIC SEED.\n"
# 649 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 650 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 651 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmTerrainExtender:
# 652 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the TERRAIN EXTENDER.\n"
# 653 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 654 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 655 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmBoosterEnergy:
# 656 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the BOOSTER ENERGY.\n"
# 657 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 658 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 659 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmSoulDew:
# 660 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the SOUL DEW.\n"
# 661 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 662 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 663 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
# 664 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you!\n"
# 665 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 666 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 667 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
# 668 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Here is your prize!$"
# 669 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 670 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
# 671 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 672 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have enough Battle Points…$"
# 673 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 674 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
# 675 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 676 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have space to hold it…$"
# 677 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 678 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
# 679 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you very much.\p"
# 680 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please visit us when you have\n"
# 681 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "saved up Battle Points.$"
# 682 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 683 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
# 684 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Oh, they're so nice!\n"
# 685 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them!\l"
# 686 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Cute cushions!\l"
# 687 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Big plush DOLLS!\l"
# 688 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Little plush DOLLS!\l"
# 689 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them all!$"
# 690 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 691 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
# 692 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Leave it to your mommy!\p"
# 693 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If it's anything you want, I'll go\n"
# 694 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "through anything to get it, honey!$"
# 695 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 696 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
# 697 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If I can get hold of the items here,\n"
# 698 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "my Pokémon will get tougher.\p"
# 699 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You bet they will!\n"
# 700 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "No question about it!$"
# 701 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 702 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
# 703 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hah?\n"
# 704 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "What are you gawking at?\p"
# 705 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I don't like you staring at my plush\n"
# 706 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "doll like that.\p"
# 707 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you want it, go get one yourself!\n"
# 708 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Isn't that right, SMOOCHUM?$"
# 709 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 710 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
# 711 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Did you know?\p"
# 712 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you stretch your record at any of\n"
# 713 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the BATTLE facilities, they start\l"
# 714 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "giving you more and more Battle Points.$"
# 715 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 716 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 717 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat ATTACK of one\n"
# 718 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 719 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 720 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 721 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. ATK of one\n"
# 722 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 723 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 724 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 725 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat DEFENSE of one\n"
# 726 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 727 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 728 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 729 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. DEF of one\n"
# 730 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 731 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 732 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 733 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SPEED of one\n"
# 734 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 735 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 736 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 737 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the HP of one Pokémon.$"
# 738 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 739 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PPMaxDesc::
# 740 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the PP of a move to its\n"
# 741 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "maximum points.$"
# 742 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 743 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_AbilityShieldDesc::
# 744 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Protects the holder from having\n"
# 745 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "its ABILITY changed by others.$"
# 746 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 747 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SafetyGogglesDesc::
# 748 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Protect the holder from\n"
# 749 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "weather and powder effects.$"
# 750 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 751 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ShedShellDesc::
# 752 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Enables the holder to\n"
# 753 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "always switch out of battle.$"
# 754 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 755 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ShellBellDesc::
# 756 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Restores HP upon striking\n"
# 757 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the foe.$"
# 758 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 759 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WeaknessPolicyDesc::
# 760 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises ATTACK and SP. ATK when hit\n"
# 761 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "by a super-effective attack.$"
# 762 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 763 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_AirBalloonDesc::
# 764 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "When held, the Pokémon will float\n"
# 765 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "in the air until hit.$"
# 766 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 767 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ClearAmuletDesc::
# 768 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Protects the holder from\n"
# 769 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "others lowering its stats.$"
# 770 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 771 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 772 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "When held, gradually restores HP\n"
# 773 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "in battle.$"
# 774 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 775 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 776 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "The holder shakes off\n"
# 777 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "move-binding effects once.$"
# 778 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 779 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SitrusBerryDesc::
# 780 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Restores 1/4 HP when damaged.$"
# 781 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 782 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SalacBerryDesc::
# 783 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises SPEED when damaged.$"
# 784 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 785 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_AssaultVestDesc::
# 786 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises SP. DEF but prevents\n"
# 787 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "holder from using status moves.$"
# 788 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 789 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_FocusSashDesc::
# 790 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Prevents the holder from fainting\n"
# 791 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "from full HP.$"
# 792 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 793 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_RockyHelmetDesc::
# 794 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that hurts the opponent\n"
# 795 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "when they make contact.$"
# 796 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 797 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LoadedDiceDesc::
# 798 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Ensures the holder's multistrike\n"
# 799 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "moves hit more times.$"
# 800 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 801 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProtectivePadsDesc::
# 802 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "These pads protect the holder from\n"
# 803 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "contact effects with the opponent.$"
# 804 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 805 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PunchingGloveDesc::
# 806 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Boosts the power of punching moves\n"
# 807 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "and prevents their contact effects.$"
# 808 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 809 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ExpertBeltDesc::
# 810 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "The holder's super-effectives\n"
# 811 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "moves are more powerful.$"
# 812 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 813 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThroatSprayDesc::
# 814 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Boosts SP. ATK when the holder\n"
# 815 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "uses a sound-based move.$"
# 816 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 817 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 818 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that restores any\n"
# 819 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "lowered stat once.$"
# 820 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 821 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PowerHerbDesc::
# 822 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Allows immediate use of a\n"
# 823 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "move that charges for a turn.$"
# 824 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 825 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 826 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the holder's ATTACK,\n"
# 827 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "but allows the use of one move.$"
# 828 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 829 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceScarfDesc::
# 830 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the holder's SPEED,\n"
# 831 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "but allows the use of one move.$"
# 832 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 833 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceSpecsDesc::
# 834 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the holder's SP. ATK,\n"
# 835 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "but allows the use of one move.$"
# 836 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 837 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LifeOrbDesc::
# 838 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Boosts the power of moves at\n"
# 839 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the cost of some HP.$"
# 840 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 841 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ElectricSeedDesc::
# 842 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises DEFENSE\n"
# 843 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "on Electric Terrain.$"
# 844 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 845 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GrassySeedDesc::
# 846 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises DEFENSE\n"
# 847 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "on Grassy Terrain.$"
# 848 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 849 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MistySeedDesc::
# 850 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises SP. DEF\n"
# 851 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "on Misty Terrain.$"
# 852 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 853 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PsychicSeedDesc::
# 854 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises SP. DEF\n"
# 855 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "on Psychic Terrain.$"
# 856 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 857 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TerrainExtenderDesc::
# 858 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Extends the duration of terrain\n"
# 859 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "set by the holder.$"
# 860 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 861 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_BoosterEnergyDesc::
# 862 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "When held, boosts the strength\n"
# 863 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "of certain Pokémon.$"
# 864 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 865 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SoulDewDesc::
# 866 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises the\n"
# 867 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "power of LATIOS and LATIAS.$"
