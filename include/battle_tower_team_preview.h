#ifndef GUARD_BATTLE_TOWER_TEAM_PREVIEW_H
#define GUARD_BATTLE_TOWER_TEAM_PREVIEW_H

// Trainer type constants for team preview
#define TRAINER_TYPE_NONE                0
#define TRAINER_TYPE_FRONTIER            1
#define TRAINER_TYPE_EREADER             2
#define TRAINER_TYPE_FRONTIER_BRAIN      3
#define TRAINER_TYPE_RECORD_MIXED        4
#define TRAINER_TYPE_APPRENTICE          5

extern u8 trainerType;

void LoadOpponentTeamIntoPlayerParty(void);
void RestorePlayerParty(void);

#endif // GUARD_BATTLE_TOWER_TEAM_PREVIEW_H