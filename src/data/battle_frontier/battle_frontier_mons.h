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
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_OWN_TEMPO
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_CLOUD_NINE
    },
    [FRONTIER_MON_LICKITUNG_3] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_WRING_OUT, MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS_ADAMANT_WALL(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_OWN_TEMPO
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
    }
};
