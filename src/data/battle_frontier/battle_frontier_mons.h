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
        .heldItem = ITEM_LIFE_ORB,
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
        .species = SPECIES_PARASECT},
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
    [FRONTIER_MON_VENOMOTH] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_PSYCHIC},
        .heldItem = ITEM_LIFE_ORB,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    },
    [FRONTIER_MON_VENOMOTH] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_ROOST, MOVE_PSYCHIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS_TIMID(),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = NATURE_TIMID,
        .ability = ABILITY_SHIELD_DUST
    }
};
