#pragma once

#include "definition_db.hpp"
#include "function.hpp"

using namespace std;

void registerNatives(DefinitionDB& definitions) {
	definitions.add(
		new Function(
			"ConvertRace", 
			"race", 
			{ "integer i" }, 
			"\n"
			"Returns the race that corresponds to the given integer."
			"\n\n"
			"Race Constants: RACE_HUMAN, RACE_ORC, RACE_UNDEAD, RACE_NIGHTELF, RACE_DEMON, RACE_OTHER"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the race (see constants)."
		));

	definitions.add(
        new Function(
            "ConvertAllianceType",
            "alliancetype",
            { "integer i" },
            "\n"
			"Returns the alliancetype that corresponds to the given integer."
            "\n\n"
            "Alliance Type Constants: ALLIANCE_PASSIVE, ALLIANCE_HELP_REQUEST, ALLIANCE_HELP_RESPONSE,\n"
			"                         ALLIANCE_SHARED_XP, ALLIANCE_SHARED_SPELLS, ALLIANCE_SHARED_VISION,\n"
			"                         ALLIANCE_SHARED_CONTROL, ALLIANCE_SHARED_ADVANCED_CONTROL,\n"
			"                         ALLIANCE_RESCUABLE, ALLIANCE_SHARED_VISION_FORCED"
            "\n\n"
            "Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the alliance type (see constants)."
        ));

	definitions.add(
		new Function(
		"ConvertLimitOp",
			"limitop",
			{ "integer i" },
			"\n"
			"Returns the limitop that corresponds to the given integer."
			"\n\n"
			"Limit Op Constants: LESS_THAN, LESS_THAN_OR_EQUAL, EQUAL, GREATER_THAN_OR_EQUAL, \n"
			"                    GREATER_THAN, NOT_EQUAL"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the limit operation type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertUnitType",
			"unittype",
			{ "integer i" },
			"\n"
			"The integer representation of the unit type."
			"\n\n"
			"Unit Type Constants: UNIT_TYPE_HERO, UNIT_TYPE_DEAD, UNIT_TYPE_STRUCTURE,\n"
			"                     UNIT_TYPE_FLYING, UNIT_TYPE_GROUND, UNIT_TYPE_ATTACKS_FLYING,\n"
			"                     UNIT_TYPE_ATTACKS_GROUND, UNIT_TYPE_MELEE_ATTACKER,\n"
			"                     UNIT_TYPE_RANGED_ATTACKER, UNIT_TYPE_GIANT, UNIT_TYPE_SUMMONED,\n"
			"                     UNIT_TYPE_STUNNED, UNIT_TYPE_PLAGUED, UNIT_TYPE_SNARED,\n"
			"                     UNIT_TYPE_UNDEAD, UNIT_TYPE_MECHANICAL, UNIT_TYPE_PEON,\n"
			"                     UNIT_TYPE_SAPPER, UNIT_TYPE_TOWNHALL, UNIT_TYPE_ANCIENT,\n"
			"                     UNIT_TYPE_TAUREN, UNIT_TYPE_POISONED, UNIT_TYPE_POLYMORPHED,\n"
			"                     UNIT_TYPE_SLEEPING, UNIT_TYPE_RESISTANT, UNIT_TYPE_ETHEREAL,\n"
			"                     UNIT_TYPE_MAGIC_IMMUNE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The unit type representation (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertGameSpeed",
			"gamespeed",
			{ "integer i" },
			"\n"
			"Returns the gamespeed that corresponds to the given integer."
			"\n\n"
			"Game Speed Constants: MAP_SPEED_SLOWEST, MAP_SPEED_SLOW, MAP_SPEED_NORMAL, MAP_SPEED_FAST,\n"
			"                      MAP_SPEED_FASTEST"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the game speed (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertPlacement",
			"placement",
			{ "integer i" },
			"\n"
			"Returns the placement that corresponds to the given integer."
			"\n\n"
			"Placement Constants: MAP_PLACEMENT_RANDOM, MAP_PLACEMENT_FIXED, MAP_PLACEMENT_USE_MAP_SETTINGS,\n"
			"                     MAP_PLACEMENT_TEAMS_TOGETHER"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the placement (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertStartLocPrio",
			"startlocprio",
			{ "integer i" },
			"\n"
			"Returns the startlocprio that corresponds to the given integer."
			"\n\n"
			"Start Loc Priority Constants: MAP_LOC_PRIO_LOW, MAP_LOC_PRIO_HIGH, MAP_LOC_PRIO_NOT"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the start location priority (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertGameDifficulty",
			"gamedifficulty",
			{ "integer i" },
			"\n"
			"Returns the gamedifficulty that corresponds to the given integer."
			"\n\n"
			"Game Difficulty Constants: MAP_DIFFICULTY_EASY, MAP_DIFFICULTY_NORMAL, MAP_DIFFICULTY_HARD,\n"
			"                           MAP_DIFFICULTY_INSANE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the game difficulty (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertGameType",
			"gametype",
			{ "integer i" },
			"\n"
			"Returns the gametype that corresponds to the given integer."
			"\n\n"
			"Game Type Constants: GAME_TYPE_MELEE, GAME_TYPE_FFA, GAME_TYPE_USE_MAP_SETTINGS,\n"
			"                     GAME_TYPE_BLIZ, GAME_TYPE_ONE_ON_ONE, GAME_TYPE_TWO_TEAM_PLAY,\n"
			"                     GAME_TYPE_THREE_TEAM_PLAY, GAME_TYPE_FOUR_TEAM_PLAY"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the game type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertMapFlag",
			"mapflag",
			{ "integer i" },
			"\n"
			"Returns the mapflag that corresponds to the given integer."
			"\n\n"
			"Map Flag Constants: MAP_FOG_HIDE_TERRAIN, MAP_FOG_MAP_EXPLORED, MAP_FOG_ALWAYS_VISIBLE,\n"
			"                    MAP_USE_HANDICAPS, MAP_OBSERVERS, MAP_OBSERVERS_ON_DEATH,\n"
			"                    MAP_FIXED_COLORS, MAP_LOCK_RESOURCE_TRADING, MAP_RESOURCE_TRADING_ALLIES_ONLY,\n"
			"                    MAP_LOCK_ALLIANCE_CHANGES, MAP_ALLIANCE_CHANGES_HIDDEN, MAP_CHEATS,\n"
			"                    MAP_CHEATS_HIDDEN, MAP_LOCK_SPEED, MAP_LOCK_RANDOM_SEED,\n"
			"                    MAP_SHARED_ADVANCED_CONTROL, MAP_RANDOM_HERO, MAP_RANDOM_RACES,\n"
			"                    MAP_RELOADED"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the map flag (see constants)."
		));
}