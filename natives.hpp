#pragma once

#include "definition_db.hpp"
#include "function.hpp"

using namespace std;
//find to do
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
			"ConvertRacePref",
			"racepreference",
			{"integer i"},
			"\n"
			"Returns the racepreference that corresponds to the given integer."
			"\n\n"
			"Racepreference Constants: RACE_PREF_DEMON,  RACE_PREF_HUMAN,  RACE_PREF_NIGHTELF, RACE_PREF_ORC,\n"
			"                          RACE_PREF_RANDOM, RACE_PREF_UNDEAD, RACE_PREF_USER_SELECTABLE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the racepreference (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertIGameState",
			"igamestate",
			{"integer i"},
			"\n"
			"Returns the igamestate that corresponds to the given integer."
			"\n\n"
			"IGamestate Constants: GAME_STATE_DISCONNECTED, GAME_STATE_DIVINE_INTERVENTION"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the igamestate (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertFGameState",
			"fgamestate",
			{"integer i"},
			"\n"
			"Returns the fgamestate that corresponds to the given integer."
			"\n\n"
			"FGamestate Constants: GAME_STATE_TIME_OF_DAY"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the fgamestate (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertPlayerState",
			"playerstate",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertPlayerScore",
			"playerscore",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertPlayerGameResult",
			"playergameresult",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertUnitState",
			"unitstate",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertAIDifficulty",
			"aidifficulty",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertGameEvent",
			"gameevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertPlayerEvent",
			"playerevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertPlayerUnitEvent",
			"playerunitevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertWidgetEvent",
			"widgetevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertDialogEvent",
			"dialogevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertUnitEvent",
			"unitevent",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
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

	definitions.add(
		new Function(
			"ConvertMapVisibility",
			"mapvisibility",
			{"integer i"},
			"\n"
			"Returns the mapvisibility that corresponds to the given integer."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the map visibility." 
		));

	definitions.add(
		new Function(
			"ConvertMapSetting",
			"mapsetting",
			{"integer i"},
			"\n"
			"Returns the mapsetting that corresponds to the given integer."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the map setting." 
		));

	definitions.add(
		new Function(
			"ConvertMapDensity",
			"mapdensity",
			{"integer i"},
			"\n"
			"Returns the mapdensity that corresponds to the given integer."
			"\n\n"
			"Map Density Constants: MAP_DENSITY_NONE, MAP_DENSITY_LIGHT, MAP_DENSITY_MEDIUM, MAP_DENSITY_HEAVY"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the map density (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertMapControl",
			"mapcontrol",
			{"integer i"},
			"\n"
			"Returns the mapcontrol that corresponds to the given integer."
			"\n\n"
			"Map Control Constants: MAP_CONTROL_USER, MAP_CONTROL_COMPUTER, MAP_CONTROL_RESCUABLE,\n"
			"                       MAP_CONTROL_NEUTRAL, MAP_CONTROL_CREEP, MAP_CONTROL_NONE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the map control (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertPlayerColor",
			"playercolor",
			{"integer i"},
			"\n"
			"Returns the playercolor that corresponds to the given integer."
			"\n\n"
			"Player Color Constants: PLAYER_COLOR_RED, PLAYER_COLOR_BLUE, PLAYER_COLOR_CYAN, PLAYER_COLOR_PURPLE,\n"
			"                        PLAYER_COLOR_YELLOW, PLAYER_COLOR_ORANGE, PLAYER_COLOR_GREEN,\n"
			"                        PLAYER_COLOR_PINK, PLAYER_COLOR_LIGHT_GRAY, PLAYER_COLOR_LIGHT_BLUE,\n"
			"                        PLAYER_COLOR_AQUA, PLAYER_COLOR_BROWN"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the player color (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertPlayerSlotState",
			"playerslotstate",
			{"integer i"},
			"\n"
			"Returns the playerslotstate that corresponds to the given integer."
			"\n\n"
			"Player Slot State Constants: PLAYER_SLOT_STATE_EMPTY, PLAYER_SLOT_STATE_PLAYING, PLAYER_SLOT_STATE_LEFT"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the player slot state type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertVolumeGroup",
			"volumegroup",
			{"integer i"},
			"\n"
			"Returns the volumegroup that corresponds to the given integer."
			"\n\n"
			"Volume Group Constants: SOUND_VOLUMEGROUP_UNITMOVEMENT, SOUND_VOLUMEGROUP_UNITSOUNDS,\n"
			"                               SOUND_VOLUMEGROUP_COMBAT, SOUND_VOLUMEGROUP_SPELLS,\n"
			"                               SOUND_VOLUMEGROUP_UI, SOUND_VOLUMEGROUP_MUSIC,\n"
			"                               SOUND_VOLUMEGROUP_AMBIENTSOUNDS, SOUND_VOLUMEGROUP_FIRE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the volume group type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertCameraField",
			"camerafield",
			{"integer i"},
			"\n"
			"Returns the camerafield that corresponds to the given integer."
			"\n\n"
			"Camera Field Constants: CAMERA_FIELD_TARGET_DISTANCE, CAMERA_FIELD_FARZ, CAMERA_FIELD_ANGLE_OF_ATTACK,\n"
			"                        CAMERA_FIELD_FIELD_OF_VIEW, CAMERA_FIELD_ROLL, CAMERA_FIELD_ROTATION,\n"
			"                        CAMERA_FIELD_ZOFFSET"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the camera field (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertBlendMode",
			"blendmode",
			{"integer i"},
			"\n"
			"Returns the blendmode that corresponds to the given integer."
			"\n\n"
			"Blend Mode Constants: BLEND_MODE_NONE, BLEND_MODE_DONT_CARE, BLEND_MODE_KEYALPHA, BLEND_MODE_BLEND,\n"
			"                      BLEND_MODE_ADDITIVE, BEND_MODE_MODULATE, BLEND_MODE_MODULATE_2X"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the blend mode (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertRarityControl",
			"raritycontrol",
			{"integer i"},
			"\n"
			"Returns the raritycontrol that corresponds to the given integer."
			"\n\n"
			"Rarity Control Constants: RARITY_FREQUENT, RARITY_RARE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the rarity control type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertTexMapFlags",
			"texmapflags",
			{"integer i"},
			"\n"
			"Returns the texmapflags that corresponds to the given integer."
			"\n\n"
			"Texture Map Flag Constants: TEXMAP_FLAG_NONE, TEXMAP_FLAG_WRAP_U, TEXMAP_FLAG_WRAP_V,\n"
			"                            TEXMAP_FLAG_WRAP_UV"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the texture map flag type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertFogState",
			"fogstate",
			{"integer i"},
			"\n"
			"Returns the fogstate that corresponds to the given integer."
			"\n\n"
			"Fog State Constants: FOG_OF_WAR_MASKED, FOG_OF_WAR_FOGGED, FOG_OF_WAR_VISIBLE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the fog state (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertEffectType",
			"effecttype",
			{"integer i"},
			"\n"
			"Returns the effecttype that corresponds to the given integer."
			"\n\n"
			"Effect Type Constants: EFFECT_TYPE_EFFECT, EFFECT_TYPE_TARGET, EFFECT_TYPE_CASTER,\n"
			"                       EFFECT_TYPE_SPECIAL, EFFECT_TYPE_AREA_EFFECT, EFFECT_TYPE_MISSILE,\n"
			"                       EFFECT_TYPE_LIGHTNING"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the effect type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertVersion",
			"version",
			{"integer i"},
			"\n"
			"Returns the version that corresponds to the given integer."
			"\n\n"
			"Version Constants: VERSION_REIGN_OF_CHAOS, VERSION_FROZEN_THRONE"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the version type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertItemType",
			"itemtype",
			{"integer i"},
			"\n"
			"Returns the itemtype that corresponds to the given integer."
			"\n\n"
			"Item Type Constants: ITEM_TYPE_PERMANENT, ITEM_TYPE_CHARGED, ITEM_TYPE_POWERUP,\n"
			"                     ITEM_TYPE_ARTIFACT, ITEM_TYPE_PURCHASABLE, ITEM_TYPE_CAMPAIGN,\n"
			"                     ITEM_TYPE_MISCELLANEOUS, ITEM_TYPE_UNKNOWN, ITEM_TYPE_ANY"
			"\n\n"
			"Depreciated Constants: ITEM_TYPE_TOME (replaced with ITEM_TYPE_POWERUP)"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the item type (see constants)."
		));

	definitions.add(
		new Function(
			"ConvertAttackType",
			"attacktype",
			{"integer i"},
			"\n"
			"Returns the attacktype that corresponds to the given integer."
			"\n\n"
			"Attacktype Constants: ATTACK_TYPE_NORMAL, ATTACK_TYPE_MELEE, ATTACK_TYPE_PIERCE, ATTACK_TYPE_SIEGE,\n"
			"                      ATTACK_TYPE_MAGIC,  ATTACK_TYPE_CHAOS, ATTACK_TYPE_HERO"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the attack type (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertDamageType",
			"damagetype",
			{"integer i"},
			"\n"
			"Returns the damagetype that corresponds to the given integer."
			"\n\n"
			"Damagetype Constants: DAMAGE_TYPE_UNKNOWN,     DAMAGE_TYPE_NORMAL,      DAMAGE_TYPE_ENHANCED,\n"
			"                      DAMAGE_TYPE_FIRE,        DAMAGE_TYPE_COLD,        DAMAGE_TYPE_LIGHTNING,\n"
			"                      DAMAGE_TYPE_POISON,      DAMAGE_TYPE_DISEASE,     DAMAGE_TYPE_DIVINE,\n"
			"                      DAMAGE_TYPE_MAGIC,       DAMAGE_TYPE_SONIC,       DAMAGE_TYPE_ACID,\n"
			"                      DAMAGE_TYPE_FORCE,       DAMAGE_TYPE_DEATH,       DAMAGE_TYPE_MIND,\n"
			"                      DAMAGE_TYPE_PLANT,       DAMAGE_TYPE_DEFENSIVE,   DAMAGE_TYPE_DEMOLITION,\n"
			"                      DAMAGE_TYPE_SLOW_POISON, DAMAGE_TYPE_SPIRIT_LINK, DAMAGE_TYPE_SHADOW_STRIKE,\n"
			"                      DAMAGE_TYPE_UNIVERSAL"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the damage type (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertWeaponType",
			"weapontype",
			{"integer i"},
			"\n"
			"Returns the weapontype that corresponds to the given integer."
			"\n\n"
			"Weapontype Constants: WEAPON_TYPE_WHOKNOWS,          WEAPON_TYPE_METAL_LIGHT_CHOP,  WEAPON_TYPE_METAL_MEDIUM_CHOP,\n"
			"                      WEAPON_TYPE_METAL_HEAVY_CHOP,  WEAPON_TYPE_METAL_LIGHT_SLICE, WEAPON_TYPE_METAL_MEDIUM_SLICE,\n"
			"                      WEAPON_TYPE_METAL_HEAVY_SLICE, WEAPON_TYPE_METAL_MEDIUM_BASH, WEAPON_TYPE_METAL_HEAVY_BASH,\n"
			"                      WEAPON_TYPE_METAL_MEDIUM_STAB, WEAPON_TYPE_METAL_HEAVY_STAB,  WEAPON_TYPE_WOOD_LIGHT_SLICE,\n"
			"                      WEAPON_TYPE_WOOD_MEDIUM_SLICE, WEAPON_TYPE_WOOD_HEAVY_SLICE,  WEAPON_TYPE_WOOD_LIGHT_BASH,\n"
			"                      WEAPON_TYPE_WOOD_MEDIUM_BASH,  WEAPON_TYPE_WOOD_HEAVY_BASH,   WEAPON_TYPE_WOOD_LIGHT_STAB,\n"
			"                      WEAPON_TYPE_WOOD_MEDIUM_STAB,  WEAPON_TYPE_CLAW_LIGHT_SLICE,  WEAPON_TYPE_CLAW_MEDIUM_SLICE,\n"
			"                      WEAPON_TYPE_CLAW_HEAVY_SLICE,  WEAPON_TYPE_AXE_MEDIUM_CHOP,   WEAPON_TYPE_ROCK_HEAVY_BASH"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the weapon type (see constants)." 
		));

	definitions.add(
		new Function(
			"ConvertSoundType",
			"soundtype",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"ConvertPathingType",
			"pathingtype",
			{"integer i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: descr" 
		));

	definitions.add(
		new Function(
			"OrderId",
			"integer",
			{"string orderIdString"},
			"\n"
			"Takes the name of an order and returns its corresponding integer rawcode."
			"    OrderId(\"absorb\") -> 852529\n\n"
			"Search for \"[Repo] Order Ids\" at www.google.com for a complete list of orders."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityIdString: The name of the order as a string (see repo)."
		));

	definitions.add(
		new Function(
			"OrderId2String",
			"string",
			{"integer orderId"},
			"\n"
			"Takes the rawcode of an order and returns its corresponding order name as a string."
			"    OrderId2String(852529) -> \"absorb\"\n\n"
			"Search for \"[Repo] Order Ids\" at www.google.com for a complete list of orders."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer orderId: The integer rawcode of the order (see repo)."
		));

	definitions.add(
		new Function(
			"UnitId",
			"integer",
			{"string unitIdString"},
			"\n"
			"Takes the name of a unit and returns its corresponding integer rawcode."
			"    UnitId(\"footman\") -> 'hfoo'"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityIdString: The name of the unit as a string."
		));

	definitions.add(
		new Function(
			"UnitId2String",
			"string",
			{"integer unitId"},
			"\n"
			"Takes the rawcode of a unit and returns its corresponding unit name as a string."
			"    UnitId2String('hfoo') -> \"footman\""
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: The integer rawcode of the unit."
		));

	definitions.add(
		new Function(
			"AbilityId",
			"integer",
			{"string abilityIdString"},
			"\n"
			"Takes the name of an ability and returns its corresponding integer rawcode."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityIdString: The name of the ability as a string."
		));

	definitions.add(
		new Function(
			"AbilityId2String",
			"string",
			{"integer abilityId"},
			"\n"
			"Takes the rawcode of an ability and returns its corresponding ability name as a string."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: The integer rawcode of the ability."
		));

	definitions.add(
		new Function(
			"GetObjectName",
			"string",
			{"integer objectId"},
			"\n"
			"Looks up the \"name\" field for any object (unit, item, ability)."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectId: The raw code of the object to return the name of."
		));

	definitions.add(
		new Function(
			"Deg2Rad",
			"real",
			{"real degrees"},
			"\n"
			"Converts degrees into radians. This is similar to multiplying the degree value by pi/180."
			"\n\n"
			"Note: This is slightly more accurate than multiplying the degree value by bj_PI/180.\n"
			"bj_PI has a value of 3.14159.This native uses a pi value closer to 3.141592496."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: The degree input."
		));

	definitions.add(
		new Function(
			"Rad2Deg",
			"real",
			{"real radians"},
			"\n"
			"Converts degrees into radians. This is similar to multiplying the degree value by 180/pi."
			"\n\n"
			"Note: This is slightly more accurate than multiplying the degree value by 180/bj_PI.\n"
			"bj_PI has a value of 3.14159.This native uses a pi value closer to 3.141592496."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radians: The radian value input."
		));

	definitions.add(
		new Function(
			"Sin",
			"real",
			{"real radians"},
			"\n"
			"Takes a real value input in radians and returns its sine value. The domain of the input is all real numbers and the range of the output is -1 to 1 inclusive."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radians: The input radians."
		));

	definitions.add(
		new Function(
			"Cos",
			"real",
			{"real radians"},
			"\n"
			"Takes a real value input in radians and returns its cosine value. The domain of the input is all real numbers and the range of the output is -1 to 1 inclusive."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radians: The input radians."
		));

	definitions.add(
		new Function(
			"Tan",
			"real",
			{"real radians"},
			"\n"
			"Takes a real value input in radians and returns its tangent value. The domain of the\n"
			"input is all real numbers excluding multiples of pi/2*(1 + n) : -infinity < n < infinity\n"
			"and the range of the output is all real numbers\n"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radians: The input radians."
		));

	definitions.add(
		new Function(
			"Asin",
			"real",
			{"real y"},
			"\n"
			"Takes a real input and returns its arcsine (inverse sine) value as an angle in radians.\n"
			"The domain of the input is -1 to 1 and the range of the output is (-pi/2) to (pi/2).\n"
			"If an invalid input is provided, the returned value will be 0."
			
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real y: The input value"
		));

	definitions.add(
		new Function(
			"Acos",
			"real",
			{"real x"},
			"\n"
			"Takes a real input and returns its arccosine (inverse cosine) value as an angle in radians.\n"
			"The domain of the input is -1 to 1 and the range of the output is (0) to (pi).\n"
			"If an invalid input is provided, the returned value will be 0."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: The input value."
		));

	definitions.add(
		new Function(
			"Atan",
			"real",
			{"real x"},
			"\n"
			"Takes a real value input and returns its arctangent (inverse tangent) as an angle in radians.\n"
			"The domain of the input is all real numbers and the range of the output is (-pi/2) to (pi/2)\n"
			"non-inclusive."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: The input value."
		));

	definitions.add(
		new Function(
			"Atan2",
			"real",
			{"real y", "real x"},
			"\n"
			"Performs Atan( y / x ). The domains of x and y are all real numbers. The range of\n"
			"the output is (-pi/2) to (pi/2) non-inclusive."
			"\n\n"
			"Note: Use over Atan as Atan2 will handle all special cases."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real y: The input y." "\n"
			"    real x: The input x."
		));

	definitions.add(
		new Function(
			"SquareRoot",
			"real",
			{"real x"},
			"\n"
			"Performs sqrt( x ). The domain of x is all real numbers greater than or equal to 0.\n"
			"The range of the output is all real numbers greater than or equal to 0."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: The input value." 
		));

	definitions.add(
		new Function(
			"Pow",
			"real",
			{"real x", "real power"},
			"\n"
			"Performs ( x ^ power ) such that (x) is raised to the power of (power). The domain of (x)\n"
			"and (power) are all real numbers. The range of the output is all real numbers greater than\n"
			"or equal to 0."
			"\n\n"
			"Note: 0 to the power of 0 is undefined, Pow(0, 0) will return 1."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: The input value." "\n"
			"    real power: The exponent." 
		));

	definitions.add(
		new Function(
			"I2R",
			"real",
			{"integer i"},
			"\n"
			"Typecasts (i) to a real. This is useless as this can also be accomplished by\n"
			"the operation (i + 0.), or, in the case of literal values, (literal.)\n"
			"    5. == I2R(5) == (5 + 0.)\n"
			"    I2R(i) == (i + 0.)"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The input value." 
		));

	definitions.add(
		new Function(
			"R2I",
			"integer",
			{"real r"},
			"\n"
			"Typecasts (r) to an integer."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real r: The input value." 
		));

	definitions.add(
		new Function(
			"I2S",
			"string",
			{"integer i"},
			"\n"
			"Returns the representation of (i) as a string.\n"
			"    I2S(55) -> \"55\""
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer i: The input value." 
		));

	definitions.add(
		new Function(
			"R2S",
			"string",
			{"real r"},
			"\n"
			"Returns the representation of (r) as a string.\n"
			"    R2S(55) -> \"55.000\""
			"\n\n"
			"Note: Always displays and rounds off to 3 decimal places."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real r: The input value." 
		));

	definitions.add(
		new Function(
			"R2SW",
			"string",
			{"real r", "integer width", "integer precision"},
			"\n"
			"Returns the representation of (r) as a string given a string length and a number of\n"
			"decimals (between 0 and 9) to display. The value (r) is placed at the end of the string."
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real r: The input value." "\n"
			"    integer width: The length of the string." "\n"
			"    integer precision: Number of decimals to display." 
		));

	definitions.add(
		new Function(
			"S2I",
			"integer",
			{"string s"},
			"\n"
			"Converts a string composed of digits into an integer of the same numerical value.\n"
			"The conversion of the string will stop at the first occurance of a non-numeric\n"
			"character. If the first character isn't numeric, 0 will be returned.\n"
			"    S2I(\"a\") -> 0.000\n"
			"    S2I(\"123\") -> 123.000\n"
			"    S2I(\"12a3\") -> 12.000"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: The input string." 
		));

	definitions.add(
		new Function(
			"S2R",
			"real",
			{"string s"},
			"\n"
			"Converts a string composed of digits into a real of the same numerical value.\n"
			"The conversion of the string will stop at the first occurance of a non-numeric\n"
			"character. If the first character isn't numeric, 0 will be returned.\n"
			"    S2R(\"a\") -> 0\n"
			"    S2R(\"123\") -> 123\n"
			"    S2R(\"12a3\") -> 12"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: The input string."
		));

	definitions.add(
		new Function(
			"GetHandleId",
			"integer",
			{"handle h"},
			"\n"
			"Converts a handle into its integer representation. Useful with hashtables.\n"
			"    call SaveInteger(GetHandleId(myUnit), myIndex1, myIndex2, myValue)"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    handle h: The input handle." 
		));

	definitions.add(
		new Function(
			"SubString",
			"string",
			{"string source", "integer start", "integer end"},
			"\n"
			"Returns a substring of (source).\n"
			"    G r u n t\n"
			"   0 1 2 3 4 5\n"
			"   SubString(\"Grunt\", 0, 2) -> \"Gr\""
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string source: The input string." "\n"
			"    integer start: The start position of the input string (see example)." "\n"
			"    integer end: The end position of the input string (see example)." 
		));

	definitions.add(
		new Function(
			"StringLength",
			"integer",
			{"string s"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: descr" 
		));

	definitions.add(
		new Function(
			"StringCase",
			"string",
			{"string source", "boolean upper"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string source: descr" "\n"
			"    boolean upper: descr" 
		));

	definitions.add(
		new Function(
			"StringHash",
			"integer",
			{"string s"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: descr" 
		));

	definitions.add(
		new Function(
			"GetLocalizedString",
			"string",
			{"string source"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string source: descr" 
		));

	definitions.add(
		new Function(
			"GetLocalizedHotkey",
			"integer",
			{"string source"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string source: descr" 
		));

	definitions.add(
		new Function(
			"SetMapName",
			"nothing",
			{"string name"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string name: descr" 
		));

	definitions.add(
		new Function(
			"SetMapDescription",
			"nothing",
			{"string description"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string description: descr" 
		));

	definitions.add(
		new Function(
			"SetTeams",
			"nothing",
			{"integer teamcount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer teamcount: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayers",
			"nothing",
			{"integer playercount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer playercount: descr" 
		));

	definitions.add(
		new Function(
			"DefineStartLocation",
			"nothing",
			{"integer whichStartLoc", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"DefineStartLocationLoc",
			"nothing",
			{"integer whichStartLoc", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"SetStartLocPrioCount",
			"nothing",
			{"integer whichStartLoc", "integer prioSlotCount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    integer prioSlotCount: descr" 
		));

	definitions.add(
		new Function(
			"SetStartLocPrio",
			"nothing",
			{"integer whichStartLoc", "integer prioSlotIndex", "integer otherStartLocIndex", "startlocprio priority"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    integer prioSlotIndex: descr" "\n"
			"    integer otherStartLocIndex: descr" "\n"
			"    startlocprio priority: descr" 
		));

	definitions.add(
		new Function(
			"GetStartLocPrioSlot",
			"integer",
			{"integer whichStartLoc", "integer prioSlotIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    integer prioSlotIndex: descr" 
		));

	definitions.add(
		new Function(
			"GetStartLocPrio",
			"startlocprio",
			{"integer whichStartLoc", "integer prioSlotIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLoc: descr" "\n"
			"    integer prioSlotIndex: descr" 
		));

	definitions.add(
		new Function(
			"SetGameTypeSupported",
			"nothing",
			{"gametype whichGameType", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gametype whichGameType: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"SetMapFlag",
			"nothing",
			{"mapflag whichMapFlag", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    mapflag whichMapFlag: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"SetGamePlacement",
			"nothing",
			{"placement whichPlacementType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    placement whichPlacementType: descr" 
		));

	definitions.add(
		new Function(
			"SetGameSpeed",
			"nothing",
			{"gamespeed whichspeed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamespeed whichspeed: descr" 
		));

	definitions.add(
		new Function(
			"SetGameDifficulty",
			"nothing",
			{"gamedifficulty whichdifficulty"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamedifficulty whichdifficulty: descr" 
		));

	definitions.add(
		new Function(
			"SetResourceDensity",
			"nothing",
			{"mapdensity whichdensity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    mapdensity whichdensity: descr" 
		));

	definitions.add(
		new Function(
			"SetCreatureDensity",
			"nothing",
			{"mapdensity whichdensity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    mapdensity whichdensity: descr" 
		));

	definitions.add(
		new Function(
			"GetTeams",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetPlayers",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsGameTypeSupported",
			"boolean",
			{"gametype whichGameType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gametype whichGameType: descr" 
		));

	definitions.add(
		new Function(
			"GetGameTypeSelected",
			"gametype",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsMapFlagSet",
			"boolean",
			{"mapflag whichMapFlag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    mapflag whichMapFlag: descr" 
		));

	definitions.add(
		new Function(
			"GetGamePlacement",
			"placement",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetGameSpeed",
			"gamespeed",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetGameDifficulty",
			"gamedifficulty",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetResourceDensity",
			"mapdensity",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCreatureDensity",
			"mapdensity",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetStartLocationX",
			"real",
			{"integer whichStartLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetStartLocationY",
			"real",
			{"integer whichStartLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetStartLocationLoc",
			"location",
			{"integer whichStartLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStartLocation: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTeam",
			"nothing",
			{"player whichPlayer", "integer whichTeam"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer whichTeam: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerStartLocation",
			"nothing",
			{"player whichPlayer", "integer startLocIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer startLocIndex: descr" 
		));

	definitions.add(
		new Function(
			"ForcePlayerStartLocation",
			"nothing",
			{"player whichPlayer", "integer startLocIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer startLocIndex: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerColor",
			"nothing",
			{"player whichPlayer", "playercolor color"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playercolor color: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAlliance",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "alliancetype whichAllianceSetting", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    alliancetype whichAllianceSetting: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTaxRate",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "playerstate whichResource", "integer rate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    playerstate whichResource: descr" "\n"
			"    integer rate: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerRacePreference",
			"nothing",
			{"player whichPlayer", "racepreference whichRacePreference"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    racepreference whichRacePreference: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerRaceSelectable",
			"nothing",
			{"player whichPlayer", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerController",
			"nothing",
			{"player whichPlayer", "mapcontrol controlType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    mapcontrol controlType: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerName",
			"nothing",
			{"player whichPlayer", "string name"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string name: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerOnScoreScreen",
			"nothing",
			{"player whichPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTeam",
			"integer",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerStartLocation",
			"integer",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerColor",
			"playercolor",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerSelectable",
			"boolean",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerController",
			"mapcontrol",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerSlotState",
			"playerslotstate",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTaxRate",
			"integer",
			{"player sourcePlayer", "player otherPlayer", "playerstate whichResource"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    playerstate whichResource: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerRacePrefSet",
			"boolean",
			{"player whichPlayer", "racepreference pref"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    racepreference pref: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerName",
			"string",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"CreateTimer",
			"timer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyTimer",
			"nothing",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"TimerStart",
			"nothing",
			{"timer whichTimer", "real timeout", "boolean periodic", "code handlerFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" "\n"
			"    real timeout: descr" "\n"
			"    boolean periodic: descr" "\n"
			"    code handlerFunc: descr" 
		));

	definitions.add(
		new Function(
			"TimerGetElapsed",
			"real",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"TimerGetRemaining",
			"real",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"TimerGetTimeout",
			"real",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"PauseTimer",
			"nothing",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"ResumeTimer",
			"nothing",
			{"timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"GetExpiredTimer",
			"timer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateGroup",
			"group",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyGroup",
			"nothing",
			{"group whichGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" 
		));

	definitions.add(
		new Function(
			"GroupAddUnit",
			"nothing",
			{"group whichGroup", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GroupRemoveUnit",
			"nothing",
			{"group whichGroup", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GroupClear",
			"nothing",
			{"group whichGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsOfType",
			"nothing",
			{"group whichGroup", "string unitname", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string unitname: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsOfPlayer",
			"nothing",
			{"group whichGroup", "player whichPlayer", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsOfTypeCounted",
			"nothing",
			{"group whichGroup", "string unitname", "boolexpr filter", "integer countLimit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string unitname: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    integer countLimit: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRect",
			"nothing",
			{"group whichGroup", "rect r", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRectCounted",
			"nothing",
			{"group whichGroup", "rect r", "boolexpr filter", "integer countLimit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    integer countLimit: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRange",
			"nothing",
			{"group whichGroup", "real x", "real y", "real radius", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRangeOfLoc",
			"nothing",
			{"group whichGroup", "location whichLocation", "real radius", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real radius: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRangeCounted",
			"nothing",
			{"group whichGroup", "real x", "real y", "real radius", "boolexpr filter", "integer countLimit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    integer countLimit: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsInRangeOfLocCounted",
			"nothing",
			{"group whichGroup", "location whichLocation", "real radius", "boolexpr filter", "integer countLimit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real radius: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    integer countLimit: descr" 
		));

	definitions.add(
		new Function(
			"GroupEnumUnitsSelected",
			"nothing",
			{"group whichGroup", "player whichPlayer", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GroupImmediateOrder",
			"boolean",
			{"group whichGroup", "string order"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string order: descr" 
		));

	definitions.add(
		new Function(
			"GroupImmediateOrderById",
			"boolean",
			{"group whichGroup", "integer order"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    integer order: descr" 
		));

	definitions.add(
		new Function(
			"GroupPointOrder",
			"boolean",
			{"group whichGroup", "string order", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"GroupPointOrderLoc",
			"boolean",
			{"group whichGroup", "string order", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string order: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GroupPointOrderById",
			"boolean",
			{"group whichGroup", "integer order", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    integer order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"GroupPointOrderByIdLoc",
			"boolean",
			{"group whichGroup", "integer order", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    integer order: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GroupTargetOrder",
			"boolean",
			{"group whichGroup", "string order", "widget targetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    string order: descr" "\n"
			"    widget targetWidget: descr" 
		));

	definitions.add(
		new Function(
			"GroupTargetOrderById",
			"boolean",
			{"group whichGroup", "integer order", "widget targetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    integer order: descr" "\n"
			"    widget targetWidget: descr" 
		));

	definitions.add(
		new Function(
			"ForGroup",
			"nothing",
			{"group whichGroup", "code callback"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    code callback: descr" 
		));

	definitions.add(
		new Function(
			"FirstOfGroup",
			"unit",
			{"group whichGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" 
		));

	definitions.add(
		new Function(
			"CreateForce",
			"force",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyForce",
			"nothing",
			{"force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"ForceAddPlayer",
			"nothing",
			{"force whichForce", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"ForceRemovePlayer",
			"nothing",
			{"force whichForce", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"ForceClear",
			"nothing",
			{"force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"ForceEnumPlayers",
			"nothing",
			{"force whichForce", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"ForceEnumPlayersCounted",
			"nothing",
			{"force whichForce", "boolexpr filter", "integer countLimit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    integer countLimit: descr" 
		));

	definitions.add(
		new Function(
			"ForceEnumAllies",
			"nothing",
			{"force whichForce", "player whichPlayer", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"ForceEnumEnemies",
			"nothing",
			{"force whichForce", "player whichPlayer", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"ForForce",
			"nothing",
			{"force whichForce", "code callback"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    code callback: descr" 
		));

	definitions.add(
		new Function(
			"Rect",
			"rect",
			{"real minx", "real miny", "real maxx", "real maxy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real minx: descr" "\n"
			"    real miny: descr" "\n"
			"    real maxx: descr" "\n"
			"    real maxy: descr" 
		));

	definitions.add(
		new Function(
			"RectFromLoc",
			"rect",
			{"location min", "location max"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location min: descr" "\n"
			"    location max: descr" 
		));

	definitions.add(
		new Function(
			"RemoveRect",
			"nothing",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"SetRect",
			"nothing",
			{"rect whichRect", "real minx", "real miny", "real maxx", "real maxy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" "\n"
			"    real minx: descr" "\n"
			"    real miny: descr" "\n"
			"    real maxx: descr" "\n"
			"    real maxy: descr" 
		));

	definitions.add(
		new Function(
			"SetRectFromLoc",
			"nothing",
			{"rect whichRect", "location min", "location max"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" "\n"
			"    location min: descr" "\n"
			"    location max: descr" 
		));

	definitions.add(
		new Function(
			"MoveRectTo",
			"nothing",
			{"rect whichRect", "real newCenterX", "real newCenterY"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" "\n"
			"    real newCenterX: descr" "\n"
			"    real newCenterY: descr" 
		));

	definitions.add(
		new Function(
			"MoveRectToLoc",
			"nothing",
			{"rect whichRect", "location newCenterLoc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" "\n"
			"    location newCenterLoc: descr" 
		));

	definitions.add(
		new Function(
			"GetRectCenterX",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));
	//to do
	definitions.add(
		new Function(
			"GetRectCenterY",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"GetRectMinX",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"GetRectMinY",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"GetRectMaxX",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"GetRectMaxY",
			"real",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"CreateRegion",
			"region",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RemoveRegion",
			"nothing",
			{"region whichRegion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" 
		));

	definitions.add(
		new Function(
			"RegionAddRect",
			"nothing",
			{"region whichRegion", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"RegionClearRect",
			"nothing",
			{"region whichRegion", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"RegionAddCell",
			"nothing",
			{"region whichRegion", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"RegionAddCellAtLoc",
			"nothing",
			{"region whichRegion", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"RegionClearCell",
			"nothing",
			{"region whichRegion", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"RegionClearCellAtLoc",
			"nothing",
			{"region whichRegion", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"Location",
			"location",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"RemoveLocation",
			"nothing",
			{"location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"MoveLocation",
			"nothing",
			{"location whichLocation", "real newX", "real newY"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" "\n"
			"    real newX: descr" "\n"
			"    real newY: descr" 
		));

	definitions.add(
		new Function(
			"GetLocationX",
			"real",
			{"location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetLocationY",
			"real",
			{"location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetLocationZ",
			"real",
			{"location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInRegion",
			"boolean",
			{"region whichRegion", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsPointInRegion",
			"boolean",
			{"region whichRegion", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IsLocationInRegion",
			"boolean",
			{"region whichRegion", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetWorldBounds",
			"rect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateTrigger",
			"trigger",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyTrigger",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"ResetTrigger",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"EnableTrigger",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"DisableTrigger",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"IsTriggerEnabled",
			"boolean",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerWaitOnSleeps",
			"nothing",
			{"trigger whichTrigger", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsTriggerWaitOnSleeps",
			"boolean",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"GetFilterUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEnumUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetFilterDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEnumDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetFilterItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEnumItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetFilterPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEnumPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTriggeringTrigger",
			"trigger",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTriggerEventId",
			"eventid",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTriggerEvalCount",
			"integer",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggerExecCount",
			"integer",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"ExecuteFunc",
			"nothing",
			{"string funcName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string funcName: descr" 
		));

	definitions.add(
		new Function(
			"And",
			"boolexpr",
			{"boolexpr operandA", "boolexpr operandB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr operandA: descr" "\n"
			"    boolexpr operandB: descr" 
		));

	definitions.add(
		new Function(
			"Or",
			"boolexpr",
			{"boolexpr operandA", "boolexpr operandB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr operandA: descr" "\n"
			"    boolexpr operandB: descr" 
		));

	definitions.add(
		new Function(
			"Not",
			"boolexpr",
			{"boolexpr operand"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr operand: descr" 
		));

	definitions.add(
		new Function(
			"Condition",
			"conditionfunc",
			{"code func"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    code func: descr" 
		));

	definitions.add(
		new Function(
			"DestroyCondition",
			"nothing",
			{"conditionfunc c"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    conditionfunc c: descr" 
		));

	definitions.add(
		new Function(
			"Filter",
			"filterfunc",
			{"code func"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    code func: descr" 
		));

	definitions.add(
		new Function(
			"DestroyFilter",
			"nothing",
			{"filterfunc f"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    filterfunc f: descr" 
		));

	definitions.add(
		new Function(
			"DestroyBoolExpr",
			"nothing",
			{"boolexpr e"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr e: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterVariableEvent",
			"event",
			{"trigger whichTrigger", "string varName", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    string varName: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterTimerEvent",
			"event",
			{"trigger whichTrigger", "real timeout", "boolean periodic"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    real timeout: descr" "\n"
			"    boolean periodic: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterTimerExpireEvent",
			"event",
			{"trigger whichTrigger", "timer t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    timer t: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterGameStateEvent",
			"event",
			{"trigger whichTrigger", "gamestate whichState", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    gamestate whichState: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterDialogEvent",
			"event",
			{"trigger whichTrigger", "dialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    dialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterDialogButtonEvent",
			"event",
			{"trigger whichTrigger", "button whichButton"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    button whichButton: descr" 
		));

	definitions.add(
		new Function(
			"GetEventGameState",
			"gamestate",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterGameEvent",
			"event",
			{"trigger whichTrigger", "gameevent whichGameEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    gameevent whichGameEvent: descr" 
		));

	definitions.add(
		new Function(
			"GetWinningPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterEnterRegion",
			"event",
			{"trigger whichTrigger", "region whichRegion", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    region whichRegion: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggeringRegion",
			"region",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEnteringUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterLeaveRegion",
			"event",
			{"trigger whichTrigger", "region whichRegion", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    region whichRegion: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetLeavingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterTrackableHitEvent",
			"event",
			{"trigger whichTrigger", "trackable t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    trackable t: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterTrackableTrackEvent",
			"event",
			{"trigger whichTrigger", "trackable t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    trackable t: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggeringTrackable",
			"trackable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetClickedButton",
			"button",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetClickedDialog",
			"dialog",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTournamentFinishSoonTimeRemaining",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTournamentFinishNowRule",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTournamentFinishNowPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTournamentScore",
			"integer",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetSaveBasicFilename",
			"string",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEvent",
			"event",
			{"trigger whichTrigger", "player whichPlayer", "playerevent whichPlayerEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    playerevent whichPlayerEvent: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggerPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerUnitEvent",
			"event",
			{"trigger whichTrigger", "player whichPlayer", "playerunitevent whichPlayerUnitEvent", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    playerunitevent whichPlayerUnitEvent: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetLevelingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLearningUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLearnedSkill",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLearnedSkillLevel",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRevivableUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRevivingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetAttacker",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRescuer",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetDyingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetKillingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetDecayingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSelectedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetConstructingStructure",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCancelledStructure",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetConstructedStructure",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetResearchingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetResearched",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTrainedUnitType",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTrainedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetDetectedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSummoningUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSummonedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetTransportUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLoadedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSellingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSoldUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetBuyingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSoldItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetChangingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetChangingUnitPrevOwner",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetManipulatingUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetManipulatedItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetIssuedOrderId",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderPointX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderPointY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderPointLoc",
			"location",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderTarget",
			"widget",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderTargetDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderTargetItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetOrderTargetUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellAbilityUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellAbilityId",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellAbility",
			"ability",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetLoc",
			"location",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSpellTargetUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerAllianceChange",
			"event",
			{"trigger whichTrigger", "player whichPlayer", "alliancetype whichAlliance"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    alliancetype whichAlliance: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerStateEvent",
			"event",
			{"trigger whichTrigger", "player whichPlayer", "playerstate whichState", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    playerstate whichState: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"GetEventPlayerState",
			"playerstate",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerChatEvent",
			"event",
			{"trigger whichTrigger", "player whichPlayer", "string chatMessageToDetect", "boolean exactMatchOnly"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    string chatMessageToDetect: descr" "\n"
			"    boolean exactMatchOnly: descr" 
		));

	definitions.add(
		new Function(
			"GetEventPlayerChatString",
			"string",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEventPlayerChatStringMatched",
			"string",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterDeathEvent",
			"event",
			{"trigger whichTrigger", "widget whichWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    widget whichWidget: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggerUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitStateEvent",
			"event",
			{"trigger whichTrigger", "unit whichUnit", "unitstate whichState", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    unitstate whichState: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"GetEventUnitState",
			"unitstate",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitEvent",
			"event",
			{"trigger whichTrigger", "unit whichUnit", "unitevent whichEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    unitevent whichEvent: descr" 
		));

	definitions.add(
		new Function(
			"GetEventDamage",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEventDamageSource",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEventDetectingPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterFilterUnitEvent",
			"event",
			{"trigger whichTrigger", "unit whichUnit", "unitevent whichEvent", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    unitevent whichEvent: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetEventTargetUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitInRange",
			"event",
			{"trigger whichTrigger", "unit whichUnit", "real range", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real range: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"TriggerAddCondition",
			"triggercondition",
			{"trigger whichTrigger", "boolexpr condition"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    boolexpr condition: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRemoveCondition",
			"nothing",
			{"trigger whichTrigger", "triggercondition whichCondition"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    triggercondition whichCondition: descr" 
		));

	definitions.add(
		new Function(
			"TriggerClearConditions",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerAddAction",
			"triggeraction",
			{"trigger whichTrigger", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRemoveAction",
			"nothing",
			{"trigger whichTrigger", "triggeraction whichAction"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    triggeraction whichAction: descr" 
		));

	definitions.add(
		new Function(
			"TriggerClearActions",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerSleepAction",
			"nothing",
			{"real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"TriggerWaitForSound",
			"nothing",
			{"sound s", "real offset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound s: descr" "\n"
			"    real offset: descr" 
		));

	definitions.add(
		new Function(
			"TriggerEvaluate",
			"boolean",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerExecute",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerExecuteWait",
			"nothing",
			{"trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"TriggerSyncStart",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerSyncReady",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetWidgetLife",
			"real",
			{"widget whichWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" 
		));

	definitions.add(
		new Function(
			"SetWidgetLife",
			"nothing",
			{"widget whichWidget", "real newLife"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" "\n"
			"    real newLife: descr" 
		));

	definitions.add(
		new Function(
			"GetWidgetX",
			"real",
			{"widget whichWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" 
		));

	definitions.add(
		new Function(
			"GetWidgetY",
			"real",
			{"widget whichWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggerWidget",
			"widget",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateDestructable",
			"destructable",
			{"integer objectid", "real x", "real y", "real face", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"CreateDestructableZ",
			"destructable",
			{"integer objectid", "real x", "real y", "real z", "real face", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" "\n"
			"    real face: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"CreateDeadDestructable",
			"destructable",
			{"integer objectid", "real x", "real y", "real face", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"CreateDeadDestructableZ",
			"destructable",
			{"integer objectid", "real x", "real y", "real z", "real face", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" "\n"
			"    real face: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"RemoveDestructable",
			"nothing",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"KillDestructable",
			"nothing",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableInvulnerable",
			"nothing",
			{"destructable d", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsDestructableInvulnerable",
			"boolean",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"EnumDestructablesInRect",
			"nothing",
			{"rect r", "boolexpr filter", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableTypeId",
			"integer",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableX",
			"real",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableY",
			"real",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableLife",
			"nothing",
			{"destructable d", "real life"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real life: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableLife",
			"real",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableMaxLife",
			"nothing",
			{"destructable d", "real max"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real max: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableMaxLife",
			"real",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"DestructableRestoreLife",
			"nothing",
			{"destructable d", "real life", "boolean birth"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real life: descr" "\n"
			"    boolean birth: descr" 
		));

	definitions.add(
		new Function(
			"QueueDestructableAnimation",
			"nothing",
			{"destructable d", "string whichAnimation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    string whichAnimation: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableAnimation",
			"nothing",
			{"destructable d", "string whichAnimation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    string whichAnimation: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableAnimationSpeed",
			"nothing",
			{"destructable d", "real speedFactor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real speedFactor: descr" 
		));

	definitions.add(
		new Function(
			"ShowDestructable",
			"nothing",
			{"destructable d", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableOccluderHeight",
			"real",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableOccluderHeight",
			"nothing",
			{"destructable d", "real height"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real height: descr" 
		));

	definitions.add(
		new Function(
			"GetDestructableName",
			"string",
			{"destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"GetTriggerDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateItem",
			"item",
			{"integer itemid", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"RemoveItem",
			"nothing",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"GetItemPlayer",
			"player",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"GetItemTypeId",
			"integer",
			{"item i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" 
		));

	definitions.add(
		new Function(
			"GetItemX",
			"real",
			{"item i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" 
		));

	definitions.add(
		new Function(
			"GetItemY",
			"real",
			{"item i"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" 
		));

	definitions.add(
		new Function(
			"SetItemPosition",
			"nothing",
			{"item i", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetItemDropOnDeath",
			"nothing",
			{"item whichItem", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetItemDroppable",
			"nothing",
			{"item i", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetItemPawnable",
			"nothing",
			{"item i", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item i: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetItemPlayer",
			"nothing",
			{"item whichItem", "player whichPlayer", "boolean changeColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolean changeColor: descr" 
		));

	definitions.add(
		new Function(
			"SetItemInvulnerable",
			"nothing",
			{"item whichItem", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsItemInvulnerable",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"SetItemVisible",
			"nothing",
			{"item whichItem", "boolean show"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    boolean show: descr" 
		));

	definitions.add(
		new Function(
			"IsItemVisible",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemOwned",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemPowerup",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemSellable",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemPawnable",
			"boolean",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemIdPowerup",
			"boolean",
			{"integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"IsItemIdSellable",
			"boolean",
			{"integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"IsItemIdPawnable",
			"boolean",
			{"integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"EnumItemsInRect",
			"nothing",
			{"rect r", "boolexpr filter", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"GetItemLevel",
			"integer",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"GetItemType",
			"itemtype",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"SetItemDropID",
			"nothing",
			{"item whichItem", "integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"GetItemName",
			"string",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"GetItemCharges",
			"integer",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"SetItemCharges",
			"nothing",
			{"item whichItem", "integer charges"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    integer charges: descr" 
		));

	definitions.add(
		new Function(
			"GetItemUserData",
			"integer",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"SetItemUserData",
			"nothing",
			{"item whichItem", "integer data"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    integer data: descr" 
		));

	definitions.add(
		new Function(
			"CreateUnit",
			"unit",
			{"player id", "integer unitid", "real x", "real y", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player id: descr" "\n"
			"    integer unitid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"CreateUnitByName",
			"unit",
			{"player whichPlayer", "string unitname", "real x", "real y", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string unitname: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"CreateUnitAtLoc",
			"unit",
			{"player id", "integer unitid", "location whichLocation", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player id: descr" "\n"
			"    integer unitid: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"CreateUnitAtLocByName",
			"unit",
			{"player id", "string unitname", "location whichLocation", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player id: descr" "\n"
			"    string unitname: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"CreateCorpse",
			"unit",
			{"player whichPlayer", "integer unitid", "real x", "real y", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer unitid: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"KillUnit",
			"nothing",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"RemoveUnit",
			"nothing",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"ShowUnit",
			"nothing",
			{"unit whichUnit", "boolean show"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean show: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitState",
			"nothing",
			{"unit whichUnit", "unitstate whichUnitState", "real newVal"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unitstate whichUnitState: descr" "\n"
			"    real newVal: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitX",
			"nothing",
			{"unit whichUnit", "real newX"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newX: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitY",
			"nothing",
			{"unit whichUnit", "real newY"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newY: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPosition",
			"nothing",
			{"unit whichUnit", "real newX", "real newY"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newX: descr" "\n"
			"    real newY: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPositionLoc",
			"nothing",
			{"unit whichUnit", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitFacing",
			"nothing",
			{"unit whichUnit", "real facingAngle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real facingAngle: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitFacingTimed",
			"nothing",
			{"unit whichUnit", "real facingAngle", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real facingAngle: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitMoveSpeed",
			"nothing",
			{"unit whichUnit", "real newSpeed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newSpeed: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitFlyHeight",
			"nothing",
			{"unit whichUnit", "real newHeight", "real rate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newHeight: descr" "\n"
			"    real rate: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitTurnSpeed",
			"nothing",
			{"unit whichUnit", "real newTurnSpeed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newTurnSpeed: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPropWindow",
			"nothing",
			{"unit whichUnit", "real newPropWindowAngle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newPropWindowAngle: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAcquireRange",
			"nothing",
			{"unit whichUnit", "real newAcquireRange"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newAcquireRange: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitCreepGuard",
			"nothing",
			{"unit whichUnit", "boolean creepGuard"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean creepGuard: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitAcquireRange",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitTurnSpeed",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitPropWindow",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitFlyHeight",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitDefaultAcquireRange",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitDefaultTurnSpeed",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitDefaultPropWindow",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitDefaultFlyHeight",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitOwner",
			"nothing",
			{"unit whichUnit", "player whichPlayer", "boolean changeColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolean changeColor: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitColor",
			"nothing",
			{"unit whichUnit", "playercolor whichColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    playercolor whichColor: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitScale",
			"nothing",
			{"unit whichUnit", "real scaleX", "real scaleY", "real scaleZ"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real scaleX: descr" "\n"
			"    real scaleY: descr" "\n"
			"    real scaleZ: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitTimeScale",
			"nothing",
			{"unit whichUnit", "real timeScale"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real timeScale: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitBlendTime",
			"nothing",
			{"unit whichUnit", "real blendTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real blendTime: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitVertexColor",
			"nothing",
			{"unit whichUnit", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"QueueUnitAnimation",
			"nothing",
			{"unit whichUnit", "string whichAnimation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string whichAnimation: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAnimation",
			"nothing",
			{"unit whichUnit", "string whichAnimation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string whichAnimation: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAnimationByIndex",
			"nothing",
			{"unit whichUnit", "integer whichAnimation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer whichAnimation: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAnimationWithRarity",
			"nothing",
			{"unit whichUnit", "string whichAnimation", "raritycontrol rarity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string whichAnimation: descr" "\n"
			"    raritycontrol rarity: descr" 
		));

	definitions.add(
		new Function(
			"AddUnitAnimationProperties",
			"nothing",
			{"unit whichUnit", "string animProperties", "boolean add"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string animProperties: descr" "\n"
			"    boolean add: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitLookAt",
			"nothing",
			{"unit whichUnit", "string whichBone", "unit lookAtTarget", "real offsetX", "real offsetY", "real offsetZ"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string whichBone: descr" "\n"
			"    unit lookAtTarget: descr" "\n"
			"    real offsetX: descr" "\n"
			"    real offsetY: descr" "\n"
			"    real offsetZ: descr" 
		));

	definitions.add(
		new Function(
			"ResetUnitLookAt",
			"nothing",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitRescuable",
			"nothing",
			{"unit whichUnit", "player byWhichPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player byWhichPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitRescueRange",
			"nothing",
			{"unit whichUnit", "real range"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real range: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroStr",
			"nothing",
			{"unit whichHero", "integer newStr", "boolean permanent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer newStr: descr" "\n"
			"    boolean permanent: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroAgi",
			"nothing",
			{"unit whichHero", "integer newAgi", "boolean permanent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer newAgi: descr" "\n"
			"    boolean permanent: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroInt",
			"nothing",
			{"unit whichHero", "integer newInt", "boolean permanent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer newInt: descr" "\n"
			"    boolean permanent: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroStr",
			"integer",
			{"unit whichHero", "boolean includeBonuses"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    boolean includeBonuses: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroAgi",
			"integer",
			{"unit whichHero", "boolean includeBonuses"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    boolean includeBonuses: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroInt",
			"integer",
			{"unit whichHero", "boolean includeBonuses"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    boolean includeBonuses: descr" 
		));

	definitions.add(
		new Function(
			"UnitStripHeroLevel",
			"boolean",
			{"unit whichHero", "integer howManyLevels"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer howManyLevels: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroXP",
			"integer",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroXP",
			"nothing",
			{"unit whichHero", "integer newXpVal", "boolean showEyeCandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer newXpVal: descr" "\n"
			"    boolean showEyeCandy: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroSkillPoints",
			"integer",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"UnitModifySkillPoints",
			"boolean",
			{"unit whichHero", "integer skillPointDelta"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer skillPointDelta: descr" 
		));

	definitions.add(
		new Function(
			"AddHeroXP",
			"nothing",
			{"unit whichHero", "integer xpToAdd", "boolean showEyeCandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer xpToAdd: descr" "\n"
			"    boolean showEyeCandy: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroLevel",
			"nothing",
			{"unit whichHero", "integer level", "boolean showEyeCandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer level: descr" "\n"
			"    boolean showEyeCandy: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroLevel",
			"integer",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitLevel",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetHeroProperName",
			"string",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"SuspendHeroXP",
			"nothing",
			{"unit whichHero", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsSuspendedXP",
			"boolean",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"SelectHeroSkill",
			"nothing",
			{"unit whichHero", "integer abilcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer abilcode: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitAbilityLevel",
			"integer",
			{"unit whichUnit", "integer abilcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilcode: descr" 
		));

	definitions.add(
		new Function(
			"DecUnitAbilityLevel",
			"integer",
			{"unit whichUnit", "integer abilcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilcode: descr" 
		));

	definitions.add(
		new Function(
			"IncUnitAbilityLevel",
			"integer",
			{"unit whichUnit", "integer abilcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilcode: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAbilityLevel",
			"integer",
			{"unit whichUnit", "integer abilcode", "integer level"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilcode: descr" "\n"
			"    integer level: descr" 
		));

	definitions.add(
		new Function(
			"ReviveHero",
			"boolean",
			{"unit whichHero", "real x", "real y", "boolean doEyecandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    boolean doEyecandy: descr" 
		));

	definitions.add(
		new Function(
			"ReviveHeroLoc",
			"boolean",
			{"unit whichHero", "location loc", "boolean doEyecandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    location loc: descr" "\n"
			"    boolean doEyecandy: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitExploded",
			"nothing",
			{"unit whichUnit", "boolean exploded"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean exploded: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitInvulnerable",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"PauseUnit",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitPaused",
			"boolean",
			{"unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPathing",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"ClearSelection",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SelectUnit",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitPointValue",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitPointValueByType",
			"integer",
			{"integer unitType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitType: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPointValueByType",
			"nothing",
			{"integer unitType", "integer newPointValue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitType: descr" "\n"
			"    integer newPointValue: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddItem",
			"boolean",
			{"unit whichUnit", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddItemById",
			"item",
			{"unit whichUnit", "integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddItemToSlotById",
			"boolean",
			{"unit whichUnit", "integer itemId", "integer itemSlot"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemId: descr" "\n"
			"    integer itemSlot: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveItem",
			"nothing",
			{"unit whichUnit", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveItemFromSlot",
			"item",
			{"unit whichUnit", "integer itemSlot"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemSlot: descr" 
		));

	definitions.add(
		new Function(
			"UnitHasItem",
			"boolean",
			{"unit whichUnit", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"UnitItemInSlot",
			"item",
			{"unit whichUnit", "integer itemSlot"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemSlot: descr" 
		));

	definitions.add(
		new Function(
			"UnitInventorySize",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitDropItemPoint",
			"boolean",
			{"unit whichUnit", "item whichItem", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"UnitDropItemSlot",
			"boolean",
			{"unit whichUnit", "item whichItem", "integer slot"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    integer slot: descr" 
		));

	definitions.add(
		new Function(
			"UnitDropItemTarget",
			"boolean",
			{"unit whichUnit", "item whichItem", "widget target"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    widget target: descr" 
		));

	definitions.add(
		new Function(
			"UnitUseItem",
			"boolean",
			{"unit whichUnit", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"UnitUseItemPoint",
			"boolean",
			{"unit whichUnit", "item whichItem", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"UnitUseItemTarget",
			"boolean",
			{"unit whichUnit", "item whichItem", "widget target"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    widget target: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitX",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitY",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitLoc",
			"location",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitFacing",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitMoveSpeed",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitDefaultMoveSpeed",
			"real",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitState",
			"real",
			{"unit whichUnit", "unitstate whichUnitState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unitstate whichUnitState: descr" 
		));

	definitions.add(
		new Function(
			"GetOwningPlayer",
			"player",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitTypeId",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitRace",
			"race",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitName",
			"string",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitFoodUsed",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitFoodMade",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetFoodMade",
			"integer",
			{"integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"GetFoodUsed",
			"integer",
			{"integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitUseFood",
			"nothing",
			{"unit whichUnit", "boolean useFood"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean useFood: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitRallyPoint",
			"location",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitRallyUnit",
			"unit",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitRallyDestructable",
			"destructable",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInGroup",
			"boolean",
			{"unit whichUnit", "group whichGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    group whichGroup: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInForce",
			"boolean",
			{"unit whichUnit", "force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitOwnedByPlayer",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitAlly",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitEnemy",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitVisible",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitDetected",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInvisible",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitFogged",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitMasked",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitSelected",
			"boolean",
			{"unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitRace",
			"boolean",
			{"unit whichUnit", "race whichRace"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    race whichRace: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitType",
			"boolean",
			{"unit whichUnit", "unittype whichUnitType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unittype whichUnitType: descr" 
		));

	definitions.add(
		new Function(
			"IsUnit",
			"boolean",
			{"unit whichUnit", "unit whichSpecifiedUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit whichSpecifiedUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInRange",
			"boolean",
			{"unit whichUnit", "unit otherUnit", "real distance"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit otherUnit: descr" "\n"
			"    real distance: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInRangeXY",
			"boolean",
			{"unit whichUnit", "real x", "real y", "real distance"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real distance: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInRangeLoc",
			"boolean",
			{"unit whichUnit", "location whichLocation", "real distance"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real distance: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitHidden",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitIllusion",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitInTransport",
			"boolean",
			{"unit whichUnit", "unit whichTransport"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit whichTransport: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitLoaded",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsHeroUnitId",
			"boolean",
			{"integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitIdType",
			"boolean",
			{"integer unitId", "unittype whichUnitType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    unittype whichUnitType: descr" 
		));

	definitions.add(
		new Function(
			"UnitShareVision",
			"nothing",
			{"unit whichUnit", "player whichPlayer", "boolean share"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolean share: descr" 
		));

	definitions.add(
		new Function(
			"UnitSuspendDecay",
			"nothing",
			{"unit whichUnit", "boolean suspend"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean suspend: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddType",
			"boolean",
			{"unit whichUnit", "unittype whichUnitType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unittype whichUnitType: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveType",
			"boolean",
			{"unit whichUnit", "unittype whichUnitType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unittype whichUnitType: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddAbility",
			"boolean",
			{"unit whichUnit", "integer abilityId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilityId: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveAbility",
			"boolean",
			{"unit whichUnit", "integer abilityId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer abilityId: descr" 
		));

	definitions.add(
		new Function(
			"UnitMakeAbilityPermanent",
			"boolean",
			{"unit whichUnit", "boolean permanent", "integer abilityId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean permanent: descr" "\n"
			"    integer abilityId: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveBuffs",
			"nothing",
			{"unit whichUnit", "boolean removePositive", "boolean removeNegative"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean removePositive: descr" "\n"
			"    boolean removeNegative: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveBuffsEx",
			"nothing",
			{"unit whichUnit", "boolean removePositive", "boolean removeNegative", "boolean magic", "boolean physical", "boolean timedLife", "boolean aura", "boolean autoDispel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean removePositive: descr" "\n"
			"    boolean removeNegative: descr" "\n"
			"    boolean magic: descr" "\n"
			"    boolean physical: descr" "\n"
			"    boolean timedLife: descr" "\n"
			"    boolean aura: descr" "\n"
			"    boolean autoDispel: descr" 
		));

	definitions.add(
		new Function(
			"UnitHasBuffsEx",
			"boolean",
			{"unit whichUnit", "boolean removePositive", "boolean removeNegative", "boolean magic", "boolean physical", "boolean timedLife", "boolean aura", "boolean autoDispel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean removePositive: descr" "\n"
			"    boolean removeNegative: descr" "\n"
			"    boolean magic: descr" "\n"
			"    boolean physical: descr" "\n"
			"    boolean timedLife: descr" "\n"
			"    boolean aura: descr" "\n"
			"    boolean autoDispel: descr" 
		));

	definitions.add(
		new Function(
			"UnitCountBuffsEx",
			"integer",
			{"unit whichUnit", "boolean removePositive", "boolean removeNegative", "boolean magic", "boolean physical", "boolean timedLife", "boolean aura", "boolean autoDispel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean removePositive: descr" "\n"
			"    boolean removeNegative: descr" "\n"
			"    boolean magic: descr" "\n"
			"    boolean physical: descr" "\n"
			"    boolean timedLife: descr" "\n"
			"    boolean aura: descr" "\n"
			"    boolean autoDispel: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddSleep",
			"nothing",
			{"unit whichUnit", "boolean add"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean add: descr" 
		));

	definitions.add(
		new Function(
			"UnitCanSleep",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddSleepPerm",
			"nothing",
			{"unit whichUnit", "boolean add"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean add: descr" 
		));

	definitions.add(
		new Function(
			"UnitCanSleepPerm",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitIsSleeping",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitWakeUp",
			"nothing",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitApplyTimedLife",
			"nothing",
			{"unit whichUnit", "integer buffId", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer buffId: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"UnitIgnoreAlarm",
			"boolean",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"UnitIgnoreAlarmToggled",
			"boolean",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitResetCooldown",
			"nothing",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitSetConstructionProgress",
			"nothing",
			{"unit whichUnit", "integer constructionPercentage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer constructionPercentage: descr" 
		));

	definitions.add(
		new Function(
			"UnitSetUpgradeProgress",
			"nothing",
			{"unit whichUnit", "integer upgradePercentage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer upgradePercentage: descr" 
		));

	definitions.add(
		new Function(
			"UnitPauseTimedLife",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"UnitSetUsesAltIcon",
			"nothing",
			{"unit whichUnit", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"UnitDamagePoint",
			"boolean",
			{"unit whichUnit", "real delay", "real radius", "real x", "real y", "real amount", "boolean attack", "boolean ranged", "attacktype attackType", "damagetype damageType", "weapontype weaponType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real delay: descr" "\n"
			"    real radius: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real amount: descr" "\n"
			"    boolean attack: descr" "\n"
			"    boolean ranged: descr" "\n"
			"    attacktype attackType: descr" "\n"
			"    damagetype damageType: descr" "\n"
			"    weapontype weaponType: descr" 
		));

	definitions.add(
		new Function(
			"UnitDamageTarget",
			"boolean",
			{"unit whichUnit", "widget target", "real amount", "boolean attack", "boolean ranged", "attacktype attackType", "damagetype damageType", "weapontype weaponType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    widget target: descr" "\n"
			"    real amount: descr" "\n"
			"    boolean attack: descr" "\n"
			"    boolean ranged: descr" "\n"
			"    attacktype attackType: descr" "\n"
			"    damagetype damageType: descr" "\n"
			"    weapontype weaponType: descr" 
		));

	definitions.add(
		new Function(
			"IssueImmediateOrder",
			"boolean",
			{"unit whichUnit", "string order"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" 
		));

	definitions.add(
		new Function(
			"IssueImmediateOrderById",
			"boolean",
			{"unit whichUnit", "integer order"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" 
		));

	definitions.add(
		new Function(
			"IssuePointOrder",
			"boolean",
			{"unit whichUnit", "string order", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssuePointOrderLoc",
			"boolean",
			{"unit whichUnit", "string order", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"IssuePointOrderById",
			"boolean",
			{"unit whichUnit", "integer order", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssuePointOrderByIdLoc",
			"boolean",
			{"unit whichUnit", "integer order", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"IssueTargetOrder",
			"boolean",
			{"unit whichUnit", "string order", "widget targetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" "\n"
			"    widget targetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueTargetOrderById",
			"boolean",
			{"unit whichUnit", "integer order", "widget targetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" "\n"
			"    widget targetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueInstantPointOrder",
			"boolean",
			{"unit whichUnit", "string order", "real x", "real y", "widget instantTargetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    widget instantTargetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueInstantPointOrderById",
			"boolean",
			{"unit whichUnit", "integer order", "real x", "real y", "widget instantTargetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    widget instantTargetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueInstantTargetOrder",
			"boolean",
			{"unit whichUnit", "string order", "widget targetWidget", "widget instantTargetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string order: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    widget instantTargetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueInstantTargetOrderById",
			"boolean",
			{"unit whichUnit", "integer order", "widget targetWidget", "widget instantTargetWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer order: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    widget instantTargetWidget: descr" 
		));

	definitions.add(
		new Function(
			"IssueBuildOrder",
			"boolean",
			{"unit whichPeon", "string unitToBuild", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichPeon: descr" "\n"
			"    string unitToBuild: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssueBuildOrderById",
			"boolean",
			{"unit whichPeon", "integer unitId", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichPeon: descr" "\n"
			"    integer unitId: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralImmediateOrder",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "string unitToBuild"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    string unitToBuild: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralImmediateOrderById",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralPointOrder",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "string unitToBuild", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    string unitToBuild: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralPointOrderById",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "integer unitId", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    integer unitId: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralTargetOrder",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "string unitToBuild", "widget target"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    string unitToBuild: descr" "\n"
			"    widget target: descr" 
		));

	definitions.add(
		new Function(
			"IssueNeutralTargetOrderById",
			"boolean",
			{"player forWhichPlayer", "unit neutralStructure", "integer unitId", "widget target"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    unit neutralStructure: descr" "\n"
			"    integer unitId: descr" "\n"
			"    widget target: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitCurrentOrder",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetResourceAmount",
			"nothing",
			{"unit whichUnit", "integer amount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer amount: descr" 
		));

	definitions.add(
		new Function(
			"AddResourceAmount",
			"nothing",
			{"unit whichUnit", "integer amount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer amount: descr" 
		));

	definitions.add(
		new Function(
			"GetResourceAmount",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"WaygateGetDestinationX",
			"real",
			{"unit waygate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" 
		));

	definitions.add(
		new Function(
			"WaygateGetDestinationY",
			"real",
			{"unit waygate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" 
		));

	definitions.add(
		new Function(
			"WaygateSetDestination",
			"nothing",
			{"unit waygate", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"WaygateActivate",
			"nothing",
			{"unit waygate", "boolean activate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" "\n"
			"    boolean activate: descr" 
		));

	definitions.add(
		new Function(
			"WaygateIsActive",
			"boolean",
			{"unit waygate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" 
		));

	definitions.add(
		new Function(
			"AddItemToAllStock",
			"nothing",
			{"integer itemId", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"AddItemToStock",
			"nothing",
			{"unit whichUnit", "integer itemId", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemId: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"AddUnitToAllStock",
			"nothing",
			{"integer unitId", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"AddUnitToStock",
			"nothing",
			{"unit whichUnit", "integer unitId", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer unitId: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"RemoveItemFromAllStock",
			"nothing",
			{"integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"RemoveItemFromStock",
			"nothing",
			{"unit whichUnit", "integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"RemoveUnitFromAllStock",
			"nothing",
			{"integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"RemoveUnitFromStock",
			"nothing",
			{"unit whichUnit", "integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"SetAllItemTypeSlots",
			"nothing",
			{"integer slots"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer slots: descr" 
		));

	definitions.add(
		new Function(
			"SetAllUnitTypeSlots",
			"nothing",
			{"integer slots"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer slots: descr" 
		));

	definitions.add(
		new Function(
			"SetItemTypeSlots",
			"nothing",
			{"unit whichUnit", "integer slots"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer slots: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitTypeSlots",
			"nothing",
			{"unit whichUnit", "integer slots"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer slots: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitUserData",
			"integer",
			{"unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitUserData",
			"nothing",
			{"unit whichUnit", "integer data"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer data: descr" 
		));

	definitions.add(
		new Function(
			"Player",
			"player",
			{"integer number"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer number: descr" 
		));

	definitions.add(
		new Function(
			"GetLocalPlayer",
			"player",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsPlayerAlly",
			"boolean",
			{"player whichPlayer", "player otherPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    player otherPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerEnemy",
			"boolean",
			{"player whichPlayer", "player otherPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    player otherPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerInForce",
			"boolean",
			{"player whichPlayer", "force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerObserver",
			"boolean",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsVisibleToPlayer",
			"boolean",
			{"real x", "real y", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsLocationVisibleToPlayer",
			"boolean",
			{"location whichLocation", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsFoggedToPlayer",
			"boolean",
			{"real x", "real y", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsLocationFoggedToPlayer",
			"boolean",
			{"location whichLocation", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsMaskedToPlayer",
			"boolean",
			{"real x", "real y", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsLocationMaskedToPlayer",
			"boolean",
			{"location whichLocation", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerRace",
			"race",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerId",
			"integer",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerUnitCount",
			"integer",
			{"player whichPlayer", "boolean includeIncomplete"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean includeIncomplete: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTypedUnitCount",
			"integer",
			{"player whichPlayer", "string unitName", "boolean includeIncomplete", "boolean includeUpgrades"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string unitName: descr" "\n"
			"    boolean includeIncomplete: descr" "\n"
			"    boolean includeUpgrades: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerStructureCount",
			"integer",
			{"player whichPlayer", "boolean includeIncomplete"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean includeIncomplete: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerState",
			"integer",
			{"player whichPlayer", "playerstate whichPlayerState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playerstate whichPlayerState: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerScore",
			"integer",
			{"player whichPlayer", "playerscore whichPlayerScore"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playerscore whichPlayerScore: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerAlliance",
			"boolean",
			{"player sourcePlayer", "player otherPlayer", "alliancetype whichAllianceSetting"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    alliancetype whichAllianceSetting: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerHandicap",
			"real",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerHandicapXP",
			"real",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerHandicap",
			"nothing",
			{"player whichPlayer", "real handicap"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real handicap: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerHandicapXP",
			"nothing",
			{"player whichPlayer", "real handicap"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real handicap: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTechMaxAllowed",
			"nothing",
			{"player whichPlayer", "integer techid", "integer maximum"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" "\n"
			"    integer maximum: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTechMaxAllowed",
			"integer",
			{"player whichPlayer", "integer techid"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" 
		));

	definitions.add(
		new Function(
			"AddPlayerTechResearched",
			"nothing",
			{"player whichPlayer", "integer techid", "integer levels"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" "\n"
			"    integer levels: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTechResearched",
			"nothing",
			{"player whichPlayer", "integer techid", "integer setToLevel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" "\n"
			"    integer setToLevel: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTechResearched",
			"boolean",
			{"player whichPlayer", "integer techid", "boolean specificonly"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" "\n"
			"    boolean specificonly: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTechCount",
			"integer",
			{"player whichPlayer", "integer techid", "boolean specificonly"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techid: descr" "\n"
			"    boolean specificonly: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerUnitsOwner",
			"nothing",
			{"player whichPlayer", "integer newOwner"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer newOwner: descr" 
		));

	definitions.add(
		new Function(
			"CripplePlayer",
			"nothing",
			{"player whichPlayer", "force toWhichPlayers", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    force toWhichPlayers: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAbilityAvailable",
			"nothing",
			{"player whichPlayer", "integer abilid", "boolean avail"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer abilid: descr" "\n"
			"    boolean avail: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerState",
			"nothing",
			{"player whichPlayer", "playerstate whichPlayerState", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playerstate whichPlayerState: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"RemovePlayer",
			"nothing",
			{"player whichPlayer", "playergameresult gameResult"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playergameresult gameResult: descr" 
		));

	definitions.add(
		new Function(
			"CachePlayerHeroData",
			"nothing",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetFogStateRect",
			"nothing",
			{"player forWhichPlayer", "fogstate whichState", "rect where", "boolean useSharedVision"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    rect where: descr" "\n"
			"    boolean useSharedVision: descr" 
		));

	definitions.add(
		new Function(
			"SetFogStateRadius",
			"nothing",
			{"player forWhichPlayer", "fogstate whichState", "real centerx", "real centerY", "real radius", "boolean useSharedVision"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    real centerx: descr" "\n"
			"    real centerY: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean useSharedVision: descr" 
		));

	definitions.add(
		new Function(
			"SetFogStateRadiusLoc",
			"nothing",
			{"player forWhichPlayer", "fogstate whichState", "location center", "real radius", "boolean useSharedVision"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    location center: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean useSharedVision: descr" 
		));

	definitions.add(
		new Function(
			"FogMaskEnable",
			"nothing",
			{"boolean enable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enable: descr" 
		));

	definitions.add(
		new Function(
			"IsFogMaskEnabled",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FogEnable",
			"nothing",
			{"boolean enable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enable: descr" 
		));

	definitions.add(
		new Function(
			"IsFogEnabled",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateFogModifierRect",
			"fogmodifier",
			{"player forWhichPlayer", "fogstate whichState", "rect where", "boolean useSharedVision", "boolean afterUnits"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    rect where: descr" "\n"
			"    boolean useSharedVision: descr" "\n"
			"    boolean afterUnits: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRadius",
			"fogmodifier",
			{"player forWhichPlayer", "fogstate whichState", "real centerx", "real centerY", "real radius", "boolean useSharedVision", "boolean afterUnits"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    real centerx: descr" "\n"
			"    real centerY: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean useSharedVision: descr" "\n"
			"    boolean afterUnits: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRadiusLoc",
			"fogmodifier",
			{"player forWhichPlayer", "fogstate whichState", "location center", "real radius", "boolean useSharedVision", "boolean afterUnits"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player forWhichPlayer: descr" "\n"
			"    fogstate whichState: descr" "\n"
			"    location center: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean useSharedVision: descr" "\n"
			"    boolean afterUnits: descr" 
		));

	definitions.add(
		new Function(
			"DestroyFogModifier",
			"nothing",
			{"fogmodifier whichFogModifier"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fogmodifier whichFogModifier: descr" 
		));

	definitions.add(
		new Function(
			"FogModifierStart",
			"nothing",
			{"fogmodifier whichFogModifier"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fogmodifier whichFogModifier: descr" 
		));

	definitions.add(
		new Function(
			"FogModifierStop",
			"nothing",
			{"fogmodifier whichFogModifier"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fogmodifier whichFogModifier: descr" 
		));

	definitions.add(
		new Function(
			"VersionGet",
			"version",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"VersionCompatible",
			"boolean",
			{"version whichVersion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    version whichVersion: descr" 
		));

	definitions.add(
		new Function(
			"VersionSupported",
			"boolean",
			{"version whichVersion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    version whichVersion: descr" 
		));

	definitions.add(
		new Function(
			"EndGame",
			"nothing",
			{"boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"ChangeLevel",
			"nothing",
			{"string newLevel", "boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string newLevel: descr" "\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"RestartGame",
			"nothing",
			{"boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"ReloadGame",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCampaignMenuRace",
			"nothing",
			{"race r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    race r: descr" 
		));

	definitions.add(
		new Function(
			"SetCampaignMenuRaceEx",
			"nothing",
			{"integer campaignIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignIndex: descr" 
		));

	definitions.add(
		new Function(
			"ForceCampaignSelectScreen",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"LoadGame",
			"nothing",
			{"string saveFileName", "boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string saveFileName: descr" "\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"SaveGame",
			"nothing",
			{"string saveFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string saveFileName: descr" 
		));

	definitions.add(
		new Function(
			"RenameSaveDirectory",
			"boolean",
			{"string sourceDirName", "string destDirName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string sourceDirName: descr" "\n"
			"    string destDirName: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSaveDirectory",
			"boolean",
			{"string sourceDirName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string sourceDirName: descr" 
		));

	definitions.add(
		new Function(
			"CopySaveGame",
			"boolean",
			{"string sourceSaveName", "string destSaveName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string sourceSaveName: descr" "\n"
			"    string destSaveName: descr" 
		));

	definitions.add(
		new Function(
			"SaveGameExists",
			"boolean",
			{"string saveName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string saveName: descr" 
		));

	definitions.add(
		new Function(
			"SyncSelections",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetFloatGameState",
			"nothing",
			{"fgamestate whichFloatGameState", "real value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fgamestate whichFloatGameState: descr" "\n"
			"    real value: descr" 
		));

	definitions.add(
		new Function(
			"GetFloatGameState",
			"real",
			{"fgamestate whichFloatGameState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fgamestate whichFloatGameState: descr" 
		));

	definitions.add(
		new Function(
			"SetIntegerGameState",
			"nothing",
			{"igamestate whichIntegerGameState", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    igamestate whichIntegerGameState: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"GetIntegerGameState",
			"integer",
			{"igamestate whichIntegerGameState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    igamestate whichIntegerGameState: descr" 
		));

	definitions.add(
		new Function(
			"SetTutorialCleared",
			"nothing",
			{"boolean cleared"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean cleared: descr" 
		));

	definitions.add(
		new Function(
			"SetMissionAvailable",
			"nothing",
			{"integer campaignNumber", "integer missionNumber", "boolean available"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignNumber: descr" "\n"
			"    integer missionNumber: descr" "\n"
			"    boolean available: descr" 
		));

	definitions.add(
		new Function(
			"SetCampaignAvailable",
			"nothing",
			{"integer campaignNumber", "boolean available"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignNumber: descr" "\n"
			"    boolean available: descr" 
		));

	definitions.add(
		new Function(
			"SetOpCinematicAvailable",
			"nothing",
			{"integer campaignNumber", "boolean available"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignNumber: descr" "\n"
			"    boolean available: descr" 
		));

	definitions.add(
		new Function(
			"SetEdCinematicAvailable",
			"nothing",
			{"integer campaignNumber", "boolean available"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignNumber: descr" "\n"
			"    boolean available: descr" 
		));

	definitions.add(
		new Function(
			"GetDefaultDifficulty",
			"gamedifficulty",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDefaultDifficulty",
			"nothing",
			{"gamedifficulty g"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamedifficulty g: descr" 
		));

	definitions.add(
		new Function(
			"SetCustomCampaignButtonVisible",
			"nothing",
			{"integer whichButton", "boolean visible"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichButton: descr" "\n"
			"    boolean visible: descr" 
		));

	definitions.add(
		new Function(
			"GetCustomCampaignButtonVisible",
			"boolean",
			{"integer whichButton"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichButton: descr" 
		));

	definitions.add(
		new Function(
			"DoNotSaveReplay",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DialogCreate",
			"dialog",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DialogDestroy",
			"nothing",
			{"dialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"DialogClear",
			"nothing",
			{"dialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"DialogSetMessage",
			"nothing",
			{"dialog whichDialog", "string messageText"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    string messageText: descr" 
		));

	definitions.add(
		new Function(
			"DialogAddButton",
			"button",
			{"dialog whichDialog", "string buttonText", "integer hotkey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    string buttonText: descr" "\n"
			"    integer hotkey: descr" 
		));

	definitions.add(
		new Function(
			"DialogAddQuitButton",
			"button",
			{"dialog whichDialog", "boolean doScoreScreen", "string buttonText", "integer hotkey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    boolean doScoreScreen: descr" "\n"
			"    string buttonText: descr" "\n"
			"    integer hotkey: descr" 
		));

	definitions.add(
		new Function(
			"DialogDisplay",
			"nothing",
			{"player whichPlayer", "dialog whichDialog", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    dialog whichDialog: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"ReloadGameCachesFromDisk",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitGameCache",
			"gamecache",
			{"string campaignFile"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string campaignFile: descr" 
		));

	definitions.add(
		new Function(
			"SaveGameCache",
			"boolean",
			{"gamecache whichCache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache whichCache: descr" 
		));

	definitions.add(
		new Function(
			"StoreInteger",
			"nothing",
			{"gamecache cache", "string missionKey", "string key", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"StoreReal",
			"nothing",
			{"gamecache cache", "string missionKey", "string key", "real value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    real value: descr" 
		));

	definitions.add(
		new Function(
			"StoreBoolean",
			"nothing",
			{"gamecache cache", "string missionKey", "string key", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"StoreUnit",
			"boolean",
			{"gamecache cache", "string missionKey", "string key", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"StoreString",
			"boolean",
			{"gamecache cache", "string missionKey", "string key", "string value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    string value: descr" 
		));

	definitions.add(
		new Function(
			"SyncStoredInteger",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"SyncStoredReal",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"SyncStoredBoolean",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"SyncStoredUnit",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"SyncStoredString",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredInteger",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredReal",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredBoolean",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredUnit",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredString",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"FlushGameCache",
			"nothing",
			{"gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredMission",
			"nothing",
			{"gamecache cache", "string missionKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredInteger",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredReal",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredBoolean",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredUnit",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"FlushStoredString",
			"nothing",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredInteger",
			"integer",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredReal",
			"real",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredBoolean",
			"boolean",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredString",
			"string",
			{"gamecache cache", "string missionKey", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"RestoreUnit",
			"unit",
			{"gamecache cache", "string missionKey", "string key", "player forWhichPlayer", "real x", "real y", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" "\n"
			"    string missionKey: descr" "\n"
			"    string key: descr" "\n"
			"    player forWhichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"InitHashtable",
			"hashtable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SaveInteger",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"SaveReal",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey", "real value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    real value: descr" 
		));

	definitions.add(
		new Function(
			"SaveBoolean",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey", "boolean value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    boolean value: descr" 
		));

	definitions.add(
		new Function(
			"SaveStr",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "string value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    string value: descr" 
		));

	definitions.add(
		new Function(
			"SavePlayerHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SaveWidgetHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "widget whichWidget"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    widget whichWidget: descr" 
		));

	definitions.add(
		new Function(
			"SaveDestructableHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "destructable whichDestructable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    destructable whichDestructable: descr" 
		));

	definitions.add(
		new Function(
			"SaveItemHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"SaveUnitHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SaveAbilityHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "ability whichAbility"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    ability whichAbility: descr" 
		));

	definitions.add(
		new Function(
			"SaveTimerHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "trigger whichTrigger"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    trigger whichTrigger: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerConditionHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "triggercondition whichTriggercondition"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    triggercondition whichTriggercondition: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerActionHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "triggeraction whichTriggeraction"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    triggeraction whichTriggeraction: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerEventHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "event whichEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    event whichEvent: descr" 
		));

	definitions.add(
		new Function(
			"SaveForceHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"SaveGroupHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "group whichGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    group whichGroup: descr" 
		));

	definitions.add(
		new Function(
			"SaveLocationHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"SaveRectHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"SaveBooleanExprHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "boolexpr whichBoolexpr"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    boolexpr whichBoolexpr: descr" 
		));

	definitions.add(
		new Function(
			"SaveSoundHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "sound whichSound"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    sound whichSound: descr" 
		));

	definitions.add(
		new Function(
			"SaveEffectHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "effect whichEffect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    effect whichEffect: descr" 
		));

	definitions.add(
		new Function(
			"SaveUnitPoolHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "unitpool whichUnitpool"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    unitpool whichUnitpool: descr" 
		));

	definitions.add(
		new Function(
			"SaveItemPoolHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "itempool whichItempool"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    itempool whichItempool: descr" 
		));

	definitions.add(
		new Function(
			"SaveQuestHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"SaveQuestItemHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "questitem whichQuestitem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    questitem whichQuestitem: descr" 
		));

	definitions.add(
		new Function(
			"SaveDefeatConditionHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "defeatcondition whichDefeatcondition"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    defeatcondition whichDefeatcondition: descr" 
		));

	definitions.add(
		new Function(
			"SaveTimerDialogHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "timerdialog whichTimerdialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    timerdialog whichTimerdialog: descr" 
		));

	definitions.add(
		new Function(
			"SaveLeaderboardHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "leaderboard whichLeaderboard"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    leaderboard whichLeaderboard: descr" 
		));

	definitions.add(
		new Function(
			"SaveMultiboardHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "multiboard whichMultiboard"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    multiboard whichMultiboard: descr" 
		));

	definitions.add(
		new Function(
			"SaveMultiboardItemHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "multiboarditem whichMultiboarditem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    multiboarditem whichMultiboarditem: descr" 
		));

	definitions.add(
		new Function(
			"SaveTrackableHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "trackable whichTrackable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    trackable whichTrackable: descr" 
		));

	definitions.add(
		new Function(
			"SaveDialogHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "dialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    dialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"SaveButtonHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "button whichButton"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    button whichButton: descr" 
		));

	definitions.add(
		new Function(
			"SaveTextTagHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "texttag whichTexttag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    texttag whichTexttag: descr" 
		));

	definitions.add(
		new Function(
			"SaveLightningHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "lightning whichLightning"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    lightning whichLightning: descr" 
		));

	definitions.add(
		new Function(
			"SaveImageHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "image whichImage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    image whichImage: descr" 
		));

	definitions.add(
		new Function(
			"SaveUbersplatHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "ubersplat whichUbersplat"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    ubersplat whichUbersplat: descr" 
		));

	definitions.add(
		new Function(
			"SaveRegionHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "region whichRegion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    region whichRegion: descr" 
		));

	definitions.add(
		new Function(
			"SaveFogStateHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "fogstate whichFogState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    fogstate whichFogState: descr" 
		));

	definitions.add(
		new Function(
			"SaveFogModifierHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "fogmodifier whichFogModifier"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    fogmodifier whichFogModifier: descr" 
		));

	definitions.add(
		new Function(
			"SaveAgentHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "agent whichAgent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    agent whichAgent: descr" 
		));

	definitions.add(
		new Function(
			"SaveHashtableHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey", "hashtable whichHashtable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" "\n"
			"    hashtable whichHashtable: descr" 
		));

	definitions.add(
		new Function(
			"LoadInteger",
			"integer",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadReal",
			"real",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadBoolean",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadStr",
			"string",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadPlayerHandle",
			"player",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadWidgetHandle",
			"widget",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadDestructableHandle",
			"destructable",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadItemHandle",
			"item",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadUnitHandle",
			"unit",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadAbilityHandle",
			"ability",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTimerHandle",
			"timer",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerHandle",
			"trigger",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerConditionHandle",
			"triggercondition",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerActionHandle",
			"triggeraction",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerEventHandle",
			"event",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadForceHandle",
			"force",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadGroupHandle",
			"group",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadLocationHandle",
			"location",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadRectHandle",
			"rect",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadBooleanExprHandle",
			"boolexpr",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadSoundHandle",
			"sound",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadEffectHandle",
			"effect",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadUnitPoolHandle",
			"unitpool",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadItemPoolHandle",
			"itempool",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadQuestHandle",
			"quest",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadQuestItemHandle",
			"questitem",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadDefeatConditionHandle",
			"defeatcondition",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTimerDialogHandle",
			"timerdialog",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadLeaderboardHandle",
			"leaderboard",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadMultiboardHandle",
			"multiboard",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadMultiboardItemHandle",
			"multiboarditem",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTrackableHandle",
			"trackable",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadDialogHandle",
			"dialog",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadButtonHandle",
			"button",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadTextTagHandle",
			"texttag",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadLightningHandle",
			"lightning",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadImageHandle",
			"image",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadUbersplatHandle",
			"ubersplat",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadRegionHandle",
			"region",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadFogStateHandle",
			"fogstate",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadFogModifierHandle",
			"fogmodifier",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"LoadHashtableHandle",
			"hashtable",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedInteger",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedReal",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedBoolean",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedString",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedHandle",
			"boolean",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSavedInteger",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSavedReal",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSavedBoolean",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSavedString",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"RemoveSavedHandle",
			"nothing",
			{"hashtable table", "integer parentKey", "integer childKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" "\n"
			"    integer childKey: descr" 
		));

	definitions.add(
		new Function(
			"FlushParentHashtable",
			"nothing",
			{"hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"FlushChildHashtable",
			"nothing",
			{"hashtable table", "integer parentKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable table: descr" "\n"
			"    integer parentKey: descr" 
		));

	definitions.add(
		new Function(
			"GetRandomInt",
			"integer",
			{"integer lowBound", "integer highBound"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer lowBound: descr" "\n"
			"    integer highBound: descr" 
		));

	definitions.add(
		new Function(
			"GetRandomReal",
			"real",
			{"real lowBound", "real highBound"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real lowBound: descr" "\n"
			"    real highBound: descr" 
		));

	definitions.add(
		new Function(
			"CreateUnitPool",
			"unitpool",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyUnitPool",
			"nothing",
			{"unitpool whichPool"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitpool whichPool: descr" 
		));

	definitions.add(
		new Function(
			"UnitPoolAddUnitType",
			"nothing",
			{"unitpool whichPool", "integer unitId", "real weight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitpool whichPool: descr" "\n"
			"    integer unitId: descr" "\n"
			"    real weight: descr" 
		));

	definitions.add(
		new Function(
			"UnitPoolRemoveUnitType",
			"nothing",
			{"unitpool whichPool", "integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitpool whichPool: descr" "\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"PlaceRandomUnit",
			"unit",
			{"unitpool whichPool", "player forWhichPlayer", "real x", "real y", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitpool whichPool: descr" "\n"
			"    player forWhichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"CreateItemPool",
			"itempool",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyItemPool",
			"nothing",
			{"itempool whichItemPool"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itempool whichItemPool: descr" 
		));

	definitions.add(
		new Function(
			"ItemPoolAddItemType",
			"nothing",
			{"itempool whichItemPool", "integer itemId", "real weight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itempool whichItemPool: descr" "\n"
			"    integer itemId: descr" "\n"
			"    real weight: descr" 
		));

	definitions.add(
		new Function(
			"ItemPoolRemoveItemType",
			"nothing",
			{"itempool whichItemPool", "integer itemId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itempool whichItemPool: descr" "\n"
			"    integer itemId: descr" 
		));

	definitions.add(
		new Function(
			"PlaceRandomItem",
			"item",
			{"itempool whichItemPool", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itempool whichItemPool: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"ChooseRandomCreep",
			"integer",
			{"integer level"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer level: descr" 
		));

	definitions.add(
		new Function(
			"ChooseRandomNPBuilding",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ChooseRandomItem",
			"integer",
			{"integer level"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer level: descr" 
		));

	definitions.add(
		new Function(
			"ChooseRandomItemEx",
			"integer",
			{"itemtype whichType", "integer level"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itemtype whichType: descr" "\n"
			"    integer level: descr" 
		));

	definitions.add(
		new Function(
			"SetRandomSeed",
			"nothing",
			{"integer seed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer seed: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainFog",
			"nothing",
			{"real a", "real b", "real c", "real d", "real e"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" "\n"
			"    real b: descr" "\n"
			"    real c: descr" "\n"
			"    real d: descr" "\n"
			"    real e: descr" 
		));

	definitions.add(
		new Function(
			"ResetTerrainFog",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetUnitFog",
			"nothing",
			{"real a", "real b", "real c", "real d", "real e"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" "\n"
			"    real b: descr" "\n"
			"    real c: descr" "\n"
			"    real d: descr" "\n"
			"    real e: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainFogEx",
			"nothing",
			{"integer style", "real zstart", "real zend", "real density", "real red", "real green", "real blue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer style: descr" "\n"
			"    real zstart: descr" "\n"
			"    real zend: descr" "\n"
			"    real density: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" 
		));

	definitions.add(
		new Function(
			"DisplayTextToPlayer",
			"nothing",
			{"player toPlayer", "real x", "real y", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player toPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"DisplayTimedTextToPlayer",
			"nothing",
			{"player toPlayer", "real x", "real y", "real duration", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player toPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"DisplayTimedTextFromPlayer",
			"nothing",
			{"player toPlayer", "real x", "real y", "real duration", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player toPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"ClearTextMessages",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDayNightModels",
			"nothing",
			{"string terrainDNCFile", "string unitDNCFile"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string terrainDNCFile: descr" "\n"
			"    string unitDNCFile: descr" 
		));

	definitions.add(
		new Function(
			"SetSkyModel",
			"nothing",
			{"string skyModelFile"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string skyModelFile: descr" 
		));

	definitions.add(
		new Function(
			"EnableUserControl",
			"nothing",
			{"boolean b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean b: descr" 
		));

	definitions.add(
		new Function(
			"EnableUserUI",
			"nothing",
			{"boolean b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean b: descr" 
		));

	definitions.add(
		new Function(
			"SuspendTimeOfDay",
			"nothing",
			{"boolean b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean b: descr" 
		));

	definitions.add(
		new Function(
			"SetTimeOfDayScale",
			"nothing",
			{"real r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real r: descr" 
		));

	definitions.add(
		new Function(
			"GetTimeOfDayScale",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ShowInterface",
			"nothing",
			{"boolean flag", "real fadeDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    real fadeDuration: descr" 
		));

	definitions.add(
		new Function(
			"PauseGame",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddIndicator",
			"nothing",
			{"unit whichUnit", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"AddIndicator",
			"nothing",
			{"widget whichWidget", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimap",
			"nothing",
			{"real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapEx",
			"nothing",
			{"real x", "real y", "real duration", "integer red", "integer green", "integer blue", "boolean extraEffects"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    boolean extraEffects: descr" 
		));

	definitions.add(
		new Function(
			"EnableOcclusion",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetIntroShotText",
			"nothing",
			{"string introText"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string introText: descr" 
		));

	definitions.add(
		new Function(
			"SetIntroShotModel",
			"nothing",
			{"string introModelPath"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string introModelPath: descr" 
		));

	definitions.add(
		new Function(
			"EnableWorldFogBoundary",
			"nothing",
			{"boolean b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean b: descr" 
		));

	definitions.add(
		new Function(
			"PlayModelCinematic",
			"nothing",
			{"string modelName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string modelName: descr" 
		));

	definitions.add(
		new Function(
			"PlayCinematic",
			"nothing",
			{"string movieName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string movieName: descr" 
		));

	definitions.add(
		new Function(
			"ForceUIKey",
			"nothing",
			{"string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"ForceUICancel",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DisplayLoadDialog",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetAltMinimapIcon",
			"nothing",
			{"string iconPath"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string iconPath: descr" 
		));

	definitions.add(
		new Function(
			"DisableRestartMission",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"CreateTextTag",
			"texttag",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyTextTag",
			"nothing",
			{"texttag t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagText",
			"nothing",
			{"texttag t", "string s", "real height"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    string s: descr" "\n"
			"    real height: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPos",
			"nothing",
			{"texttag t", "real x", "real y", "real heightOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real heightOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPosUnit",
			"nothing",
			{"texttag t", "unit whichUnit", "real heightOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real heightOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagColor",
			"nothing",
			{"texttag t", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagVelocity",
			"nothing",
			{"texttag t", "real xvel", "real yvel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    real xvel: descr" "\n"
			"    real yvel: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagVisibility",
			"nothing",
			{"texttag t", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagSuspended",
			"nothing",
			{"texttag t", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPermanent",
			"nothing",
			{"texttag t", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagAge",
			"nothing",
			{"texttag t", "real age"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    real age: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagLifespan",
			"nothing",
			{"texttag t", "real lifespan"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    real lifespan: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagFadepoint",
			"nothing",
			{"texttag t", "real fadepoint"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag t: descr" "\n"
			"    real fadepoint: descr" 
		));

	definitions.add(
		new Function(
			"SetReservedLocalHeroButtons",
			"nothing",
			{"integer reserved"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer reserved: descr" 
		));

	definitions.add(
		new Function(
			"GetAllyColorFilterState",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetAllyColorFilterState",
			"nothing",
			{"integer state"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer state: descr" 
		));

	definitions.add(
		new Function(
			"GetCreepCampFilterState",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCreepCampFilterState",
			"nothing",
			{"boolean state"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean state: descr" 
		));

	definitions.add(
		new Function(
			"EnableMinimapFilterButtons",
			"nothing",
			{"boolean enableAlly", "boolean enableCreep"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enableAlly: descr" "\n"
			"    boolean enableCreep: descr" 
		));

	definitions.add(
		new Function(
			"EnableDragSelect",
			"nothing",
			{"boolean state", "boolean ui"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean state: descr" "\n"
			"    boolean ui: descr" 
		));

	definitions.add(
		new Function(
			"EnablePreSelect",
			"nothing",
			{"boolean state", "boolean ui"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean state: descr" "\n"
			"    boolean ui: descr" 
		));

	definitions.add(
		new Function(
			"EnableSelect",
			"nothing",
			{"boolean state", "boolean ui"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean state: descr" "\n"
			"    boolean ui: descr" 
		));

	definitions.add(
		new Function(
			"CreateTrackable",
			"trackable",
			{"string trackableModelPath", "real x", "real y", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string trackableModelPath: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"CreateQuest",
			"quest",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyQuest",
			"nothing",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetTitle",
			"nothing",
			{"quest whichQuest", "string title"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    string title: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetDescription",
			"nothing",
			{"quest whichQuest", "string description"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    string description: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetIconPath",
			"nothing",
			{"quest whichQuest", "string iconPath"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    string iconPath: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetRequired",
			"nothing",
			{"quest whichQuest", "boolean required"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    boolean required: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetCompleted",
			"nothing",
			{"quest whichQuest", "boolean completed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    boolean completed: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetDiscovered",
			"nothing",
			{"quest whichQuest", "boolean discovered"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    boolean discovered: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetFailed",
			"nothing",
			{"quest whichQuest", "boolean failed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    boolean failed: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetEnabled",
			"nothing",
			{"quest whichQuest", "boolean enabled"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    boolean enabled: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestRequired",
			"boolean",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestCompleted",
			"boolean",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestDiscovered",
			"boolean",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestFailed",
			"boolean",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestEnabled",
			"boolean",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"QuestCreateItem",
			"questitem",
			{"quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"QuestItemSetDescription",
			"nothing",
			{"questitem whichQuestItem", "string description"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    questitem whichQuestItem: descr" "\n"
			"    string description: descr" 
		));

	definitions.add(
		new Function(
			"QuestItemSetCompleted",
			"nothing",
			{"questitem whichQuestItem", "boolean completed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    questitem whichQuestItem: descr" "\n"
			"    boolean completed: descr" 
		));

	definitions.add(
		new Function(
			"IsQuestItemCompleted",
			"boolean",
			{"questitem whichQuestItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    questitem whichQuestItem: descr" 
		));

	definitions.add(
		new Function(
			"CreateDefeatCondition",
			"defeatcondition",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyDefeatCondition",
			"nothing",
			{"defeatcondition whichCondition"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    defeatcondition whichCondition: descr" 
		));

	definitions.add(
		new Function(
			"DefeatConditionSetDescription",
			"nothing",
			{"defeatcondition whichCondition", "string description"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    defeatcondition whichCondition: descr" "\n"
			"    string description: descr" 
		));

	definitions.add(
		new Function(
			"FlashQuestDialogButton",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ForceQuestDialogUpdate",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateTimerDialog",
			"timerdialog",
			{"timer t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer t: descr" 
		));

	definitions.add(
		new Function(
			"DestroyTimerDialog",
			"nothing",
			{"timerdialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTitle",
			"nothing",
			{"timerdialog whichDialog", "string title"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    string title: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTitleColor",
			"nothing",
			{"timerdialog whichDialog", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTimeColor",
			"nothing",
			{"timerdialog whichDialog", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetSpeed",
			"nothing",
			{"timerdialog whichDialog", "real speedMultFactor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    real speedMultFactor: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogDisplay",
			"nothing",
			{"timerdialog whichDialog", "boolean display"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    boolean display: descr" 
		));

	definitions.add(
		new Function(
			"IsTimerDialogDisplayed",
			"boolean",
			{"timerdialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetRealTimeRemaining",
			"nothing",
			{"timerdialog whichDialog", "real timeRemaining"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichDialog: descr" "\n"
			"    real timeRemaining: descr" 
		));

	definitions.add(
		new Function(
			"CreateLeaderboard",
			"leaderboard",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyLeaderboard",
			"nothing",
			{"leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardDisplay",
			"nothing",
			{"leaderboard lb", "boolean show"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    boolean show: descr" 
		));

	definitions.add(
		new Function(
			"IsLeaderboardDisplayed",
			"boolean",
			{"leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardGetItemCount",
			"integer",
			{"leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetSizeByItemCount",
			"nothing",
			{"leaderboard lb", "integer count"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer count: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardAddItem",
			"nothing",
			{"leaderboard lb", "string label", "integer value", "player p"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    string label: descr" "\n"
			"    integer value: descr" "\n"
			"    player p: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardRemoveItem",
			"nothing",
			{"leaderboard lb", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardRemovePlayerItem",
			"nothing",
			{"leaderboard lb", "player p"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    player p: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardClear",
			"nothing",
			{"leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSortItemsByValue",
			"nothing",
			{"leaderboard lb", "boolean ascending"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    boolean ascending: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSortItemsByPlayer",
			"nothing",
			{"leaderboard lb", "boolean ascending"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    boolean ascending: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSortItemsByLabel",
			"nothing",
			{"leaderboard lb", "boolean ascending"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    boolean ascending: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardHasPlayerItem",
			"boolean",
			{"leaderboard lb", "player p"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    player p: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardGetPlayerIndex",
			"integer",
			{"leaderboard lb", "player p"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    player p: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetLabel",
			"nothing",
			{"leaderboard lb", "string label"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    string label: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardGetLabelText",
			"string",
			{"leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"PlayerSetLeaderboard",
			"nothing",
			{"player toPlayer", "leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player toPlayer: descr" "\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"PlayerGetLeaderboard",
			"leaderboard",
			{"player toPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player toPlayer: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetLabelColor",
			"nothing",
			{"leaderboard lb", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetValueColor",
			"nothing",
			{"leaderboard lb", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetStyle",
			"nothing",
			{"leaderboard lb", "boolean showLabel", "boolean showNames", "boolean showValues", "boolean showIcons"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    boolean showLabel: descr" "\n"
			"    boolean showNames: descr" "\n"
			"    boolean showValues: descr" "\n"
			"    boolean showIcons: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetItemValue",
			"nothing",
			{"leaderboard lb", "integer whichItem", "integer val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer whichItem: descr" "\n"
			"    integer val: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetItemLabel",
			"nothing",
			{"leaderboard lb", "integer whichItem", "string val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer whichItem: descr" "\n"
			"    string val: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetItemStyle",
			"nothing",
			{"leaderboard lb", "integer whichItem", "boolean showLabel", "boolean showValue", "boolean showIcon"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer whichItem: descr" "\n"
			"    boolean showLabel: descr" "\n"
			"    boolean showValue: descr" "\n"
			"    boolean showIcon: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetItemLabelColor",
			"nothing",
			{"leaderboard lb", "integer whichItem", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer whichItem: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetItemValueColor",
			"nothing",
			{"leaderboard lb", "integer whichItem", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer whichItem: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"CreateMultiboard",
			"multiboard",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DestroyMultiboard",
			"nothing",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardDisplay",
			"nothing",
			{"multiboard lb", "boolean show"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    boolean show: descr" 
		));

	definitions.add(
		new Function(
			"IsMultiboardDisplayed",
			"boolean",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardMinimize",
			"nothing",
			{"multiboard lb", "boolean minimize"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    boolean minimize: descr" 
		));

	definitions.add(
		new Function(
			"IsMultiboardMinimized",
			"boolean",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardClear",
			"nothing",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetTitleText",
			"nothing",
			{"multiboard lb", "string label"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    string label: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardGetTitleText",
			"string",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetTitleTextColor",
			"nothing",
			{"multiboard lb", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardGetRowCount",
			"integer",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardGetColumnCount",
			"integer",
			{"multiboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetColumnCount",
			"nothing",
			{"multiboard lb", "integer count"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    integer count: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetRowCount",
			"nothing",
			{"multiboard lb", "integer count"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    integer count: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemsStyle",
			"nothing",
			{"multiboard lb", "boolean showValues", "boolean showIcons"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    boolean showValues: descr" "\n"
			"    boolean showIcons: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemsValue",
			"nothing",
			{"multiboard lb", "string value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    string value: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemsValueColor",
			"nothing",
			{"multiboard lb", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemsWidth",
			"nothing",
			{"multiboard lb", "real width"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    real width: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemsIcon",
			"nothing",
			{"multiboard lb", "string iconPath"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    string iconPath: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardGetItem",
			"multiboarditem",
			{"multiboard lb", "integer row", "integer column"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard lb: descr" "\n"
			"    integer row: descr" "\n"
			"    integer column: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardReleaseItem",
			"nothing",
			{"multiboarditem mbi"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemStyle",
			"nothing",
			{"multiboarditem mbi", "boolean showValue", "boolean showIcon"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" "\n"
			"    boolean showValue: descr" "\n"
			"    boolean showIcon: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemValue",
			"nothing",
			{"multiboarditem mbi", "string val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" "\n"
			"    string val: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemValueColor",
			"nothing",
			{"multiboarditem mbi", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemWidth",
			"nothing",
			{"multiboarditem mbi", "real width"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" "\n"
			"    real width: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemIcon",
			"nothing",
			{"multiboarditem mbi", "string iconFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem mbi: descr" "\n"
			"    string iconFileName: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSuppressDisplay",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraPosition",
			"nothing",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraQuickPosition",
			"nothing",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraBounds",
			"nothing",
			{"real x1", "real y1", "real x2", "real y2", "real x3", "real y3", "real x4", "real y4"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x1: descr" "\n"
			"    real y1: descr" "\n"
			"    real x2: descr" "\n"
			"    real y2: descr" "\n"
			"    real x3: descr" "\n"
			"    real y3: descr" "\n"
			"    real x4: descr" "\n"
			"    real y4: descr" 
		));

	definitions.add(
		new Function(
			"StopCamera",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ResetToGameCamera",
			"nothing",
			{"real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraTo",
			"nothing",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToTimed",
			"nothing",
			{"real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToWithZ",
			"nothing",
			{"real x", "real y", "real zOffsetDest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real zOffsetDest: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToTimedWithZ",
			"nothing",
			{"real x", "real y", "real zOffsetDest", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real zOffsetDest: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetCinematicCamera",
			"nothing",
			{"string cameraModelFile"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string cameraModelFile: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraRotateMode",
			"nothing",
			{"real x", "real y", "real radiansToSweep", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radiansToSweep: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraField",
			"nothing",
			{"camerafield whichField", "real value", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerafield whichField: descr" "\n"
			"    real value: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"AdjustCameraField",
			"nothing",
			{"camerafield whichField", "real offset", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerafield whichField: descr" "\n"
			"    real offset: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraTargetController",
			"nothing",
			{"unit whichUnit", "real xoffset", "real yoffset", "boolean inheritOrientation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real xoffset: descr" "\n"
			"    real yoffset: descr" "\n"
			"    boolean inheritOrientation: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraOrientController",
			"nothing",
			{"unit whichUnit", "real xoffset", "real yoffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real xoffset: descr" "\n"
			"    real yoffset: descr" 
		));

	definitions.add(
		new Function(
			"CreateCameraSetup",
			"camerasetup",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CameraSetupSetField",
			"nothing",
			{"camerasetup whichSetup", "camerafield whichField", "real value", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    camerafield whichField: descr" "\n"
			"    real value: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupGetField",
			"real",
			{"camerasetup whichSetup", "camerafield whichField"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    camerafield whichField: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupSetDestPosition",
			"nothing",
			{"camerasetup whichSetup", "real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupGetDestPositionLoc",
			"location",
			{"camerasetup whichSetup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupGetDestPositionX",
			"real",
			{"camerasetup whichSetup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupGetDestPositionY",
			"real",
			{"camerasetup whichSetup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupApply",
			"nothing",
			{"camerasetup whichSetup", "boolean doPan", "boolean panTimed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    boolean doPan: descr" "\n"
			"    boolean panTimed: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupApplyWithZ",
			"nothing",
			{"camerasetup whichSetup", "real zDestOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    real zDestOffset: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupApplyForceDuration",
			"nothing",
			{"camerasetup whichSetup", "boolean doPan", "real forceDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    boolean doPan: descr" "\n"
			"    real forceDuration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupApplyForceDurationWithZ",
			"nothing",
			{"camerasetup whichSetup", "real zDestOffset", "real forceDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerasetup whichSetup: descr" "\n"
			"    real zDestOffset: descr" "\n"
			"    real forceDuration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetTargetNoise",
			"nothing",
			{"real mag", "real velocity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real mag: descr" "\n"
			"    real velocity: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetSourceNoise",
			"nothing",
			{"real mag", "real velocity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real mag: descr" "\n"
			"    real velocity: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetTargetNoiseEx",
			"nothing",
			{"real mag", "real velocity", "boolean vertOnly"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real mag: descr" "\n"
			"    real velocity: descr" "\n"
			"    boolean vertOnly: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetSourceNoiseEx",
			"nothing",
			{"real mag", "real velocity", "boolean vertOnly"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real mag: descr" "\n"
			"    real velocity: descr" "\n"
			"    boolean vertOnly: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetSmoothingFactor",
			"nothing",
			{"real factor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real factor: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterTexture",
			"nothing",
			{"string filename"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string filename: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterBlendMode",
			"nothing",
			{"blendmode whichMode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    blendmode whichMode: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterTexMapFlags",
			"nothing",
			{"texmapflags whichFlags"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texmapflags whichFlags: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterStartUV",
			"nothing",
			{"real minu", "real minv", "real maxu", "real maxv"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real minu: descr" "\n"
			"    real minv: descr" "\n"
			"    real maxu: descr" "\n"
			"    real maxv: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterEndUV",
			"nothing",
			{"real minu", "real minv", "real maxu", "real maxv"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real minu: descr" "\n"
			"    real minv: descr" "\n"
			"    real maxu: descr" "\n"
			"    real maxv: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterStartColor",
			"nothing",
			{"integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterEndColor",
			"nothing",
			{"integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"SetCineFilterDuration",
			"nothing",
			{"real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"DisplayCineFilter",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"IsCineFilterDisplayed",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCinematicScene",
			"nothing",
			{"integer portraitUnitId", "playercolor color", "string speakerTitle", "string text", "real sceneDuration", "real voiceoverDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer portraitUnitId: descr" "\n"
			"    playercolor color: descr" "\n"
			"    string speakerTitle: descr" "\n"
			"    string text: descr" "\n"
			"    real sceneDuration: descr" "\n"
			"    real voiceoverDuration: descr" 
		));

	definitions.add(
		new Function(
			"EndCinematicScene",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ForceCinematicSubtitles",
			"nothing",
			{"boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"GetCameraMargin",
			"real",
			{"integer whichMargin"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichMargin: descr" 
		));

	definitions.add(
		new Function(
			"GetCameraBoundMinX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraBoundMinY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraBoundMaxX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraBoundMaxY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraField",
			"real",
			{"camerafield whichField"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerafield whichField: descr" 
		));

	definitions.add(
		new Function(
			"GetCameraTargetPositionX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraTargetPositionY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraTargetPositionZ",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraTargetPositionLoc",
			"location",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraEyePositionX",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraEyePositionY",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraEyePositionZ",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraEyePositionLoc",
			"location",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"NewSoundEnvironment",
			"nothing",
			{"string environmentName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string environmentName: descr" 
		));

	definitions.add(
		new Function(
			"CreateSound",
			"sound",
			{"string fileName", "boolean looping", "boolean is3D", "boolean stopwhenoutofrange", "integer fadeInRate", "integer fadeOutRate", "string eaxSetting"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string fileName: descr" "\n"
			"    boolean looping: descr" "\n"
			"    boolean is3D: descr" "\n"
			"    boolean stopwhenoutofrange: descr" "\n"
			"    integer fadeInRate: descr" "\n"
			"    integer fadeOutRate: descr" "\n"
			"    string eaxSetting: descr" 
		));

	definitions.add(
		new Function(
			"CreateSoundFilenameWithLabel",
			"sound",
			{"string fileName", "boolean looping", "boolean is3D", "boolean stopwhenoutofrange", "integer fadeInRate", "integer fadeOutRate", "string SLKEntryName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string fileName: descr" "\n"
			"    boolean looping: descr" "\n"
			"    boolean is3D: descr" "\n"
			"    boolean stopwhenoutofrange: descr" "\n"
			"    integer fadeInRate: descr" "\n"
			"    integer fadeOutRate: descr" "\n"
			"    string SLKEntryName: descr" 
		));

	definitions.add(
		new Function(
			"CreateSoundFromLabel",
			"sound",
			{"string soundLabel", "boolean looping", "boolean is3D", "boolean stopwhenoutofrange", "integer fadeInRate", "integer fadeOutRate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string soundLabel: descr" "\n"
			"    boolean looping: descr" "\n"
			"    boolean is3D: descr" "\n"
			"    boolean stopwhenoutofrange: descr" "\n"
			"    integer fadeInRate: descr" "\n"
			"    integer fadeOutRate: descr" 
		));

	definitions.add(
		new Function(
			"CreateMIDISound",
			"sound",
			{"string soundLabel", "integer fadeInRate", "integer fadeOutRate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string soundLabel: descr" "\n"
			"    integer fadeInRate: descr" "\n"
			"    integer fadeOutRate: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundParamsFromLabel",
			"nothing",
			{"sound soundHandle", "string soundLabel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    string soundLabel: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundDistanceCutoff",
			"nothing",
			{"sound soundHandle", "real cutoff"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real cutoff: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundChannel",
			"nothing",
			{"sound soundHandle", "integer channel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer channel: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundVolume",
			"nothing",
			{"sound soundHandle", "integer volume"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer volume: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundPitch",
			"nothing",
			{"sound soundHandle", "real pitch"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real pitch: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundPlayPosition",
			"nothing",
			{"sound soundHandle", "integer millisecs"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer millisecs: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundDistances",
			"nothing",
			{"sound soundHandle", "real minDist", "real maxDist"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real minDist: descr" "\n"
			"    real maxDist: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundConeAngles",
			"nothing",
			{"sound soundHandle", "real inside", "real outside", "integer outsideVolume"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real inside: descr" "\n"
			"    real outside: descr" "\n"
			"    integer outsideVolume: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundConeOrientation",
			"nothing",
			{"sound soundHandle", "real x", "real y", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundPosition",
			"nothing",
			{"sound soundHandle", "real x", "real y", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundVelocity",
			"nothing",
			{"sound soundHandle", "real x", "real y", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"AttachSoundToUnit",
			"nothing",
			{"sound soundHandle", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"StartSound",
			"nothing",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"StopSound",
			"nothing",
			{"sound soundHandle", "boolean killWhenDone", "boolean fadeOut"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    boolean killWhenDone: descr" "\n"
			"    boolean fadeOut: descr" 
		));

	definitions.add(
		new Function(
			"KillSoundWhenDone",
			"nothing",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"SetMapMusic",
			"nothing",
			{"string musicName", "boolean random", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicName: descr" "\n"
			"    boolean random: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"ClearMapMusic",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PlayMusic",
			"nothing",
			{"string musicName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicName: descr" 
		));

	definitions.add(
		new Function(
			"PlayMusicEx",
			"nothing",
			{"string musicName", "integer frommsecs", "integer fadeinmsecs"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicName: descr" "\n"
			"    integer frommsecs: descr" "\n"
			"    integer fadeinmsecs: descr" 
		));

	definitions.add(
		new Function(
			"StopMusic",
			"nothing",
			{"boolean fadeOut"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean fadeOut: descr" 
		));

	definitions.add(
		new Function(
			"ResumeMusic",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PlayThematicMusic",
			"nothing",
			{"string musicFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicFileName: descr" 
		));

	definitions.add(
		new Function(
			"PlayThematicMusicEx",
			"nothing",
			{"string musicFileName", "integer frommsecs"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicFileName: descr" "\n"
			"    integer frommsecs: descr" 
		));

	definitions.add(
		new Function(
			"EndThematicMusic",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetMusicVolume",
			"nothing",
			{"integer volume"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer volume: descr" 
		));

	definitions.add(
		new Function(
			"SetMusicPlayPosition",
			"nothing",
			{"integer millisecs"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer millisecs: descr" 
		));

	definitions.add(
		new Function(
			"SetThematicMusicPlayPosition",
			"nothing",
			{"integer millisecs"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer millisecs: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundDuration",
			"nothing",
			{"sound soundHandle", "integer duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer duration: descr" 
		));

	definitions.add(
		new Function(
			"GetSoundDuration",
			"integer",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"GetSoundFileDuration",
			"integer",
			{"string musicFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicFileName: descr" 
		));

	definitions.add(
		new Function(
			"VolumeGroupSetVolume",
			"nothing",
			{"volumegroup vgroup", "real scale"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    volumegroup vgroup: descr" "\n"
			"    real scale: descr" 
		));

	definitions.add(
		new Function(
			"VolumeGroupReset",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSoundIsPlaying",
			"boolean",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"GetSoundIsLoading",
			"boolean",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"RegisterStackedSound",
			"nothing",
			{"sound soundHandle", "boolean byPosition", "real rectwidth", "real rectheight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    boolean byPosition: descr" "\n"
			"    real rectwidth: descr" "\n"
			"    real rectheight: descr" 
		));

	definitions.add(
		new Function(
			"UnregisterStackedSound",
			"nothing",
			{"sound soundHandle", "boolean byPosition", "real rectwidth", "real rectheight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    boolean byPosition: descr" "\n"
			"    real rectwidth: descr" "\n"
			"    real rectheight: descr" 
		));

	definitions.add(
		new Function(
			"AddWeatherEffect",
			"weathereffect",
			{"rect where", "integer effectID"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect where: descr" "\n"
			"    integer effectID: descr" 
		));

	definitions.add(
		new Function(
			"RemoveWeatherEffect",
			"nothing",
			{"weathereffect whichEffect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    weathereffect whichEffect: descr" 
		));

	definitions.add(
		new Function(
			"EnableWeatherEffect",
			"nothing",
			{"weathereffect whichEffect", "boolean enable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    weathereffect whichEffect: descr" "\n"
			"    boolean enable: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformCrater",
			"terraindeformation",
			{"real x", "real y", "real radius", "real depth", "integer duration", "boolean permanent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    real depth: descr" "\n"
			"    integer duration: descr" "\n"
			"    boolean permanent: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformRipple",
			"terraindeformation",
			{"real x", "real y", "real radius", "real depth", "integer duration", "integer count", "real spaceWaves", "real timeWaves", "real radiusStartPct", "boolean limitNeg"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    real depth: descr" "\n"
			"    integer duration: descr" "\n"
			"    integer count: descr" "\n"
			"    real spaceWaves: descr" "\n"
			"    real timeWaves: descr" "\n"
			"    real radiusStartPct: descr" "\n"
			"    boolean limitNeg: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformWave",
			"terraindeformation",
			{"real x", "real y", "real dirX", "real dirY", "real distance", "real speed", "real radius", "real depth", "integer trailTime", "integer count"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real dirX: descr" "\n"
			"    real dirY: descr" "\n"
			"    real distance: descr" "\n"
			"    real speed: descr" "\n"
			"    real radius: descr" "\n"
			"    real depth: descr" "\n"
			"    integer trailTime: descr" "\n"
			"    integer count: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformRandom",
			"terraindeformation",
			{"real x", "real y", "real radius", "real minDelta", "real maxDelta", "integer duration", "integer updateInterval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    real minDelta: descr" "\n"
			"    real maxDelta: descr" "\n"
			"    integer duration: descr" "\n"
			"    integer updateInterval: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformStop",
			"nothing",
			{"terraindeformation deformation", "integer duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    terraindeformation deformation: descr" "\n"
			"    integer duration: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformStopAll",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"AddSpecialEffect",
			"effect",
			{"string modelName", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string modelName: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectLoc",
			"effect",
			{"string modelName", "location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string modelName: descr" "\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectTarget",
			"effect",
			{"string modelName", "widget targetWidget", "string attachPointName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string modelName: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string attachPointName: descr" 
		));

	definitions.add(
		new Function(
			"DestroyEffect",
			"nothing",
			{"effect whichEffect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    effect whichEffect: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffect",
			"effect",
			{"string abilityString", "effecttype t", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityString: descr" "\n"
			"    effecttype t: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffectLoc",
			"effect",
			{"string abilityString", "effecttype t", "location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityString: descr" "\n"
			"    effecttype t: descr" "\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffectById",
			"effect",
			{"integer abilityId", "effecttype t", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    effecttype t: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffectByIdLoc",
			"effect",
			{"integer abilityId", "effecttype t", "location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    effecttype t: descr" "\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffectTarget",
			"effect",
			{"string modelName", "effecttype t", "widget targetWidget", "string attachPoint"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string modelName: descr" "\n"
			"    effecttype t: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string attachPoint: descr" 
		));

	definitions.add(
		new Function(
			"AddSpellEffectTargetById",
			"effect",
			{"integer abilityId", "effecttype t", "widget targetWidget", "string attachPoint"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    effecttype t: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string attachPoint: descr" 
		));

	definitions.add(
		new Function(
			"AddLightning",
			"lightning",
			{"string codeName", "boolean checkVisibility", "real x1", "real y1", "real x2", "real y2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string codeName: descr" "\n"
			"    boolean checkVisibility: descr" "\n"
			"    real x1: descr" "\n"
			"    real y1: descr" "\n"
			"    real x2: descr" "\n"
			"    real y2: descr" 
		));

	definitions.add(
		new Function(
			"AddLightningEx",
			"lightning",
			{"string codeName", "boolean checkVisibility", "real x1", "real y1", "real z1", "real x2", "real y2", "real z2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string codeName: descr" "\n"
			"    boolean checkVisibility: descr" "\n"
			"    real x1: descr" "\n"
			"    real y1: descr" "\n"
			"    real z1: descr" "\n"
			"    real x2: descr" "\n"
			"    real y2: descr" "\n"
			"    real z2: descr" 
		));

	definitions.add(
		new Function(
			"DestroyLightning",
			"boolean",
			{"lightning whichBolt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" 
		));

	definitions.add(
		new Function(
			"MoveLightning",
			"boolean",
			{"lightning whichBolt", "boolean checkVisibility", "real x1", "real y1", "real x2", "real y2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" "\n"
			"    boolean checkVisibility: descr" "\n"
			"    real x1: descr" "\n"
			"    real y1: descr" "\n"
			"    real x2: descr" "\n"
			"    real y2: descr" 
		));

	definitions.add(
		new Function(
			"MoveLightningEx",
			"boolean",
			{"lightning whichBolt", "boolean checkVisibility", "real x1", "real y1", "real z1", "real x2", "real y2", "real z2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" "\n"
			"    boolean checkVisibility: descr" "\n"
			"    real x1: descr" "\n"
			"    real y1: descr" "\n"
			"    real z1: descr" "\n"
			"    real x2: descr" "\n"
			"    real y2: descr" "\n"
			"    real z2: descr" 
		));

	definitions.add(
		new Function(
			"GetLightningColorA",
			"real",
			{"lightning whichBolt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" 
		));

	definitions.add(
		new Function(
			"GetLightningColorR",
			"real",
			{"lightning whichBolt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" 
		));

	definitions.add(
		new Function(
			"GetLightningColorG",
			"real",
			{"lightning whichBolt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" 
		));

	definitions.add(
		new Function(
			"GetLightningColorB",
			"real",
			{"lightning whichBolt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" 
		));

	definitions.add(
		new Function(
			"SetLightningColor",
			"boolean",
			{"lightning whichBolt", "real r", "real g", "real b", "real a"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" "\n"
			"    real r: descr" "\n"
			"    real g: descr" "\n"
			"    real b: descr" "\n"
			"    real a: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilityEffect",
			"string",
			{"string abilityString", "effecttype t", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityString: descr" "\n"
			"    effecttype t: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilityEffectById",
			"string",
			{"integer abilityId", "effecttype t", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    effecttype t: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilitySound",
			"string",
			{"string abilityString", "soundtype t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string abilityString: descr" "\n"
			"    soundtype t: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilitySoundById",
			"string",
			{"integer abilityId", "soundtype t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    soundtype t: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainCliffLevel",
			"integer",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetWaterBaseColor",
			"nothing",
			{"integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"SetWaterDeforms",
			"nothing",
			{"boolean val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean val: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainType",
			"integer",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainVariance",
			"integer",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainType",
			"nothing",
			{"real x", "real y", "integer terrainType", "integer variation", "integer area", "integer shape"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    integer terrainType: descr" "\n"
			"    integer variation: descr" "\n"
			"    integer area: descr" "\n"
			"    integer shape: descr" 
		));

	definitions.add(
		new Function(
			"IsTerrainPathable",
			"boolean",
			{"real x", "real y", "pathingtype t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    pathingtype t: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainPathable",
			"nothing",
			{"real x", "real y", "pathingtype t", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    pathingtype t: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"CreateImage",
			"image",
			{"string file", "real sizeX", "real sizeY", "real sizeZ", "real posX", "real posY", "real posZ", "real originX", "real originY", "real originZ", "integer imageType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string file: descr" "\n"
			"    real sizeX: descr" "\n"
			"    real sizeY: descr" "\n"
			"    real sizeZ: descr" "\n"
			"    real posX: descr" "\n"
			"    real posY: descr" "\n"
			"    real posZ: descr" "\n"
			"    real originX: descr" "\n"
			"    real originY: descr" "\n"
			"    real originZ: descr" "\n"
			"    integer imageType: descr" 
		));

	definitions.add(
		new Function(
			"DestroyImage",
			"nothing",
			{"image whichImage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" 
		));

	definitions.add(
		new Function(
			"ShowImage",
			"nothing",
			{"image whichImage", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetImageConstantHeight",
			"nothing",
			{"image whichImage", "boolean flag", "real height"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    boolean flag: descr" "\n"
			"    real height: descr" 
		));

	definitions.add(
		new Function(
			"SetImagePosition",
			"nothing",
			{"image whichImage", "real x", "real y", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"SetImageColor",
			"nothing",
			{"image whichImage", "integer red", "integer green", "integer blue", "integer alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" 
		));

	definitions.add(
		new Function(
			"SetImageRender",
			"nothing",
			{"image whichImage", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetImageRenderAlways",
			"nothing",
			{"image whichImage", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetImageAboveWater",
			"nothing",
			{"image whichImage", "boolean flag", "boolean useWaterAlpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    boolean flag: descr" "\n"
			"    boolean useWaterAlpha: descr" 
		));

	definitions.add(
		new Function(
			"SetImageType",
			"nothing",
			{"image whichImage", "integer imageType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    integer imageType: descr" 
		));

	definitions.add(
		new Function(
			"CreateUbersplat",
			"ubersplat",
			{"real x", "real y", "string name", "integer red", "integer green", "integer blue", "integer alpha", "boolean forcePaused", "boolean noBirthTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    string name: descr" "\n"
			"    integer red: descr" "\n"
			"    integer green: descr" "\n"
			"    integer blue: descr" "\n"
			"    integer alpha: descr" "\n"
			"    boolean forcePaused: descr" "\n"
			"    boolean noBirthTime: descr" 
		));

	definitions.add(
		new Function(
			"DestroyUbersplat",
			"nothing",
			{"ubersplat whichSplat"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" 
		));

	definitions.add(
		new Function(
			"ResetUbersplat",
			"nothing",
			{"ubersplat whichSplat"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" 
		));

	definitions.add(
		new Function(
			"FinishUbersplat",
			"nothing",
			{"ubersplat whichSplat"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" 
		));

	definitions.add(
		new Function(
			"ShowUbersplat",
			"nothing",
			{"ubersplat whichSplat", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetUbersplatRender",
			"nothing",
			{"ubersplat whichSplat", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetUbersplatRenderAlways",
			"nothing",
			{"ubersplat whichSplat", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichSplat: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetBlight",
			"nothing",
			{"player whichPlayer", "real x", "real y", "real radius", "boolean addBlight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean addBlight: descr" 
		));

	definitions.add(
		new Function(
			"SetBlightRect",
			"nothing",
			{"player whichPlayer", "rect r", "boolean addBlight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    rect r: descr" "\n"
			"    boolean addBlight: descr" 
		));

	definitions.add(
		new Function(
			"SetBlightPoint",
			"nothing",
			{"player whichPlayer", "real x", "real y", "boolean addBlight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    boolean addBlight: descr" 
		));

	definitions.add(
		new Function(
			"SetBlightLoc",
			"nothing",
			{"player whichPlayer", "location whichLocation", "real radius", "boolean addBlight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean addBlight: descr" 
		));

	definitions.add(
		new Function(
			"CreateBlightedGoldmine",
			"unit",
			{"player id", "real x", "real y", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player id: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"IsPointBlighted",
			"boolean",
			{"real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetDoodadAnimation",
			"nothing",
			{"real x", "real y", "real radius", "integer doodadID", "boolean nearestOnly", "string animName", "boolean animRandom"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real radius: descr" "\n"
			"    integer doodadID: descr" "\n"
			"    boolean nearestOnly: descr" "\n"
			"    string animName: descr" "\n"
			"    boolean animRandom: descr" 
		));

	definitions.add(
		new Function(
			"SetDoodadAnimationRect",
			"nothing",
			{"rect r", "integer doodadID", "string animName", "boolean animRandom"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    integer doodadID: descr" "\n"
			"    string animName: descr" "\n"
			"    boolean animRandom: descr" 
		));

	definitions.add(
		new Function(
			"StartMeleeAI",
			"nothing",
			{"player num", "string script"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" "\n"
			"    string script: descr" 
		));

	definitions.add(
		new Function(
			"StartCampaignAI",
			"nothing",
			{"player num", "string script"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" "\n"
			"    string script: descr" 
		));

	definitions.add(
		new Function(
			"CommandAI",
			"nothing",
			{"player num", "integer command", "integer data"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" "\n"
			"    integer command: descr" "\n"
			"    integer data: descr" 
		));

	definitions.add(
		new Function(
			"PauseCompAI",
			"nothing",
			{"player p", "boolean pause"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player p: descr" "\n"
			"    boolean pause: descr" 
		));

	definitions.add(
		new Function(
			"GetAIDifficulty",
			"aidifficulty",
			{"player num"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" 
		));

	definitions.add(
		new Function(
			"RemoveGuardPosition",
			"nothing",
			{"unit hUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit hUnit: descr" 
		));

	definitions.add(
		new Function(
			"RecycleGuardPosition",
			"nothing",
			{"unit hUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit hUnit: descr" 
		));

	definitions.add(
		new Function(
			"RemoveAllGuardPositions",
			"nothing",
			{"player num"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" 
		));

	definitions.add(
		new Function(
			"Cheat",
			"nothing",
			{"string cheatStr"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string cheatStr: descr" 
		));

	definitions.add(
		new Function(
			"IsNoVictoryCheat",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsNoDefeatCheat",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"Preload",
			"nothing",
			{"string filename"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string filename: descr" 
		));

	definitions.add(
		new Function(
			"PreloadEnd",
			"nothing",
			{"real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"PreloadStart",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PreloadRefresh",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PreloadEndEx",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PreloadGenClear",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PreloadGenStart",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PreloadGenEnd",
			"nothing",
			{"string filename"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string filename: descr" 
		));

	definitions.add(
		new Function(
			"Preloader",
			"nothing",
			{"string filename"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string filename: descr" 
		));
}