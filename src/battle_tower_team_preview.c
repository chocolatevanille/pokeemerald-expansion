#include "global.h"
#include "battle_tower.h"
#include "event_data.h"
#include "pokemon.h"
#include "constants/battle_frontier.h"
#include "event_data.h"
#include "script.h"

// Backup storage for the player's original party
static struct Pokemon sPlayerPartyBackup[PARTY_SIZE];
static u8 sPlayerPartyCountBackup;

void LoadOpponentTeamIntoPlayerParty(void)
{
    u32 battleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);
    u8 monsCount;
    u8 i;
    
    // Determine how many Pokémon the opponent has based on battle mode
    switch (battleMode)
    {
    case FRONTIER_MODE_SINGLES:
        monsCount = FRONTIER_PARTY_SIZE_FULL;
        break;
    case FRONTIER_MODE_DOUBLES:
        monsCount = FRONTIER_DOUBLES_PARTY_SIZE;
        break;
    case FRONTIER_MODE_MULTIS:
    case FRONTIER_MODE_LINK_MULTIS:
        monsCount = FRONTIER_MULTI_PARTY_SIZE;
        break;
    default:
        monsCount = FRONTIER_PARTY_SIZE_FULL;
        break;
    }
    
    // Backup the player's original party
    for (i = 0; i < PARTY_SIZE; i++)
    {
        sPlayerPartyBackup[i] = gPlayerParty[i];
    }
    sPlayerPartyCountBackup = gPlayerPartyCount;
    
    // Clear the player's party
    ZeroPlayerPartyMons();
    
    // Copy opponent's Pokémon to player's party
    for (i = 0; i < monsCount && i < PARTY_SIZE; i++)
    {
        gPlayerParty[i] = gEnemyParty[i];
    }
    gPlayerPartyCount = monsCount;
    ScriptContext_Enable();
}

void RestorePlayerParty(void)
{
    u8 i;
    
    // Restore the player's original party
    for (i = 0; i < PARTY_SIZE; i++)
    {
        gPlayerParty[i] = sPlayerPartyBackup[i];
    }
    gPlayerPartyCount = sPlayerPartyCountBackup;

    ScriptContext_Enable();
}