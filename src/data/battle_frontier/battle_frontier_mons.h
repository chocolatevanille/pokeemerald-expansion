#include "constants/species.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/abilities.h"
#include "constants/battle_frontier_mons.h"
#include "constants/pokemon.h"
#include "data.h"

const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_EARTHQUAKE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_KNOCK_OFF},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_KNOCK_OFF},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_MEGA_VENUSAUR] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SYNTHESIS},
        .heldItem = ITEM_VENUSAURITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_AIR_SLASH, MOVE_FOCUS_BLAST, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SOLAR_POWER
    },
    [FRONTIER_MON_MEGA_CHARIZARD_X_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE, MOVE_ROOST},
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_MEGA_CHARIZARD_X_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLARE_BLITZ,  MOVE_EARTHQUAKE, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_CHARIZARDITE_X,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_MEGA_CHARIZARD_Y] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER,  MOVE_SOLAR_BEAM, MOVE_FOCUS_BLAST, MOVE_ROOST},
        .heldItem = ITEM_CHARIZARDITE_Y,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SOLAR_POWER
    },
    [FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SCALD, MOVE_RAPID_SPIN, MOVE_ROAR, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_FLASH_CANNON, MOVE_RAPID_SPIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_MEGA_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_RAPID_SPIN, MOVE_SCALD, MOVE_DARK_PULSE, MOVE_AURA_SPHERE},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_RAIN_DISH
    },
    [FRONTIER_MON_MEGA_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_RAIN_DISH
    },
    [FRONTIER_MON_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TAILWIND, MOVE_SUBSTITUTE, MOVE_BUG_BUZZ, MOVE_AIR_SLASH},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_MEGA_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BUTTERFRITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_MEGA_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TAILWIND, MOVE_SUBSTITUTE, MOVE_BUG_BUZZ, MOVE_AIR_SLASH},
        .heldItem = ITEM_BUTTERFRITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_TOXIC_SPIKES, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_MEGA_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_PIDGEOT] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_MEGA_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_UPROAR, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_MEGA_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE, MOVE_UPROAR, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_RETURN, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_RATICATE_3] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_RETURN, MOVE_ZEN_HEADBUTT, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_RATICATE_ALOLA_2] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_DOUBLE_HIT, MOVE_AGILITY, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_SHED_TAIL, MOVE_SEED_BOMB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERCLAP, MOVE_VOLT_SWITCH, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERCLAP, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RAICHU_5] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_SWITCH, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RAICHU_ALOLA_1] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_VOLT_SWITCH, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SURGE_SURFER
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_VOLT_SWITCH, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SURGE_SURFER
    },
    [FRONTIER_MON_RAICHU_ALOLA_3] = {
        .species = SPECIES_RAICHU_ALOLA,
        .moves = {MOVE_VOLT_SWITCH, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SURGE_SURFER
    },
    [FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_IRON_TAIL, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_SANDSLASH_3] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_SANDSTORM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_1] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_SNOWSCAPE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_SANDSLASH_ALOLA_2] = {
        .species = SPECIES_SANDSLASH_ALOLA,
        .moves = {MOVE_SNOWSCAPE, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_POISON_TOUCH
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_STEALTH_ROCK, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_POISON_TOUCH
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_THUNDER_WAVE, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 0, 172, 72, 0, 12),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_CLEFABLE_5] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_MOONBLAST, MOVE_KNOCK_OFF, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_CLEFABLE_6] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MOONBLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_FOUL_PLAY, MOVE_HEALING_WISH},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_SUBSTITUTE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_NINETALES_ALOLA_1] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_MOONBLAST, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_NINETALES_ALOLA_2] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_MOONBLAST, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_NASTY_PLOT},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_NINETALES_ALOLA_3] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_STORED_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_NINETALES_ALOLA_4] = {
        .species = SPECIES_NINETALES_ALOLA,
        .moves = {MOVE_MOONBLAST, MOVE_BLIZZARD, MOVE_NASTY_PLOT, MOVE_DARK_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_TRI_ATTACK, MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 6, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_TRI_ATTACK, MOVE_MOONBLAST, MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 6, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_ROOST, MOVE_DEFOG, MOVE_CROSS_POISON, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_AIR_SLASH, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_WAVE, MOVE_SUBSTITUTE, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_WAVE, MOVE_SUBSTITUTE, MOVE_SYNTHESIS},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_FLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SWORDS_DANCE, MOVE_LEECH_LIFE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SEED_BOMB, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_PSYCHIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_PSYCHIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_REVERSAL, MOVE_STONE_EDGE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ARENA_TRAP
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_CUT, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ARENA_TRAP
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_AERIAL_ACE, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ARENA_TRAP
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_1] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TANGLING_HAIR
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_2] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TANGLING_HAIR
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_3] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_FORCE
    },
    [FRONTIER_MON_DUGTRIO_ALOLA_4] = {
        .species = SPECIES_DUGTRIO_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_FORCE
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_POWER_GEM, MOVE_HYPER_VOICE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_3] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_POWER_GEM, MOVE_HYPER_VOICE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_ALOLA_1] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_ALOLA_2] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_POWER_GEM, MOVE_DARK_PULSE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_ALOLA_3] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_POWER_GEM, MOVE_DARK_PULSE, MOVE_SURF, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_PERSIAN_ALOLA_4] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SEED_BOMB, MOVE_PLAY_ROUGH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_PERSIAN_ALOLA_5] = {
        .species = SPECIES_PERSIAN_ALOLA,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SEED_BOMB, MOVE_PLAY_ROUGH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_NEUROFORCE
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_AQUA_JET},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_NEUROFORCE
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_AQUA_JET},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILL_O_WISP, MOVE_IRON_TAIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_ARCANINE_HISUI_1] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_ARCANINE_HISUI_2] = {
        .species = SPECIES_ARCANINE_HISUI,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_ICE_PUNCH, MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BULK_UP, MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_POLIWRATH_3] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_ICE_PUNCH, MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_POLIWRATH_4] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_ICE_PUNCH, MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_ALAKAZAM_1] = {                
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_ALAKAZAM_2] = {                
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_ALAKAZAM_3] = {                
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_MEGA_ALAKAZAM_1] = {                
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_MEGA_ALAKAZAM_2] = {                
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ALAKAZITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_MACHAMP_1] = {                
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_MACHAMP_2] = {                
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STEADFAST
    },
    [FRONTIER_MON_MACHAMP_3] = {                
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_MEGA_MACHAMP] = {                
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_STONE_EDGE},
        .heldItem = ITEM_MACHAMPITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STEADFAST
    },
    [FRONTIER_MON_VICTREEBEL_1] = {                
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_POWER_WHIP, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_VICTREEBEL_2] = {                
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SOLAR_BLADE, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_VICTREEBEL_3] = {                
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_POWER_WHIP, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_CUT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_TENTACRUEL_1] = {                
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SCALD, MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_RAPID_SPIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_TENTACRUEL_2] = {                
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SCALD, MOVE_SLUDGE_WAVE, MOVE_TOXIC_SPIKES, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_GOLEM_1] = {                
        .species = SPECIES_GOLEM,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_GOLEM_2] = {                
        .species = SPECIES_GOLEM,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_GOLEM_ALOLA_1] = {                
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_RAPID_SPIN, MOVE_VOLT_TACKLE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_GOLEM_ALOLA_2] = {                
        .species = SPECIES_GOLEM_ALOLA,
        .moves = {MOVE_EARTHQUAKE, MOVE_VOLT_TACKLE, MOVE_STONE_EDGE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_RAPIDASH_1] = {                
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_MEGAHORN, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_RAPIDASH_2] = {                
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_LASH, MOVE_JUMP_KICK, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BLAZING_SOUL
    },
    [FRONTIER_MON_RAPIDASH_3] = {                
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_LASH, MOVE_JUMP_KICK, MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BLAZING_SOUL
    },
    [FRONTIER_MON_RAPIDASH_GALAR_1] = {                
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_HEALING_WISH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_RAPIDASH_GALAR_2] = {                
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_HEALING_WISH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_RAPIDASH_GALAR_3] = {                
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_MEGAHORN, MOVE_WILD_CHARGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_RAPIDASH_GALAR_4] = {                
        .species = SPECIES_RAPIDASH_GALAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_MEGAHORN, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_SLOWBRO_1] = {                
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_YAWN, MOVE_PSYSHOCK, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWBRO_2] = {                
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MEGA_SLOWBRO] = {                
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_SLACK_OFF, MOVE_CALM_MIND},
        .heldItem = ITEM_SLOWBRONITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWBRO_GALAR_1] = {                
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ICE_BEAM, MOVE_SLACK_OFF, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWBRO_GALAR_2] = {                
        .species = SPECIES_SLOWBRO_GALAR,
        .moves = {MOVE_SHELL_SIDE_ARM, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MAGNEZONE_1] = {                
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGNET_PULL
    },
    [FRONTIER_MON_MAGNEZONE_2] = {                
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_MAGNEZONE_3] = {                
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_MAGNEZONE_4] = {                
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_FARFETCHD_1] = {                
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_FARFETCHD_2] = {                
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_BRAVE_BIRD, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_FARFETCHD_GALAR_1] = {                
        .species = SPECIES_FARFETCHD_GALAR,
        .moves = {MOVE_FINAL_GAMBIT, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_FARFETCHD_GALAR_2] = {                
        .species = SPECIES_FARFETCHD_GALAR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_FARFETCHD_GALAR_3] = {                
        .species = SPECIES_FARFETCHD_GALAR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_DODRIO_1] = {                
        .species = SPECIES_DODRIO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_DODRIO_2] = {                
        .species = SPECIES_DODRIO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_DODRIO_3] = {                
        .species = SPECIES_DODRIO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_U_TURN},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_DEWGONG_1] = {                
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_SCALD, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ICE_SCALES
    },
    [FRONTIER_MON_DEWGONG_2] = {                
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_SCALD, MOVE_ICE_SHARD, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ICE_SCALES
    },
    [FRONTIER_MON_MUK_1] = {                
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_MEMENTO, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MUK_2] = {                
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_MEMENTO, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MUK_3] = {                
        .species = SPECIES_MUK,
        .moves = {MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MUK_ALOLA_1] = {                
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_POWER_OF_ALCHEMY
    },
    [FRONTIER_MON_MUK_ALOLA_2] = {                
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_POWER_OF_ALCHEMY
    },
    [FRONTIER_MON_MUK_ALOLA_3] = {                
        .species = SPECIES_MUK_ALOLA,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_POWER_OF_ALCHEMY
    },
    [FRONTIER_MON_CLOYSTER_1] = {                
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_CLOYSTER_2] = {                
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_RAPID_SPIN, MOVE_ICE_SPINNER, MOVE_ICE_SHARD, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_GENGAR_1] = {                
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_GENGAR_2] = {                
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_GENGAR_3] = {                
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_GENGAR] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_CURSE, MOVE_ICE_FANG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_CURSE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_CURSE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_MEGA_STEELIX] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_GYRO_BALL, MOVE_CURSE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYSHOCK, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_PSYSHOCK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_X_SCISSOR},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_MEGA_KINGLER] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_AQUA_JET, MOVE_CRABHAMMER, MOVE_METEOR_MASH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_KINGLERITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_TRI_ATTACK, MOVE_TAUNT, MOVE_EXPLOSION, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_GALVANIZE
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_TRI_ATTACK, MOVE_EXPLOSION, MOVE_FOCUS_BLAST, MOVE_FLASH_CANNON},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_GALVANIZE
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_TRI_ATTACK, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GALVANIZE
    },
    [FRONTIER_MON_ELECTRODE_HISUI_1] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_TAUNT, MOVE_CHLOROBLAST, MOVE_GIGA_DRAIN, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_ELECTRODE_HISUI_2] = {
        .species = SPECIES_ELECTRODE_HISUI,
        .moves = {MOVE_THUNDERBOLT, MOVE_CHLOROBLAST, MOVE_GIGA_DRAIN, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CHLOROBLAST, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CHLOROBLAST, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CHLOROBLAST, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CHLOROBLAST, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_EXEGGUTOR_5] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CHLOROBLAST, MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_1] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_METEOR, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_2] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_3] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_METEOR, MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_4] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_METEOR, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_5] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_METEOR, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BONE_ZONE
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BONE_ZONE
    },
    [FRONTIER_MON_MAROWAK_ALOLA] = {
        .species = SPECIES_MAROWAK_ALOLA,
        .moves = {MOVE_BONEMERANG, MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BONE_ZONE
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_HITMONLEE_3] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_HITMONCHAN_3] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_HITMONCHAN_4] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_CLEAR_SMOG, MOVE_WILL_O_WISP, MOVE_SLUDGE_WAVE, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_TOXIC_DEBRIS
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_GUNK_SHOT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_GYRO_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_NEUTRALIZING_GAS
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_FLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_WEEZING_GALAR_1] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_DEFOG, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NEUTRALIZING_GAS
    },
    [FRONTIER_MON_WEEZING_GALAR_2] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_OVERHEAT, MOVE_MISTY_EXPLOSION},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NEUTRALIZING_GAS
    },
    [FRONTIER_MON_WEEZING_GALAR_3] = {
        .species = SPECIES_WEEZING_GALAR,
        .moves = {MOVE_STRANGE_STEAM, MOVE_SLUDGE_BOMB, MOVE_OVERHEAT, MOVE_MISTY_EXPLOSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NEUTRALIZING_GAS
    },
    [FRONTIER_MON_RHYPERIOR_1] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_HAMMER_ARM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RHYPERIOR_2] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_HAMMER_ARM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_RHYPERIOR_3] = {
        .species = SPECIES_RHYPERIOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_CHANSEY] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SOFT_BOILED, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SOFT_BOILED, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SOFT_BOILED, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_TANGROWTH_1] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_KNOCK_OFF, MOVE_VINE_WHIP, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TANGROWTH_2] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_KNOCK_OFF, MOVE_VINE_WHIP, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_TANGROWTH_3] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_KNOCK_OFF, MOVE_VINE_WHIP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TANGROWTH_4] = {
        .species = SPECIES_TANGROWTH,
        .moves = {MOVE_KNOCK_OFF, MOVE_VINE_WHIP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_MEGA_KANGASKHAN] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_KANGASKHANITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_RAIN_DANCE, MOVE_HURRICANE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SCALD, MOVE_DRACO_METEOR, MOVE_RAIN_DANCE, MOVE_HURRICANE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_SCALE_SHOT, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_AGILITY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_AGILITY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_SEAKING_3] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_SEAKING_4] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_FLIP_TURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_RAPID_SPIN, MOVE_SCALD, MOVE_RECOVER, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_GRASS_KNOT, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUMINATE
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAPID_SPIN, MOVE_ICE_BEAM},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUMINATE
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAPID_SPIN, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUMINATE
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_TAUNT, MOVE_MOONBLAST},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_PSYCHO_BOOST, MOVE_MOONBLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_MR_RIME_1] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_CALM_MIND, MOVE_SLACK_OFF, MOVE_PSYCHIC, MOVE_FREEZY_FROST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SCREEN_CLEANER
    },
    [FRONTIER_MON_MR_RIME_2] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_NASTY_PLOT, MOVE_ENERGY_BALL, MOVE_PSYSHOCK, MOVE_FREEZY_FROST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SCREEN_CLEANER
    },
    [FRONTIER_MON_MR_RIME_3] = {
        .species = SPECIES_MR_RIME,
        .moves = {MOVE_RAPID_SPIN, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FREEZY_FROST},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SCREEN_CLEANER
    },
    [FRONTIER_MON_SCYTHER] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_POUNCE, MOVE_PURSUIT, MOVE_TRAILBLAZE, MOVE_U_TURN},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_POUNCE, MOVE_PURSUIT, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_PURSUIT, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MEGA_SCIZOR_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_POUNCE, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MEGA_SCIZOR_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_POUNCE, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MEGA_SCIZOR_3] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_BULLET_PUNCH, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_SCIZORITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_KLEAVOR_1] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_ACCELEROCK, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KLEAVOR_2] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KLEAVOR_3] = {
        .species = SPECIES_KLEAVOR,
        .moves = {MOVE_STONE_AXE, MOVE_U_TURN, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_GRASS_KNOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_GRASS_KNOT},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_ELECTIVIRE_1] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_PLASMA_FISTS, MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_ELECTIVIRE_2] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_PLASMA_FISTS, MOVE_QUICK_ATTACK, MOVE_BULK_UP, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_ELECTIVIRE_3] = {
        .species = SPECIES_ELECTIVIRE,
        .moves = {MOVE_PLASMA_FISTS, MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MAGMORTAR_1] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_3] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_5] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_MEGAHORN, MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_MEGAHORN, MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_MEGA_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_MEGAHORN, MOVE_QUICK_ATTACK, MOVE_RETURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_MEGA_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_MEGAHORN, MOVE_QUICK_ATTACK, MOVE_RETURN, MOVE_HIGH_HORSEPOWER},
        .heldItem = ITEM_PINSIRITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_TAUROS_5] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_1] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_2] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_3] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_TAUROS_PALDEA_COMBAT_4] = {
        .species = SPECIES_TAUROS_PALDEA_COMBAT,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_1] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_PALDEA_BLAZE_2] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_1] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_WAVE_CRASH, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_TAUROS_PALDEA_AQUA_2] = {
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_WAVE_CRASH, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_SUBSTITUTE, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_BOUNCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_SUBSTITUTE, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_BOUNCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_BOUNCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_WATERFALL, MOVE_TOXIC},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_WATERFALL, MOVE_ICE_FANG},
        .heldItem = ITEM_GYARADOSITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_WATERFALL, MOVE_SUBSTITUTE},
        .heldItem = ITEM_GYARADOSITE,
        .ev = TRAINER_PARTY_EVS(88, 220, 4, 0, 0, 196),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_ICE_BEAM, MOVE_SCALD, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_MEGA_LAPRAS] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_BOOMBURST, MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LAPRASITE,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_RELAXED,
        .ability = ABILITY_IMPOSTER
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_ACID_ARMOR, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUPERPOWER, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUPERPOWER, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUPERPOWER, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TOXIC_BOOST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDER, MOVE_ALLURING_VOICE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_FIERY_DANCE},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_FIERY_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_FIERY_DANCE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_FIERY_DANCE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_MEAN_LOOK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_KNOCK_OFF, MOVE_MOONLIGHT, MOVE_MEAN_LOOK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FOUL_PLAY, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_LEAFEON_1] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SAPPY_SEED, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_LEAFEON_2] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SOLAR_BLADE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_LEAFEON_3] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SAPPY_SEED, MOVE_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_LEAFEON_4] = {
        .species = SPECIES_LEAFEON,
        .moves = {MOVE_SAPPY_SEED, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_SOLAR_BLADE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_GLACEON_1] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SNOWSCAPE, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_GLACEON_2] = {
        .species = SPECIES_GLACEON,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_SNOWSCAPE, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_SYLVEON_1] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PIXILATE
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PIXILATE
    },
    [FRONTIER_MON_SYLVEON_3] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PIXILATE
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_RECOVER, MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 136, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_RECOVER, MOVE_TRICK_ROOM, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_PORYGON_Z_1] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_NASTY_PLOT, MOVE_AGILITY, MOVE_TRI_ATTACK, MOVE_DARK_PULSE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PORYGON_Z_2] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_NASTY_PLOT, MOVE_AGILITY, MOVE_TRI_ATTACK, MOVE_DARK_PULSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PORYGON_Z_3] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_TRICK, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PORYGON_Z_4] = {
        .species = SPECIES_PORYGON_Z,
        .moves = {MOVE_AGILITY, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_DARK_PULSE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_METEOR_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_METEOR_BEAM, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_OMASTAR_3] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_AQUA_CUTTER, MOVE_AQUA_JET, MOVE_STONE_EDGE, MOVE_NIGHT_SLASH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_AQUA_CUTTER, MOVE_AQUA_JET, MOVE_STONE_EDGE, MOVE_SACRED_SWORD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_U_TURN, MOVE_TAUNT, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_TAILWIND, MOVE_TAUNT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE, MOVE_ICE_FANG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_AERODACTYL] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_DANCE, MOVE_STONE_EDGE, MOVE_ICE_FANG},
        .heldItem = ITEM_AERODACTYLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MEGA_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_REST},
        .heldItem = ITEM_SNORLAXITE,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MEGA_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_SNORLAXITE,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_HURRICANE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_ROOST, MOVE_HURRICANE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_ROOST, MOVE_TAILWIND, MOVE_AIR_SLASH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_1] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_HURRICANE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_GALAR_2] = {
        .species = SPECIES_ARTICUNO_GALAR,
        .moves = {MOVE_FOCUS_BLAST, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_VOLT_SWITCH, MOVE_HURRICANE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_VOLT_SWITCH, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_VOLT_SWITCH, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_DEFOG, MOVE_VOLT_SWITCH, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_DEFOG, MOVE_VOLT_SWITCH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_ZAPDOS_GALAR_1] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_BULK_UP, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ZAPDOS_GALAR_2] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ZAPDOS_GALAR_3] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ZAPDOS_GALAR_4] = {
        .species = SPECIES_ZAPDOS_GALAR,
        .moves = {MOVE_THUNDEROUS_KICK, MOVE_DRILL_PECK, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_BURN_UP, MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_BURN_UP, MOVE_U_TURN, MOVE_AIR_SLASH, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_MOLTRES_GALAR_1] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BERSERK
    },
    [FRONTIER_MON_MOLTRES_GALAR_2] = {
        .species = SPECIES_MOLTRES_GALAR,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIERY_WRATH, MOVE_HURRICANE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BERSERK
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ROOST, MOVE_EXTREME_SPEED, MOVE_DRAGON_HAMMER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREME_SPEED, MOVE_DRAGON_HAMMER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_ICE_SPINNER, MOVE_EXTREME_SPEED, MOVE_DRAGON_HAMMER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_MEWTWO_1] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEWTWO_2] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEWTWO_3] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_MEWTWO_X_1] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_PSYCHIC, MOVE_SUPERCELL_SLAM, MOVE_KNOCK_OFF},
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_MEWTWO_X_2] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_RECOVER, MOVE_BULK_UP},
        .heldItem = ITEM_MEWTWONITE_X,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_MEWTWO_Y_1] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_ICE_BEAM},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_MEWTWO_Y_2] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEGA_MEWTWO_Y_3] = {
        .species = SPECIES_MEWTWO,
        .moves = {MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_MEWTWONITE_Y,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_MEW_1] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_TAUNT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_MEW_2] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_MEW_3] = {
        .species = SPECIES_MEW,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_LEAF_STORM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_TRIAGE
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_LEAF_STORM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_TRIAGE
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PETAL_BLIZZARD, MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BLAZING_SOUL
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BLAZING_SOUL
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_1] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_ERUPTION, MOVE_SHADOW_BALL, MOVE_BURN_UP, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_2] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_ERUPTION, MOVE_SHADOW_BALL, MOVE_BURN_UP, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_TYPHLOSION_HISUI_3] = {
        .species = SPECIES_TYPHLOSION_HISUI,
        .moves = {MOVE_ERUPTION, MOVE_SHADOW_BALL, MOVE_BURN_UP, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_DRAGON_DANCE, MOVE_TRIPLE_DIVE, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_AQUA_JET, MOVE_TRIPLE_DIVE, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_DIVE, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_TRIPLE_DIVE, MOVE_JAW_LOCK, MOVE_ICE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_FERALIGATR_5] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_TRIPLE_DIVE, MOVE_JAW_LOCK, MOVE_ICE_FANG, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_COIL, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_FURRET_3] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_NASTY_PLOT, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_PSYCHIC, MOVE_DEFOG},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_LEDIAN_1] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_LEDIAN_2] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_COMET_PUNCH, MOVE_MACH_PUNCH, MOVE_U_TURN, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_LEDIAN_3] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_FIRST_IMPRESSION, MOVE_LUNGE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_ARIADOS_1] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_STICKY_WEB, MOVE_MEGAHORN, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_ARIADOS_2] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_MEGAHORN, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_ARIADOS_3] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_MEGAHORN, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SCALD, MOVE_VOLT_SWITCH, MOVE_ICE_BEAM, MOVE_PARABOLIC_CHARGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PARABOLIC_CHARGE, MOVE_ICE_BEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_BLIZZARD, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ILLUMINATE
    },
    [FRONTIER_MON_TOGEKISS_1] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_TOGEKISS_2] = {
        .species = SPECIES_TOGEKISS,
        .moves = {MOVE_THUNDER_WAVE, MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_GRASS_KNOT, MOVE_AIR_SLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DEFOG, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_DRAGON_PULSE, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FOCUS_BLAST, MOVE_COTTON_GUARD, MOVE_TAIL_GLOW},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_MEGA_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_COTTON_GUARD, MOVE_TAIL_GLOW},
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_MEGA_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRACO_METEOR, MOVE_POWER_GEM, MOVE_TAIL_GLOW},
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_QUIVER_DANCE, MOVE_PETAL_DANCE, MOVE_MOONBLAST, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONBLAST, MOVE_SLUDGE_BOMB, MOVE_FLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_LIQUIDATION},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUGE_POWER
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_LIQUIDATION, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUGE_POWER
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_STONE_EDGE, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_SWAGGER},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_U_TURN, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AERILATE
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_ACROBATICS, MOVE_U_TURN, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_AMBIPOM_1] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_TRIPLE_AXEL, MOVE_FAKE_OUT, MOVE_ARM_THRUST, MOVE_FURY_SWIPES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_AMBIPOM_2] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_TRIPLE_AXEL, MOVE_FAKE_OUT, MOVE_ARM_THRUST, MOVE_FURY_SWIPES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_AMBIPOM_3] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_QUICK_ATTACK, MOVE_TRIPLE_AXEL, MOVE_ARM_THRUST, MOVE_FURY_SWIPES},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_AMBIPOM_4] = {
        .species = SPECIES_AMBIPOM,
        .moves = {MOVE_QUICK_ATTACK, MOVE_TRIPLE_AXEL, MOVE_ARM_THRUST, MOVE_FURY_SWIPES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOLAR_POWER
    },
    [FRONTIER_MON_YANMEGA_1] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_YANMEGA_2] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_YANMEGA_3] = {
        .species = SPECIES_YANMEGA,
        .moves = {MOVE_LEECH_LIFE, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_CLODSIRE_1] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_GUNK_SHOT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_CLODSIRE_2] = {
        .species = SPECIES_CLODSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_GUNK_SHOT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_HONCHKROW_1] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_HONCHKROW_2] = {
        .species = SPECIES_HONCHKROW,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_SLACK_OFF, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SCALD, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_NASTY_PLOT, MOVE_FUTURE_SIGHT, MOVE_SCALD, MOVE_SLACK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_NASTY_PLOT, MOVE_TRICK_ROOM, MOVE_SCALD, MOVE_SLACK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_5] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYSHOCK, MOVE_SLACK_OFF, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_GALAR_1] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_SLUDGE_WAVE, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_GALAR_2] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SLOWKING_GALAR_3] = {
        .species = SPECIES_SLOWKING_GALAR,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_SLUDGE_WAVE, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MISMAGIUS_1] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MISMAGIUS_2] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MISMAGIUS_3] = {
        .species = SPECIES_MISMAGIUS,
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_WOBBUFFET] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 136, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SHADOW_TAG
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GIRAFARIG_3] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_VOLT_SWITCH, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_DUDUNSPARCE_1] = {
        .species = SPECIES_DUDUNSPARCE_THREE_SEGMENT,
        .moves = {MOVE_CALM_MIND, MOVE_BOOMBURST, MOVE_SHADOW_BALL, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_DUDUNSPARCE_2] = {
        .species = SPECIES_DUDUNSPARCE_THREE_SEGMENT,
        .moves = {MOVE_COIL, MOVE_BODY_SLAM, MOVE_DRAGON_RUSH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_GLISCOR_1] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_SUBSTITUTE, MOVE_TOXIC},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_POISON_HEAL
    },
    [FRONTIER_MON_GLISCOR_2] = {
        .species = SPECIES_GLISCOR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROOST, MOVE_FACADE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_POISON_HEAL
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_JAW_LOCK, MOVE_CRUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BULL_RUSH
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_LIQUIDATION, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_LIQUIDATION, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOXIC_DEBRIS
    },
    [FRONTIER_MON_QWILFISH_3] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_EXPLOSION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_OVERQWIL_1] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP, MOVE_LIQUIDATION},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_OVERQWIL_2] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_FLIP_TURN, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP, MOVE_LIQUIDATION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_OVERQWIL_3] = {
        .species = SPECIES_OVERQWIL,
        .moves = {MOVE_FLIP_TURN, MOVE_GUNK_SHOT, MOVE_THROAT_CHOP, MOVE_LIQUIDATION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOXIC_DEBRIS
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_STICKY_WEB, MOVE_STEALTH_ROCK, MOVE_ENCORE, MOVE_FINAL_GAMBIT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SOLID_ROCK
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_POWER_TRICK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_GYRO_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_MEGA_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, MOVE_ROCK_BLAST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HERACRONITE,
        .ev = TRAINER_PARTY_EVS(240, 136, 0, 0, 0, 132),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_MEGA_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, MOVE_ROCK_BLAST, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HERACRONITE,
        .ev = TRAINER_PARTY_EVS(240, 136, 0, 0, 0, 132),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_WEAVILE_1] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_WEAVILE_2] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_TRIPLE_AXEL, MOVE_LOW_SWEEP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_WEAVILE_3] = {
        .species = SPECIES_WEAVILE,
        .moves = {MOVE_KNOCK_OFF, MOVE_ICE_SHARD, MOVE_TRIPLE_AXEL, MOVE_LOW_SWEEP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_SNEASLER_1] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_THROAT_CHOP, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_POISON_TOUCH
    },
    [FRONTIER_MON_SNEASLER_2] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_THROAT_CHOP, MOVE_U_TURN},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_POISON_TOUCH
    },
    [FRONTIER_MON_SNEASLER_3] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_FAKE_OUT, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_POISON_TOUCH
    },
    [FRONTIER_MON_SNEASLER_4] = {
        .species = SPECIES_SNEASLER,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_SWORDS_DANCE, MOVE_ACROBATICS},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNBURDEN
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_MAMOSWINE_1] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_CORSOLA_1] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_CORSOLA_2] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_CURSOLA_1] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_HEX},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_CURSOLA_2] = {
        .species = SPECIES_CURSOLA,
        .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_HEX},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PERISH_BODY
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_SCALD, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_GUNK_SHOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MILD,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_DELIBIRD_1] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_SPIKES, MOVE_RAPID_SPIN, MOVE_ICE_SHARD, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_DELIBIRD_2] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLIP_TURN, MOVE_BRAVE_BIRD, MOVE_SEED_BOMB},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_DELIBIRD_3] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_RETURN, MOVE_FLIP_TURN, MOVE_BRAVE_BIRD, MOVE_SEED_BOMB},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SCALD, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_MANTINE_3] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_ROOST, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_MEGA_HOUNDOOM] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HOUNDOOMINITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_WYRDEER_1] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_WYRDEER_2] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_WYRDEER_3] = {
        .species = SPECIES_WYRDEER,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPORE, MOVE_STEALTH_ROCK, MOVE_STICKY_WEB, MOVE_NUZZLE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOODY
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_SUCKER_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_SUCKER_PUNCH, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_CURSE, MOVE_HEAL_BELL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_CALM_MIND, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_SCALD, MOVE_CALM_MIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_SLEEP_TALK, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SCALD, MOVE_REST, MOVE_ROAR, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_TAILWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_PURSUIT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_MEGA_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_TYRANITARITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_MEGA_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_TYRANITARITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_LUGIA_1] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_AEROBLAST, MOVE_PSYCHIC, MOVE_ROOST, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_LUGIA_2] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_AEROBLAST, MOVE_PSYCHIC, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_LUGIA_3] = {
        .species = SPECIES_LUGIA,
        .moves = {MOVE_AEROBLAST, MOVE_PSYCHIC, MOVE_ROOST, MOVE_SURF},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_HO_OH_1] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_HO_OH_2] = {
        .species = SPECIES_HO_OH,
        .moves = {MOVE_SACRED_FIRE, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_CELEBI_1] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_CELEBI_2] = {
        .species = SPECIES_CELEBI,
        .moves = {MOVE_LEAF_STORM, MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_DRACO_METEOR, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNBURDEN
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_DRACO_METEOR, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_MEGA_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_SYNTHESIS},
        .heldItem = ITEM_SCEPTILITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_MEGA_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SCEPTILITE,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_MEGA_BLAZIKEN] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BLAZIKENITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_MEGA_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_FLIP_TURN},
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_MEGA_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_SUPERPOWER, MOVE_STONE_EDGE},
        .heldItem = ITEM_SWAMPERTITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_HOWL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_MIGHTYENA_3] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_MIGHTYENA_4] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_LINOONE_GALAR_1] = {
        .species = SPECIES_LINOONE_GALAR,
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_DOUBLE_EDGE, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_LINOONE_GALAR_2] = {
        .species = SPECIES_LINOONE_GALAR,
        .moves = {MOVE_KNOCK_OFF, MOVE_PURSUIT, MOVE_DOUBLE_EDGE, MOVE_GUNK_SHOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUICK_FEET
    },
    [FRONTIER_MON_DUSTOX_1] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_DUSTOX_2] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_TOXIC, MOVE_MOONLIGHT, MOVE_PROTECT, MOVE_VENOSHOCK},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_BEAUTIFLY_1] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_BEAUTIFLY_2] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_LEAF_STORM, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_STORM, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_STORM, MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_HEAT_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AERILATE
    },
    [FRONTIER_MON_SWELLOW_3] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AERILATE
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HURRICANE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_PELIPPER_3] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_PELIPPER_4] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_DEFOG, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_MEGA_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_MEGA_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_GARDEVOIRITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_GALLADE_1] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_GALLADE_2] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_TRIPLE_AXEL, MOVE_TRICK},
        .heldItem = ITEM_MUSCLE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_GALLADE_3] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_TRIPLE_AXEL, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_MEGA_GALLADE] = {
        .species = SPECIES_GALLADE,
        .moves = {MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_STICKY_WEB, MOVE_U_TURN, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_SPORE, MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TRUANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TRUANT
    },
    [FRONTIER_MON_NINJASK] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_U_TURN, MOVE_AERIAL_ACE, MOVE_NIGHT_SLASH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_SHEDINJA_1] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_X_SCISSOR, MOVE_WILL_O_WISP, MOVE_TOXIC},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WONDER_GUARD
    },
    [FRONTIER_MON_SHEDINJA_2] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_CLAW, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WONDER_GUARD
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_FOCUS_BLAST, MOVE_FIRE_BLAST, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_FOCUS_BLAST, MOVE_FIRE_BLAST, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_FOCUS_BLAST, MOVE_FIRE_BLAST, MOVE_ICE_BEAM},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_SURF, MOVE_FLAMETHROWER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_PROBOPASS_1] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_PROBOPASS_2] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_PROBOPASS_3] = {
        .species = SPECIES_PROBOPASS,
        .moves = {MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_DELCATTY_3] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_NASTY_PLOT, MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_DELCATTY_4] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_HYPER_VOICE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_SABLEYE] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_TAUNT, MOVE_WILL_O_WISP, MOVE_RECOVER, MOVE_FOUL_PLAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_MEGA_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_SABLENITE,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_MEGA_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DARK_PULSE, MOVE_RECOVER},
        .heldItem = ITEM_SABLENITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_MAWILE_1] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DOUBLE_IRON_BASH, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_MAWILE_2] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DOUBLE_IRON_BASH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_MEGA_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DOUBLE_IRON_BASH, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MAWILITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_AQUA_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_MEGA_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_MEGA_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_AGGRONITE,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PURE_POWER
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PURE_POWER
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_POISON_JAB},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PURE_POWER
    },
    [FRONTIER_MON_MEGA_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_FAKE_OUT},
        .heldItem = ITEM_MEDICHAMITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PURE_POWER
    },
    [FRONTIER_MON_MEGA_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_TRIPLE_AXEL, MOVE_BLAZE_KICK},
        .heldItem = ITEM_MEDICHAMITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PURE_POWER
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_MEGA_MANECTRIC] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER},
        .heldItem = ITEM_MANECTITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRANSISTOR
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDER, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH, MOVE_SURF},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRANSISTOR
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GALVANIZE
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GALVANIZE
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_TAIL_GLOW, MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_BUG_BUZZ},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_TAILWIND, MOVE_THUNDER_WAVE, MOVE_DEFOG, MOVE_BUG_BUZZ},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_VOLBEAT_3] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_VOLT_SWITCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUMINATE
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DEFOG, MOVE_U_TURN, MOVE_TAILWIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_ICE_PUNCH, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_ROSERADE_1] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_ROSERADE_2] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_ROSERADE_3] = {
        .species = SPECIES_ROSERADE,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_LEAF_STORM, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_POISON_POINT
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_SWALOT_3] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_MEGA_SHARPEDO] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_AQUA_JET, MOVE_AQUA_FANG, MOVE_CRUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_SHARPEDONITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SUBSTITUTE, MOVE_AQUA_RING, MOVE_PROTECT, MOVE_SCALD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_PROTECT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_AURA_SPHERE, MOVE_HYDRO_PUMP, MOVE_WATER_SPOUT, MOVE_ICE_BEAM},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_FIRE_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOLID_ROCK
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOLID_ROCK
    },
    [FRONTIER_MON_MEGA_CAMERUPT] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_SCALD, MOVE_SLACK_OFF},
        .heldItem = ITEM_CAMERUPTITE,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGMA_ARMOR
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_LAVA_PLUME, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_ERUPTION, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_TORKOAL_3] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_SHELL_SMASH, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SLACK_OFF, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_POWER_GEM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_GRUMPIG_3] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_POWER_GEM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_SPINDA_1] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_ICE_PUNCH, MOVE_RETURN, MOVE_SUPERPOWER, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SPINDA_2] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_SUPERPOWER, MOVE_RETURN, MOVE_ICE_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SPINDA_3] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_SUPERPOWER, MOVE_RETURN, MOVE_ICE_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_U_TURN, MOVE_IRON_TAIL},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SEED_BOMB, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_CACTURNE_3] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_CACTURNE_4] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_CACTURNE_5] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SEED_BOMB, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLOUD_NINE
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_MOONBLAST, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_MEGA_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_RETURN, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_MEGA_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_ALTARIANITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CLOUD_NINE
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_TOXIC_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOXIC_BOOST
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_ZANGOOSE_3] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_NIGHT_SLASH, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_DARK_PULSE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_LUMINA_CRASH, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_LUMINA_CRASH, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LUNATONE_3] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_LUMINA_CRASH, MOVE_MOONBLAST, MOVE_METEOR_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_FLARE_BLITZ, MOVE_PHOTON_GEYSER, MOVE_MORNING_SUN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_PHOTON_GEYSER, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_SOLROCK_3] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_PHOTON_GEYSER, MOVE_FLARE_BLITZ, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_SPIKES, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_CRAWDAUNT_3] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_PSYCHIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_TRICK_ROOM, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_SAPPY_SEED, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_EARTHQUAKE, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_SWORDS_DANCE, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_SWORDS_DANCE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_BOUNCY_BUBBLE, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MARVEL_SCALE
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MARVEL_SCALE
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_BOUNCY_BUBBLE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MARVEL_SCALE
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_HURRICANE, MOVE_THUNDER, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FORECAST
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FORECAST
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_IRON_TAIL, MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_IRON_TAIL, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_KECLEON_3] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_POLTERGEIST, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WANDERING_SPIRIT
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_POLTERGEIST, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WANDERING_SPIRIT
    },
    [FRONTIER_MON_MEGA_BANETTE] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_POLTERGEIST, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_BANETTITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WANDERING_SPIRIT
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_NIGHT_SHADE, MOVE_ICE_BEAM},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_REST, MOVE_ICE_BEAM},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DUSKNOIR_1] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_DUSKNOIR_2] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_DUSKNOIR_3] = {
        .species = SPECIES_DUSKNOIR,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_ENERGY_BALL, MOVE_DRAGON_PULSE, MOVE_ROOST, MOVE_LEECH_SEED},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_ENERGY_BALL, MOVE_FLASH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_TROPIUS_3] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SUPER_LUCK
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SUPER_LUCK
    },
    [FRONTIER_MON_MEGA_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_NIGHT_SLASH, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_MEGA_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_X_SCISSOR},
        .heldItem = ITEM_ABSOLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SWITCHEROO},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_MEGA_GLALIE] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_GLALITITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_FROSLASS_1] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_SPIKES, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_FROSLASS_2] = {
        .species = SPECIES_FROSLASS,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_SPIKES},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_BELLY_DRUM, MOVE_LIQUIDATION, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WATERFALL, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_COIL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GOREBYSS] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MOONBLAST},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DAZZLING
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_STEALTH_ROCK, MOVE_WATERFALL, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_TEMPER_FLARE, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DEFOG, MOVE_ROOST, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_RETURN, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE, MOVE_ROOST},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_RETURN, MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_ROOST},
        .heldItem = ITEM_SALAMENCITE,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_AGILITY, MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_MEGA_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH, MOVE_HAMMER_ARM},
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_MEGA_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_AGILITY},
        .heldItem = ITEM_METAGROSSITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_SOLID_ROCK
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_FREEZY_FROST, MOVE_THUNDERBOLT, MOVE_SEISMIC_TOSS, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_FREEZY_FROST, MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_FREEZY_FROST, MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_FLASH_CANNON},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_SURF, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_ROOST},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRACO_METEOR, MOVE_PSYCHIC, MOVE_SURF, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DRACO_METEOR, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIAS] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DRACO_METEOR, MOVE_ROOST},
        .heldItem = ITEM_LATIASITE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_KYOGRE_1] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_KYOGRE_2] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_WATER_SPOUT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_KYOGRE_3] = {
        .species = SPECIES_KYOGRE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DRIZZLE
    },
    [FRONTIER_MON_GROUDON_1] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_ROCK_POLISH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_GROUDON_2] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_GROUDON_3] = {
        .species = SPECIES_GROUDON,
        .moves = {MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_HAMMER_ARM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DROUGHT
    },
    [FRONTIER_MON_RAYQUAZA_1] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_DANCE, MOVE_SCALE_SHOT, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AIR_LOCK
    },
    [FRONTIER_MON_RAYQUAZA_2] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRACO_METEOR, MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_SURF},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AIR_LOCK
    },
    [FRONTIER_MON_MEGA_RAYQUAZA_1] = {
        .species = SPECIES_RAYQUAZA,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AIR_LOCK
    },
    [FRONTIER_MON_JIRACHI_1] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_IRON_HEAD, MOVE_ZEN_HEADBUTT, MOVE_THUNDER_WAVE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_JIRACHI_2] = {
        .species = SPECIES_JIRACHI,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_DEOXYS_1] = {
        .species = SPECIES_DEOXYS,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ICE_BEAM, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DEOXYS_2] = {
        .species = SPECIES_DEOXYS,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DEOXYS_ATTACK] = {
        .species = SPECIES_DEOXYS_ATTACK,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ICE_BEAM, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DEOXYS_DEFENSE] = {
        .species = SPECIES_DEOXYS_DEFENSE,
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_RECOVER, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DEOXYS_SPEED] = {
        .species = SPECIES_DEOXYS_SPEED,
        .moves = {MOVE_SPIKES, MOVE_STEALTH_ROCK, MOVE_TAUNT, MOVE_PSYCHO_BOOST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_TORTERRA_1] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_TORTERRA_2] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_TORTERRA_3] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_TORTERRA_4] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_WOOD_HAMMER, MOVE_STONE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_MEGA_TORTERRA_1] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_STONE_EDGE},
        .heldItem = ITEM_TORTERRITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_MEGA_TORTERRA_2] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_SWORDS_DANCE, MOVE_STONE_EDGE},
        .heldItem = ITEM_TORTERRITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_MEGA_TORTERRA_3] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_CURSE, MOVE_STONE_EDGE},
        .heldItem = ITEM_TORTERRITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_MEGA_TORTERRA_4] = {
        .species = SPECIES_TORTERRA,
        .moves = {MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_SWORDS_DANCE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_TORTERRITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_MACH_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_INFERNAPE_3] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FLARE_BLITZ, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_INFERNAPE_4] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FLARE_BLITZ, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FLARE_BLITZ, MOVE_GUNK_SHOT},
        .heldItem = ITEM_INFERNAPITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_FLARE_BLITZ, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_INFERNAPITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_3] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_INFERNAPITE,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_BLAZE
    },
    [FRONTIER_MON_EMPOLEON_1] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_EMPOLEON_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_EMPOLEON_3] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_SCALD, MOVE_FLASH_CANNON, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_MEGA_EMPOLEON_O_1] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_EMPOLEONITE_O,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_MEGA_EMPOLEON_O_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_AQUA_JET, MOVE_WAVE_CRASH, MOVE_IRON_HEAD, MOVE_FLIP_TURN},
        .heldItem = ITEM_EMPOLEONITE_O,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_MEGA_EMPOLEON_D_1] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_EMPOLEONITE_D,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_MEGA_EMPOLEON_D_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_EMPOLEONITE_D,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_STARAPTOR_1] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_STARAPTOR_2] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_STARAPTOR_3] = {
        .species = SPECIES_STARAPTOR,
        .moves = {MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_ROOST, MOVE_TAILWIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_BIBAREL_1] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_RETURN, MOVE_AQUA_TAIL, MOVE_QUICK_ATTACK, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SIMPLE
    },
    [FRONTIER_MON_BIBAREL_2] = {
        .species = SPECIES_BIBAREL,
        .moves = {MOVE_RETURN, MOVE_LIQUIDATION, MOVE_STEALTH_ROCK, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_KRICKETUNE_1] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_LEECH_LIFE, MOVE_TAUNT, MOVE_KNOCK_OFF, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_KRICKETUNE_2] = {
        .species = SPECIES_KRICKETUNE,
        .moves = {MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_TAUNT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_LUXRAY_1] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LUXRAY_2] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_SUCKER_PUNCH, MOVE_FIRE_FANG, MOVE_FACADE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_LUXRAY_3] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SUPERPOWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_MEGA_LUXRAY] = {
        .species = SPECIES_LUXRAY,
        .moves = {MOVE_VOLT_TACKLE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_FIRE_FANG},
        .heldItem = ITEM_LUXRITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_RAMPARDOS_1] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_ACCELEROCK, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_RAMPARDOS_2] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_RAMPARDOS_3] = {
        .species = SPECIES_RAMPARDOS,
        .moves = {MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_THUNDERPUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_BASTIODON_1] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_METAL_BURST, MOVE_TOXIC, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_BASTIODON_2] = {
        .species = SPECIES_BASTIODON,
        .moves = {MOVE_HEAVY_SLAM, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_WORMADAM_1] = {
        .species = SPECIES_WORMADAM_PLANT,
        .moves = {MOVE_LEAF_STORM, MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_2] = {
        .species = SPECIES_WORMADAM_PLANT,
        .moves = {MOVE_LEAF_STORM, MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_SANDY_1] = {
        .species = SPECIES_WORMADAM_SANDY,
        .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BITE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_SANDY_2] = {
        .species = SPECIES_WORMADAM_SANDY,
        .moves = {MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_SANDY_3] = {
        .species = SPECIES_WORMADAM_SANDY,
        .moves = {MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_TRASH_1] = {
        .species = SPECIES_WORMADAM_TRASH,
        .moves = {MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_WORMADAM_TRASH_2] = {
        .species = SPECIES_WORMADAM_TRASH,
        .moves = {MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_MOTHIM] = {
        .species = SPECIES_MOTHIM,
        .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_VESPIQUEN_1] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_QUEENLY_MAJESTY
    },
    [FRONTIER_MON_VESPIQUEN_2] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_ATTACK_ORDER, MOVE_HEAL_ORDER, MOVE_DEFOG, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_QUEENLY_MAJESTY
    },
    [FRONTIER_MON_VESPIQUEN_3] = {
        .species = SPECIES_VESPIQUEN,
        .moves = {MOVE_ATTACK_ORDER, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUEENLY_MAJESTY
    },
    [FRONTIER_MON_PACHIRISU_1] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_U_TURN, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_PACHIRISU_2] = {
        .species = SPECIES_PACHIRISU,
        .moves = {MOVE_REFLECT, MOVE_VOLT_SWITCH, MOVE_LIGHT_SCREEN, MOVE_TOXIC},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_FLOATZEL_1] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_WATERFALL, MOVE_ICE_SPINNER, MOVE_FLIP_TURN, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_FLOATZEL_2] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_FLOATZEL_3] = {
        .species = SPECIES_FLOATZEL,
        .moves = {MOVE_WATERFALL, MOVE_ICE_SPINNER, MOVE_BULK_UP, MOVE_AQUA_JET},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_CHERRIM_1] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_DAZZLING_GLEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLOWER_GIFT
    },
    [FRONTIER_MON_CHERRIM_2] = {
        .species = SPECIES_CHERRIM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_DAZZLING_GLEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLOWER_GIFT
    },
    [FRONTIER_MON_GASTRODON_1] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_GASTRODON_2] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_RELAXED(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_RELAXED,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_GASTRODON_3] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_SASSY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_SASSY,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_GASTRODON_4] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_RECOVER, MOVE_SCALD, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_GASTRODON_5] = {
        .species = SPECIES_GASTRODON,
        .moves = {MOVE_EARTH_POWER, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STORM_DRAIN
    },
    [FRONTIER_MON_DRIFBLIM_1] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_DESTINY_BOND},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_DRIFBLIM_2] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_DRIFBLIM_3] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_POLTERGEIST, MOVE_TEMPER_FLARE, MOVE_KNOCK_OFF, MOVE_GYRO_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_DRIFBLIM_4] = {
        .species = SPECIES_DRIFBLIM,
        .moves = {MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_ROOST},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_LOPUNNY_1] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_SWITCHEROO},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_LOPUNNY_2] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_RETURN, MOVE_HIGH_JUMP_KICK, MOVE_HEALING_WISH, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_LOPUNNY_3] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HIGH_JUMP_KICK, MOVE_FAKE_OUT, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_MEGA_LOPUNNY_1] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HIGH_JUMP_KICK, MOVE_POWER_UP_PUNCH, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_MEGA_LOPUNNY_2] = {
        .species = SPECIES_LOPUNNY,
        .moves = {MOVE_RETURN, MOVE_HIGH_JUMP_KICK, MOVE_TRIPLE_AXEL, MOVE_FAKE_OUT},
        .heldItem = ITEM_LOPUNNITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_PURUGLY_1] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_PURUGLY_2] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_PURUGLY_3] = {
        .species = SPECIES_PURUGLY,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_SKUNTANK_1] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_SKUNTANK_2] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_STENCH
    },
    [FRONTIER_MON_SKUNTANK_3] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STENCH
    },
    [FRONTIER_MON_SKUNTANK_4] = {
        .species = SPECIES_SKUNTANK,
        .moves = {MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_TEMPER_FLARE, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STENCH
    },
    [FRONTIER_MON_BRONZONG_1] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_BRONZONG_2] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_HEATPROOF
    },
    [FRONTIER_MON_BRONZONG_3] = {
        .species = SPECIES_BRONZONG,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CHATOT_1] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_CHATOT_2] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_CHATOT_3] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_HEAT_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_CHATOT_4] = {
        .species = SPECIES_CHATOT,
        .moves = {MOVE_BOOMBURST, MOVE_CHATTER, MOVE_TAILWIND, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_SPIRITOMB_1] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SPIRITOMB_2] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_FOUL_PLAY, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_SPIRITOMB_3] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_PSYCHIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SPIRITOMB_4] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST, MOVE_MEMENTO},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SPIRITOMB_5] = {
        .species = SPECIES_SPIRITOMB,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST, MOVE_MEMENTO},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_FIRE_FANG, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_GARCHOMP_3] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_STONE_EDGE, MOVE_FIRE_FANG},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_GARCHOMP_4] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_DUAL_CHOP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_GARCHOMP_5] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_STONE_EDGE, MOVE_IRON_TAIL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_MEGA_GARCHOMP_1] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_FIRE_BLAST, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_MEGA_GARCHOMP_2] = {
        .species = SPECIES_GARCHOMP,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_RUSH, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GARCHOMPITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_LUCARIO_1] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_LUCARIO_2] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_LUCARIO_3] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_MEGA_LUCARIO_1] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_MEGA_LUCARIO_2] = {
        .species = SPECIES_LUCARIO,
        .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LUCARIONITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_HIPPOWDON_1] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_STEALTH_ROCK, MOVE_WHIRLWIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_HIPPOWDON_2] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_HIPPOWDON_3] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_HIPPOWDON_4] = {
        .species = SPECIES_HIPPOWDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_FANG, MOVE_SUPERPOWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_DRAPION_1] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_DRAPION_2] = {
        .species = SPECIES_DRAPION,
        .moves = {MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_BATTLE_ARMOR
    },
    [FRONTIER_MON_TOXICROAK_1] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_TOXICROAK_2] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_TOXICROAK_3] = {
        .species = SPECIES_TOXICROAK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_CARNIVINE_1] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_DEFOG, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CARNIVINE_2] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CARNIVINE_3] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_CRUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CARNIVINE_4] = {
        .species = SPECIES_CARNIVINE,
        .moves = {MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_LIFE, MOVE_CRUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LUMINEON_1] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_U_TURN, MOVE_DEFOG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DAZZLING
    },
    [FRONTIER_MON_LUMINEON_2] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_TAIL_GLOW},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DAZZLING
    },
    [FRONTIER_MON_LUMINEON_3] = {
        .species = SPECIES_LUMINEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HURRICANE, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DAZZLING
    },
    [FRONTIER_MON_ABOMASNOW_1] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_ABOMASNOW_2] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_WOOD_HAMMER, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_MEGA_ABOMASNOW_1] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_MEGA_ABOMASNOW_2] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_WOOD_HAMMER, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_MEGA_ABOMASNOW_3] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_WOOD_HAMMER, MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_MAGNEZONE_5] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_MAGNEZONE_6] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_LICKILICKY_1] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_OWN_TEMPO
    },
    [FRONTIER_MON_LICKILICKY_2] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CLOUD_NINE
    },
    [FRONTIER_MON_LICKILICKY_3] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_OWN_TEMPO
    },
    [FRONTIER_MON_LICKILICKY_4] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_LICKILICKY_5] = {
        .species = SPECIES_LICKILICKY,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_ROTOM_1] = {
        .species = SPECIES_ROTOM,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_2] = {
        .species = SPECIES_ROTOM,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_HEAT_1] = {
        .species = SPECIES_ROTOM_HEAT,
        .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_DEFOG, MOVE_WILL_O_WISP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_HEAT_2] = {
        .species = SPECIES_ROTOM_HEAT,
        .moves = {MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_SHADOW_BALL, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_WASH_1] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_WASH_2] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 28, 0, 0, 232),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_WASH_3] = {
        .species = SPECIES_ROTOM_WASH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_PAIN_SPLIT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_FROST_1] = {
        .species = SPECIES_ROTOM_FROST,
        .moves = {MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_DEFOG, MOVE_WILL_O_WISP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_FROST_2] = {
        .species = SPECIES_ROTOM_FROST,
        .moves = {MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_DEFOG},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_FROST_3] = {
        .species = SPECIES_ROTOM_FROST,
        .moves = {MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_FAN_1] = {
        .species = SPECIES_ROTOM_FAN,
        .moves = {MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_DEFOG, MOVE_WILL_O_WISP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_FAN_2] = {
        .species = SPECIES_ROTOM_FAN,
        .moves = {MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_MOW_1] = {
        .species = SPECIES_ROTOM_MOW,
        .moves = {MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_MOW_2] = {
        .species = SPECIES_ROTOM_MOW,
        .moves = {MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ROTOM_MOW_3] = {
        .species = SPECIES_ROTOM_MOW,
        .moves = {MOVE_LEAF_STORM, MOVE_VOLT_SWITCH, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_UXIE_1] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_U_TURN, MOVE_PSYSHOCK, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_UXIE_2] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_U_TURN, MOVE_PSYSHOCK, MOVE_YAWN},
        .heldItem = ITEM_COLBUR_BERRY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_UXIE_3] = {
        .species = SPECIES_UXIE,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MESPRIT_1] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MESPRIT_2] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MESPRIT_3] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_HEALING_WISH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MESPRIT_4] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_HEALING_WISH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MESPRIT_5] = {
        .species = SPECIES_MESPRIT,
        .moves = {MOVE_STEALTH_ROCK, MOVE_PSYCHIC, MOVE_U_TURN, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_AZELF_1] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_FIRE_BLAST, MOVE_TAUNT},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_AZELF_2] = {
        .species = SPECIES_AZELF,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_DIALGA_1] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_FIRE_BLAST, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DIALGA_2] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_POWER_GEM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_DIALGA_3] = {
        .species = SPECIES_DIALGA,
        .moves = {MOVE_DRACO_METEOR, MOVE_STEALTH_ROCK, MOVE_FLASH_CANNON, MOVE_TOXIC},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 6),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_CALM,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_PALKIA_1] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_THUNDER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_PALKIA_2] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_SURF, MOVE_FIRE_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_PALKIA_3] = {
        .species = SPECIES_PALKIA,
        .moves = {MOVE_SPACIAL_REND, MOVE_HYDRO_PUMP, MOVE_FIRE_BLAST, MOVE_THUNDER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_HEATRAN_1] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_2] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_STEALTH_ROCK, MOVE_ROAR, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_3] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP, MOVE_EARTH_POWER},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_4] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_TAUNT, MOVE_TOXIC, MOVE_EARTH_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_5] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_ERUPTION, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_REGIGIGAS_1] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SLOW_START
    },
    [FRONTIER_MON_REGIGIGAS_2] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SLOW_START
    },
    [FRONTIER_MON_REGIGIGAS_3] = {
        .species = SPECIES_REGIGIGAS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_COMATOSE
    },
    [FRONTIER_MON_GIRATINA_1] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_DRAGON_TAIL, MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_GIRATINA_2] = {
        .species = SPECIES_GIRATINA,
        .moves = {MOVE_SHADOW_BALL, MOVE_DRAGON_PULSE, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_1] = {
        .species = SPECIES_GIRATINA_ORIGIN,
        .moves = {MOVE_SHADOW_BALL, MOVE_DRACO_METEOR, MOVE_AURA_SPHERE, MOVE_DEFOG},
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_GIRATINA_ORIGIN_2] = {
        .species = SPECIES_GIRATINA_ORIGIN,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST, MOVE_DRAGON_CLAW, MOVE_TAILWIND},
        .heldItem = ITEM_GRISEOUS_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRESSELIA_1] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_MOONLIGHT, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRESSELIA_2] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LUNAR_DANCE, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRESSELIA_3] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_MOONLIGHT, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRESSELIA_4] = {
        .species = SPECIES_CRESSELIA,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LUNAR_DANCE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_RELAXED(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BOLD,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MANAPHY_1] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_TAIL_GLOW, MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_HYDRATION
    },
    [FRONTIER_MON_MANAPHY_2] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_HYDRATION
    },
    [FRONTIER_MON_MANAPHY_3] = {
        .species = SPECIES_MANAPHY,
        .moves = {MOVE_TAIL_GLOW, MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_HYDRATION
    },
    [FRONTIER_MON_DARKRAI_1] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_VOID, MOVE_DARK_HOLE, MOVE_PSYSHOCK, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BAD_DREAMS
    },
    [FRONTIER_MON_DARKRAI_2] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_DARK_VOID, MOVE_DARK_HOLE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BAD_DREAMS
    },
    [FRONTIER_MON_DARKRAI_3] = {
        .species = SPECIES_DARKRAI,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DARK_HOLE, MOVE_ICE_BEAM, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BAD_DREAMS
    },
    [FRONTIER_MON_SHAYMIN] = {
        .species = SPECIES_SHAYMIN,
        .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_AIR_SLASH, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_SHAYMIN_SKY] = {
        .species = SPECIES_SHAYMIN_SKY,
        .moves = {MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_ARCEUS] = {
        .species = SPECIES_ARCEUS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_BUG] = {
        .species = SPECIES_ARCEUS_BUG,
        .moves = {MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_INSECT_PLATE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_DARK] = {
        .species = SPECIES_ARCEUS_DARK,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_TAUNT},
        .heldItem = ITEM_DREAD_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_DRAGON] = {
        .species = SPECIES_ARCEUS_DRAGON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_DRACO_PLATE,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 0, 0, 128),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_ELECTRIC] = {
        .species = SPECIES_ARCEUS_ELECTRIC,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_ICE_BEAM},
        .heldItem = ITEM_ZAP_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_FAIRY] = {
        .species = SPECIES_ARCEUS_FAIRY,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_PIXIE_PLATE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_FIGHTING] = {
        .species = SPECIES_ARCEUS_FIGHTING,
        .moves = {MOVE_BODY_PRESS, MOVE_COSMIC_POWER, MOVE_RECOVER, MOVE_STORED_POWER},
        .heldItem = ITEM_FIST_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 0, 0, 124),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_FIRE] = {
        .species = SPECIES_ARCEUS_FIRE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_RECOVER},
        .heldItem = ITEM_FLAME_PLATE,
        .ev = TRAINER_PARTY_EVS(128, 252, 0, 0, 0, 128),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_FLYING] = {
        .species = SPECIES_ARCEUS_FLYING,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_TAUNT},
        .heldItem = ITEM_SKY_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_GHOST] = {
        .species = SPECIES_ARCEUS_GHOST,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_FOCUS_BLAST, MOVE_POWER_GEM},
        .heldItem = ITEM_SPOOKY_PLATE,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_GRASS] = {
        .species = SPECIES_ARCEUS_GRASS,
        .moves = {MOVE_CALM_MIND, MOVE_JUDGMENT, MOVE_RECOVER, MOVE_EARTH_POWER},
        .heldItem = ITEM_MEADOW_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_GROUND] = {
        .species = SPECIES_ARCEUS_GROUND,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_STONE_EDGE},
        .heldItem = ITEM_EARTH_PLATE,
        .ev = TRAINER_PARTY_EVS(120, 252, 0, 0, 0, 126),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_ICE] = {
        .species = SPECIES_ARCEUS_ICE,
        .moves = {MOVE_JUDGMENT, MOVE_THUNDERBOLT, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_ICICLE_PLATE,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 8, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_POISON] = {
        .species = SPECIES_ARCEUS_POISON,
        .moves = {MOVE_POISON_JAB, MOVE_WILL_O_WISP, MOVE_RECOVER, MOVE_TAUNT},
        .heldItem = ITEM_TOXIC_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 0, 0, 124),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_PSYCHIC] = {
        .species = SPECIES_ARCEUS_PSYCHIC,
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_RECOVER, MOVE_TAUNT},
        .heldItem = ITEM_MIND_PLATE,
        .ev = TRAINER_PARTY_EVS(252, 0, 132, 0, 0, 124),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_ROCK] = {
        .species = SPECIES_ARCEUS_ROCK,
        .moves = {MOVE_JUDGMENT, MOVE_GRASS_KNOT, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_STONE_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_STEEL] = {
        .species = SPECIES_ARCEUS_ROCK,
        .moves = {MOVE_JUDGMENT, MOVE_THUNDER, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_IRON_PLATE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_ARCEUS_WATER] = {
        .species = SPECIES_ARCEUS_WATER,
        .moves = {MOVE_JUDGMENT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_SPLASH_PLATE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MULTITYPE
    },
    [FRONTIER_MON_VICTINI_1] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_BOLT_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VICTORY_STAR
    },
    [FRONTIER_MON_VICTINI_2] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_BOLT_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_VICTORY_STAR
    },
    [FRONTIER_MON_VICTINI_3] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_V_CREATE, MOVE_BOLT_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VICTORY_STAR
    },
    [FRONTIER_MON_VICTINI_4] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_BLUE_FLARE, MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VICTORY_STAR
    },
    [FRONTIER_MON_VICTINI_5] = {
        .species = SPECIES_VICTINI,
        .moves = {MOVE_BLUE_FLARE, MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_VICTORY_STAR
    },
    [FRONTIER_MON_SERPERIOR_1] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_GIGA_DRAIN, MOVE_GLARE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SERPERIOR_2] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_SYNTHESIS, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SERPERIOR_3] = {
        .species = SPECIES_SERPERIOR,
        .moves = {MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_TAUNT, MOVE_DEFOG},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_EMBOAR_1] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BULL_RUSH
    },
    [FRONTIER_MON_EMBOAR_2] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_HEAD_SMASH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BULL_RUSH
    },
    [FRONTIER_MON_EMBOAR_3] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_SCALD},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BULL_RUSH
    },
    [FRONTIER_MON_EMBOAR_4] = {
        .species = SPECIES_EMBOAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_HEAD_SMASH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_SAMUROTT_1] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_2] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GRASS_KNOT, MOVE_VACUUM_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_SAMUROTT_3] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_4] = {
        .species = SPECIES_SAMUROTT,
        .moves = {MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_FLIP_TURN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_HISUI_1] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_HISUI_2] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_HISUI_3] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SAMUROTT_HISUI_4] = {
        .species = SPECIES_SAMUROTT_HISUI,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_WATCHOG_1] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_MEGA_KICK, MOVE_DYNAMIC_PUNCH, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_WATCHOG_2] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_MEGA_KICK, MOVE_DYNAMIC_PUNCH, MOVE_GUNK_SHOT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_WATCHOG_3] = {
        .species = SPECIES_WATCHOG,
        .moves = {MOVE_NASTY_PLOT, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_STOUTLAND_1] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_STOUTLAND_2] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_STOUTLAND_3] = {
        .species = SPECIES_STOUTLAND,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LIEPARD_1] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_ENCORE},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_LIEPARD_2] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_NASTY_PLOT, MOVE_DARK_PULSE, MOVE_GRASS_KNOT, MOVE_ENCORE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_LIEPARD_3] = {
        .species = SPECIES_LIEPARD,
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_SIMISAGE_1] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_FLASH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAGE_POWER
    },
    [FRONTIER_MON_SIMISAGE_2] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_NASTY_PLOT, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_LEAF_STORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMISAGE_3] = {
        .species = SPECIES_SIMISAGE,
        .moves = {MOVE_SEED_BOMB, MOVE_SUPERPOWER, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMISEAR_1] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMISEAR_2] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_U_TURN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMISEAR_3] = {
        .species = SPECIES_SIMISEAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAGE_POWER
    },
    [FRONTIER_MON_SIMIPOUR_1] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMIPOUR_2] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_LIQUIDATION, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_FLIP_TURN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GLUTTONY
    },
    [FRONTIER_MON_SIMIPOUR_3] = {
        .species = SPECIES_SIMIPOUR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAGE_POWER
    },
    [FRONTIER_MON_MUSHARNA_1] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_MUSHARNA_2] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_MUSHARNA_3] = {
        .species = SPECIES_MUSHARNA,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_UNFEZANT_1] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_NIGHT_SLASH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SUPER_LUCK
    },
    [FRONTIER_MON_UNFEZANT_2] = {
        .species = SPECIES_UNFEZANT,
        .moves = {MOVE_RETURN, MOVE_ROOST, MOVE_TAILWIND, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RIVALRY
    },
    [FRONTIER_MON_ZEBSTRIKA_1] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_WILD_CHARGE, MOVE_OVERHEAT, MOVE_JUMP_KICK, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_ZEBSTRIKA_2] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_BOLT_STRIKE, MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_AGILITY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_ZEBSTRIKA_3] = {
        .species = SPECIES_ZEBSTRIKA,
        .moves = {MOVE_BOLT_STRIKE, MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GIGALITH_1] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_GIGALITH_2] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_GIGALITH_3] = {
        .species = SPECIES_GIGALITH,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_STREAM
    },
    [FRONTIER_MON_SWOOBAT_1] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_ROOST, MOVE_HEAT_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SIMPLE
    },
    [FRONTIER_MON_SWOOBAT_2] = {
        .species = SPECIES_SWOOBAT,
        .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_KLUTZ
    },
    [FRONTIER_MON_EXCADRILL_1] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_EXCADRILL_2] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_EXCADRILL_3] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_FORCE
    },
    [FRONTIER_MON_EXCADRILL_4] = {
        .species = SPECIES_EXCADRILL,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_AUDINO_1] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_HEAL_BELL, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_AUDINO_2] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MEGA_AUDINO] = {
        .species = SPECIES_AUDINO,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_WISH},
        .heldItem = ITEM_AUDINITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_CONKELDURR_1] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CONKELDURR_2] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CONKELDURR_3] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_FACADE},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_CONKELDURR_4] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CONKELDURR_5] = {
        .species = SPECIES_CONKELDURR,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_SEISMITOAD_1] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_SEISMITOAD_2] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_SEISMITOAD_3] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_SEISMITOAD_4] = {
        .species = SPECIES_SEISMITOAD,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_THROH_1] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_CIRCLE_THROW, MOVE_KNOCK_OFF, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_THROH_2] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_STORM_THROW, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_THROH_3] = {
        .species = SPECIES_THROH,
        .moves = {MOVE_STORM_THROW, MOVE_POWER_UP_PUNCH, MOVE_POISON_JAB, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_SAWK_1] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_SUPERPOWER, MOVE_HAMMER_ARM, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SAWK_2] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_SUPERPOWER, MOVE_HAMMER_ARM, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SAWK_3] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_HAMMER_ARM, MOVE_POISON_JAB, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SAWK_4] = {
        .species = SPECIES_SAWK,
        .moves = {MOVE_SUPERPOWER, MOVE_HAMMER_ARM, MOVE_POISON_JAB, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_LEAVANNY_1] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_LEAVANNY_2] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_LEAVANNY_3] = {
        .species = SPECIES_LEAVANNY,
        .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_SCOLIPEDE_1] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_SCOLIPEDE_2] = {
        .species = SPECIES_SCOLIPEDE,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_SPIKES, MOVE_MEGAHORN, MOVE_POISON_JAB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_WHIMSICOTT_1] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_U_TURN, MOVE_ENCORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_WHIMSICOTT_2] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_TAILWIND, MOVE_DEFOG, MOVE_TAUNT, MOVE_MOONBLAST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_WHIMSICOTT_3] = {
        .species = SPECIES_WHIMSICOTT,
        .moves = {MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_PSYCHIC, MOVE_DEFOG},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_LILLIGANT_1] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_QUIVER_DANCE, MOVE_RECOVER, MOVE_PETAL_DANCE, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_LILLIGANT_2] = {
        .species = SPECIES_LILLIGANT,
        .moves = {MOVE_PETAL_DANCE, MOVE_ALLURING_VOICE, MOVE_HEALING_WISH, MOVE_POWER_GEM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_LILLIGANT_HISUI_1] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_ICE_SPINNER, MOVE_VICTORY_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_LILLIGANT_HISUI_2] = {
        .species = SPECIES_LILLIGANT_HISUI,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_SUNNY_DAY, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_BASCULEGION_F_1] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_BASCULEGION_F_2] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_BASCULEGION_F_3] = {
        .species = SPECIES_BASCULEGION_M,
        .moves = {MOVE_SHADOW_BALL, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_BASCULEGION_M_1] = {
        .species = SPECIES_BASCULEGION,
        .moves = {MOVE_LAST_RESPECTS, MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_BASCULEGION_M_2] = {
        .species = SPECIES_BASCULEGION,
        .moves = {MOVE_LAST_RESPECTS, MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_BASCULEGION_M_3] = {
        .species = SPECIES_BASCULEGION,
        .moves = {MOVE_LAST_RESPECTS, MOVE_WAVE_CRASH, MOVE_AQUA_JET, MOVE_FLIP_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_KROOKODILE_1] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_KROOKODILE_2] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_PURSUIT},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_KROOKODILE_3] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_KROOKODILE_4] = {
        .species = SPECIES_KROOKODILE,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_DARMANITAN_1] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_DARMANITAN_2] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_DARMANITAN_3] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_DARMANITAN_4] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_DARMANITAN_5] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_GRASS_KNOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_DARMANITAN_6] = {
        .species = SPECIES_DARMANITAN,
        .moves = {MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_PSYCHIC, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_DARMANITAN_GALAR_1] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GORILLA_TACTICS
    },
    [FRONTIER_MON_DARMANITAN_GALAR_2] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GORILLA_TACTICS
    },
    [FRONTIER_MON_DARMANITAN_GALAR_3] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_DARMANITAN_GALAR_4] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_DARMANITAN_GALAR_5] = {
        .species = SPECIES_DARMANITAN_GALAR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ZEN_MODE
    },
    [FRONTIER_MON_MARACTUS_1] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SPIKES, MOVE_SAPPY_SEED, MOVE_COTTON_GUARD, MOVE_SYNTHESIS},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_MARACTUS_2] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SAPPY_SEED, MOVE_COTTON_GUARD, MOVE_SYNTHESIS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_MARACTUS_3] = {
        .species = SPECIES_MARACTUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_CRUSTLE_1] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_X_SCISSOR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_CRUSTLE_2] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_SHELL_SMASH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_X_SCISSOR},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_CRUSTLE_3] = {
        .species = SPECIES_CRUSTLE,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_SCRAFTY_1] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_KNOCK_OFF, MOVE_HIGH_JUMP_KICK, MOVE_DRAGON_DANCE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SCRAFTY_2] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SCRAFTY_3] = {
        .species = SPECIES_SCRAFTY,
        .moves = {MOVE_KNOCK_OFF, MOVE_HIGH_JUMP_KICK, MOVE_HEAD_SMASH, MOVE_POISON_JAB},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_SIGILYPH_1] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_SIGILYPH_2] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_SIGILYPH_3] = {
        .species = SPECIES_SIGILYPH,
        .moves = {MOVE_COSMIC_POWER, MOVE_STORED_POWER, MOVE_ROOST, MOVE_PSYCHO_SHIFT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_COFAGRIGUS_1] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MUMMY
    },
    [FRONTIER_MON_COFAGRIGUS_2] = {
        .species = SPECIES_COFAGRIGUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_RUNERIGUS_1] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_EARTHQUAKE, MOVE_POLTERGEIST, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_WANDERING_SPIRIT
    },
    [FRONTIER_MON_RUNERIGUS_2] = {
        .species = SPECIES_RUNERIGUS,
        .moves = {MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_BODY_PRESS, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_WANDERING_SPIRIT
    },
    [FRONTIER_MON_CARRACOSTA_1] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_SHELL_SMASH, MOVE_WATERFALL, MOVE_STONE_EDGE, MOVE_AQUA_JET},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SOLID_ROCK
    },
    [FRONTIER_MON_CARRACOSTA_2] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_CARRACOSTA_3] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ANCIENT_POWER, MOVE_ICE_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_CARRACOSTA_4] = {
        .species = SPECIES_CARRACOSTA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHELL_SMASH, MOVE_ICE_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_ARCHEOPS_1] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFEATIST
    },
    [FRONTIER_MON_ARCHEOPS_2] = {
        .species = SPECIES_ARCHEOPS,
        .moves = {MOVE_HEAD_SMASH, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFEATIST
    },
    [FRONTIER_MON_GARBODOR_1] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_GUNK_SHOT, MOVE_EXPLOSION, MOVE_SPIKES, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_GARBODOR_2] = {
        .species = SPECIES_GARBODOR,
        .moves = {MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_AFTERMATH
    },
    [FRONTIER_MON_ZOROARK_1] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_ZOROARK_2] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_DARK_PULSE, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_ZOROARK_3] = {
        .species = SPECIES_ZOROARK,
        .moves = {MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_ZOROARK_HISUI_1] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_ZOROARK_HISUI_2] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_FLAMETHROWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_ZOROARK_HISUI_3] = {
        .species = SPECIES_ZOROARK_HISUI,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ILLUSION
    },
    [FRONTIER_MON_CINCCINO_1] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_CINCCINO_2] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_CINCCINO_3] = {
        .species = SPECIES_CINCCINO,
        .moves = {MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_GOTHITELLE_1] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_SHADOW_TAG
    },
    [FRONTIER_MON_GOTHITELLE_2] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHADOW_TAG
    },
    [FRONTIER_MON_GOTHITELLE_3] = {
        .species = SPECIES_GOTHITELLE,
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SHADOW_TAG
    },
    [FRONTIER_MON_REUNICLUS_1] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_REUNICLUS_2] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_REUNICLUS_3] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_REUNICLUS_4] = {
        .species = SPECIES_REUNICLUS,
        .moves = {MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SWANNA_1] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_SWANNA_2] = {
        .species = SPECIES_SWANNA,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_VANILLUXE_1] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_ACID_ARMOR},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_VANILLUXE_2] = {
        .species = SPECIES_VANILLUXE,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_SAWSBUCK_1] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_SAWSBUCK_2] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_WILD_CHARGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SAWSBUCK_3] = {
        .species = SPECIES_SAWSBUCK,
        .moves = {MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_WILD_CHARGE},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_EMOLGA_1] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_VOLT_SWITCH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MOTOR_DRIVE
    },
    [FRONTIER_MON_EMOLGA_2] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MOTOR_DRIVE
    },
    [FRONTIER_MON_EMOLGA_3] = {
        .species = SPECIES_EMOLGA,
        .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MOTOR_DRIVE
    },
    [FRONTIER_MON_ESCAVALIER_1] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_DOUBLE_IRON_BASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_ESCAVALIER_2] = {
        .species = SPECIES_ESCAVALIER,
        .moves = {MOVE_MEGAHORN, MOVE_DOUBLE_IRON_BASH, MOVE_KNOCK_OFF, MOVE_DRILL_RUN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_AMOONGUSS_1] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_AMOONGUSS_2] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_CLEAR_SMOG, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_FOUL_PLAY},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_AMOONGUSS_3] = {
        .species = SPECIES_AMOONGUSS,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_JELLICENT_1] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_JELLICENT_2] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_JELLICENT_3] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_TRICK_ROOM, MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_JELLICENT_4] = {
        .species = SPECIES_JELLICENT,
        .moves = {MOVE_TRICK_ROOM, MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_ALOMOMOLA_1] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_SCALD, MOVE_WISH, MOVE_PROTECT, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_ALOMOMOLA_2] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FLIP_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_ALOMOMOLA_3] = {
        .species = SPECIES_ALOMOMOLA,
        .moves = {MOVE_SCALD, MOVE_WISH, MOVE_PROTECT, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_GALVANTULA_1] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_COMPOUND_EYES
    },
    [FRONTIER_MON_GALVANTULA_2] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_COMPOUND_EYES
    },
    [FRONTIER_MON_GALVANTULA_3] = {
        .species = SPECIES_GALVANTULA,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_COMPOUND_EYES
    },
    [FRONTIER_MON_FERROTHORN_1] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_GYRO_BALL, MOVE_POWER_WHIP, MOVE_STEALTH_ROCK, MOVE_SPIKES},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_FERROTHORN_2] = {
        .species = SPECIES_FERROTHORN,
        .moves = {MOVE_STEALTH_ROCK, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_SEED},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_KLINKLANG_1] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_RETURN, MOVE_SHIFT_GEAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STEELY_SPIRIT
    },
    [FRONTIER_MON_KLINKLANG_2] = {
        .species = SPECIES_KLINKLANG,
        .moves = {MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_RETURN, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STEELY_SPIRIT
    },
    [FRONTIER_MON_EELEKTROSS_1] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_EELEKTROSS_2] = {
        .species = SPECIES_EELEKTROSS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_THUNDERCLAP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_BEHEEYEM_1] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_BEHEEYEM_2] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_BEHEEYEM_3] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_BEHEEYEM_4] = {
        .species = SPECIES_BEHEEYEM,
        .moves = {MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_CHANDELURE_1] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_CHANDELURE_2] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_CHANDELURE_3] = {
        .species = SPECIES_CHANDELURE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HAXORUS_1] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FIRST_IMPRESSION, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_HAXORUS_2] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_HAXORUS_3] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_DRAGON_FANG,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_HAXORUS_4] = {
        .species = SPECIES_HAXORUS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_BEARTIC_1] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_BEARTIC_2] = {
        .species = SPECIES_BEARTIC,
        .moves = {MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_CRYOGONAL_1] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_FREEZY_FROST, MOVE_FREEZE_DRY, MOVE_RAPID_SPIN, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRYOGONAL_2] = {
        .species = SPECIES_CRYOGONAL,
        .moves = {MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_ACCELGOR_1] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_ACCELGOR_2] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_ACCELGOR_3] = {
        .species = SPECIES_ACCELGOR,
        .moves = {MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_STUNFISK_1] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_STUNFISK_2] = {
        .species = SPECIES_STUNFISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_SURF},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_STUNFISK_GALAR_1] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_SNAP_TRAP, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_STUNFISK_GALAR_2] = {
        .species = SPECIES_STUNFISK_GALAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_REVENGE, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_MIENSHAO_1] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_MIENSHAO_2] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RECKLESS
    },
    [FRONTIER_MON_MIENSHAO_3] = {
        .species = SPECIES_MIENSHAO,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_DRUDDIGON_1] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_DRUDDIGON_2] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_HAMMER, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_DRUDDIGON_3] = {
        .species = SPECIES_DRUDDIGON,
        .moves = {MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_GLARE},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_ROUGH_SKIN
    },
    [FRONTIER_MON_GOLURK_1] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_GOLURK_2] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_EARTHQUAKE, MOVE_POLTERGEIST, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_GOLURK_3] = {
        .species = SPECIES_GOLURK,
        .moves = {MOVE_EARTHQUAKE, MOVE_POLTERGEIST, MOVE_DYNAMIC_PUNCH, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_KINGAMBIT_1] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_KINGAMBIT_2] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PURSUIT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_KINGAMBIT_3] = {
        .species = SPECIES_KINGAMBIT,
        .moves = {MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SUPREME_OVERLORD
    },
    [FRONTIER_MON_BOUFFALANT_1] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_HEAD_CHARGE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_BOUFFALANT_2] = {
        .species = SPECIES_BOUFFALANT,
        .moves = {MOVE_HEAD_CHARGE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BULL_RUSH
    },
    [FRONTIER_MON_BRAVIARY_1] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_RETURN, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_BRAVIARY_2] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_RETURN},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_BRAVIARY_3] = {
        .species = SPECIES_BRAVIARY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_RETURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_BRAVIARY_HISUI_1] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_BRAVIARY_HISUI_2] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_BRAVIARY_HISUI_3] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_BRAVIARY_HISUI_4] = {
        .species = SPECIES_BRAVIARY_HISUI,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_MANDIBUZZ_1] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_MANDIBUZZ_2] = {
        .species = SPECIES_MANDIBUZZ,
        .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_HEATMOR_1] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FIRE_LASH, MOVE_GIGA_DRAIN, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATMOR_2] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_INFERNO, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_HEATMOR_3] = {
        .species = SPECIES_HEATMOR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_HONE_CLAWS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_DURANT_1] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_HONE_CLAWS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_DURANT_2] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_DURANT_3] = {
        .species = SPECIES_DURANT,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_HYDREIGON_1] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_HYDREIGON_2] = {
        .species = SPECIES_HYDREIGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_VOLCARONA_1] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_VOLCARONA_2] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_VOLCARONA_3] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FIRE_BLAST, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_VOLCARONA_4] = {
        .species = SPECIES_VOLCARONA,
        .moves = {MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FLAME_BODY
    },
    [FRONTIER_MON_COBALION_1] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_COBALION_2] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_SACRED_SWORD, MOVE_CUT, MOVE_X_SCISSOR, MOVE_POISON_JAB},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_COBALION_3] = {
        .species = SPECIES_COBALION,
        .moves = {MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_TERRAKION_1] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_SACRED_SWORD, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_TERRAKION_2] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_TERRAKION_3] = {
        .species = SPECIES_TERRAKION,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_VIRIZION_1] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_VIRIZION_2] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_STONE_EDGE, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_VIRIZION_3] = {
        .species = SPECIES_VIRIZION,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_CALM_MIND, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_JUSTIFIED
    },
    [FRONTIER_MON_TORNADUS_1] = {
        .species = SPECIES_TORNADUS_INCARNATE,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_TORNADUS_2] = {
        .species = SPECIES_TORNADUS_INCARNATE,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_TORNADUS_3] = {
        .species = SPECIES_TORNADUS_INCARNATE,
        .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_SLUDGE_WAVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_TORNADUS_THERIAN_1] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TORNADUS_THERIAN_2] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TORNADUS_THERIAN_3] = {
        .species = SPECIES_TORNADUS_THERIAN,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_U_TURN, MOVE_TAUNT, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_THUNDURUS_1] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_WILDBOLT_STORM, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_THUNDURUS_2] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_THUNDURUS_3] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_THUNDERBOLT, MOVE_DEFOG, MOVE_TAUNT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_THUNDURUS_4] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_THUNDURUS_5] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_THUNDER, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_THUNDURUS_6] = {
        .species = SPECIES_THUNDURUS_INCARNATE,
        .moves = {MOVE_THUNDER, MOVE_DEFOG, MOVE_TAUNT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_1] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_THUNDURUS_THERIAN_2] = {
        .species = SPECIES_THUNDURUS_THERIAN,
        .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_RESHIRAM_1] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_RESHIRAM_2] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_RESHIRAM_3] = {
        .species = SPECIES_RESHIRAM,
        .moves = {MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_ZEKROM_1] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_BOLT_STRIKE, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TERAVOLT
    },
    [FRONTIER_MON_ZEKROM_2] = {
        .species = SPECIES_ZEKROM,
        .moves = {MOVE_BOLT_STRIKE, MOVE_DRAGON_CLAW, MOVE_STONE_EDGE, MOVE_OUTRAGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TERAVOLT
    },
    [FRONTIER_MON_LANDORUS_1] = {
        .species = SPECIES_LANDORUS_INCARNATE,
        .moves = {MOVE_SANDSEAR_STORM, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_LANDORUS_2] = {
        .species = SPECIES_LANDORUS_INCARNATE,
        .moves = {MOVE_SANDSEAR_STORM, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_PSYCHIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_LANDORUS_3] = {
        .species = SPECIES_LANDORUS_INCARNATE,
        .moves = {MOVE_SANDSEAR_STORM, MOVE_SLUDGE_WAVE, MOVE_DEFOG, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_1] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_2] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_POLISH, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_3] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_4] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_5] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_SUPERPOWER, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_6] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_LANDORUS_THERIAN_7] = {
        .species = SPECIES_LANDORUS_THERIAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_KYUREM_1] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_KYUREM_2] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_KYUREM_3] = {
        .species = SPECIES_KYUREM,
        .moves = {MOVE_DRACO_METEOR, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_KYUREM_BLACK_1] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_FUSION_BOLT, MOVE_FREEZE_SHOCK, MOVE_DRAGON_CLAW, MOVE_ROOST},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TERAVOLT
    },
    [FRONTIER_MON_KYUREM_BLACK_2] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_FUSION_BOLT, MOVE_ICE_PUNCH, MOVE_OUTRAGE, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TERAVOLT
    },
    [FRONTIER_MON_KYUREM_BLACK_3] = {
        .species = SPECIES_KYUREM_BLACK,
        .moves = {MOVE_FUSION_BOLT, MOVE_ICE_PUNCH, MOVE_DRAGON_CLAW, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TERAVOLT
    },
    [FRONTIER_MON_KYUREM_WHITE_1] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_FUSION_FLARE, MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_KYUREM_WHITE_2] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_FUSION_FLARE, MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_KYUREM_WHITE_3] = {
        .species = SPECIES_KYUREM_WHITE,
        .moves = {MOVE_FUSION_FLARE, MOVE_ICE_BEAM, MOVE_DRACO_METEOR, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TURBOBLAZE
    },
    [FRONTIER_MON_KELDEO_1] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_AIR_SLASH, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KELDEO_2] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_ICY_WIND, MOVE_SCALD},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KELDEO_3] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_ICY_WIND, MOVE_FLIP_TURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KELDEO_4] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KELDEO_5] = {
        .species = SPECIES_KELDEO,
        .moves = {MOVE_SCALD, MOVE_SECRET_SWORD, MOVE_TAUNT, MOVE_HYDRO_PUMP},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_MELOETTA_1] = {
        .species = SPECIES_MELOETTA_ARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_MELOETTA_2] = {
        .species = SPECIES_MELOETTA_ARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_MELOETTA_3] = {
        .species = SPECIES_MELOETTA_ARIA,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_MELOETTA_4] = {
        .species = SPECIES_MELOETTA_ARIA,
        .moves = {MOVE_RELIC_SONG, MOVE_CLOSE_COMBAT, MOVE_RETURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_SERENE_GRACE
    },
    [FRONTIER_MON_GENESECT_1] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_GENESECT_2] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_IRON_HEAD, MOVE_EXPLOSION, MOVE_EXTREME_SPEED},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_GENESECT_3] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_BUG_BUZZ, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_GENESECT_4] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_BUG_BUZZ, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_ROCK_POLISH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_GENESECT_5] = {
        .species = SPECIES_GENESECT,
        .moves = {MOVE_U_TURN, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_DOWNLOAD
    },
    [FRONTIER_MON_CHESNAUGHT_1] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_SPIKY_SHIELD, MOVE_WOOD_HAMMER, MOVE_HAMMER_ARM, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_CHESNAUGHT_2] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_HAMMER_ARM, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_CHESNAUGHT_3] = {
        .species = SPECIES_CHESNAUGHT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_DELPHOX_1] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_DELPHOX_2] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_GRASS_KNOT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_DELPHOX_3] = {
        .species = SPECIES_DELPHOX,
        .moves = {MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGIC_GUARD
    },
    [FRONTIER_MON_GRENINJA_1] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_GRENINJA_2] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_GRENINJA_3] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_GUNK_SHOT, MOVE_U_TURN, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_GRENINJA_4] = {
        .species = SPECIES_GRENINJA,
        .moves = {MOVE_SPIKES, MOVE_TAUNT, MOVE_TOXIC_SPIKES, MOVE_U_TURN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_GRENINJA_5] = {
        .species = SPECIES_GRENINJA_BOND,
        .moves = {MOVE_WATER_SHURIKEN, MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_GUNK_SHOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_BATTLE_BOND
    },
    [FRONTIER_MON_GRENINJA_6] = {
        .species = SPECIES_GRENINJA_BOND,
        .moves = {MOVE_GRASS_KNOT, MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BATTLE_BOND
    },
    [FRONTIER_MON_DIGGERSBY_1] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_U_TURN, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUGE_POWER
    },
    [FRONTIER_MON_DIGGERSBY_2] = {
        .species = SPECIES_DIGGERSBY,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_FIRE_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HUGE_POWER
    },
    [FRONTIER_MON_TALONFLAME_1] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GALE_WINGS
    },
    [FRONTIER_MON_TALONFLAME_2] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_DEFOG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GALE_WINGS
    },
    [FRONTIER_MON_TALONFLAME_3] = {
        .species = SPECIES_TALONFLAME,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_WILL_O_WISP, MOVE_TAILWIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_GALE_WINGS
    },
    [FRONTIER_MON_VIVILLON_1] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_COMPOUND_EYES
    },
    [FRONTIER_MON_VIVILLON_2] = {
        .species = SPECIES_VIVILLON,
        .moves = {MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_ENERGY_BALL, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_COMPOUND_EYES
    },
    [FRONTIER_MON_PYROAR_1] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_HEAT_ROCK,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PYROAR_2] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PYROAR_3] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_PYROAR_4] = {
        .species = SPECIES_PYROAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_FLORGES_1] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_FLORGES_2] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_FLORGES_3] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_WISH, MOVE_PROTECT, MOVE_AROMATHERAPY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_FLORGES_4] = {
        .species = SPECIES_FLORGES,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_GOGOAT_1] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_MILK_DRINK, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GOGOAT_2] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GOGOAT_3] = {
        .species = SPECIES_GOGOAT,
        .moves = {MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_WILD_CHARGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_PANGORO_1] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_PANGORO_2] = {
        .species = SPECIES_PANGORO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_FURFROU_1] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_RETURN, MOVE_COTTON_GUARD, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_FURFROU_2] = {
        .species = SPECIES_FURFROU,
        .moves = {MOVE_RETURN, MOVE_U_TURN, MOVE_THUNDER_WAVE, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FUR_COAT
    },
    [FRONTIER_MON_MEOWSTIC_1] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_MEOWSTIC_2] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_MEOWSTIC_3] = {
        .species = SPECIES_MEOWSTIC_M,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_PSYCHIC},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_MEOWSTIC_4] = {
        .species = SPECIES_MEOWSTIC_F,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FELINE_PROWESS
    },
    [FRONTIER_MON_AEGISLASH_1] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_STANCE_CHANGE
    },
    [FRONTIER_MON_AEGISLASH_2] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_FOCUS_BLAST, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_STANCE_CHANGE
    },
    [FRONTIER_MON_AEGISLASH_3] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SACRED_SWORD, MOVE_KINGS_SHIELD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_STANCE_CHANGE
    },
    [FRONTIER_MON_AEGISLASH_4] = {
        .species = SPECIES_AEGISLASH,
        .moves = {MOVE_SACRED_SWORD, MOVE_KINGS_SHIELD, MOVE_IRON_HEAD, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_STANCE_CHANGE
    },
    [FRONTIER_MON_AROMATISSE_1] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_AROMATHERAPY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_AROMATISSE_2] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_AROMATISSE_3] = {
        .species = SPECIES_AROMATISSE,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_CALM_MIND, MOVE_WISH, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_SLURPUFF_1] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNBURDEN
    },
    [FRONTIER_MON_SLURPUFF_2] = {
        .species = SPECIES_SLURPUFF,
        .moves = {MOVE_PLAY_ROUGH, MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWEET_VEIL
    },
    [FRONTIER_MON_MALAMAR_1] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_MALAMAR_2] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_MALAMAR_3] = {
        .species = SPECIES_MALAMAR,
        .moves = {MOVE_PSYCHO_CUT, MOVE_KNOCK_OFF, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_BARBARACLE_1] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_RAZOR_SHELL, MOVE_MIGHTY_CLEAVE, MOVE_CROSS_CHOP, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_BARBARACLE_2] = {
        .species = SPECIES_BARBARACLE,
        .moves = {MOVE_RAZOR_SHELL, MOVE_MIGHTY_CLEAVE, MOVE_CROSS_CHOP, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_DRAGALGE_1] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_DRAGALGE_2] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SCALD, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_DRAGALGE_3] = {
        .species = SPECIES_DRAGALGE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_SCALD, MOVE_DRACO_METEOR, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_CLAWITZER_1] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_CLAWITZER_2] = {
        .species = SPECIES_CLAWITZER,
        .moves = {MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_ICE_BEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_HELIOLISK_1] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_HELIOLISK_2] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SOLAR_POWER
    },
    [FRONTIER_MON_HELIOLISK_3] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_HELIOLISK_4] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_HYPER_VOICE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_HELIOLISK_5] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDER, MOVE_HYPER_VOICE, MOVE_GRASS_KNOT, MOVE_RAIN_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_HELIOLISK_6] = {
        .species = SPECIES_HELIOLISK,
        .moves = {MOVE_THUNDER, MOVE_HYPER_VOICE, MOVE_RAIN_DANCE, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DRY_SKIN
    },
    [FRONTIER_MON_TYRANTRUM_1] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_TYRANTRUM_2] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FIRE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_TYRANTRUM_3] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_STEALTH_ROCK, MOVE_DRAGON_TAIL, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_TYRANTRUM_4] = {
        .species = SPECIES_TYRANTRUM,
        .moves = {MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_HEAD_SMASH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_AURORUS_1] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BLIZZARD, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ICY_ROCK,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_AURORUS_2] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BOOMBURST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_AURORUS_3] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BOOMBURST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_AURORUS_4] = {
        .species = SPECIES_AURORUS,
        .moves = {MOVE_BOOMBURST, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_REFRIGERATE
    },
    [FRONTIER_MON_HAWLUCHA_1] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_ROOST},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_HAWLUCHA_2] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_STONE_EDGE},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_HAWLUCHA_3] = {
        .species = SPECIES_HAWLUCHA,
        .moves = {MOVE_FLYING_PRESS, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_STONE_EDGE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_DEDENNE_1] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_MOONBLAST, MOVE_GRASS_KNOT, MOVE_NUZZLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_DEDENNE_2] = {
        .species = SPECIES_DEDENNE,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_MOONBLAST, MOVE_GRASS_KNOT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_CARBINK_1] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_CARBINK_2] = {
        .species = SPECIES_CARBINK,
        .moves = {MOVE_TRICK_ROOM, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_BODY_PRESS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_GOODRA_1] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GOODRA_2] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_GOODRA_3] = {
        .species = SPECIES_GOODRA,
        .moves = {MOVE_DRAGON_TAIL, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_GOODRA_HISUI_1] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_GOODRA_HISUI_2] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_GOODRA_HISUI_3] = {
        .species = SPECIES_GOODRA_HISUI,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_KLEFKI_1] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_SPIKES, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_KLEFKI_2] = {
        .species = SPECIES_KLEFKI,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_THUNDER_WAVE, MOVE_FOUL_PLAY},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_TREVENANT_1] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_HORN_LEECH, MOVE_POLTERGEIST, MOVE_WILL_O_WISP, MOVE_LEECH_SEED},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_TREVENANT_2] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_WOOD_HAMMER, MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_TREVENANT_3] = {
        .species = SPECIES_TREVENANT,
        .moves = {MOVE_HORN_LEECH, MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_NATURAL_CURE
    },
    [FRONTIER_MON_GOURGEIST_1] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_LEECH_SEED},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_GOURGEIST_2] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_TRICK_ROOM},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_GOURGEIST_3] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_GOURGEIST_4] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_GOURGEIST_5] = {
        .species = SPECIES_GOURGEIST,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLARE_BOOST
    },
    [FRONTIER_MON_AVALUGG_1] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_AVALANCHE, MOVE_RAPID_SPIN, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_AVALUGG_2] = {
        .species = SPECIES_AVALUGG,
        .moves = {MOVE_AVALANCHE, MOVE_RAPID_SPIN, MOVE_STONE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_AVALUGG_HISUI_1] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_AVALUGG_HISUI_2] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_MOUNTAIN_GALE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_AVALUGG_HISUI_3] = {
        .species = SPECIES_AVALUGG_HISUI,
        .moves = {MOVE_ICE_BALL, MOVE_ROCK_BLAST, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_NOIVERN_1] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_NOIVERN_2] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_NOIVERN_3] = {
        .species = SPECIES_NOIVERN,
        .moves = {MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_XERNEAS_1] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_THUNDER, MOVE_GEOMANCY},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(184, 0, 28, 252, 0, 44),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_XERNEAS_2] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_AROMATHERAPY, MOVE_GEOMANCY},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS(184, 0, 28, 252, 0, 44),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_XERNEAS_3] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_PSYSHOCK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_XERNEAS_4] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_THUNDER, MOVE_GRASS_KNOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_XERNEAS_5] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_THUNDER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MILD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MILD,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_XERNEAS_6] = {
        .species = SPECIES_XERNEAS,
        .moves = {MOVE_MOONBLAST, MOVE_AROMATHERAPY, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FAIRY_AURA
    },
    [FRONTIER_MON_YVELTAL_1] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_FOCUS_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_YVELTAL_2] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_YVELTAL_3] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_FOUL_PLAY, MOVE_TAUNT, MOVE_TOXIC, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_YVELTAL_4] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_YVELTAL_5] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_HEAT_WAVE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(132, 28, 0, 252, 0, 96),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_RASH,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_YVELTAL_6] = {
        .species = SPECIES_YVELTAL,
        .moves = {MOVE_DARK_PULSE, MOVE_U_TURN, MOVE_FOUL_PLAY, MOVE_OBLIVION_WING},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DARK_AURA
    },
    [FRONTIER_MON_ZYGARDE_1] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_AURA_BREAK
    },
    [FRONTIER_MON_ZYGARDE_2] = {
        .species = SPECIES_ZYGARDE,
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_GLARE, MOVE_TOXIC, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_AURA_BREAK
    },
    [FRONTIER_MON_ZYGARDE_3] = {
        .species = SPECIES_ZYGARDE_50_POWER_CONSTRUCT,
        .moves = {MOVE_THOUSAND_ARROWS, MOVE_DRAGON_DANCE, MOVE_EXTREME_SPEED, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_POWER_CONSTRUCT
    },
    [FRONTIER_MON_DIANCIE_1] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_DIANCIE_2] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_MEGA_DIANCIE_1] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_MEGA_DIANCIE_2] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_MEGA_DIANCIE_3] = {
        .species = SPECIES_DIANCIE,
        .moves = {MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_EARTH_POWER},
        .heldItem = ITEM_DIANCITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_HOOPA_1] = {
        .species = SPECIES_HOOPA_CONFINED,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGICIAN
    },
    [FRONTIER_MON_HOOPA_2] = {
        .species = SPECIES_HOOPA_CONFINED,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGICIAN
    },
    [FRONTIER_MON_HOOPA_UNBOUND_1] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_HYPERSPACE_FURY, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_MAGICIAN
    },
    [FRONTIER_MON_HOOPA_UNBOUND_2] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGICIAN
    },
    [FRONTIER_MON_HOOPA_UNBOUND_3] = {
        .species = SPECIES_HOOPA_UNBOUND,
        .moves = {MOVE_HYPERSPACE_FURY, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_MAGICIAN
    },
    [FRONTIER_MON_VOLCANION_1] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_VOLCANION_2] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_VOLCANION_3] = {
        .species = SPECIES_VOLCANION,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_EXPLOSION},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_DECIDUEYE_1] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_DECIDUEYE_2] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_LEAF_STORM, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_DECIDUEYE_3] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_DECIDUEYE_4] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_LEAF_STORM, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_DECIDUEYE_5] = {
        .species = SPECIES_DECIDUEYE,
        .moves = {MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_ROOST, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_1] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_TRIPLE_ARROWS, MOVE_TROP_KICK, MOVE_BRAVE_BIRD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_DECIDUEYE_HISUI_2] = {
        .species = SPECIES_DECIDUEYE_HISUI,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_TROP_KICK, MOVE_SHADOW_SNEAK, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_INCINEROAR_1] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_U_TURN, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_INCINEROAR_2] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_INCINEROAR_3] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_FLARE_BLITZ, MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_INCINEROAR_4] = {
        .species = SPECIES_INCINEROAR,
        .moves = {MOVE_PARTING_SHOT, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_FLARE_BLITZ},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_PRIMARINA_1] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LIQUID_VOICE
    },
    [FRONTIER_MON_PRIMARINA_2] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LIQUID_VOICE
    },
    [FRONTIER_MON_PRIMARINA_3] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_FLIP_TURN, MOVE_ENERGY_BALL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LIQUID_VOICE
    },
    [FRONTIER_MON_PRIMARINA_4] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LIQUID_VOICE
    },
    [FRONTIER_MON_PRIMARINA_5] = {
        .species = SPECIES_PRIMARINA,
        .moves = {MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LIQUID_VOICE
    },
    [FRONTIER_MON_TOUCANNON_1] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_TOUCANNON_2] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_TOUCANNON_3] = {
        .species = SPECIES_TOUCANNON,
        .moves = {MOVE_BOOMBURST, MOVE_BRAVE_BIRD, MOVE_BULLET_SEED, MOVE_OVERHEAT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_RASH,
        .ability = ABILITY_SKILL_LINK
    },
    [FRONTIER_MON_GUMSHOOS_1] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_GUMSHOOS_2] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_GUMSHOOS_3] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_GUMSHOOS_4] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_GUMSHOOS_5] = {
        .species = SPECIES_GUMSHOOS,
        .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ADAPTABILITY
    },
    [FRONTIER_MON_VIKAVOLT_1] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_VIKAVOLT_2] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_THUNDERCLAP, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_VIKAVOLT_3] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_STICKY_WEB, MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_VIKAVOLT_4] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_AGILITY, MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_VIKAVOLT_5] = {
        .species = SPECIES_VIKAVOLT,
        .moves = {MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_CRABOMINABLE_1] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CRABOMINABLE_2] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CRABOMINABLE_3] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_CRABOMINABLE_4] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_ANGER_POINT
    },
    [FRONTIER_MON_CRABOMINABLE_5] = {
        .species = SPECIES_CRABOMINABLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_HAMMER, MOVE_EARTHQUAKE, MOVE_PROTECT},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_ORICORIO_1] = {
        .species = SPECIES_ORICORIO_BAILE,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_ORICORIO_2] = {
        .species = SPECIES_ORICORIO_POM_POM,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_ORICORIO_3] = {
        .species = SPECIES_ORICORIO_POM_POM,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_ROOST, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_ORICORIO_4] = {
        .species = SPECIES_ORICORIO_PAU,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_ORICORIO_5] = {
        .species = SPECIES_ORICORIO_SENSU,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_ORICORIO_6] = {
        .species = SPECIES_ORICORIO_BAILE,
        .moves = {MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_DEFOG, MOVE_TAILWIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DANCER
    },
    [FRONTIER_MON_RIBOMBEE_1] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_RIBOMBEE_2] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_RIBOMBEE_3] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_STICKY_WEB, MOVE_MOONBLAST, MOVE_U_TURN, MOVE_STUN_SPORE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_RIBOMBEE_4] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_RIBOMBEE_5] = {
        .species = SPECIES_RIBOMBEE,
        .moves = {MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_DRAINING_KISS, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_1] = {
        .species = SPECIES_LYCANROC_MIDDAY,
        .moves = {MOVE_STONE_EDGE, MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_2] = {
        .species = SPECIES_LYCANROC_MIDDAY,
        .moves = {MOVE_STONE_EDGE, MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STEADFAST
    },
    [FRONTIER_MON_LYCANROC_MIDDAY_3] = {
        .species = SPECIES_LYCANROC_MIDDAY,
        .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_ACCELEROCK, MOVE_ROAR},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STEADFAST
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_1] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VITAL_SPIRIT
    },
    [FRONTIER_MON_LYCANROC_MIDNIGHT_2] = {
        .species = SPECIES_LYCANROC_MIDNIGHT,
        .moves = {MOVE_HEAD_SMASH, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_NO_GUARD
    },
    [FRONTIER_MON_LYCANROC_DUSK_1] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_LYCANROC_DUSK_2] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_CRUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_LYCANROC_DUSK_3] = {
        .species = SPECIES_LYCANROC_DUSK,
        .moves = {MOVE_MIGHTY_CLEAVE, MOVE_ACCELEROCK, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TOUGH_CLAWS
    },
    [FRONTIER_MON_WISHIWASHI_1] = {
        .species = SPECIES_WISHIWASHI_SCHOOL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SCHOOLING
    },
    [FRONTIER_MON_WISHIWASHI_2] = {
        .species = SPECIES_WISHIWASHI_SCHOOL,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SCHOOLING
    },
    [FRONTIER_MON_WISHIWASHI_3] = {
        .species = SPECIES_WISHIWASHI_SCHOOL,
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SCHOOLING
    },
    [FRONTIER_MON_WISHIWASHI_4] = {
        .species = SPECIES_WISHIWASHI_SCHOOL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENDEAVOR, MOVE_AQUA_JET},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_MILD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MILD,
        .ability = ABILITY_SCHOOLING
    },
    [FRONTIER_MON_WISHIWASHI_5] = {
        .species = SPECIES_WISHIWASHI_SCHOOL,
        .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SCHOOLING
    },
    [FRONTIER_MON_TOXAPEX_1] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC, MOVE_HAZE},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TOXAPEX_2] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC_SPIKES, MOVE_KNOCK_OFF},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_TOXAPEX_3] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_BANEFUL_BUNKER, MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MERCILESS
    },
    [FRONTIER_MON_TOXAPEX_4] = {
        .species = SPECIES_TOXAPEX,
        .moves = {MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_RECOVER, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_MUDSDALE_1] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_MUDSDALE_2] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_HEAVY_SLAM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_MUDSDALE_3] = {
        .species = SPECIES_MUDSDALE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_ROCK_SLIDE, MOVE_CURSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_ARAQUANID_1] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_STICKY_WEB, MOVE_MIRROR_COAT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_ARAQUANID_2] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_POISON_JAB, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_ARAQUANID_3] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_SCALD, MOVE_STICKY_WEB, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_ARAQUANID_4] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_POISON_JAB, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_ARAQUANID_5] = {
        .species = SPECIES_ARAQUANID,
        .moves = {MOVE_SURF, MOVE_BUG_BUZZ, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_LURANTIS_1] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUPERPOWER, MOVE_KNOCK_OFF, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_LURANTIS_2] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_LURANTIS_3] = {
        .species = SPECIES_LURANTIS,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUPERPOWER, MOVE_X_SCISSOR, MOVE_DEFOG},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_SHIINOTIC_1] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_SHIINOTIC_2] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_SHIINOTIC_3] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_SPORE, MOVE_SPARKLY_SWIRL, MOVE_SUBSTITUTE, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_SHIINOTIC_4] = {
        .species = SPECIES_SHIINOTIC,
        .moves = {MOVE_SPARKLY_SWIRL, MOVE_GIGA_DRAIN, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_EFFECT_SPORE
    },
    [FRONTIER_MON_SALAZZLE_1] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_SCORCHING_SANDS, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CORROSION
    },
    [FRONTIER_MON_SALAZZLE_2] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLUDGE_WAVE, MOVE_SCORCHING_SANDS, MOVE_OVERHEAT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CORROSION
    },
    [FRONTIER_MON_SALAZZLE_3] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_ENCORE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CORROSION
    },
    [FRONTIER_MON_SALAZZLE_4] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE, MOVE_SUBSTITUTE, MOVE_DISABLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CORROSION
    },
    [FRONTIER_MON_SALAZZLE_5] = {
        .species = SPECIES_SALAZZLE,
        .moves = {MOVE_OVERHEAT, MOVE_SLUDGE_WAVE, MOVE_SCORCHING_SANDS, MOVE_U_TURN},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CORROSION
    },
    [FRONTIER_MON_BEWEAR_1] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_RETURN, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_BEWEAR_2] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_RETURN, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_BEWEAR_3] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_BEWEAR_4] = {
        .species = SPECIES_BEWEAR,
        .moves = {MOVE_RETURN, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_TSAREENA_1] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_TSAREENA_2] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_TSAREENA_3] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_TSAREENA_4] = {
        .species = SPECIES_TSAREENA,
        .moves = {MOVE_TROP_KICK, MOVE_HIGH_JUMP_KICK, MOVE_RAPID_SPIN, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_COMFEY_1] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_CALM_MIND, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TRIAGE
    },
    [FRONTIER_MON_COMFEY_2] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_U_TURN, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_TRIAGE
    },
    [FRONTIER_MON_COMFEY_3] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_DEFOG, MOVE_LEECH_SEED},
        .heldItem = ITEM_BIG_ROOT,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TRIAGE
    },
    [FRONTIER_MON_COMFEY_4] = {
        .species = SPECIES_COMFEY,
        .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLOWER_VEIL
    },
    [FRONTIER_MON_ORANGURU_1] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_FOUL_PLAY, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_ORANGURU_2] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_INNER_FOCUS
    },
    [FRONTIER_MON_ORANGURU_3] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAGE_POWER
    },
    [FRONTIER_MON_ORANGURU_4] = {
        .species = SPECIES_ORANGURU,
        .moves = {MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAGE_POWER
    },
    [FRONTIER_MON_PASSIMIAN_1] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_GUNK_SHOT},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_PASSIMIAN_2] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_MACH_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_PASSIMIAN_3] = {
        .species = SPECIES_PASSIMIAN,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_GOLISOPOD_1] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EMERGENCY_EXIT
    },
    [FRONTIER_MON_GOLISOPOD_2] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_SPIKES},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EMERGENCY_EXIT
    },
    [FRONTIER_MON_GOLISOPOD_3] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EMERGENCY_EXIT
    },
    [FRONTIER_MON_GOLISOPOD_4] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_EMERGENCY_EXIT
    },
    [FRONTIER_MON_GOLISOPOD_5] = {
        .species = SPECIES_GOLISOPOD,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_AQUA_JET},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_EMERGENCY_EXIT
    },
    [FRONTIER_MON_PALOSSAND_1] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_SHORE_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_WATER_COMPACTION
    },
    [FRONTIER_MON_PALOSSAND_2] = {
        .species = SPECIES_PALOSSAND,
        .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_WATER_COMPACTION
    },
    [FRONTIER_MON_PYUKUMUKU_1] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_RECOVER, MOVE_TOXIC, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_PYUKUMUKU_2] = {
        .species = SPECIES_PYUKUMUKU,
        .moves = {MOVE_RECOVER, MOVE_TOXIC, MOVE_SOAK, MOVE_SPITE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_SILVALLY_1] = {
        .species = SPECIES_SILVALLY,
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_U_TURN},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RKS_SYSTEM
    },
    [FRONTIER_MON_SILVALLY_2] = {
        .species = SPECIES_SILVALLY_FIGHTING,
        .moves = {MOVE_MULTI_ATTACK, MOVE_CRUNCH, MOVE_U_TURN, MOVE_FLAME_CHARGE},
        .heldItem = ITEM_FIGHTING_MEMORY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RKS_SYSTEM
    },
    [FRONTIER_MON_SILVALLY_3] = {
        .species = SPECIES_SILVALLY_FIRE,
        .moves = {MOVE_MULTI_ATTACK, MOVE_CRUNCH, MOVE_U_TURN, MOVE_THUNDERBOLT},
        .heldItem = ITEM_FIRE_MEMORY,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_RKS_SYSTEM
    },
    [FRONTIER_MON_SILVALLY_4] = {
        .species = SPECIES_SILVALLY_STEEL,
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_DEFOG},
        .heldItem = ITEM_STEEL_MEMORY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_RKS_SYSTEM
    },
    [FRONTIER_MON_SILVALLY_5] = {
        .species = SPECIES_SILVALLY_GHOST,
        .moves = {MOVE_MULTI_ATTACK, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_PARTING_SHOT},
        .heldItem = ITEM_GHOST_MEMORY,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_RKS_SYSTEM
    },
    [FRONTIER_MON_MINIOR_1] = {
        .species = SPECIES_MINIOR_METEOR_ORANGE,
        .moves = {MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHIELDS_DOWN
    },
    [FRONTIER_MON_MINIOR_2] = {
        .species = SPECIES_MINIOR_METEOR_ORANGE,
        .moves = {MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_U_TURN},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHIELDS_DOWN
    },
    [FRONTIER_MON_MINIOR_3] = {
        .species = SPECIES_MINIOR_METEOR_ORANGE,
        .moves = {MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELDS_DOWN
    },
    [FRONTIER_MON_MINIOR_4] = {
        .species = SPECIES_MINIOR_METEOR_ORANGE,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_STONE_EDGE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHIELDS_DOWN
    },
    [FRONTIER_MON_KOMALA_1] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_COMATOSE
    },
    [FRONTIER_MON_KOMALA_2] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_WOOD_HAMMER, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_COMATOSE
    },
    [FRONTIER_MON_KOMALA_3] = {
        .species = SPECIES_KOMALA,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_COMATOSE
    },
    [FRONTIER_MON_TURTONATOR_1] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_SHELL_TRAP},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_TURTONATOR_2] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_TURTONATOR_3] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_TURTONATOR_4] = {
        .species = SPECIES_TURTONATOR,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_PULSE, MOVE_CHARGE_BEAM, MOVE_BODY_PRESS},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_TOGEDEMARU_1] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_U_TURN, MOVE_SPIKY_SHIELD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_TOGEDEMARU_2] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_FAKE_OUT, MOVE_ENCORE},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_TOGEDEMARU_3] = {
        .species = SPECIES_TOGEDEMARU,
        .moves = {MOVE_ZING_ZAP, MOVE_IRON_HEAD, MOVE_U_TURN, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_BARBS
    },
    [FRONTIER_MON_MIMIKYU_1] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DISGUISE
    },
    [FRONTIER_MON_MIMIKYU_2] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DISGUISE
    },
    [FRONTIER_MON_MIMIKYU_3] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DISGUISE
    },
    [FRONTIER_MON_MIMIKYU_4] = {
        .species = SPECIES_MIMIKYU,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_TRICK_ROOM, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_DISGUISE
    },
    [FRONTIER_MON_BRUXISH_1] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_BRUXISH_2] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_BRUXISH_3] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_DISABLE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DAZZLING
    },
    [FRONTIER_MON_BRUXISH_4] = {
        .species = SPECIES_BRUXISH,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_POISON_FANG, MOVE_FLIP_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DRAMPA_1] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_DRAMPA_2] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_GLARE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_DRAMPA_3] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FATAL_PRECISION
    },
    [FRONTIER_MON_DRAMPA_4] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BERSERK
    },
    [FRONTIER_MON_DRAMPA_5] = {
        .species = SPECIES_DRAMPA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SAP_SIPPER
    },
    [FRONTIER_MON_DHELMISE_1] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_ANCHOR_SHOT, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STEELY_SPIRIT
    },
    [FRONTIER_MON_DHELMISE_2] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_ANCHOR_SHOT, MOVE_RAPID_SPIN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STEELY_SPIRIT
    },
    [FRONTIER_MON_DHELMISE_3] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POWER_WHIP, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 6, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_STEELY_SPIRIT
    },
    [FRONTIER_MON_DHELMISE_4] = {
        .species = SPECIES_DHELMISE,
        .moves = {MOVE_POWER_WHIP, MOVE_POLTERGEIST, MOVE_EARTHQUAKE, MOVE_ANCHOR_SHOT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STEELWORKER
    },
    [FRONTIER_MON_KOMMO_O_1] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRAGON_CLAW, MOVE_POISON_JAB, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BULLETPROOF
    },
    [FRONTIER_MON_KOMMO_O_2] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLAMETHROWER, MOVE_CLANGOROUS_SOUL},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SOUNDPROOF
    },
    [FRONTIER_MON_KOMMO_O_3] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOUNDPROOF
    },
    [FRONTIER_MON_KOMMO_O_4] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BULLETPROOF
    },
    [FRONTIER_MON_KOMMO_O_5] = {
        .species = SPECIES_KOMMO_O,
        .moves = {MOVE_BODY_PRESS, MOVE_DRAGON_TAIL, MOVE_STEALTH_ROCK, MOVE_IRON_DEFENSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_TAPU_KOKO_1] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_TAPU_KOKO_2] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_TAPU_KOKO_3] = {
        .species = SPECIES_TAPU_KOKO,
        .moves = {MOVE_SUPERCELL_SLAM, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_TAPU_LELE_1] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_TAPU_LELE_2] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_TAPU_LELE_3] = {
        .species = SPECIES_TAPU_LELE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_PSYSHOCK},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_TAPU_BULU_1] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_SYNTHESIS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_TAPU_BULU_2] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_TAPU_BULU_3] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_HORN_LEECH, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_TAPU_BULU_4] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_MEGAHORN, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_TAPU_BULU_5] = {
        .species = SPECIES_TAPU_BULU,
        .moves = {MOVE_WOOD_HAMMER, MOVE_PLAY_ROUGH, MOVE_HORN_LEECH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_TAPU_FINI_1] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_SCALD, MOVE_MOONBLAST, MOVE_DEFOG, MOVE_NATURES_MADNESS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_MISTY_SURGE
    },
    [FRONTIER_MON_TAPU_FINI_2] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_SURF, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_MISTY_SURGE
    },
    [FRONTIER_MON_TAPU_FINI_3] = {
        .species = SPECIES_TAPU_FINI,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MISTY_SURGE
    },
    [FRONTIER_MON_SOLGALEO_1] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_MORNING_SUN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FULL_METAL_BODY
    },
    [FRONTIER_MON_SOLGALEO_2] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FULL_METAL_BODY
    },
    [FRONTIER_MON_SOLGALEO_3] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FULL_METAL_BODY
    },
    [FRONTIER_MON_SOLGALEO_4] = {
        .species = SPECIES_SOLGALEO,
        .moves = {MOVE_SUNSTEEL_STRIKE, MOVE_PSYCHIC, MOVE_MORNING_SUN, MOVE_CALM_MIND},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_FULL_METAL_BODY
    },
    [FRONTIER_MON_LUNALA_1] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_LUNALA_2] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_LUNALA_3] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_LUNALA_4] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_ICE_BEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_LUNALA_5] = {
        .species = SPECIES_LUNALA,
        .moves = {MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHADOW_SHIELD
    },
    [FRONTIER_MON_NIHILEGO_1] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NIHILEGO_2] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NIHILEGO_3] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_THUNDERBOLT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NIHILEGO_4] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_METEOR_BEAM},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NIHILEGO_5] = {
        .species = SPECIES_NIHILEGO,
        .moves = {MOVE_POWER_GEM, MOVE_SLUDGE_WAVE, MOVE_GRASS_KNOT, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BUZZWOLE_1] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEECH_LIFE, MOVE_ICE_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BUZZWOLE_2] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEECH_LIFE, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BUZZWOLE_3] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEECH_LIFE, MOVE_POISON_JAB, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BUZZWOLE_4] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEECH_LIFE, MOVE_THUNDER_PUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BUZZWOLE_5] = {
        .species = SPECIES_BUZZWOLE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_LEECH_LIFE, MOVE_STONE_EDGE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_PHEROMOSA_1] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_TRIPLE_AXEL, MOVE_POISON_JAB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_PHEROMOSA_2] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_TRIPLE_AXEL, MOVE_POISON_JAB},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_PHEROMOSA_3] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_TRIPLE_AXEL, MOVE_POISON_JAB},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_PHEROMOSA_4] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_PHEROMOSA_5] = {
        .species = SPECIES_PHEROMOSA,
        .moves = {MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_RAPID_SPIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_XURKITREE_1] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_TAIL_GLOW},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_XURKITREE_2] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_XURKITREE_3] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_XURKITREE_4] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_TAIL_GLOW},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_XURKITREE_5] = {
        .species = SPECIES_XURKITREE,
        .moves = {MOVE_THUNDER, MOVE_ENERGY_BALL, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_CELESTEELA_1] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_HEAVY_SLAM, MOVE_FLAMETHROWER, MOVE_LEECH_SEED, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_SASSY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_SASSY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_CELESTEELA_2] = {
        .species = SPECIES_CELESTEELA,
        .moves = {MOVE_HEAVY_SLAM, MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_KARTANA_1] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_KARTANA_2] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, MOVE_AERIAL_ACE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_KARTANA_3] = {
        .species = SPECIES_KARTANA,
        .moves = {MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, MOVE_AERIAL_ACE},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_GUZZLORD_1] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_GUZZLORD_2] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_DRACO_METEOR, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_HEAVY_SLAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_GUZZLORD_3] = {
        .species = SPECIES_GUZZLORD,
        .moves = {MOVE_DRAGON_PULSE, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_SLUDGE_WAVE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NECROZMA_1] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_NECROZMA_2] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_POWER_GEM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_NECROZMA_3] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PRISMATIC_LASER, MOVE_HEAT_WAVE, MOVE_PHOTON_GEYSER, MOVE_AUTOTOMIZE},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_NECROZMA_4] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_NECROZMA_5] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_TRICK_ROOM, MOVE_CALM_MIND, MOVE_MOONLIGHT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_RELAXED(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_RELAXED,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_NECROZMA_6] = {
        .species = SPECIES_NECROZMA,
        .moves = {MOVE_PHOTON_GEYSER, MOVE_HEAT_WAVE, MOVE_TRICK_ROOM, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_PRISM_ARMOR
    },
    [FRONTIER_MON_MAGEARNA_1] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_FLEUR_CANNON, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOUL_HEART
    },
    [FRONTIER_MON_MAGEARNA_2] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_FLEUR_CANNON, MOVE_FLASH_CANNON, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SOUL_HEART
    },
    [FRONTIER_MON_MAGEARNA_3] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_FLEUR_CANNON, MOVE_FLASH_CANNON, MOVE_TRICK_ROOM, MOVE_AURA_SPHERE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_SOUL_HEART
    },
    [FRONTIER_MON_MAGEARNA_4] = {
        .species = SPECIES_MAGEARNA,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SOUL_HEART
    },
    [FRONTIER_MON_MARSHADOW_1] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_CLOSE_COMBAT, MOVE_SHADOW_SNEAK, MOVE_BULK_UP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MARSHADOW_2] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_CLOSE_COMBAT, MOVE_ROCK_TOMB, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MARSHADOW_3] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_CLOSE_COMBAT, MOVE_ROCK_TOMB, MOVE_POISON_JAB},
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MARSHADOW_4] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_CLOSE_COMBAT, MOVE_SUBSTITUTE, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_MARSHADOW_5] = {
        .species = SPECIES_MARSHADOW,
        .moves = {MOVE_SPECTRAL_THIEF, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_NAGANADEL_1] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NAGANADEL_2] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_NAGANADEL_3] = {
        .species = SPECIES_NAGANADEL,
        .moves = {MOVE_DRACO_METEOR, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_DRAGON_FANG,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_STAKATAKA_1] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_STAKATAKA_2] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_STAKATAKA_3] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_RELAXED,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_STAKATAKA_4] = {
        .species = SPECIES_STAKATAKA,
        .moves = {MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_PRESS},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BLACEPHALON_1] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BLACEPHALON_2] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BLACEPHALON_3] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_CALM_MIND},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BLACEPHALON_4] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_BLACEPHALON_5] = {
        .species = SPECIES_BLACEPHALON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_PSYSHOCK, MOVE_MIND_BLOWN},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEAST_BOOST
    },
    [FRONTIER_MON_ZERAORA_1] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_BULK_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ZERAORA_2] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ZERAORA_3] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_HASTY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ZERAORA_4] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_GRASS_KNOT, MOVE_KNOCK_OFF},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ZERAORA_5] = {
        .species = SPECIES_ZERAORA,
        .moves = {MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_BLAZE_KICK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_MELMETAL_1] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MELMETAL_2] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MELMETAL_3] = {
        .species = SPECIES_MELMETAL,
        .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_RILLABOOM_1] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_RILLABOOM_2] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_RILLABOOM_3] = {
        .species = SPECIES_RILLABOOM,
        .moves = {MOVE_GRASSY_GLIDE, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GRASSY_SURGE
    },
    [FRONTIER_MON_CINDERACE_1] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIBERO
    },
    [FRONTIER_MON_CINDERACE_2] = {
        .species = SPECIES_CINDERACE,
        .moves = {MOVE_PYRO_BALL, MOVE_GUNK_SHOT, MOVE_HIGH_JUMP_KICK, MOVE_COURT_CHANGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIBERO
    },
    [FRONTIER_MON_INTELEON_1] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_INTELEON_2] = {
        .species = SPECIES_INTELEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_VACUUM_WAVE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_GREEDENT_1] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_ICE_FANG, MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHEEK_POUCH
    },
    [FRONTIER_MON_GREEDENT_2] = {
        .species = SPECIES_GREEDENT,
        .moves = {MOVE_ICE_FANG, MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHEEK_POUCH
    },
    [FRONTIER_MON_CORVIKNIGHT_1] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_DEFOG, MOVE_U_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_CORVIKNIGHT_2] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_BULK_UP, MOVE_IRON_HEAD},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_CORVIKNIGHT_3] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_CORVIKNIGHT_4] = {
        .species = SPECIES_CORVIKNIGHT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_ORBEETLE_1] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_ORBEETLE_2] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_ORBEETLE_3] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_ORBEETLE_4] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SWARM
    },
    [FRONTIER_MON_MEGA_ORBEETLE_1] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_ORBEETLITE,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_MEGA_ORBEETLE_2] = {
        .species = SPECIES_ORBEETLE,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_CALM_MIND},
        .heldItem = ITEM_ORBEETLITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_THIEVUL_1] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_PARTING_SHOT, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_THIEVUL_2] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_PARTING_SHOT, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_THIEVUL_3] = {
        .species = SPECIES_THIEVUL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_PARTING_SHOT, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_ELDEGOSS_1] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_RAPID_SPIN, MOVE_AROMATHERAPY, MOVE_LEECH_SEED},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_ELDEGOSS_2] = {
        .species = SPECIES_ELDEGOSS,
        .moves = {MOVE_LEAF_STORM, MOVE_RAPID_SPIN, MOVE_AROMATHERAPY, MOVE_POLLEN_PUFF},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_DUBWOOL] = {
        .species = SPECIES_DUBWOOL,
        .moves = {MOVE_COTTON_GUARD, MOVE_BODY_PRESS, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_DREDNAW_1] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_AQUA_FANG, MOVE_JAW_LOCK, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DREDNAW_2] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_AQUA_FANG, MOVE_JAW_LOCK, MOVE_STONE_EDGE, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DREDNAW_3] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_AQUA_FANG, MOVE_ROCK_POLISH, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DREDNAW_4] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_LIQUIDATION, MOVE_SUPERPOWER, MOVE_STONE_EDGE, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_MEGA_DREDNAW_1] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_AQUA_FANG, MOVE_ROCK_POLISH, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_DREDNAWITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_MEGA_DREDNAW_2] = {
        .species = SPECIES_DREDNAW,
        .moves = {MOVE_AQUA_FANG, MOVE_JAW_LOCK, MOVE_STONE_EDGE, MOVE_FLIP_TURN},
        .heldItem = ITEM_DREDNAWITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_BOLTUND_1] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_BOLTUND_2] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_BOLTUND_3] = {
        .species = SPECIES_BOLTUND,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_COALOSSAL_1] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYDRO_STEAM, MOVE_EARTH_POWER, MOVE_POWER_GEM},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STEAM_ENGINE
    },
    [FRONTIER_MON_COALOSSAL_2] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_HEAT_CRASH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_MEGA_COALOSSAL] = {
        .species = SPECIES_COALOSSAL,
        .moves = {MOVE_FIRE_BLAST, MOVE_HYDRO_STEAM, MOVE_EARTH_POWER, MOVE_POWER_GEM},
        .heldItem = ITEM_COALOSSITE,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STEAM_ENGINE
    },
    [FRONTIER_MON_FLAPPLE_1] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_GRAV_APPLE, MOVE_DRAGON_RUSH, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_FLAPPLE_2] = {
        .species = SPECIES_FLAPPLE,
        .moves = {MOVE_GRAV_APPLE, MOVE_DRAGON_RUSH, MOVE_DRAGON_DANCE, MOVE_ACROBATICS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_RIPEN
    },
    [FRONTIER_MON_APPLETUN_1] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_APPLE_ACID, MOVE_DRAGON_PULSE, MOVE_RECOVER, MOVE_LEECH_SEED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_APPLETUN_2] = {
        .species = SPECIES_APPLETUN,
        .moves = {MOVE_APPLE_ACID, MOVE_DRACO_METEOR, MOVE_RECOVER, MOVE_LEAF_STORM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_RIPEN
    },
    [FRONTIER_MON_SANDACONDA_1] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_GLARE, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHED_SKIN
    },
    [FRONTIER_MON_SANDACONDA_2] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHED_SKIN
    },
    [FRONTIER_MON_SANDACONDA_3] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_GLARE, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_SPIT
    },
    [FRONTIER_MON_MEGA_SANDACONDA] = {
        .species = SPECIES_SANDACONDA,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_RETURN, MOVE_COIL},
        .heldItem = ITEM_SANDACONDITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SAND_SPIT
    },
    [FRONTIER_MON_CRAMORANT_1] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_GULP_MISSILE
    },
    [FRONTIER_MON_CRAMORANT_2] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GULP_MISSILE
    },
    [FRONTIER_MON_CRAMORANT_3] = {
        .species = SPECIES_CRAMORANT,
        .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_DEFOG, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_GULP_MISSILE
    },
    [FRONTIER_MON_BARRASKEWDA_1] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_BARRASKEWDA_2] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_FLIP_TURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_BARRASKEWDA_3] = {
        .species = SPECIES_BARRASKEWDA,
        .moves = {MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_RAIN_DANCE, MOVE_FLIP_TURN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_TOXTRICITY_1] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_TOXTRICITY_2] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_TOXTRICITY_3] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST},
        .heldItem = ITEM_THROAT_SPRAY,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_MEGA_TOXTRICITY] = {
        .species = SPECIES_TOXTRICITY,
        .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_WAVE, MOVE_VOLT_SWITCH, MOVE_BOOMBURST},
        .heldItem = ITEM_TOXTRICITITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PUNK_ROCK
    },
    [FRONTIER_MON_CENTISKORCH_1] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_COIL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_CENTISKORCH_2] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_MEGA_CENTISKORCH] = {
        .species = SPECIES_CENTISKORCH,
        .moves = {MOVE_FLARE_BLITZ, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CENTISKITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_GRAPPLOCT_1] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_OCTOLOCK, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LIMBER
    },
    [FRONTIER_MON_GRAPPLOCT_2] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_LIQUIDATION, MOVE_ARM_THRUST, MOVE_BRUTAL_SWING, MOVE_BULK_UP},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_GRAPPLOCT_3] = {
        .species = SPECIES_GRAPPLOCT,
        .moves = {MOVE_LIQUIDATION, MOVE_ARM_THRUST, MOVE_BRUTAL_SWING, MOVE_BULK_UP},
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_POLTEAGEIST_1] = {
        .species = SPECIES_POLTEAGEIST_PHONY,
        .moves = {MOVE_SHELL_SMASH, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_HEATPROOF
    },
    [FRONTIER_MON_POLTEAGEIST_2] = {
        .species = SPECIES_POLTEAGEIST_PHONY,
        .moves = {MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HEATPROOF
    },
    [FRONTIER_MON_HATTERENE_1] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_HATTERENE_2] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_HATTERENE_3] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_HATTERENE_4] = {
        .species = SPECIES_HATTERENE,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MAGIC_BOUNCE
    },
    [FRONTIER_MON_GRIMMSNARL_1] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_FALSE_SURRENDER, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_GRIMMSNARL_2] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_FALSE_SURRENDER, MOVE_BULK_UP, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_MEGA_GRIMMSNARL] = {
        .species = SPECIES_GRIMMSNARL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_FALSE_SURRENDER, MOVE_BULK_UP, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_GRIMMITE,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PRANKSTER
    },
    [FRONTIER_MON_ALCREMIE_1] = {
        .species = SPECIES_ALCREMIE,
        .moves = {MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_RECOVER, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_AROMA_VEIL
    },
    [FRONTIER_MON_ALCREMIE_2] = {
        .species = SPECIES_ALCREMIE,
        .moves = {MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_ENERGY_BALL},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_AROMA_VEIL
    },
    [FRONTIER_MON_FALINKS_1] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_FALINKS_2] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_FALINKS_3] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_FALINKS_4] = {
        .species = SPECIES_FALINKS,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_PINCURCHIN_1] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_ELECTRIC_TERRAIN, MOVE_MEMENTO, MOVE_SPIKES},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_PINCURCHIN_2] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_RISING_VOLTAGE, MOVE_SCALD, MOVE_RECOVER, MOVE_SPIKES},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ELECTRIC_SURGE
    },
    [FRONTIER_MON_FROSMOTH_1] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_QUIVER_DANCE, MOVE_SUBSTITUTE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ICE_SCALES
    },
    [FRONTIER_MON_FROSMOTH_2] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ICE_BEAM, MOVE_STUN_SPORE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 20, 240, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_ICE_SCALES
    },
    [FRONTIER_MON_STONJOURNER_1] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_STONJOURNER_2] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_STONJOURNER_3] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_STONJOURNER_4] = {
        .species = SPECIES_PINCURCHIN,
        .moves = {MOVE_STONE_EDGE, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE, MOVE_SUPERPOWER},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_EISCUE_1] = {
        .species = SPECIES_EISCUE_ICE,
        .moves = {MOVE_BELLY_DRUM, MOVE_SUBSTITUTE, MOVE_ICE_SPINNER, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ICE_FACE
    },
    [FRONTIER_MON_EISCUE_2] = {
        .species = SPECIES_EISCUE_ICE,
        .moves = {MOVE_LIQUIDATION, MOVE_IRON_HEAD, MOVE_ICE_SPINNER, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ICE_FACE
    },
    [FRONTIER_MON_INDEEDEE_M_1] = {
        .species = SPECIES_INDEEDEE_M,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HYPER_VOICE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_INDEEDEE_M_2] = {
        .species = SPECIES_INDEEDEE_M,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HYPER_VOICE, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_INDEEDEE_M_3] = {
        .species = SPECIES_INDEEDEE_M,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_HEALING_WISH},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_INDEEDEE_M_4] = {
        .species = SPECIES_INDEEDEE_M,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_MYSTICAL_FIRE, MOVE_HYPER_VOICE, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_INDEEDEE_F_1] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_PSYCHIC, MOVE_ALLURING_VOICE, MOVE_HEALING_WISH, MOVE_ENERGY_BALL},
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_INDEEDEE_F_2] = {
        .species = SPECIES_INDEEDEE_F,
        .moves = {MOVE_PSYCHIC, MOVE_ALLURING_VOICE, MOVE_CALM_MIND, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PSYCHIC_SURGE
    },
    [FRONTIER_MON_MORPEKO_1] = {
        .species = SPECIES_MORPEKO_FULL_BELLY,
        .moves = {MOVE_AURA_WHEEL, MOVE_CRUNCH, MOVE_SEED_BOMB, MOVE_PARTING_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUNGER_SWITCH
    },
    [FRONTIER_MON_MORPEKO_2] = {
        .species = SPECIES_MORPEKO_FULL_BELLY,
        .moves = {MOVE_AURA_WHEEL, MOVE_RAPID_SPIN, MOVE_PROTECT, MOVE_PARTING_SHOT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUNGER_SWITCH
    },
    [FRONTIER_MON_COPPERAJAH_1] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_COPPERAJAH_2] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_MEGA_COPPERAJAH] = {
        .species = SPECIES_COPPERAJAH,
        .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER},
        .heldItem = ITEM_COPPERAJITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_DRACOZOLT_1] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FIRE_FANG},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_DRACOZOLT_2] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS(0, 148, 0, 176, 0, 184),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAUGHTY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_DRACOZOLT_3] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRACO_METEOR, MOVE_SUBSTITUTE, MOVE_FIRE_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 184, 0, 140, 0, 184),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_LONELY,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_DRACOZOLT_4] = {
        .species = SPECIES_DRACOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FIRE_FANG},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_ARCTOZOLT_1] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_ARCTOZOLT_2] = {
        .species = SPECIES_ARCTOZOLT,
        .moves = {MOVE_BOLT_BEAK, MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_LOW_KICK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_DRACOVISH_1] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_OUTRAGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DRACOVISH_2] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_OUTRAGE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_DRACOVISH_3] = {
        .species = SPECIES_DRACOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRONG_JAW
    },
    [FRONTIER_MON_ARCTOVISH_1] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_FREEZE_DRY, MOVE_ICICLE_CRASH, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_ARCTOVISH_2] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_ARCTOVISH_3] = {
        .species = SPECIES_ARCTOVISH,
        .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_STONE_EDGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_DURALUDON_1] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_DURALUDON_2] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_BODY_PRESS},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_DURALUDON_3] = {
        .species = SPECIES_DURALUDON,
        .moves = {MOVE_SWORDS_DANCE, MOVE_HEAVY_SLAM, MOVE_DRAGON_CLAW, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HEAVY_METAL
    },
    [FRONTIER_MON_DRAGAPULT_1] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRAGON_DARTS, MOVE_PHANTOM_FORCE, MOVE_U_TURN, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_DRAGAPULT_2] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRAGON_DARTS, MOVE_PSYCHIC_FANGS, MOVE_U_TURN, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_DRAGAPULT_3] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_SHADOW_BALL, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_INFILTRATOR
    },
    [FRONTIER_MON_DRAGAPULT_4] = {
        .species = SPECIES_DRAGAPULT,
        .moves = {MOVE_DRAGON_DARTS, MOVE_PHANTOM_FORCE, MOVE_WILL_O_WISP, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CLEAR_BODY
    },
    [FRONTIER_MON_ZACIAN_1] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTREPID_SWORD
    },
    [FRONTIER_MON_ZACIAN_2] = {
        .species = SPECIES_ZACIAN,
        .moves = {MOVE_SACRED_SWORD, MOVE_PLAY_ROUGH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_RUSTED_SWORD,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTREPID_SWORD
    },
    [FRONTIER_MON_ZAMAZENTA_1] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_CRUNCH, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 168),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_ZAMAZENTA_2] = {
        .species = SPECIES_ZAMAZENTA,
        .moves = {MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_REST, MOVE_SUBSTITUTE},
        .heldItem = ITEM_RUSTED_SHIELD,
        .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 168),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DAUNTLESS_SHIELD
    },
    [FRONTIER_MON_ETERNATUS_1] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_RECOVER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_ETERNATUS_2] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_FLAMETHROWER, MOVE_RECOVER, MOVE_TOXIC_SPIKES},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_ETERNATUS_3] = {
        .species = SPECIES_ETERNATUS,
        .moves = {MOVE_DYNAMAX_CANNON, MOVE_FIRE_BLAST, MOVE_METEOR_BEAM, MOVE_AGILITY},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PRESSURE
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_1] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNSEEN_FIST
    },
    [FRONTIER_MON_URSHIFU_SINGLE_STRIKE_2] = {
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .moves = {MOVE_WICKED_BLOW, MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNSEEN_FIST
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_1] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNSEEN_FIST
    },
    [FRONTIER_MON_URSHIFU_RAPID_STRIKE_2] = {
        .species = SPECIES_URSHIFU_RAPID_STRIKE,
        .moves = {MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_UNSEEN_FIST
    },
    [FRONTIER_MON_ZARUDE_1] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_JUNGLE_HEALING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ZARUDE_2] = {
        .species = SPECIES_ZARUDE,
        .moves = {MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_REGIELEKI_1] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRANSISTOR
    },
    [FRONTIER_MON_REGIELEKI_2] = {
        .species = SPECIES_REGIELEKI,
        .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_RAPID_SPIN, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TRANSISTOR
    },
    [FRONTIER_MON_REGIDRAGO_1] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_ANCIENT_POWER, MOVE_FIRE_FANG},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_RASH,
        .ability = ABILITY_DRAGONS_MAW
    },
    [FRONTIER_MON_REGIDRAGO_2] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_ENERGY, MOVE_DRACO_METEOR, MOVE_ANCIENT_POWER, MOVE_FIRE_FANG},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_RASH,
        .ability = ABILITY_DRAGONS_MAW
    },
    [FRONTIER_MON_REGIDRAGO_3] = {
        .species = SPECIES_REGIDRAGO,
        .moves = {MOVE_DRAGON_DANCE, MOVE_SCALE_SHOT, MOVE_THUNDER_FANG, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DRAGONS_MAW
    },
    [FRONTIER_MON_GLASTRIER_1] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHILLING_NEIGH
    },
    [FRONTIER_MON_GLASTRIER_2] = {
        .species = SPECIES_GLASTRIER,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_CLOSE_COMBAT, MOVE_MEGAHORN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CHILLING_NEIGH
    },
    [FRONTIER_MON_SPECTRIER_1] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GRIM_NEIGH
    },
    [FRONTIER_MON_SPECTRIER_2] = {
        .species = SPECIES_SPECTRIER,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_DRAINING_KISS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GRIM_NEIGH
    },
    [FRONTIER_MON_CALYREX_1] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYSHOCK, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_CALYREX_2] = {
        .species = SPECIES_CALYREX,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_ENERGY_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_UNNERVE
    },
    [FRONTIER_MON_CALYREX_ICE] = {
        .species = SPECIES_CALYREX_ICE,
        .moves = {MOVE_GLACIAL_LANCE, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BRAVE(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_BRAVE,
        .ability = ABILITY_AS_ONE_ICE_RIDER
    },
    [FRONTIER_MON_CALYREX_SHADOW_1] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_GRASS_KNOT, MOVE_PSYCHIC, MOVE_TRICK},
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AS_ONE_SHADOW_RIDER
    },
    [FRONTIER_MON_CALYREX_SHADOW_2] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_GRASS_KNOT, MOVE_PSYSHOCK, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AS_ONE_SHADOW_RIDER
    },
    [FRONTIER_MON_CALYREX_SHADOW_3] = {
        .species = SPECIES_CALYREX_SHADOW,
        .moves = {MOVE_ASTRAL_BARRAGE, MOVE_GRASS_KNOT, MOVE_PSYSHOCK, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_AS_ONE_SHADOW_RIDER
    },
    [FRONTIER_MON_URSALUNA] = {
        .species = SPECIES_URSALUNA,
        .moves = {MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_HEADLONG_RUSH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_URSALUNA_BLOODMOON] = {
        .species = SPECIES_URSALUNA_BLOODMOON,
        .moves = {MOVE_CALM_MIND, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_EARTH_POWER},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_MINDS_EYE
    },
    [FRONTIER_MON_ENAMORUS_INCARNATE_1] = {
        .species = SPECIES_ENAMORUS_INCARNATE,
        .moves = {MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE, MOVE_HEALING_WISH},
        .heldItem = ITEM_FAIRY_FEATHER,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_ENAMORUS_INCARNATE_2] = {
        .species = SPECIES_ENAMORUS_INCARNATE,
        .moves = {MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE, MOVE_HEALING_WISH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_ENAMORUS_INCARNATE_3] = {
        .species = SPECIES_ENAMORUS_INCARNATE,
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_CUTE_CHARM
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_1] = {
        .species = SPECIES_ENAMORUS_THERIAN,
        .moves = {MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_ENAMORUS_THERIAN_2] = {
        .species = SPECIES_ENAMORUS_THERIAN,
        .moves = {MOVE_DRAINING_KISS, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_OVERCOAT
    },
    [FRONTIER_MON_MEOWSCARADA_1] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_PLAY_ROUGH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTEAN
    },
    [FRONTIER_MON_MEOWSCARADA_2] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_TRIPLE_AXEL, MOVE_U_TURN},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_MEOWSCARADA_3] = {
        .species = SPECIES_MEOWSCARADA,
        .moves = {MOVE_FLOWER_TRICK, MOVE_KNOCK_OFF, MOVE_SPIKES, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_SKELEDIRGE_1] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_SLACK_OFF, MOVE_WILL_O_WISP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_SKELEDIRGE_2] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_SLACK_OFF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_SKELEDIRGE_3] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_SKELEDIRGE_4] = {
        .species = SPECIES_SKELEDIRGE,
        .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_ALLURING_VOICE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_QUAQUAVAL_1] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_QUAQUAVAL_2] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_QUAQUAVAL_3] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_QUAQUAVAL_4] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ICE_SPINNER},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_QUAQUAVAL_5] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_RAPID_SPIN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_QUAQUAVAL_6] = {
        .species = SPECIES_QUAQUAVAL,
        .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_TRIPLE_AXEL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOXIE
    },
    [FRONTIER_MON_OINKOLOGNE_F_1] = {
        .species = SPECIES_OINKOLOGNE_F,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_OINKOLOGNE_F_2] = {
        .species = SPECIES_OINKOLOGNE_F,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LINGERING_AROMA
    },
    [FRONTIER_MON_OINKOLOGNE_F_3] = {
        .species = SPECIES_OINKOLOGNE_F,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_OINKOLOGNE_F_4] = {
        .species = SPECIES_OINKOLOGNE_F,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LINGERING_AROMA
    },
    [FRONTIER_MON_OINKOLOGNE_M_1] = {
        .species = SPECIES_OINKOLOGNE_M,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_OINKOLOGNE_M_2] = {
        .species = SPECIES_OINKOLOGNE_M,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LINGERING_AROMA
    },
    [FRONTIER_MON_OINKOLOGNE_M_3] = {
        .species = SPECIES_OINKOLOGNE_M,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_OINKOLOGNE_M_4] = {
        .species = SPECIES_OINKOLOGNE_M,
        .moves = {MOVE_EARTHQUAKE, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_LINGERING_AROMA
    },
    [FRONTIER_MON_SPIDOPS_1] = {
        .species = SPECIES_SPIDOPS,
        .moves = {MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_STICKY_WEB, MOVE_FIRST_IMPRESSION},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_INSOMNIA
    },
    [FRONTIER_MON_SPIDOPS_2] = {
        .species = SPECIES_SPIDOPS,
        .moves = {MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_LOKIX_1] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_AXE_KICK, MOVE_TRIPLE_AXEL, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_LOKIX_2] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_AXE_KICK, MOVE_TRIPLE_AXEL, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_LOKIX_3] = {
        .species = SPECIES_LOKIX,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_AXE_KICK, MOVE_TRIPLE_AXEL, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_PAWMOT_1] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_PAWMOT_2] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_PAWMOT_3] = {
        .species = SPECIES_PAWMOT,
        .moves = {MOVE_DOUBLE_SHOCK, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_MAUSHOLD_FOUR] = {
        .species = SPECIES_MAUSHOLD_FOUR,
        .moves = {MOVE_TIDY_UP, MOVE_POPULATION_BOMB, MOVE_BITE, MOVE_ENCORE},
        .heldItem = ITEM_WIDE_LENS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TECHNICIAN
    },
    [FRONTIER_MON_DACHSBUN_1] = {
        .species = SPECIES_DACHSBUN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_BODY_PRESS, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WELL_BAKED_BODY
    },
    [FRONTIER_MON_DACHSBUN_2] = {
        .species = SPECIES_DACHSBUN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_BODY_PRESS, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WELL_BAKED_BODY
    },
    [FRONTIER_MON_DACHSBUN_3] = {
        .species = SPECIES_DACHSBUN,
        .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_BODY_PRESS, MOVE_STOMPING_TANTRUM},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WELL_BAKED_BODY
    },
    [FRONTIER_MON_ARBOLIVA_1] = {
        .species = SPECIES_ARBOLIVA,
        .moves = {MOVE_ALLURING_VOICE, MOVE_GIGA_DRAIN, MOVE_PETAL_DANCE, MOVE_EARTH_POWER},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_SEED_SOWER
    },
    [FRONTIER_MON_ARBOLIVA_2] = {
        .species = SPECIES_ARBOLIVA,
        .moves = {MOVE_LEECH_SEED, MOVE_ENCORE, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_SEED_SOWER
    },
    [FRONTIER_MON_SQUAWKABILLY_1] = {
        .species = SPECIES_SQUAWKABILLY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_DEFOG, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SQUAWKABILLY_2] = {
        .species = SPECIES_SQUAWKABILLY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_GARGANACL_1] = {
        .species = SPECIES_GARGANACL,
        .moves = {MOVE_CURSE, MOVE_SALT_CURE, MOVE_RECOVER, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PURIFYING_SALT
    },
    [FRONTIER_MON_GARGANACL_2] = {
        .species = SPECIES_GARGANACL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_SALT_CURE, MOVE_RECOVER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_PURIFYING_SALT
    },
    [FRONTIER_MON_ARMAROUGE_1] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYSHOCK, MOVE_ARMOR_CANNON, MOVE_CALM_MIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_ARMAROUGE_2] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_ENERGY_BALL, MOVE_PSYSHOCK, MOVE_ARMOR_CANNON, MOVE_CALM_MIND},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_ARMAROUGE_3] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYSHOCK, MOVE_ARMOR_CANNON, MOVE_AURA_SPHERE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_ARMAROUGE_4] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYSHOCK, MOVE_ARMOR_CANNON, MOVE_AURA_SPHERE},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_ARMAROUGE_5] = {
        .species = SPECIES_ARMAROUGE,
        .moves = {MOVE_ENERGY_BALL, MOVE_PSYSHOCK, MOVE_ENDURE, MOVE_AURA_SPHERE},
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_CERULEDGE_1] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WEAK_ARMOR
    },
    [FRONTIER_MON_CERULEDGE_2] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_CERULEDGE_3] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_CERULEDGE_4] = {
        .species = SPECIES_CERULEDGE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_POLTERGEIST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_BELLIBOLT_1] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_SLACK_OFF, MOVE_TOXIC, MOVE_MUDDY_WATER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_BELLIBOLT_2] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, MOVE_SOAK},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_KILOWATTREL_1] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_U_TURN, MOVE_HURRICANE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_KILOWATTREL_2] = {
        .species = SPECIES_BELLIBOLT,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDERBOLT, MOVE_U_TURN, MOVE_ROOST},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_VOLT_ABSORB
    },
    [FRONTIER_MON_MABOSSTIFF_1] = {
        .species = SPECIES_MABOSSTIFF,
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_DESTINY_BOND},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_MABOSSTIFF_2] = {
        .species = SPECIES_MABOSSTIFF,
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_PSYCHIC_FANGS, MOVE_DESTINY_BOND},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STAKEOUT
    },
    [FRONTIER_MON_GRAFAIAI] = {
        .species = SPECIES_GRAFAIAI,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ACROBATICS, MOVE_LOW_KICK, MOVE_GUNK_SHOT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_UNBURDEN
    },
    [FRONTIER_MON_BRAMBLEGHAST_1] = {
        .species = SPECIES_BRAMBLEGHAST,
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_RAPID_SPIN, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WIND_RIDER
    },
    [FRONTIER_MON_BRAMBLEGHAST_2] = {
        .species = SPECIES_BRAMBLEGHAST,
        .moves = {MOVE_POLTERGEIST, MOVE_POWER_WHIP, MOVE_RAPID_SPIN, MOVE_SHADOW_SNEAK},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WIND_RIDER
    },
    [FRONTIER_MON_TOEDSCRUEL_1] = {
        .species = SPECIES_TOEDSCRUEL,
        .moves = {MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MYCELIUM_MIGHT
    },
    [FRONTIER_MON_TOEDSCRUEL_2] = {
        .species = SPECIES_TOEDSCRUEL,
        .moves = {MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MYCELIUM_MIGHT
    },
    [FRONTIER_MON_KLAWF_1] = {
        .species = SPECIES_KLAWF,
        .moves = {MOVE_SWORDS_DANCE, MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ANGER_SHELL
    },
    [FRONTIER_MON_KLAWF_2] = {
        .species = SPECIES_KLAWF,
        .moves = {MOVE_TEMPER_FLARE, MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_SCOVILLAIN_1] = {
        .species = SPECIES_SCOVILLAIN,
        .moves = {MOVE_FLAMETHROWER, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_SCOVILLAIN_2] = {
        .species = SPECIES_SCOVILLAIN,
        .moves = {MOVE_FLAMETHROWER, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_RABSCA_1] = {
        .species = SPECIES_RABSCA,
        .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_BUG_BUZZ, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_RABSCA_2] = {
        .species = SPECIES_RABSCA,
        .moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_BUG_BUZZ, MOVE_SPEED_SWAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_SYNCHRONIZE
    },
    [FRONTIER_MON_ESPATHRA] = {
        .species = SPECIES_ESPATHRA,
        .moves = {MOVE_CALM_MIND, MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(152, 0, 244, 0, 0, 122),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_TINKATON_1] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_STEALTH_ROCK, MOVE_GIGATON_HAMMER, MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(248, 0, 184, 0, 76, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_OWN_TEMPO
    },
    [FRONTIER_MON_TINKATON_2] = {
        .species = SPECIES_TINKATON,
        .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_OWN_TEMPO
    },
    [FRONTIER_MON_WUGTRIO_1] = {
        .species = SPECIES_WUGTRIO,
        .moves = {MOVE_TRIPLE_DIVE, MOVE_EARTHQUAKE, MOVE_AQUA_JET, MOVE_ICE_SPINNER},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_WUGTRIO_2] = {
        .species = SPECIES_WUGTRIO,
        .moves = {MOVE_TRIPLE_DIVE, MOVE_EARTHQUAKE, MOVE_AQUA_JET, MOVE_ICE_SPINNER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GOOEY
    },
    [FRONTIER_MON_BOMBIRDIER_1] = {
        .species = SPECIES_BOMBIRDIER,
        .moves = {MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_BOMBIRDIER_2] = {
        .species = SPECIES_BOMBIRDIER,
        .moves = {MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCKY_PAYLOAD
    },
    [FRONTIER_MON_PALAFIN_1] = {
        .species = SPECIES_PALAFIN,
        .moves = {MOVE_JET_PUNCH, MOVE_FLIP_TURN, MOVE_WAVE_CRASH, MOVE_ZEN_HEADBUTT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ZERO_TO_HERO
    },
    [FRONTIER_MON_PALAFIN_2] = {
        .species = SPECIES_PALAFIN,
        .moves = {MOVE_JET_PUNCH, MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_TAUNT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_ZERO_TO_HERO
    },
    [FRONTIER_MON_REVAVROOM_1] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SHIFT_GEAR, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_TEMPER_FLARE},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REVAVROOM_2] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SPIN_OUT, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_TEMPER_FLARE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REVAVROOM_3] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SPIN_OUT, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_TEMPER_FLARE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_REVAVROOM_4] = {
        .species = SPECIES_REVAVROOM,
        .moves = {MOVE_SPIN_OUT, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER, MOVE_TEMPER_FLARE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER
    },
    [FRONTIER_MON_CYCLIZAR_1] = {
        .species = SPECIES_CYCLIZAR,
        .moves = {MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_DRACO_METEOR},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(104, 0, 0, 0, 152, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_CYCLIZAR_2] = {
        .species = SPECIES_CYCLIZAR,
        .moves = {MOVE_RAPID_SPIN, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_TAUNT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(252, 6, 0, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_ORTHWORM_1] = {
        .species = SPECIES_ORTHWORM,
        .moves = {MOVE_STEALTH_ROCK, MOVE_HEAVY_SLAM, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 16, 0, 240, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_EARTH_EATER
    },
    [FRONTIER_MON_ORTHWORM_2] = {
        .species = SPECIES_ORTHWORM,
        .moves = {MOVE_COIL, MOVE_SUBSTITUTE, MOVE_IRON_TAIL, MOVE_BODY_PRESS},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_EARTH_EATER
    },
    [FRONTIER_MON_GLIMMORA_1] = {
        .species = SPECIES_GLIMMORA,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MORTAL_SPIN, MOVE_POWER_GEM, MOVE_EARTH_POWER},
        .heldItem = ITEM_FOCUS_SASH,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TOXIC_DEBRIS
    },
    [FRONTIER_MON_GLIMMORA_2] = {
        .species = SPECIES_GLIMMORA,
        .moves = {MOVE_METEOR_BEAM, MOVE_MORTAL_SPIN, MOVE_DAZZLING_GLEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TOXIC_DEBRIS
    },
    [FRONTIER_MON_HOUNDSTONE_1] = {
        .species = SPECIES_HOUNDSTONE,
        .moves = {MOVE_POLTERGEIST, MOVE_BODY_PRESS, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_HOUNDSTONE_2] = {
        .species = SPECIES_HOUNDSTONE,
        .moves = {MOVE_POLTERGEIST, MOVE_SHADOW_SNEAK, MOVE_PLAY_ROUGH, MOVE_ROAR},
        .heldItem = ITEM_SPELL_TAG,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FLUFFY
    },
    [FRONTIER_MON_FLAMIGO_1] = {
        .species = SPECIES_FLAMIGO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_THROAT_CHOP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_FLAMIGO_2] = {
        .species = SPECIES_FLAMIGO,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_U_TURN, MOVE_THROAT_CHOP},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_FLAMIGO_3] = {
        .species = SPECIES_FLAMIGO,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_ROOST},
        .heldItem = ITEM_NONE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SCRAPPY
    },
    [FRONTIER_MON_CETITAN_1] = {
        .species = SPECIES_CETITAN,
        .moves = {MOVE_BELLY_DRUM, MOVE_ICE_SHARD, MOVE_ICE_SPINNER, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SLUSH_RUSH
    },
    [FRONTIER_MON_CETITAN_2] = {
        .species = SPECIES_CETITAN,
        .moves = {MOVE_BELLY_DRUM, MOVE_ICE_SHARD, MOVE_ICE_SPINNER, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_VELUZA_1] = {
        .species = SPECIES_VELUZA,
        .moves = {MOVE_FILLET_AWAY, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_AQUA_JET},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_VELUZA_2] = {
        .species = SPECIES_VELUZA,
        .moves = {MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_AQUA_JET},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_DONDOZO_1] = {
        .species = SPECIES_DONDOZO,
        .moves = {MOVE_WATERFALL, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_DONDOZO_2] = {
        .species = SPECIES_DONDOZO,
        .moves = {MOVE_BODY_PRESS, MOVE_AVALANCHE, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_UNAWARE
    },
    [FRONTIER_MON_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_BULK_UP, MOVE_TAUNT, MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_2] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_BULK_UP, MOVE_REST, MOVE_SLEEP_TALK, MOVE_RAGE_FIST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_3] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_ICE_PUNCH, MOVE_RAGE_FIST},
        .heldItem = ITEM_EXPERT_BELT,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_4] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_RAGE_FIST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_FARIGIRAF_1] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_AGILITY, MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_TERA_BLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_ARMOR_TAIL
    },
    [FRONTIER_MON_FARIGIRAF_2] = {
        .species = SPECIES_FARIGIRAF,
        .moves = {MOVE_TRICK_ROOM, MOVE_NASTY_PLOT, MOVE_PSYSHOCK, MOVE_TERA_BLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ARMOR_TAIL
    },
    [FRONTIER_MON_GREAT_TUSK_1] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_ICE_SPINNER, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_GREAT_TUSK_2] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_ICE_SPINNER, MOVE_RAPID_SPIN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_GREAT_TUSK_3] = {
        .species = SPECIES_GREAT_TUSK,
        .moves = {MOVE_BULK_UP, MOVE_HEADLONG_RUSH, MOVE_RAPID_SPIN, MOVE_ICE_SPINNER},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(252, 6, 0, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SCREAM_TAIL_1] = {
        .species = SPECIES_SCREAM_TAIL,
        .moves = {MOVE_CALM_MIND, MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_PSYCHIC_NOISE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SCREAM_TAIL_2] = {
        .species = SPECIES_SCREAM_TAIL,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_ENCORE, MOVE_PSYCHIC_NOISE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 88, 0, 0, 168),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SCREAM_TAIL_3] = {
        .species = SPECIES_SCREAM_TAIL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE, MOVE_ENCORE, MOVE_MISTY_EXPLOSION},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_BRUTE_BONNET_1] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_CRUNCH},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_BRUTE_BONNET_2] = {
        .species = SPECIES_BRUTE_BONNET,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SEED_BOMB, MOVE_CRUNCH},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_FLUTTER_MANE_1] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_FLUTTER_MANE_2] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_FLUTTER_MANE_3] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_FLUTTER_MANE_4] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_FLUTTER_MANE_5] = {
        .species = SPECIES_FLUTTER_MANE,
        .moves = {MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_MYSTICAL_FIRE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SLITHER_WING_1] = {
        .species = SPECIES_SLITHER_WING,
        .moves = {MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SLITHER_WING_2] = {
        .species = SPECIES_SLITHER_WING,
        .moves = {MOVE_LEECH_LIFE, MOVE_EARTHQUAKE, MOVE_FLAME_CHARGE, MOVE_BULK_UP},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SANDY_SHOCKS_1] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_EARTH_POWER, MOVE_VOLT_SWITCH, MOVE_POWER_GEM, MOVE_SPIKES},
        .heldItem = ITEM_SHUCA_BERRY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_SANDY_SHOCKS_2] = {
        .species = SPECIES_SANDY_SHOCKS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_SPIKES},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_IRON_TREADS_1] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_STEEL_BEAM, MOVE_EARTH_POWER, MOVE_RAPID_SPIN},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_TREADS_2] = {
        .species = SPECIES_IRON_TREADS,
        .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_BUNDLE_1] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_BUNDLE_2] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_ICE_BEAM, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_BUNDLE_3] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_ENCORE, MOVE_FLIP_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_BUNDLE_4] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_ICE_BEAM, MOVE_U_TURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_HANDS_1] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_SUPERCELL_SLAM, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_HANDS_2] = {
        .species = SPECIES_IRON_BUNDLE,
        .moves = {MOVE_BELLY_DRUM, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_JUGULIS_1] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_HURRICANE, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TAUNT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_JUGULIS_2] = {
        .species = SPECIES_IRON_JUGULIS,
        .moves = {MOVE_HURRICANE, MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_TAUNT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(124, 0, 0, 132, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_MOTH_1] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(0, 124, 0, 132, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_MOTH_2] = {
        .species = SPECIES_IRON_MOTH,
        .moves = {MOVE_FIERY_DANCE, MOVE_SLUDGE_WAVE, MOVE_DAZZLING_GLEAM, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_THORNS_1] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST},
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_THORNS_2] = {
        .species = SPECIES_IRON_THORNS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FUSION_BOLT, MOVE_STONE_EDGE, MOVE_ACCELEROCK},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_BAXCALIBUR_1] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THERMAL_EXCHANGE
    },
    [FRONTIER_MON_BAXCALIBUR_2] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD},
        .heldItem = ITEM_LOADED_DICE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THERMAL_EXCHANGE
    },
    [FRONTIER_MON_BAXCALIBUR_3] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THERMAL_EXCHANGE
    },
    [FRONTIER_MON_BAXCALIBUR_4] = {
        .species = SPECIES_BAXCALIBUR,
        .moves = {MOVE_ICICLE_CRASH, MOVE_GLAIVE_RUSH, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THERMAL_EXCHANGE
    },
    [FRONTIER_MON_GHOLDENGO_1] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_2] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_3] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_4] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_5] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_DAZZLING_GLEAM},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_6] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_NASTY_PLOT},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_GHOLDENGO_7] = {
        .species = SPECIES_GHOLDENGO,
        .moves = {MOVE_MAKE_IT_RAIN, MOVE_HEX, MOVE_RECOVER, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_GOOD_AS_GOLD
    },
    [FRONTIER_MON_WO_CHIEN_1] = {
        .species = SPECIES_WO_CHIEN,
        .moves = {MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_RUINATION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_TABLETS_OF_RUIN
    },
    [FRONTIER_MON_WO_CHIEN_2] = {
        .species = SPECIES_WO_CHIEN,
        .moves = {MOVE_KNOCK_OFF, MOVE_FOUL_PLAY, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_IMPISH(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_IMPISH,
        .ability = ABILITY_TABLETS_OF_RUIN
    },
    [FRONTIER_MON_CHIEN_PAO_1] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_CRUNCH, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_ICE_SHARD},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWORD_OF_RUIN
    },
    [FRONTIER_MON_CHIEN_PAO_2] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_CRUNCH, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWORD_OF_RUIN
    },
    [FRONTIER_MON_CHIEN_PAO_3] = {
        .species = SPECIES_CHIEN_PAO,
        .moves = {MOVE_CRUNCH, MOVE_ICICLE_CRASH, MOVE_SACRED_SWORD, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SWORD_OF_RUIN
    },
    [FRONTIER_MON_TING_LU_1] = {
        .species = SPECIES_TING_LU,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_WHIRLWIND, MOVE_RUINATION},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_VESSEL_OF_RUIN
    },
    [FRONTIER_MON_TING_LU_2] = {
        .species = SPECIES_TING_LU,
        .moves = {MOVE_REST, MOVE_EARTHQUAKE, MOVE_SLEEP_TALK, MOVE_RUINATION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_CAREFUL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_VESSEL_OF_RUIN
    },
    [FRONTIER_MON_CHI_YU_1] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_OVERHEAT, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEADS_OF_RUIN
    },
    [FRONTIER_MON_CHI_YU_2] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_OVERHEAT, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_BEADS_OF_RUIN
    },
    [FRONTIER_MON_CHI_YU_3] = {
        .species = SPECIES_CHI_YU,
        .moves = {MOVE_SUBSTITUTE, MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_BEADS_OF_RUIN
    },
    [FRONTIER_MON_ROARING_MOON_1] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_OUTRAGE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_ROARING_MOON_2] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_U_TURN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_OUTRAGE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_ROARING_MOON_3] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_ROARING_MOON_4] = {
        .species = SPECIES_ROARING_MOON,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_IRON_VALIANT_1] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_DESTINY_BOND},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_VALIANT_2] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_VALIANT_3] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_VALIANT_4] = {
        .species = SPECIES_IRON_VALIANT,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_ENCORE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_KORAIDON_1] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ORICHALCUM_PULSE
    },
    [FRONTIER_MON_KORAIDON_2] = {
        .species = SPECIES_KORAIDON,
        .moves = {MOVE_COLLISION_COURSE, MOVE_FLARE_BLITZ, MOVE_OUTRAGE, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ORICHALCUM_PULSE
    },
    [FRONTIER_MON_MIRAIDON_1] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRACO_METEOR, MOVE_OVERHEAT, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_HADRON_ENGINE
    },
    [FRONTIER_MON_MIRAIDON_2] = {
        .species = SPECIES_MIRAIDON,
        .moves = {MOVE_ELECTRO_DRIFT, MOVE_DRAGON_PULSE, MOVE_CALM_MIND, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_HADRON_ENGINE
    },
    [FRONTIER_MON_WALKING_WAKE_1] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_HYDRO_STEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_WALKING_WAKE_2] = {
        .species = SPECIES_WALKING_WAKE,
        .moves = {MOVE_SURF, MOVE_DRACO_METEOR, MOVE_KNOCK_OFF, MOVE_FLIP_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_IRON_LEAVES] = {
        .species = SPECIES_IRON_LEAVES,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_SINISTCHA_1] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_CALM_MIND, MOVE_HEX, MOVE_STUN_SPORE, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_HEATPROOF
    },
    [FRONTIER_MON_SINISTCHA_2] = {
        .species = SPECIES_SINISTCHA,
        .moves = {MOVE_CALM_MIND, MOVE_MATCHA_GOTCHA, MOVE_SHADOW_BALL, MOVE_STRENGTH_SAP},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_HEATPROOF
    },
    [FRONTIER_MON_OKIDOGI_1] = {
        .species = SPECIES_OKIDOGI,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TOXIC_CHAIN
    },
    [FRONTIER_MON_OKIDOGI_2] = {
        .species = SPECIES_OKIDOGI,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_MUNKIDORI_1] = {
        .species = SPECIES_MUNKIDORI,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_U_TURN, MOVE_TRICK},
        .heldItem = ITEM_BLACK_SLUDGE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TOXIC_CHAIN
    },
    [FRONTIER_MON_MUNKIDORI_2] = {
        .species = SPECIES_MUNKIDORI,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TOXIC_CHAIN
    },
    [FRONTIER_MON_FEZANDIPITI_1] = {
        .species = SPECIES_FEZANDIPITI,
        .moves = {MOVE_HEAT_WAVE, MOVE_MOONBLAST, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TOXIC_CHAIN
    },
    [FRONTIER_MON_FEZANDIPITI_2] = {
        .species = SPECIES_FEZANDIPITI,
        .moves = {MOVE_BEAT_UP, MOVE_PLAY_ROUGH, MOVE_ROOST, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS(248, 152, 0, 0, 44, 64),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CAREFUL,
        .ability = ABILITY_TOXIC_CHAIN
    },
    [FRONTIER_MON_OGERPON_TEAL_1] = {
        .species = SPECIES_OGERPON_TEAL,
        .moves = {MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_OGERPON_TEAL_2] = {
        .species = SPECIES_OGERPON_TEAL,
        .moves = {MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_OGERPON_WELLSPRING_1] = {
        .species = SPECIES_OGERPON_WELLSPRING,
        .moves = {MOVE_IVY_CUDGEL, MOVE_KNOCK_OFF, MOVE_SPIKES, MOVE_U_TURN},
        .heldItem = ITEM_WELLSPRING_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_OGERPON_WELLSPRING_2] = {
        .species = SPECIES_OGERPON_WELLSPRING,
        .moves = {MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_WELLSPRING_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_OGERPON_WELLSPRING_3] = {
        .species = SPECIES_OGERPON_WELLSPRING,
        .moves = {MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF},
        .heldItem = ITEM_WELLSPRING_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_OGERPON_HEARTHFLAME] = {
        .species = SPECIES_OGERPON_HEARTHFLAME,
        .moves = {MOVE_IVY_CUDGEL, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_HEARTHFLAME_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_MOLD_BREAKER
    },
    [FRONTIER_MON_OGERPON_CORNERSTONE_1] = {
        .species = SPECIES_OGERPON_CORNERSTONE,
        .moves = {MOVE_IVY_CUDGEL, MOVE_SWORDS_DANCE, MOVE_HORN_LEECH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CORNERSTONE_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_OGERPON_CORNERSTONE_2] = {
        .species = SPECIES_OGERPON_CORNERSTONE,
        .moves = {MOVE_IVY_CUDGEL, MOVE_TAUNT, MOVE_POWER_WHIP, MOVE_SUPERPOWER},
        .heldItem = ITEM_CORNERSTONE_MASK,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_ARCHALUDON_1] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_IRON_DEFENSE, MOVE_BODY_PRESS, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_ARCHALUDON_2] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_ARCHALUDON_3] = {
        .species = SPECIES_ARCHALUDON,
        .moves = {MOVE_DRACO_METEOR, MOVE_STEALTH_ROCK, MOVE_BODY_PRESS, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_STAMINA
    },
    [FRONTIER_MON_HYDRAPPLE_1] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_DRACO_METEOR, MOVE_NASTY_PLOT, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_HYDRAPPLE_2] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_DRACO_METEOR, MOVE_NASTY_PLOT, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_HYDRAPPLE_3] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_DRACO_METEOR, MOVE_LEAF_STORM, MOVE_FICKLE_BEAM, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_REGENERATOR
    },
    [FRONTIER_MON_GOUGING_FIRE_1] = {
        .species = SPECIES_HYDRAPPLE,
        .moves = {MOVE_DRAGON_DANCE, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_OUTRAGE},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_GOUGING_FIRE_2] = {
        .species = SPECIES_GOUGING_FIRE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_OUTRAGE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_RAGING_BOLT_1] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_RAGING_BOLT_2] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERCLAP, MOVE_DRACO_METEOR, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_RAGING_BOLT_3] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_RAGING_BOLT_4] = {
        .species = SPECIES_RAGING_BOLT,
        .moves = {MOVE_VOLT_SWITCH, MOVE_THUNDERCLAP, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_PROTOSYNTHESIS
    },
    [FRONTIER_MON_IRON_BOULDER_1] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_SWORDS_DANCE, MOVE_MIGHTY_CLEAVE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_BOULDER_2] = {
        .species = SPECIES_IRON_BOULDER,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_MIGHTY_CLEAVE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_CROWN_1] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_TACHYON_CUTTER, MOVE_FUTURE_SIGHT, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_CROWN_2] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_TACHYON_CUTTER, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_IRON_CROWN_3] = {
        .species = SPECIES_IRON_CROWN,
        .moves = {MOVE_TACHYON_CUTTER, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_CALM_MIND},
        .heldItem = ITEM_BOOSTER_ENERGY,
        .ev = TRAINER_PARTY_EVS(84, 0, 0, 172, 0, 252),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_QUARK_DRIVE
    },
    [FRONTIER_MON_TERAPAGOS_1] = {
        .species = SPECIES_TERAPAGOS_NORMAL,
        .moves = {MOVE_CALM_MIND, MOVE_TERA_STARSTORM, MOVE_EARTH_POWER, MOVE_RAPID_SPIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TERA_SHIFT
    },
    [FRONTIER_MON_TERAPAGOS_2] = {
        .species = SPECIES_TERAPAGOS_NORMAL,
        .moves = {MOVE_ICE_BEAM, MOVE_TERA_STARSTORM, MOVE_FLAMETHROWER, MOVE_RAPID_SPIN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TERA_SHIFT
    },
    [FRONTIER_MON_PECHARUNT_1] = {
        .species = SPECIES_PECHARUNT,
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_SHADOW_BALL, MOVE_PARTING_SHOT, MOVE_RECOVER},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_POISON_PUPPETEER
    },
    [FRONTIER_MON_PECHARUNT_2] = {
        .species = SPECIES_PECHARUNT,
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_FOUL_PLAY, MOVE_PARTING_SHOT, MOVE_RECOVER},
        .heldItem = ITEM_ROCKY_HELMET,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_POISON_PUPPETEER
    },
    [FRONTIER_MON_PECHARUNT_3] = {
        .species = SPECIES_PECHARUNT,
        .moves = {MOVE_MALIGNANT_CHAIN, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT, MOVE_RECOVER},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 20, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_POISON_PUPPETEER
    }
};