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
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
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
        .moves = {MOVE_SCALD,  MOVE_RAPID_SPIN, MOVE_ROAR, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP,  MOVE_FLASH_CANNON, MOVE_ICE_BEAM, MOVE_SHELL_SMASH},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SCALD,  MOVE_ICY_WIND, MOVE_FLASH_CANNON, MOVE_RAPID_SPIN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_TORRENT
    },
    [FRONTIER_MON_MEGA_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_RAPID_SPIN,  MOVE_SCALD, MOVE_DARK_PULSE, MOVE_AURA_SPHERE},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_RAIN_DISH
    },
    [FRONTIER_MON_MEGA_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP,  MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_SHELL_SMASH},
        .heldItem = ITEM_BLASTOISINITE,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_RAIN_DISH
    },
    [FRONTIER_MON_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_QUIVER_DANCE,  MOVE_SLEEP_POWDER, MOVE_BUG_BUZZ, MOVE_SUBSTITUTE},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TAILWIND,  MOVE_SLEEP_POWDER, MOVE_BUG_BUZZ, MOVE_AIR_SLASH},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_MEGA_BUTTERFREE_1] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_QUIVER_DANCE,  MOVE_SLEEP_POWDER, MOVE_BUG_BUZZ, MOVE_SUBSTITUTE},
        .heldItem = ITEM_BUTTERFRITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_MEGA_BUTTERFREE_2] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TAILWIND,  MOVE_SLEEP_POWDER, MOVE_BUG_BUZZ, MOVE_AIR_SLASH},
        .heldItem = ITEM_BUTTERFRITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_MEGAHORN,  MOVE_GUNK_SHOT, MOVE_TOXIC_SPIKES, MOVE_U_TURN},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_MEGA_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_MEGAHORN,  MOVE_GUNK_SHOT, MOVE_U_TURN, MOVE_KNOCK_OFF},
        .heldItem = ITEM_BEEDRILLITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNIPER
    },
    [FRONTIER_MON_PIDGEOT] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_BRAVE_BIRD,  MOVE_RETURN, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_MEGA_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE,  MOVE_UPROAR, MOVE_TAILWIND, MOVE_DEFOG},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_MEGA_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_HURRICANE,  MOVE_UPROAR, MOVE_HEAT_WAVE, MOVE_ROOST},
        .heldItem = ITEM_PIDGEOTITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FRISK
    },
    [FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_CLOSE_COMBAT,  MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_FLAME_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_GUTS
    },
    [FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_CLOSE_COMBAT,  MOVE_FACADE, MOVE_WILD_CHARGE, MOVE_SUCKER_PUNCH},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_RATICATE_3] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_SUBSTITUTE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HUSTLE
    },
    [FRONTIER_MON_RATICATE_ALOLA_1] = {
        .species = SPECIES_RATICATE_ALOLA,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SURGE_SURFER
    },
    [FRONTIER_MON_RAICHU_ALOLA_2] = {
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
    [FRONTIER_MON_ANNIHILAPE_1] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_SHADOW_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_2] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_SHADOW_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_3] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_SHADOW_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
    },
    [FRONTIER_MON_ANNIHILAPE_4] = {
        .species = SPECIES_ANNIHILAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_SHADOW_PUNCH, MOVE_U_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_DEFIANT
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
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_JET_PUNCH, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_JET_PUNCH, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_ABSORB
    },
    [FRONTIER_MON_POLIWRATH_3] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_JET_PUNCH, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SWIFT_SWIM
    },
    [FRONTIER_MON_POLIWRATH_4] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_JET_PUNCH, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_FLIP_TURN},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
    [FRONTIER_MON_MEGA_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_GENGARITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_GENGAR_2] = {
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
        .moves = {MOVE_EARTHQUAKE, MOVE_SPIN_OUT, MOVE_CURSE, MOVE_ICE_FANG},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SPIN_OUT, MOVE_CURSE, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SPIN_OUT, MOVE_CURSE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_MEGA_STEELIX] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SPIN_OUT, MOVE_CURSE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_MEGA_STEELIX] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SPIN_OUT, MOVE_CURSE, MOVE_SUPERCELL_SLAM},
        .heldItem = ITEM_STEELIXITE,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
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
        .moves = {MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_X_SCISSOR},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_MEGA_KINGLER] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_METEOR_MASH, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_KINGLERITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_HYPER_CUTTER
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_TRI_ATTACK, MOVE_COURT_CHANGE, MOVE_EXPLOSION, MOVE_FOCUS_BLAST},
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
        .moves = {MOVE_COURT_CHANGE, MOVE_CHLOROBLAST, MOVE_GIGA_DRAIN, MOVE_VOLT_SWITCH},
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
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_BARRAGE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_2] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_BARRAGE, MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_3] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_BARRAGE, MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_CHLOROPHYLL
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_4] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_BARRAGE, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_HARVEST
    },
    [FRONTIER_MON_EXEGGUTOR_ALOLA_5] = {
        .species = SPECIES_EXEGGUTOR_ALOLA,
        .moves = {MOVE_CHLOROBLAST, MOVE_DRACO_BARRAGE, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL},
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
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_AQUA_STEP, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_AQUA_STEP, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_STRIKER
    },
    [FRONTIER_MON_HITMONLEE_3] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_AQUA_STEP, MOVE_TRIPLE_AXEL},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
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
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
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
        .moves = {MOVE_SCALD, MOVE_DRACO_BARRAGE, MOVE_RAIN_DANCE, MOVE_HURRICANE},
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
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_FISHIOUS_REND, MOVE_AGILITY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SWORDS_DANCE, MOVE_MEGAHORN, MOVE_FISHIOUS_REND, MOVE_AGILITY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_LIGHTNING_ROD
    },
    [FRONTIER_MON_SEAKING_3] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_FISHIOUS_REND, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_VEIL
    },
    [FRONTIER_MON_SEAKING_4] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_KNOCK_OFF, MOVE_MEGAHORN, MOVE_FISHIOUS_REND, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT MOVE_TAUNT, MOVE_MOONBLAST},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_2] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_3] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_4] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
        .heldItem = ITEM_ASSAULT_VEST,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MEGA_LAUNCHER
    },
    [FRONTIER_MON_MAGMORTAR_5] = {
        .species = SPECIES_MAGMORTAR,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_BOOMBURST, MOVE_DRACO_BARRAGE, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
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
        .ability = ABILITY_PIXELATE
    },
    [FRONTIER_MON_SYLVEON_2] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_WISH, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .heldItem = ITEM_LIGHT_CLAY,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PIXELATE
    },
    [FRONTIER_MON_SYLVEON_3] = {
        .species = SPECIES_SYLVEON,
        .moves = {MOVE_HYPER_VOICE, MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_WISH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_PIXELATE
    },
    [FRONTIER_MON_PORYGON2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_RECOVER, MOVE_TRI_ATTACK, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_EVIOLITE,
        .ev = TRAINER_PARTY_EVS(252, 0, 120, 0, 136, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_TRACE
    },
    [FRONTIER_MON_PORYGON2] = {
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
        .moves = {MOVE_TRICK, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_DARK_PULSE},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_AQUA_CUTTER, MOVE_AQUA_JET, MOVE_STONE_AXE, MOVE_NIGHT_SLASH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHARPNESS
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_AQUA_CUTTER, MOVE_AQUA_JET, MOVE_STONE_AXE, MOVE_SACRED_SWORD},
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
    [FRONTIER_MON_MEGA_AERODACTYL_1] = {
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
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_FREEZE_DRY, MOVE_HURRICANE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_ROOST, MOVE_HURRICANE, MOVE_FOCUS_BLAST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLEAKWIND_STORM, MOVE_ROOST, MOVE_TAILWIND, MOVE_AIR_SLASH},
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
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_BOLD(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_BOLD,
        .ability = ABILITY_SHIELD_STATIC
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
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_VOLT_SWITCH, MOVE_AIR_SLASH},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_DRAGON_DANCE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_SHEER_FORCE
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_VICTORY_DANCE, MOVE_LUNGE},
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
        .moves = {MOVE_THUNDERBOLT, MOVE_DRACO_BARRAGE, MOVE_COTTON_GUARD, MOVE_TAIL_GLOW},
        .heldItem = ITEM_AMPHAROSITE,
        .ev = TRAINER_PARTY_EVS_CALM(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_CALM,
        .ability = ABILITY_STATIC
    },
    [FRONTIER_MON_MEGA_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRACO_BARRAGE, MOVE_POWER_GEM, MOVE_TAIL_GLOW},
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
        .moves = {MOVE_NO_RETREAT, MOVE_BODY_SLAM, MOVE_DRAGON_RUSH, MOVE_ROOST},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
    [FRONTIER_MON_SNEASLER_3] = {
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
        .moves = {MOVE_ICE_SHARD, MOVE_MOUNTAIN_GALE, MOVE_HEADLONG_RUSH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MAMOSWINE_2] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_MOUNTAIN_GALE, MOVE_HEADLONG_RUSH, MOVE_SUPERPOWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_THICK_FAT
    },
    [FRONTIER_MON_MAMOSWINE_3] = {
        .species = SPECIES_MAMOSWINE,
        .moves = {MOVE_ICE_SHARD, MOVE_MOUNTAIN_GALE, MOVE_HEADLONG_RUSH, MOVE_SUPERPOWER},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
    [FRONTIER_MON_SMEARGLE_1] = {
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_DRACO_BARRAGE, MOVE_SYNTHESIS},
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
        .moves = {MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_DRACO_BARRAGE, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_MEGA_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DRACO_BARRAGE, MOVE_FOCUS_BLAST, MOVE_SYNTHESIS},
        .heldItem = ITEM_SCEPTILITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_OVERGROW
    },
    [FRONTIER_MON_MEGA_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_STORM, MOVE_DRACO_BARRAGE, MOVE_FOCUS_BLAST, MOVE_EARTHQUAKE},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
    [FRONTIER_MON_MEGA_GALLADE_1] = {
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
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SPEED_BOOST
    },
    [FRONTIER_MON_NINJASK_2] = {
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_SWITCHEROO, MOVE_VOLT_SWITCH},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MULTISCALE
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_STEAM_ERUPTION, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_FIRE_BLAST},
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
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_STEAM_ERUPTION, MOVE_SLACK_OFF},
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
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 0),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_CONTRARY
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_DRAGON_CLAW, MOVE_U_TURN, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_HEADLONG_RUSH, MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_METEOR, MOVE_SANDSEAR_STORM, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_TINTED_LENS
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_SANDSEAR_STORM, MOVE_GIGA_DRAIN, MOVE_FIRE_BLAST},
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
        .moves = {MOVE_DARK_HOLE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_CACTURNE_3] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_HOLE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SAND_RUSH
    },
    [FRONTIER_MON_CACTURNE_4] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_HOLE, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT},
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
        .moves = {MOVE_EARTHQUAKE, MOVE_WAVE_CRASH, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_WAVE_CRASH, MOVE_SPIKES, MOVE_STEALTH_ROCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_WATER_BUBBLE
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_WAVE_CRASH, MOVE_STONE_EDGE, MOVE_ZEN_HEADBUTT},
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
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_SHELL_SMASH, MOVE_WAVE_CRASH, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_WAVE_CRASH, MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_COIL},
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
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_WAVE_CRASH, MOVE_FLIP_TURN},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_STEALTH_ROCK, MOVE_WAVE_CRASH, MOVE_FLIP_TURN},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_ROCK_HEAD
    },
    [FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS},
        .heldItem = ITEM_CHOICE_SPECS,
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
        .moves = {MOVE_DRACO_BARRAGE, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_HASTY_OR_NAIVE_SP_ATK(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_NAIVE,
        .ability = ABILITY_INTIMIDATE
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_TEMPER_FLARE, MOVE_DUAL_WINGBEAT},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_SURF, MOVE_ROOST},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_ROOST},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LATIOSITE,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRACO_BARRAGE, MOVE_PSYCHIC, MOVE_SURF, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DRACO_BARRAGE, MOVE_ROOST},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_LEVITATE
    },
    [FRONTIER_MON_MEGA_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_DRACO_BARRAGE, MOVE_ROOST},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_DRACO_BARRAGE, MOVE_AIR_SLASH, MOVE_FIRE_BLAST, MOVE_SURF},
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
        .moves = {MOVE_EARTHQUAKE, MOVE_GRAV_APPLE, MOVE_SWORDS_DANCE, MOVE_STONE_EDGE},
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
        .moves = {MOVE_EARTHQUAKE, MOVE_GRAV_APPLE, MOVE_SWORDS_DANCE, MOVE_ROCK_POLISH},
        .heldItem = ITEM_TORTERRITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SELF_SUFFICIENT
    },
    [FRONTIER_MON_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_PYRO_BALL, MOVE_U_TURN, MOVE_MACH_PUNCH},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_PYRO_BALL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_INFERNAPE_4] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_PYRO_BALL, MOVE_GUNK_SHOT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_1] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_PYRO_BALL, MOVE_GUNK_SHOT},
        .heldItem = ITEM_INFERNAPITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_2] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_PYRO_BALL, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_INFERNAPITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_IRON_FIST
    },
    [FRONTIER_MON_MEGA_INFERNAPE_3] = {
        .species = SPECIES_INFERNAPE,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FIRE_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT},
        .heldItem = ITEM_LIFE_ORB,
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
        .moves = {MOVE_HYDRO_PUMP, MOVE_MAKE_IT_RAIN, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
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
        .moves = {MOVE_HYDRO_PUMP, MOVE_MAKE_IT_RAIN, MOVE_ROOST, MOVE_CALM_MIND},
        .heldItem = ITEM_EMPOLEONITE_D,
        .ev = TRAINER_PARTY_EVS_MODEST_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_COMPETITIVE
    },
    [FRONTIER_MON_MEGA_EMPOLEON_D_2] = {
        .species = SPECIES_EMPOLEON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MAKE_IT_RAIN, MOVE_ICE_BEAM, MOVE_GRASS_KNOT},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_SURGING_STRIKES, MOVE_ICE_SPINNER, MOVE_FLIP_TURN, MOVE_AQUA_JET},
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
        .moves = {MOVE_SURGING_STRIKES, MOVE_ICE_SPINNER, MOVE_BULK_UP, MOVE_AQUA_JET},
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
        .moves = {MOVE_QUICK_ATTACK, MOVE_TRIPLE_AXEL, MOVE_ARM_THRUST, MOVE_DUAL_CHOP},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TOXIC},
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
        .moves = {MOVE_PSYSHIELD_BASH, MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_WOOD_HAMMER, MOVE_MOUNTAIN_GALE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
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
        .moves = {MOVE_WOOD_HAMMER, MOVE_MOUNTAIN_GALE, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNOW_WARNING
    },
    [FRONTIER_MON_MEGA_ABOMASNOW_3] = {
        .species = SPECIES_ABOMASNOW,
        .moves = {MOVE_WOOD_HAMMER, MOVE_MOUNTAIN_GALE, MOVE_EARTHQUAKE, MOVE_AURORA_VEIL},
        .heldItem = ITEM_ABOMASITE,
        .ev = TRAINER_PARTY_EVS_JOLLY(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_JOLLY,
        .ability = ABILITY_SNOW_WARNING
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
    [FRONTIER_MON_MAGNEZONE_1] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_MAGNET_PULL
    },
    [FRONTIER_MON_MAGNEZONE_2] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
    },
    [FRONTIER_MON_MAGNEZONE_3] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK},
        .heldItem = ITEM_CHOICE_SCARF,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_STURDY
    },
    [FRONTIER_MON_MAGNEZONE_4] = {
        .species = SPECIES_MAGNEZONE,
        .moves = {MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK},
        .heldItem = ITEM_CHOICE_SPECS,
        .ev = TRAINER_PARTY_EVS_QUIET(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_QUIET,
        .ability = ABILITY_ANALYTIC
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
    [FRONTIER_MON_LICKLICKY_2] = {
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
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_TRICK, MOVE_WILL_O_WISP},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_HYDRO_PUMP, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_BLIZZARD, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_TRICK},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_COLBUR_BERRY
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_CHOICE_SCARF,
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
        .moves = {MOVE_FIRE_BLAST, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_SOLAR_BEAM},
        .heldItem = ITEM_POWER_HERB,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_3] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_LAVA_PLUME, MOVE_STEALTH_ROCK, MOVE_ROAR, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_4] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_STEALTH_ROCK, MOVE_WILL_O_WISP, MOVE_EARTH_POWER},
        .heldItem = ITEM_AIR_BALLOON,
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_5] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_MAGMA_STORM, MOVE_TAUNT, MOVE_TOXIC, MOVE_EARTH_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_MODEST(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_MODEST,
        .ability = ABILITY_FLASH_FIRE
    },
    [FRONTIER_MON_HEATRAN_6] = {
        .species = SPECIES_HEATRAN,
        .moves = {MOVE_ERUPTION, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON, MOVE_EARTH_POWER},
        .heldItem = ITEM_CHOICE_SCARF,
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
        .heldItem = ITEM_DARK_PLATE,
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
    }
};