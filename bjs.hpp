#pragma once

#include "definition_db.hpp"
#include "function.hpp"

using namespace std;

void registerBJs(DefinitionDB& definitions) {
	definitions.add(
		new Function(
			"BJDebugMsg",
			"nothing",
			{"string msg"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string msg: descr" 
		));

	definitions.add(
		new Function(
			"RMinBJ",
			"real",
			{"real a", "real b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" "\n"
			"    real b: descr" 
		));

	definitions.add(
		new Function(
			"RMaxBJ",
			"real",
			{"real a", "real b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" "\n"
			"    real b: descr" 
		));

	definitions.add(
		new Function(
			"RAbsBJ",
			"real",
			{"real a"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" 
		));

	definitions.add(
		new Function(
			"RSignBJ",
			"real",
			{"real a"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real a: descr" 
		));

	definitions.add(
		new Function(
			"IMinBJ",
			"integer",
			{"integer a", "integer b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer a: descr" "\n"
			"    integer b: descr" 
		));

	definitions.add(
		new Function(
			"IMaxBJ",
			"integer",
			{"integer a", "integer b"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer a: descr" "\n"
			"    integer b: descr" 
		));

	definitions.add(
		new Function(
			"IAbsBJ",
			"integer",
			{"integer a"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer a: descr" 
		));

	definitions.add(
		new Function(
			"ISignBJ",
			"integer",
			{"integer a"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer a: descr" 
		));

	definitions.add(
		new Function(
			"SinBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"CosBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"TanBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"AsinBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"AcosBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"AtanBJ",
			"real",
			{"real degrees"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" 
		));

	definitions.add(
		new Function(
			"Atan2BJ",
			"real",
			{"real y", "real x"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real y: descr" "\n"
			"    real x: descr" 
		));

	definitions.add(
		new Function(
			"AngleBetweenPoints",
			"real",
			{"location locA", "location locB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location locA: descr" "\n"
			"    location locB: descr" 
		));

	definitions.add(
		new Function(
			"DistanceBetweenPoints",
			"real",
			{"location locA", "location locB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location locA: descr" "\n"
			"    location locB: descr" 
		));

	definitions.add(
		new Function(
			"PolarProjectionBJ",
			"location",
			{"location source", "real dist", "real angle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location source: descr" "\n"
			"    real dist: descr" "\n"
			"    real angle: descr" 
		));

	definitions.add(
		new Function(
			"GetRandomDirectionDeg",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRandomPercentageBJ",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRandomLocInRect",
			"location",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"ModuloInteger",
			"integer",
			{"integer dividend", "integer divisor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer dividend: descr" "\n"
			"    integer divisor: descr" 
		));

	definitions.add(
		new Function(
			"ModuloReal",
			"real",
			{"real dividend", "real divisor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real dividend: descr" "\n"
			"    real divisor: descr" 
		));

	definitions.add(
		new Function(
			"OffsetLocation",
			"location",
			{"location loc", "real dx", "real dy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location loc: descr" "\n"
			"    real dx: descr" "\n"
			"    real dy: descr" 
		));

	definitions.add(
		new Function(
			"OffsetRectBJ",
			"rect",
			{"rect r", "real dx", "real dy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    real dx: descr" "\n"
			"    real dy: descr" 
		));

	definitions.add(
		new Function(
			"RectFromCenterSizeBJ",
			"rect",
			{"location center", "real width", "real height"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location center: descr" "\n"
			"    real width: descr" "\n"
			"    real height: descr" 
		));

	definitions.add(
		new Function(
			"RectContainsCoords",
			"boolean",
			{"rect r", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"RectContainsLoc",
			"boolean",
			{"rect r", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"RectContainsUnit",
			"boolean",
			{"rect r", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"RectContainsItem",
			"boolean",
			{"item whichItem", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"ConditionalTriggerExecute",
			"nothing",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"TriggerExecuteBJ",
			"boolean",
			{"trigger trig", "boolean checkConditions"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    boolean checkConditions: descr" 
		));

	definitions.add(
		new Function(
			"PostTriggerExecuteBJ",
			"boolean",
			{"trigger trig", "boolean checkConditions"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    boolean checkConditions: descr" 
		));

	definitions.add(
		new Function(
			"QueuedTriggerCheck",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QueuedTriggerGetIndex",
			"integer",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"QueuedTriggerRemoveByIndex",
			"boolean",
			{"integer trigIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer trigIndex: descr" 
		));

	definitions.add(
		new Function(
			"QueuedTriggerAttemptExec",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QueuedTriggerAddBJ",
			"boolean",
			{"trigger trig", "boolean checkConditions"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    boolean checkConditions: descr" 
		));

	definitions.add(
		new Function(
			"QueuedTriggerRemoveBJ",
			"nothing",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"QueuedTriggerDoneBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QueuedTriggerClearBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QueuedTriggerClearInactiveBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QueuedTriggerCountBJ",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsTriggerQueueEmptyBJ",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsTriggerQueuedBJ",
			"boolean",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"GetForLoopIndexA",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetForLoopIndexA",
			"nothing",
			{"integer newIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer newIndex: descr" 
		));

	definitions.add(
		new Function(
			"GetForLoopIndexB",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetForLoopIndexB",
			"nothing",
			{"integer newIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer newIndex: descr" 
		));

	definitions.add(
		new Function(
			"PolledWait",
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
			"IntegerTertiaryOp",
			"integer",
			{"boolean flag", "integer valueA", "integer valueB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    integer valueA: descr" "\n"
			"    integer valueB: descr" 
		));

	definitions.add(
		new Function(
			"DoNothing",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CommentString",
			"nothing",
			{"string commentString"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string commentString: descr" 
		));

	definitions.add(
		new Function(
			"StringIdentity",
			"string",
			{"string theString"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string theString: descr" 
		));

	definitions.add(
		new Function(
			"GetBooleanAnd",
			"boolean",
			{"boolean valueA", "boolean valueB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean valueA: descr" "\n"
			"    boolean valueB: descr" 
		));

	definitions.add(
		new Function(
			"GetBooleanOr",
			"boolean",
			{"boolean valueA", "boolean valueB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean valueA: descr" "\n"
			"    boolean valueB: descr" 
		));

	definitions.add(
		new Function(
			"PercentToInt",
			"integer",
			{"real percentage", "integer max"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real percentage: descr" "\n"
			"    integer max: descr" 
		));

	definitions.add(
		new Function(
			"PercentTo255",
			"integer",
			{"real percentage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real percentage: descr" 
		));

	definitions.add(
		new Function(
			"GetTimeOfDay",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetTimeOfDay",
			"nothing",
			{"real whatTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real whatTime: descr" 
		));

	definitions.add(
		new Function(
			"SetTimeOfDayScalePercentBJ",
			"nothing",
			{"real scalePercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real scalePercent: descr" 
		));

	definitions.add(
		new Function(
			"GetTimeOfDayScalePercentBJ",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PlaySound",
			"nothing",
			{"string soundName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string soundName: descr" 
		));

	definitions.add(
		new Function(
			"CompareLocationsBJ",
			"boolean",
			{"location A", "location B"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location A: descr" "\n"
			"    location B: descr" 
		));

	definitions.add(
		new Function(
			"CompareRectsBJ",
			"boolean",
			{"rect A", "rect B"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect A: descr" "\n"
			"    rect B: descr" 
		));

	definitions.add(
		new Function(
			"GetRectFromCircleBJ",
			"rect",
			{"location center", "real radius"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location center: descr" "\n"
			"    real radius: descr" 
		));

	definitions.add(
		new Function(
			"GetCurrentCameraSetup",
			"camerasetup",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CameraSetupApplyForPlayer",
			"nothing",
			{"boolean doPan", "camerasetup whichSetup", "player whichPlayer", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean doPan: descr" "\n"
			"    camerasetup whichSetup: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetupGetFieldSwap",
			"real",
			{"camerafield whichField", "camerasetup whichSetup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    camerafield whichField: descr" "\n"
			"    camerasetup whichSetup: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraFieldForPlayer",
			"nothing",
			{"player whichPlayer", "camerafield whichField", "real value", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    camerafield whichField: descr" "\n"
			"    real value: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraTargetControllerNoZForPlayer",
			"nothing",
			{"player whichPlayer", "unit whichUnit", "real xoffset", "real yoffset", "boolean inheritOrientation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real xoffset: descr" "\n"
			"    real yoffset: descr" "\n"
			"    boolean inheritOrientation: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraPositionForPlayer",
			"nothing",
			{"player whichPlayer", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraPositionLocForPlayer",
			"nothing",
			{"player whichPlayer", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"RotateCameraAroundLocBJ",
			"nothing",
			{"real degrees", "location loc", "player whichPlayer", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real degrees: descr" "\n"
			"    location loc: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToForPlayer",
			"nothing",
			{"player whichPlayer", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToLocForPlayer",
			"nothing",
			{"player whichPlayer", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToTimedForPlayer",
			"nothing",
			{"player whichPlayer", "real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToTimedLocForPlayer",
			"nothing",
			{"player whichPlayer", "location loc", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PanCameraToTimedLocWithZForPlayer",
			"nothing",
			{"player whichPlayer", "location loc", "real zOffset", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real zOffset: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SmartCameraPanBJ",
			"nothing",
			{"player whichPlayer", "location loc", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetCinematicCameraForPlayer",
			"nothing",
			{"player whichPlayer", "string cameraModelFile"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string cameraModelFile: descr" 
		));

	definitions.add(
		new Function(
			"ResetToGameCameraForPlayer",
			"nothing",
			{"player whichPlayer", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetSourceNoiseForPlayer",
			"nothing",
			{"player whichPlayer", "real magnitude", "real velocity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real magnitude: descr" "\n"
			"    real velocity: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetTargetNoiseForPlayer",
			"nothing",
			{"player whichPlayer", "real magnitude", "real velocity"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real magnitude: descr" "\n"
			"    real velocity: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetEQNoiseForPlayer",
			"nothing",
			{"player whichPlayer", "real magnitude"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real magnitude: descr" 
		));

	definitions.add(
		new Function(
			"CameraClearNoiseForPlayer",
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
			"GetCurrentCameraBoundsMapRectBJ",
			"rect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetCameraBoundsMapRect",
			"rect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetPlayableMapRect",
			"rect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetEntireMapRect",
			"rect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCameraBoundsToRect",
			"nothing",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraBoundsToRectForPlayerBJ",
			"nothing",
			{"player whichPlayer", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"AdjustCameraBoundsBJ",
			"nothing",
			{"integer adjustMethod", "real dxWest", "real dxEast", "real dyNorth", "real dySouth"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer adjustMethod: descr" "\n"
			"    real dxWest: descr" "\n"
			"    real dxEast: descr" "\n"
			"    real dyNorth: descr" "\n"
			"    real dySouth: descr" 
		));

	definitions.add(
		new Function(
			"AdjustCameraBoundsForPlayerBJ",
			"nothing",
			{"integer adjustMethod", "player whichPlayer", "real dxWest", "real dxEast", "real dyNorth", "real dySouth"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer adjustMethod: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    real dxWest: descr" "\n"
			"    real dxEast: descr" "\n"
			"    real dyNorth: descr" "\n"
			"    real dySouth: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraQuickPositionForPlayer",
			"nothing",
			{"player whichPlayer", "real x", "real y"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraQuickPositionLocForPlayer",
			"nothing",
			{"player whichPlayer", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"SetCameraQuickPositionLoc",
			"nothing",
			{"location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"StopCameraForPlayerBJ",
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
			"SetCameraOrientControllerForPlayerBJ",
			"nothing",
			{"player whichPlayer", "unit whichUnit", "real xoffset", "real yoffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real xoffset: descr" "\n"
			"    real yoffset: descr" 
		));

	definitions.add(
		new Function(
			"CameraSetSmoothingFactorBJ",
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
			"CameraResetSmoothingFactorBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DisplayTextToForce",
			"nothing",
			{"force toForce", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"DisplayTimedTextToForce",
			"nothing",
			{"force toForce", "real duration", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" "\n"
			"    real duration: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"ClearTextMessagesBJ",
			"nothing",
			{"force toForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" 
		));

	definitions.add(
		new Function(
			"SubStringBJ",
			"string",
			{"string source", "integer start", "integer end"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string source: descr" "\n"
			"    integer start: descr" "\n"
			"    integer end: descr" 
		));

	definitions.add(
		new Function(
			"GetHandleIdBJ",
			"integer",
			{"handle h"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    handle h: descr" 
		));

	definitions.add(
		new Function(
			"StringHashBJ",
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
			"TriggerRegisterTimerEventPeriodic",
			"event",
			{"trigger trig", "real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterTimerEventSingle",
			"event",
			{"trigger trig", "real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterTimerExpireEventBJ",
			"event",
			{"trigger trig", "timer t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    timer t: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerUnitEventSimple",
			"event",
			{"trigger trig", "player whichPlayer", "playerunitevent whichEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    playerunitevent whichEvent: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterAnyUnitEventBJ",
			"nothing",
			{"trigger trig", "playerunitevent whichEvent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    playerunitevent whichEvent: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerSelectionEventBJ",
			"event",
			{"trigger trig", "player whichPlayer", "boolean selected"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    boolean selected: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerKeyEventBJ",
			"event",
			{"trigger trig", "player whichPlayer", "integer keType", "integer keKey"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    integer keType: descr" "\n"
			"    integer keKey: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEventVictory",
			"event",
			{"trigger trig", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEventDefeat",
			"event",
			{"trigger trig", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEventLeave",
			"event",
			{"trigger trig", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEventAllianceChanged",
			"event",
			{"trigger trig", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterPlayerEventEndCinematic",
			"event",
			{"trigger trig", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterGameStateEventTimeOfDay",
			"event",
			{"trigger trig", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterEnterRegionSimple",
			"event",
			{"trigger trig", "region whichRegion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    region whichRegion: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterLeaveRegionSimple",
			"event",
			{"trigger trig", "region whichRegion"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    region whichRegion: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterEnterRectSimple",
			"event",
			{"trigger trig", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterLeaveRectSimple",
			"event",
			{"trigger trig", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterDistanceBetweenUnits",
			"event",
			{"trigger trig", "unit whichUnit", "boolexpr condition", "real range"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    boolexpr condition: descr" "\n"
			"    real range: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitInRangeSimple",
			"event",
			{"trigger trig", "real range", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    real range: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitLifeEvent",
			"event",
			{"trigger trig", "unit whichUnit", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterUnitManaEvent",
			"event",
			{"trigger trig", "unit whichUnit", "limitop opcode", "real limitval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    limitop opcode: descr" "\n"
			"    real limitval: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterDialogEventBJ",
			"event",
			{"trigger trig", "dialog whichDialog"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    dialog whichDialog: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterShowSkillEventBJ",
			"event",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterBuildSubmenuEventBJ",
			"event",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterGameLoadedEventBJ",
			"event",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"TriggerRegisterGameSavedEventBJ",
			"event",
			{"trigger trig"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" 
		));

	definitions.add(
		new Function(
			"RegisterDestDeathInRegionEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TriggerRegisterDestDeathInRegionEvent",
			"nothing",
			{"trigger trig", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger trig: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"AddWeatherEffectSaveLast",
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
			"GetLastCreatedWeatherEffect",
			"weathereffect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RemoveWeatherEffectBJ",
			"nothing",
			{"weathereffect whichWeatherEffect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    weathereffect whichWeatherEffect: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformationCraterBJ",
			"terraindeformation",
			{"real duration", "boolean permanent", "location where", "real radius", "real depth"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    boolean permanent: descr" "\n"
			"    location where: descr" "\n"
			"    real radius: descr" "\n"
			"    real depth: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformationRippleBJ",
			"terraindeformation",
			{"real duration", "boolean limitNeg", "location where", "real startRadius", "real endRadius", "real depth", "real wavePeriod", "real waveWidth"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    boolean limitNeg: descr" "\n"
			"    location where: descr" "\n"
			"    real startRadius: descr" "\n"
			"    real endRadius: descr" "\n"
			"    real depth: descr" "\n"
			"    real wavePeriod: descr" "\n"
			"    real waveWidth: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformationWaveBJ",
			"terraindeformation",
			{"real duration", "location source", "location target", "real radius", "real depth", "real trailDelay"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    location source: descr" "\n"
			"    location target: descr" "\n"
			"    real radius: descr" "\n"
			"    real depth: descr" "\n"
			"    real trailDelay: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformationRandomBJ",
			"terraindeformation",
			{"real duration", "location where", "real radius", "real minDelta", "real maxDelta", "real updateInterval"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    location where: descr" "\n"
			"    real radius: descr" "\n"
			"    real minDelta: descr" "\n"
			"    real maxDelta: descr" "\n"
			"    real updateInterval: descr" 
		));

	definitions.add(
		new Function(
			"TerrainDeformationStopBJ",
			"nothing",
			{"terraindeformation deformation", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    terraindeformation deformation: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedTerrainDeformation",
			"terraindeformation",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"AddLightningLoc",
			"lightning",
			{"string codeName", "location where1", "location where2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string codeName: descr" "\n"
			"    location where1: descr" "\n"
			"    location where2: descr" 
		));

	definitions.add(
		new Function(
			"DestroyLightningBJ",
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
			"MoveLightningLoc",
			"boolean",
			{"lightning whichBolt", "location where1", "location where2"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichBolt: descr" "\n"
			"    location where1: descr" "\n"
			"    location where2: descr" 
		));

	definitions.add(
		new Function(
			"GetLightningColorABJ",
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
			"GetLightningColorRBJ",
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
			"GetLightningColorGBJ",
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
			"GetLightningColorBBJ",
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
			"SetLightningColorBJ",
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
			"GetLastCreatedLightningBJ",
			"lightning",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetAbilityEffectBJ",
			"string",
			{"integer abilcode", "effecttype t", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    effecttype t: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilitySoundBJ",
			"string",
			{"integer abilcode", "soundtype t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    soundtype t: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainCliffLevelBJ",
			"integer",
			{"location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainTypeBJ",
			"integer",
			{"location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"GetTerrainVarianceBJ",
			"integer",
			{"location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainTypeBJ",
			"nothing",
			{"location where", "integer terrainType", "integer variation", "integer area", "integer shape"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" "\n"
			"    integer terrainType: descr" "\n"
			"    integer variation: descr" "\n"
			"    integer area: descr" "\n"
			"    integer shape: descr" 
		));

	definitions.add(
		new Function(
			"IsTerrainPathableBJ",
			"boolean",
			{"location where", "pathingtype t"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" "\n"
			"    pathingtype t: descr" 
		));

	definitions.add(
		new Function(
			"SetTerrainPathableBJ",
			"nothing",
			{"location where", "pathingtype t", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" "\n"
			"    pathingtype t: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetWaterBaseColorBJ",
			"nothing",
			{"real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRectSimple",
			"fogmodifier",
			{"player whichPlayer", "fogstate whichFogState", "rect r", "boolean afterUnits"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    fogstate whichFogState: descr" "\n"
			"    rect r: descr" "\n"
			"    boolean afterUnits: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRadiusLocSimple",
			"fogmodifier",
			{"player whichPlayer", "fogstate whichFogState", "location center", "real radius", "boolean afterUnits"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    fogstate whichFogState: descr" "\n"
			"    location center: descr" "\n"
			"    real radius: descr" "\n"
			"    boolean afterUnits: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRectBJ",
			"fogmodifier",
			{"boolean enabled", "player whichPlayer", "fogstate whichFogState", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enabled: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    fogstate whichFogState: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"CreateFogModifierRadiusLocBJ",
			"fogmodifier",
			{"boolean enabled", "player whichPlayer", "fogstate whichFogState", "location center", "real radius"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enabled: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    fogstate whichFogState: descr" "\n"
			"    location center: descr" "\n"
			"    real radius: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedFogModifier",
			"fogmodifier",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FogEnableOn",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FogEnableOff",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FogMaskEnableOn",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FogMaskEnableOff",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"UseTimeOfDayBJ",
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
			"SetTerrainFogExBJ",
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
			"ResetTerrainFogBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDoodadAnimationBJ",
			"nothing",
			{"string animName", "integer doodadID", "real radius", "location center"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string animName: descr" "\n"
			"    integer doodadID: descr" "\n"
			"    real radius: descr" "\n"
			"    location center: descr" 
		));

	definitions.add(
		new Function(
			"SetDoodadAnimationRectBJ",
			"nothing",
			{"string animName", "integer doodadID", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string animName: descr" "\n"
			"    integer doodadID: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"AddUnitAnimationPropertiesBJ",
			"nothing",
			{"boolean add", "string animProperties", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean add: descr" "\n"
			"    string animProperties: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"CreateImageBJ",
			"image",
			{"string file", "real size", "location where", "real zOffset", "integer imageType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string file: descr" "\n"
			"    real size: descr" "\n"
			"    location where: descr" "\n"
			"    real zOffset: descr" "\n"
			"    integer imageType: descr" 
		));

	definitions.add(
		new Function(
			"ShowImageBJ",
			"nothing",
			{"boolean flag", "image whichImage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    image whichImage: descr" 
		));

	definitions.add(
		new Function(
			"SetImagePositionBJ",
			"nothing",
			{"image whichImage", "location where", "real zOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    location where: descr" "\n"
			"    real zOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetImageColorBJ",
			"nothing",
			{"image whichImage", "real red", "real green", "real blue", "real alpha"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real alpha: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedImage",
			"image",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateUbersplatBJ",
			"ubersplat",
			{"location where", "string name", "real red", "real green", "real blue", "real alpha", "boolean forcePaused", "boolean noBirthTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" "\n"
			"    string name: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real alpha: descr" "\n"
			"    boolean forcePaused: descr" "\n"
			"    boolean noBirthTime: descr" 
		));

	definitions.add(
		new Function(
			"ShowUbersplatBJ",
			"nothing",
			{"boolean flag", "ubersplat whichSplat"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    ubersplat whichSplat: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedUbersplat",
			"ubersplat",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PlaySoundBJ",
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
			"StopSoundBJ",
			"nothing",
			{"sound soundHandle", "boolean fadeOut"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    boolean fadeOut: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundVolumeBJ",
			"nothing",
			{"sound soundHandle", "real volumePercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real volumePercent: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundOffsetBJ",
			"nothing",
			{"real newOffset", "sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real newOffset: descr" "\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"SetSoundDistanceCutoffBJ",
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
			"SetSoundPitchBJ",
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
			"SetSoundPositionLocBJ",
			"nothing",
			{"sound soundHandle", "location loc", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    location loc: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"AttachSoundToUnitBJ",
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
			"SetSoundConeAnglesBJ",
			"nothing",
			{"sound soundHandle", "real inside", "real outside", "real outsideVolumePercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real inside: descr" "\n"
			"    real outside: descr" "\n"
			"    real outsideVolumePercent: descr" 
		));

	definitions.add(
		new Function(
			"KillSoundWhenDoneBJ",
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
			"PlaySoundAtPointBJ",
			"nothing",
			{"sound soundHandle", "real volumePercent", "location loc", "real z"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real volumePercent: descr" "\n"
			"    location loc: descr" "\n"
			"    real z: descr" 
		));

	definitions.add(
		new Function(
			"PlaySoundOnUnitBJ",
			"nothing",
			{"sound soundHandle", "real volumePercent", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real volumePercent: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"PlaySoundFromOffsetBJ",
			"nothing",
			{"sound soundHandle", "real volumePercent", "real startingOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real volumePercent: descr" "\n"
			"    real startingOffset: descr" 
		));

	definitions.add(
		new Function(
			"PlayMusicBJ",
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
			"PlayMusicExBJ",
			"nothing",
			{"string musicFileName", "real startingOffset", "real fadeInTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicFileName: descr" "\n"
			"    real startingOffset: descr" "\n"
			"    real fadeInTime: descr" 
		));

	definitions.add(
		new Function(
			"SetMusicOffsetBJ",
			"nothing",
			{"real newOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real newOffset: descr" 
		));

	definitions.add(
		new Function(
			"PlayThematicMusicBJ",
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
			"PlayThematicMusicExBJ",
			"nothing",
			{"string musicName", "real startingOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicName: descr" "\n"
			"    real startingOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetThematicMusicOffsetBJ",
			"nothing",
			{"real newOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real newOffset: descr" 
		));

	definitions.add(
		new Function(
			"EndThematicMusicBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"StopMusicBJ",
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
			"ResumeMusicBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetMusicVolumeBJ",
			"nothing",
			{"real volumePercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real volumePercent: descr" 
		));

	definitions.add(
		new Function(
			"GetSoundDurationBJ",
			"real",
			{"sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"GetSoundFileDurationBJ",
			"real",
			{"string musicFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicFileName: descr" 
		));

	definitions.add(
		new Function(
			"GetLastPlayedSound",
			"sound",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLastPlayedMusic",
			"string",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"VolumeGroupSetVolumeBJ",
			"nothing",
			{"volumegroup vgroup", "real percent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    volumegroup vgroup: descr" "\n"
			"    real percent: descr" 
		));

	definitions.add(
		new Function(
			"SetCineModeVolumeGroupsImmediateBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCineModeVolumeGroupsBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetSpeechVolumeGroupsImmediateBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetSpeechVolumeGroupsBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"VolumeGroupResetImmediateBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"VolumeGroupResetBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetSoundIsPlayingBJ",
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
			"WaitForSoundBJ",
			"nothing",
			{"sound soundHandle", "real offset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    real offset: descr" 
		));

	definitions.add(
		new Function(
			"SetMapMusicIndexedBJ",
			"nothing",
			{"string musicName", "integer index"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string musicName: descr" "\n"
			"    integer index: descr" 
		));

	definitions.add(
		new Function(
			"SetMapMusicRandomBJ",
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
			"ClearMapMusicBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetStackedSoundBJ",
			"nothing",
			{"boolean add", "sound soundHandle", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean add: descr" "\n"
			"    sound soundHandle: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"StartSoundForPlayerBJ",
			"nothing",
			{"player whichPlayer", "sound soundHandle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    sound soundHandle: descr" 
		));

	definitions.add(
		new Function(
			"VolumeGroupSetVolumeForPlayerBJ",
			"nothing",
			{"player whichPlayer", "volumegroup vgroup", "real scale"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    volumegroup vgroup: descr" "\n"
			"    real scale: descr" 
		));

	definitions.add(
		new Function(
			"EnableDawnDusk",
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
			"IsDawnDuskEnabled",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetAmbientDaySound",
			"nothing",
			{"string inLabel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string inLabel: descr" 
		));

	definitions.add(
		new Function(
			"SetAmbientNightSound",
			"nothing",
			{"string inLabel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string inLabel: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectLocBJ",
			"effect",
			{"location where", "string modelName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" "\n"
			"    string modelName: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectTargetUnitBJ",
			"effect",
			{"string attachPointName", "widget targetWidget", "string modelName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string attachPointName: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string modelName: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectTargetDestructableBJ",
			"effect",
			{"string attachPointName", "widget targetWidget", "string modelName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string attachPointName: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string modelName: descr" 
		));

	definitions.add(
		new Function(
			"AddSpecialEffectTargetItemBJ",
			"effect",
			{"string attachPointName", "widget targetWidget", "string modelName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string attachPointName: descr" "\n"
			"    widget targetWidget: descr" "\n"
			"    string modelName: descr" 
		));

	definitions.add(
		new Function(
			"DestroyEffectBJ",
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
			"GetLastCreatedEffectBJ",
			"effect",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetItemLoc",
			"location",
			{"item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"GetItemLifeBJ",
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
			"SetItemLifeBJ",
			"nothing",
			{"widget whichWidget", "real life"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" "\n"
			"    real life: descr" 
		));

	definitions.add(
		new Function(
			"AddHeroXPSwapped",
			"nothing",
			{"integer xpToAdd", "unit whichHero", "boolean showEyeCandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer xpToAdd: descr" "\n"
			"    unit whichHero: descr" "\n"
			"    boolean showEyeCandy: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroLevelBJ",
			"nothing",
			{"unit whichHero", "integer newLevel", "boolean showEyeCandy"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer newLevel: descr" "\n"
			"    boolean showEyeCandy: descr" 
		));

	definitions.add(
		new Function(
			"DecUnitAbilityLevelSwapped",
			"integer",
			{"integer abilcode", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IncUnitAbilityLevelSwapped",
			"integer",
			{"integer abilcode", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitAbilityLevelSwapped",
			"integer",
			{"integer abilcode", "unit whichUnit", "integer level"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    integer level: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitAbilityLevelSwapped",
			"integer",
			{"integer abilcode", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitHasBuffBJ",
			"boolean",
			{"unit whichUnit", "integer buffcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer buffcode: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveBuffBJ",
			"boolean",
			{"integer buffcode", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer buffcode: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddItemSwapped",
			"boolean",
			{"item whichItem", "unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddItemByIdSwapped",
			"item",
			{"integer itemId", "unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveItemSwapped",
			"nothing",
			{"item whichItem", "unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveItemFromSlotSwapped",
			"item",
			{"integer itemSlot", "unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemSlot: descr" "\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"CreateItemLoc",
			"item",
			{"integer itemId", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLastRemovedItem",
			"item",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetItemPositionLoc",
			"nothing",
			{"item whichItem", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"GetLearnedSkillBJ",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SuspendHeroXPBJ",
			"nothing",
			{"boolean flag", "unit whichHero"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    unit whichHero: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerHandicapXPBJ",
			"nothing",
			{"player whichPlayer", "real handicapPercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real handicapPercent: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerHandicapXPBJ",
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
			"SetPlayerHandicapBJ",
			"nothing",
			{"player whichPlayer", "real handicapPercent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real handicapPercent: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerHandicapBJ",
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
			"GetHeroStatBJ",
			"integer",
			{"integer whichStat", "unit whichHero", "boolean includeBonuses"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStat: descr" "\n"
			"    unit whichHero: descr" "\n"
			"    boolean includeBonuses: descr" 
		));

	definitions.add(
		new Function(
			"SetHeroStat",
			"nothing",
			{"unit whichHero", "integer whichStat", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer whichStat: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"ModifyHeroStat",
			"nothing",
			{"integer whichStat", "unit whichHero", "integer modifyMethod", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer whichStat: descr" "\n"
			"    unit whichHero: descr" "\n"
			"    integer modifyMethod: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"ModifyHeroSkillPoints",
			"boolean",
			{"unit whichHero", "integer modifyMethod", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichHero: descr" "\n"
			"    integer modifyMethod: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"UnitDropItemPointBJ",
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
			"UnitDropItemPointLoc",
			"boolean",
			{"unit whichUnit", "item whichItem", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"UnitDropItemSlotBJ",
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
			"UnitDropItemTargetBJ",
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
			"UnitUseItemDestructable",
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
			"UnitUseItemPointLoc",
			"boolean",
			{"unit whichUnit", "item whichItem", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    item whichItem: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"UnitItemInSlotBJ",
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
			"GetInventoryIndexOfItemTypeBJ",
			"integer",
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
			"GetItemOfTypeFromUnitBJ",
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
			"UnitHasItemOfTypeBJ",
			"boolean",
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
			"UnitInventoryCount",
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
			"UnitInventorySizeBJ",
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
			"SetItemInvulnerableBJ",
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
			"SetItemDropOnDeathBJ",
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
			"SetItemDroppableBJ",
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
			"SetItemPlayerBJ",
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
			"SetItemVisibleBJ",
			"nothing",
			{"boolean show", "item whichItem"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    item whichItem: descr" 
		));

	definitions.add(
		new Function(
			"IsItemHiddenBJ",
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
			"ChooseRandomItemBJ",
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
			"ChooseRandomItemExBJ",
			"integer",
			{"integer level", "itemtype whichType"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer level: descr" "\n"
			"    itemtype whichType: descr" 
		));

	definitions.add(
		new Function(
			"ChooseRandomNPBuildingBJ",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ChooseRandomCreepBJ",
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
			"EnumItemsInRectBJ",
			"nothing",
			{"rect r", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"RandomItemInRectBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RandomItemInRectBJ",
			"item",
			{"rect r", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"RandomItemInRectSimpleBJ",
			"item",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"CheckItemStatus",
			"boolean",
			{"item whichItem", "integer status"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    integer status: descr" 
		));

	definitions.add(
		new Function(
			"CheckItemcodeStatus",
			"boolean",
			{"integer itemId", "integer status"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    integer status: descr" 
		));

	definitions.add(
		new Function(
			"UnitId2OrderIdBJ",
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
			"String2UnitIdBJ",
			"integer",
			{"string unitIdString"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string unitIdString: descr" 
		));

	definitions.add(
		new Function(
			"UnitId2StringBJ",
			"string",
			{"integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"String2OrderIdBJ",
			"integer",
			{"string orderIdString"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string orderIdString: descr" 
		));

	definitions.add(
		new Function(
			"OrderId2StringBJ",
			"string",
			{"integer orderId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer orderId: descr" 
		));

	definitions.add(
		new Function(
			"GetIssuedOrderIdBJ",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetKillingUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateUnitAtLocSaveLast",
			"unit",
			{"player id", "integer unitid", "location loc", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player id: descr" "\n"
			"    integer unitid: descr" "\n"
			"    location loc: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedUnit",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateNUnitsAtLoc",
			"group",
			{"integer count", "integer unitId", "player whichPlayer", "location loc", "real face"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer count: descr" "\n"
			"    integer unitId: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real face: descr" 
		));

	definitions.add(
		new Function(
			"CreateNUnitsAtLocFacingLocBJ",
			"group",
			{"integer count", "integer unitId", "player whichPlayer", "location loc", "location lookAt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer count: descr" "\n"
			"    integer unitId: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    location lookAt: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedGroupEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLastCreatedGroup",
			"group",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateCorpseLocBJ",
			"unit",
			{"integer unitid", "player whichPlayer", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitid: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"UnitSuspendDecayBJ",
			"nothing",
			{"boolean suspend", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean suspend: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"DelayedSuspendDecayStopAnimEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DelayedSuspendDecayBoneEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DelayedSuspendDecayFleshEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DelayedSuspendDecay",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DelayedSuspendDecayCreate",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreatePermanentCorpseLocBJ",
			"unit",
			{"integer style", "integer unitid", "player whichPlayer", "location loc", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer style: descr" "\n"
			"    integer unitid: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitStateSwap",
			"real",
			{"unitstate whichState", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitstate whichState: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitStatePercent",
			"real",
			{"unit whichUnit", "unitstate whichState", "unitstate whichMaxState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unitstate whichState: descr" "\n"
			"    unitstate whichMaxState: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitLifePercent",
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
			"GetUnitManaPercent",
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
			"SelectUnitSingle",
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
			"SelectGroupBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SelectGroupBJ",
			"nothing",
			{"group g"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" 
		));

	definitions.add(
		new Function(
			"SelectUnitAdd",
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
			"SelectUnitRemove",
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
			"ClearSelectionForPlayer",
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
			"SelectUnitForPlayerSingle",
			"nothing",
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
			"SelectGroupForPlayerBJ",
			"nothing",
			{"group g", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SelectUnitAddForPlayer",
			"nothing",
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
			"SelectUnitRemoveForPlayer",
			"nothing",
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
			"SetUnitLifeBJ",
			"nothing",
			{"unit whichUnit", "real newValue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newValue: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitManaBJ",
			"nothing",
			{"unit whichUnit", "real newValue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real newValue: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitLifePercentBJ",
			"nothing",
			{"unit whichUnit", "real percent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real percent: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitManaPercentBJ",
			"nothing",
			{"unit whichUnit", "real percent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real percent: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitDeadBJ",
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
			"IsUnitAliveBJ",
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
			"IsUnitGroupDeadBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsUnitGroupDeadBJ",
			"boolean",
			{"group g"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitGroupEmptyBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsUnitGroupEmptyBJ",
			"boolean",
			{"group g"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitGroupInRectBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsUnitGroupInRectBJ",
			"boolean",
			{"group g", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitHiddenBJ",
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
			"ShowUnitHide",
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
			"ShowUnitShow",
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
			"IssueHauntOrderAtLocBJFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IssueHauntOrderAtLocBJ",
			"boolean",
			{"unit whichPeon", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichPeon: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"IssueBuildOrderByIdLocBJ",
			"boolean",
			{"unit whichPeon", "integer unitId", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichPeon: descr" "\n"
			"    integer unitId: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"IssueTrainOrderByIdBJ",
			"boolean",
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
			"GroupTrainOrderByIdBJ",
			"boolean",
			{"group g", "integer unitId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" "\n"
			"    integer unitId: descr" 
		));

	definitions.add(
		new Function(
			"IssueUpgradeOrderByIdBJ",
			"boolean",
			{"unit whichUnit", "integer techId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer techId: descr" 
		));

	definitions.add(
		new Function(
			"GetAttackedUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetUnitFlyHeightBJ",
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
			"SetUnitTurnSpeedBJ",
			"nothing",
			{"unit whichUnit", "real turnSpeed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real turnSpeed: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPropWindowBJ",
			"nothing",
			{"unit whichUnit", "real propWindow"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real propWindow: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitPropWindowBJ",
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
			"GetUnitDefaultPropWindowBJ",
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
			"SetUnitBlendTimeBJ",
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
			"SetUnitAcquireRangeBJ",
			"nothing",
			{"unit whichUnit", "real acquireRange"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real acquireRange: descr" 
		));

	definitions.add(
		new Function(
			"UnitSetCanSleepBJ",
			"nothing",
			{"unit whichUnit", "boolean canSleep"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean canSleep: descr" 
		));

	definitions.add(
		new Function(
			"UnitCanSleepBJ",
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
			"UnitWakeUpBJ",
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
			"UnitIsSleepingBJ",
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
			"WakePlayerUnitsEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"WakePlayerUnits",
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
			"EnableCreepSleepBJ",
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
			"UnitGenerateAlarms",
			"boolean",
			{"unit whichUnit", "boolean generate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean generate: descr" 
		));

	definitions.add(
		new Function(
			"DoesUnitGenerateAlarms",
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
			"PauseAllUnitsBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PauseAllUnitsBJ",
			"nothing",
			{"boolean pause"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean pause: descr" 
		));

	definitions.add(
		new Function(
			"PauseUnitBJ",
			"nothing",
			{"boolean pause", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean pause: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"IsUnitPausedBJ",
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
			"UnitPauseTimedLifeBJ",
			"nothing",
			{"boolean flag", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitApplyTimedLifeBJ",
			"nothing",
			{"real duration", "integer buffId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    integer buffId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitShareVisionBJ",
			"nothing",
			{"boolean share", "unit whichUnit", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean share: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveBuffsBJ",
			"nothing",
			{"integer buffType", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer buffType: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveBuffsExBJ",
			"nothing",
			{"integer polarity", "integer resist", "unit whichUnit", "boolean bTLife", "boolean bAura"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer polarity: descr" "\n"
			"    integer resist: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    boolean bTLife: descr" "\n"
			"    boolean bAura: descr" 
		));

	definitions.add(
		new Function(
			"UnitCountBuffsExBJ",
			"integer",
			{"integer polarity", "integer resist", "unit whichUnit", "boolean bTLife", "boolean bAura"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer polarity: descr" "\n"
			"    integer resist: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    boolean bTLife: descr" "\n"
			"    boolean bAura: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveAbilityBJ",
			"boolean",
			{"integer abilityId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddAbilityBJ",
			"boolean",
			{"integer abilityId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilityId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitRemoveTypeBJ",
			"boolean",
			{"unittype whichType", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unittype whichType: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddTypeBJ",
			"boolean",
			{"unittype whichType", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unittype whichType: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitMakeAbilityPermanentBJ",
			"boolean",
			{"boolean permanent", "integer abilityId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean permanent: descr" "\n"
			"    integer abilityId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitExplodedBJ",
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
			"ExplodeUnitBJ",
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
			"GetTransportUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLoadedUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsUnitInTransportBJ",
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
			"IsUnitLoadedBJ",
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
			"IsUnitIllusionBJ",
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
			"ReplaceUnitBJ",
			"unit",
			{"unit whichUnit", "integer newUnitId", "integer unitStateMethod"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer newUnitId: descr" "\n"
			"    integer unitStateMethod: descr" 
		));

	definitions.add(
		new Function(
			"GetLastReplacedUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetUnitPositionLocFacingBJ",
			"nothing",
			{"unit whichUnit", "location loc", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location loc: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitPositionLocFacingLocBJ",
			"nothing",
			{"unit whichUnit", "location loc", "location lookAt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location loc: descr" "\n"
			"    location lookAt: descr" 
		));

	definitions.add(
		new Function(
			"AddItemToStockBJ",
			"nothing",
			{"integer itemId", "unit whichUnit", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"AddUnitToStockBJ",
			"nothing",
			{"integer unitId", "unit whichUnit", "integer currentStock", "integer stockMax"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    integer currentStock: descr" "\n"
			"    integer stockMax: descr" 
		));

	definitions.add(
		new Function(
			"RemoveItemFromStockBJ",
			"nothing",
			{"integer itemId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer itemId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"RemoveUnitFromStockBJ",
			"nothing",
			{"integer unitId", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitUseFoodBJ",
			"nothing",
			{"boolean enable", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enable: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"UnitDamagePointLoc",
			"boolean",
			{"unit whichUnit", "real delay", "real radius", "location loc", "real amount", "attacktype whichAttack", "damagetype whichDamage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real delay: descr" "\n"
			"    real radius: descr" "\n"
			"    location loc: descr" "\n"
			"    real amount: descr" "\n"
			"    attacktype whichAttack: descr" "\n"
			"    damagetype whichDamage: descr" 
		));

	definitions.add(
		new Function(
			"UnitDamageTargetBJ",
			"boolean",
			{"unit whichUnit", "unit target", "real amount", "attacktype whichAttack", "damagetype whichDamage"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit target: descr" "\n"
			"    real amount: descr" "\n"
			"    attacktype whichAttack: descr" "\n"
			"    damagetype whichDamage: descr" 
		));

	definitions.add(
		new Function(
			"CreateDestructableLoc",
			"destructable",
			{"integer objectid", "location loc", "real facing", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    location loc: descr" "\n"
			"    real facing: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"CreateDeadDestructableLocBJ",
			"destructable",
			{"integer objectid", "location loc", "real facing", "real scale", "integer variation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer objectid: descr" "\n"
			"    location loc: descr" "\n"
			"    real facing: descr" "\n"
			"    real scale: descr" "\n"
			"    integer variation: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ShowDestructableBJ",
			"nothing",
			{"boolean flag", "destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableInvulnerableBJ",
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
			"IsDestructableInvulnerableBJ",
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
			"GetDestructableLoc",
			"location",
			{"destructable whichDestructable"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable whichDestructable: descr" 
		));

	definitions.add(
		new Function(
			"EnumDestructablesInRectAll",
			"nothing",
			{"rect r", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"EnumDestructablesInCircleBJFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsDestructableDeadBJ",
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
			"IsDestructableAliveBJ",
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
			"RandomDestructableInRectBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RandomDestructableInRectBJ",
			"destructable",
			{"rect r", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"RandomDestructableInRectSimpleBJ",
			"destructable",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"EnumDestructablesInCircleBJ",
			"nothing",
			{"real radius", "location loc", "code actionFunc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radius: descr" "\n"
			"    location loc: descr" "\n"
			"    code actionFunc: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableLifePercentBJ",
			"nothing",
			{"destructable d", "real percent"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real percent: descr" 
		));

	definitions.add(
		new Function(
			"SetDestructableMaxLifeBJ",
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
			"ModifyGateBJ",
			"nothing",
			{"integer gateOperation", "destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer gateOperation: descr" "\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"GetElevatorHeight",
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
			"ChangeElevatorHeight",
			"nothing",
			{"destructable d", "integer newHeight"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    integer newHeight: descr" 
		));

	definitions.add(
		new Function(
			"NudgeUnitsInRectEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"NudgeItemsInRectEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"NudgeObjectsInRect",
			"nothing",
			{"rect nudgeArea"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect nudgeArea: descr" 
		));

	definitions.add(
		new Function(
			"NearbyElevatorExistsEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"NearbyElevatorExists",
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
			"FindElevatorWallBlockerEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ChangeElevatorWallBlocker",
			"nothing",
			{"real x", "real y", "real facing", "boolean open"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real facing: descr" "\n"
			"    boolean open: descr" 
		));

	definitions.add(
		new Function(
			"ChangeElevatorWalls",
			"nothing",
			{"boolean open", "integer walls", "destructable d"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean open: descr" "\n"
			"    integer walls: descr" "\n"
			"    destructable d: descr" 
		));

	definitions.add(
		new Function(
			"WaygateActivateBJ",
			"nothing",
			{"boolean activate", "unit waygate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean activate: descr" "\n"
			"    unit waygate: descr" 
		));

	definitions.add(
		new Function(
			"WaygateIsActiveBJ",
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
			"WaygateSetDestinationLocBJ",
			"nothing",
			{"unit waygate", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"WaygateGetDestinationLocBJ",
			"location",
			{"unit waygate"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit waygate: descr" 
		));

	definitions.add(
		new Function(
			"UnitSetUsesAltIconBJ",
			"nothing",
			{"boolean flag", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"ForceUIKeyBJ",
			"nothing",
			{"player whichPlayer", "string key"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string key: descr" 
		));

	definitions.add(
		new Function(
			"ForceUICancelBJ",
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
			"ForGroupBJ",
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
			"GroupAddUnitSimple",
			"nothing",
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
			"GroupRemoveUnitSimple",
			"nothing",
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
			"GroupAddGroupEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GroupAddGroup",
			"nothing",
			{"group sourceGroup", "group destGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group sourceGroup: descr" "\n"
			"    group destGroup: descr" 
		));

	definitions.add(
		new Function(
			"GroupRemoveGroupEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GroupRemoveGroup",
			"nothing",
			{"group sourceGroup", "group destGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group sourceGroup: descr" "\n"
			"    group destGroup: descr" 
		));

	definitions.add(
		new Function(
			"ForceAddPlayerSimple",
			"nothing",
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
			"ForceRemovePlayerSimple",
			"nothing",
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
			"GroupPickRandomUnitEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GroupPickRandomUnit",
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
			"ForcePickRandomPlayerEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ForcePickRandomPlayer",
			"player",
			{"force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"EnumUnitsSelected",
			"nothing",
			{"player whichPlayer", "boolexpr enumFilter", "code enumAction"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr enumFilter: descr" "\n"
			"    code enumAction: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsInRectMatching",
			"group",
			{"rect r", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsInRectAll",
			"group",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsInRectOfPlayerFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetUnitsInRectOfPlayer",
			"group",
			{"rect r", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsInRangeOfLocMatching",
			"group",
			{"real radius", "location whichLocation", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radius: descr" "\n"
			"    location whichLocation: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsInRangeOfLocAll",
			"group",
			{"real radius", "location whichLocation"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real radius: descr" "\n"
			"    location whichLocation: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsOfTypeIdAllFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetUnitsOfTypeIdAll",
			"group",
			{"integer unitid"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitid: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsOfPlayerMatching",
			"group",
			{"player whichPlayer", "boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsOfPlayerAll",
			"group",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsOfPlayerAndTypeIdFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetUnitsOfPlayerAndTypeId",
			"group",
			{"player whichPlayer", "integer unitid"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer unitid: descr" 
		));

	definitions.add(
		new Function(
			"GetUnitsSelectedAll",
			"group",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetForceOfPlayer",
			"force",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayersAll",
			"force",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetPlayersByMapControl",
			"force",
			{"mapcontrol whichControl"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    mapcontrol whichControl: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayersAllies",
			"force",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayersEnemies",
			"force",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayersMatching",
			"force",
			{"boolexpr filter"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr filter: descr" 
		));

	definitions.add(
		new Function(
			"CountUnitsInGroupEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CountUnitsInGroup",
			"integer",
			{"group g"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group g: descr" 
		));

	definitions.add(
		new Function(
			"CountPlayersInForceEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CountPlayersInForceBJ",
			"integer",
			{"force f"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force f: descr" 
		));

	definitions.add(
		new Function(
			"GetRandomSubGroupEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetRandomSubGroup",
			"group",
			{"integer count", "group sourceGroup"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer count: descr" "\n"
			"    group sourceGroup: descr" 
		));

	definitions.add(
		new Function(
			"LivingPlayerUnitsOfTypeIdFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CountLivingPlayerUnitsOfTypeId",
			"integer",
			{"integer unitId", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"ResetUnitAnimation",
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
			"SetUnitTimeScalePercent",
			"nothing",
			{"unit whichUnit", "real percentScale"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real percentScale: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitScalePercent",
			"nothing",
			{"unit whichUnit", "real percentScaleX", "real percentScaleY", "real percentScaleZ"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real percentScaleX: descr" "\n"
			"    real percentScaleY: descr" "\n"
			"    real percentScaleZ: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitVertexColorBJ",
			"nothing",
			{"unit whichUnit", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"UnitAddIndicatorBJ",
			"nothing",
			{"unit whichUnit", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"DestructableAddIndicatorBJ",
			"nothing",
			{"destructable whichDestructable", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable whichDestructable: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"ItemAddIndicatorBJ",
			"nothing",
			{"item whichItem", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitFacingToFaceLocTimed",
			"nothing",
			{"unit whichUnit", "location target", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location target: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitFacingToFaceUnitTimed",
			"nothing",
			{"unit whichUnit", "unit target", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit target: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"QueueUnitAnimationBJ",
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
			"SetDestructableAnimationBJ",
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
			"QueueDestructableAnimationBJ",
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
			"SetDestAnimationSpeedPercent",
			"nothing",
			{"destructable d", "real percentScale"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable d: descr" "\n"
			"    real percentScale: descr" 
		));

	definitions.add(
		new Function(
			"DialogDisplayBJ",
			"nothing",
			{"boolean flag", "dialog whichDialog", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    dialog whichDialog: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"DialogSetMessageBJ",
			"nothing",
			{"dialog whichDialog", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"DialogAddButtonBJ",
			"button",
			{"dialog whichDialog", "string buttonText"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    string buttonText: descr" 
		));

	definitions.add(
		new Function(
			"DialogAddButtonWithHotkeyBJ",
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
			"DialogClearBJ",
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
			"GetLastCreatedButtonBJ",
			"button",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetClickedButtonBJ",
			"button",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetClickedDialogBJ",
			"dialog",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceBJ",
			"nothing",
			{"player sourcePlayer", "alliancetype whichAllianceSetting", "boolean value", "player otherPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    alliancetype whichAllianceSetting: descr" "\n"
			"    boolean value: descr" "\n"
			"    player otherPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceStateAllyBJ",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceStateVisionBJ",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceStateControlBJ",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceStateFullControlBJ",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAllianceStateBJ",
			"nothing",
			{"player sourcePlayer", "player otherPlayer", "integer allianceState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" "\n"
			"    integer allianceState: descr" 
		));

	definitions.add(
		new Function(
			"SetForceAllianceStateBJ",
			"nothing",
			{"force sourceForce", "force targetForce", "integer allianceState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force sourceForce: descr" "\n"
			"    force targetForce: descr" "\n"
			"    integer allianceState: descr" 
		));

	definitions.add(
		new Function(
			"PlayersAreCoAllied",
			"boolean",
			{"player playerA", "player playerB"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player playerA: descr" "\n"
			"    player playerB: descr" 
		));

	definitions.add(
		new Function(
			"ShareEverythingWithTeamAI",
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
			"ShareEverythingWithTeam",
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
			"ConfigureNeutralVictim",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MakeUnitsPassiveForPlayerEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MakeUnitsPassiveForPlayer",
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
			"MakeUnitsPassiveForTeam",
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
			"AllowVictoryDefeat",
			"boolean",
			{"playergameresult gameResult"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    playergameresult gameResult: descr" 
		));

	definitions.add(
		new Function(
			"EndGameBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeVictoryDialogBJ",
			"nothing",
			{"player whichPlayer", "boolean leftGame"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean leftGame: descr" 
		));

	definitions.add(
		new Function(
			"MeleeDefeatDialogBJ",
			"nothing",
			{"player whichPlayer", "boolean leftGame"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean leftGame: descr" 
		));

	definitions.add(
		new Function(
			"GameOverDialogBJ",
			"nothing",
			{"player whichPlayer", "boolean leftGame"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean leftGame: descr" 
		));

	definitions.add(
		new Function(
			"RemovePlayerPreserveUnitsBJ",
			"nothing",
			{"player whichPlayer", "playergameresult gameResult", "boolean leftGame"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playergameresult gameResult: descr" "\n"
			"    boolean leftGame: descr" 
		));

	definitions.add(
		new Function(
			"CustomVictoryOkBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomVictoryQuitBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomVictoryDialogBJ",
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
			"CustomVictorySkipBJ",
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
			"CustomVictoryBJ",
			"nothing",
			{"player whichPlayer", "boolean showDialog", "boolean showScores"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean showDialog: descr" "\n"
			"    boolean showScores: descr" 
		));

	definitions.add(
		new Function(
			"CustomDefeatRestartBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomDefeatReduceDifficultyBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomDefeatLoadBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomDefeatQuitBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CustomDefeatDialogBJ",
			"nothing",
			{"player whichPlayer", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"CustomDefeatBJ",
			"nothing",
			{"player whichPlayer", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"SetNextLevelBJ",
			"nothing",
			{"string nextLevel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string nextLevel: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerOnScoreScreenBJ",
			"nothing",
			{"boolean flag", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean flag: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"CreateQuestBJ",
			"quest",
			{"integer questType", "string title", "string description", "string iconPath"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer questType: descr" "\n"
			"    string title: descr" "\n"
			"    string description: descr" "\n"
			"    string iconPath: descr" 
		));

	definitions.add(
		new Function(
			"DestroyQuestBJ",
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
			"QuestSetEnabledBJ",
			"nothing",
			{"boolean enabled", "quest whichQuest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enabled: descr" "\n"
			"    quest whichQuest: descr" 
		));

	definitions.add(
		new Function(
			"QuestSetTitleBJ",
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
			"QuestSetDescriptionBJ",
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
			"QuestSetCompletedBJ",
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
			"QuestSetFailedBJ",
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
			"QuestSetDiscoveredBJ",
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
			"GetLastCreatedQuestBJ",
			"quest",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateQuestItemBJ",
			"questitem",
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
			"QuestItemSetDescriptionBJ",
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
			"QuestItemSetCompletedBJ",
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
			"GetLastCreatedQuestItemBJ",
			"questitem",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateDefeatConditionBJ",
			"defeatcondition",
			{"string description"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string description: descr" 
		));

	definitions.add(
		new Function(
			"DestroyDefeatConditionBJ",
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
			"DefeatConditionSetDescriptionBJ",
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
			"GetLastCreatedDefeatConditionBJ",
			"defeatcondition",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FlashQuestDialogButtonBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"QuestMessageBJ",
			"nothing",
			{"force f", "integer messageType", "string message"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force f: descr" "\n"
			"    integer messageType: descr" "\n"
			"    string message: descr" 
		));

	definitions.add(
		new Function(
			"StartTimerBJ",
			"timer",
			{"timer t", "boolean periodic", "real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer t: descr" "\n"
			"    boolean periodic: descr" "\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"CreateTimerBJ",
			"timer",
			{"boolean periodic", "real timeout"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean periodic: descr" "\n"
			"    real timeout: descr" 
		));

	definitions.add(
		new Function(
			"DestroyTimerBJ",
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
			"PauseTimerBJ",
			"nothing",
			{"boolean pause", "timer whichTimer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean pause: descr" "\n"
			"    timer whichTimer: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedTimerBJ",
			"timer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateTimerDialogBJ",
			"timerdialog",
			{"timer t", "string title"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer t: descr" "\n"
			"    string title: descr" 
		));

	definitions.add(
		new Function(
			"DestroyTimerDialogBJ",
			"nothing",
			{"timerdialog td"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog td: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTitleBJ",
			"nothing",
			{"timerdialog td", "string title"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog td: descr" "\n"
			"    string title: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTitleColorBJ",
			"nothing",
			{"timerdialog td", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog td: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetTimeColorBJ",
			"nothing",
			{"timerdialog td", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog td: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogSetSpeedBJ",
			"nothing",
			{"timerdialog td", "real speedMultFactor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog td: descr" "\n"
			"    real speedMultFactor: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogDisplayForPlayerBJ",
			"nothing",
			{"boolean show", "timerdialog td", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    timerdialog td: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"TimerDialogDisplayBJ",
			"nothing",
			{"boolean show", "timerdialog td"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    timerdialog td: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedTimerDialogBJ",
			"timerdialog",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"LeaderboardResizeBJ",
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
			"LeaderboardSetPlayerItemValueBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "integer val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    integer val: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetPlayerItemLabelBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "string val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    string val: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetPlayerItemStyleBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "boolean showLabel", "boolean showValue", "boolean showIcon"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    boolean showLabel: descr" "\n"
			"    boolean showValue: descr" "\n"
			"    boolean showIcon: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetPlayerItemLabelColorBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetPlayerItemValueColorBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetLabelColorBJ",
			"nothing",
			{"leaderboard lb", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetValueColorBJ",
			"nothing",
			{"leaderboard lb", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSetLabelBJ",
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
			"LeaderboardSetStyleBJ",
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
			"LeaderboardGetItemCountBJ",
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
			"LeaderboardHasPlayerItemBJ",
			"boolean",
			{"leaderboard lb", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"ForceSetLeaderboardBJ",
			"nothing",
			{"leaderboard lb", "force toForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    force toForce: descr" 
		));

	definitions.add(
		new Function(
			"CreateLeaderboardBJ",
			"leaderboard",
			{"force toForce", "string label"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" "\n"
			"    string label: descr" 
		));

	definitions.add(
		new Function(
			"DestroyLeaderboardBJ",
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
			"LeaderboardDisplayBJ",
			"nothing",
			{"boolean show", "leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardAddItemBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb", "string label", "integer value"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" "\n"
			"    string label: descr" "\n"
			"    integer value: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardRemovePlayerItemBJ",
			"nothing",
			{"player whichPlayer", "leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSortItemsBJ",
			"nothing",
			{"leaderboard lb", "integer sortType", "boolean ascending"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard lb: descr" "\n"
			"    integer sortType: descr" "\n"
			"    boolean ascending: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardSortItemsByPlayerBJ",
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
			"LeaderboardSortItemsByLabelBJ",
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
			"LeaderboardGetPlayerIndexBJ",
			"integer",
			{"player whichPlayer", "leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"LeaderboardGetIndexedPlayerBJ",
			"player",
			{"integer position", "leaderboard lb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer position: descr" "\n"
			"    leaderboard lb: descr" 
		));

	definitions.add(
		new Function(
			"PlayerGetLeaderboardBJ",
			"leaderboard",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedLeaderboard",
			"leaderboard",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CreateMultiboardBJ",
			"multiboard",
			{"integer cols", "integer rows", "string title"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer cols: descr" "\n"
			"    integer rows: descr" "\n"
			"    string title: descr" 
		));

	definitions.add(
		new Function(
			"DestroyMultiboardBJ",
			"nothing",
			{"multiboard mb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedMultiboard",
			"multiboard",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MultiboardDisplayBJ",
			"nothing",
			{"boolean show", "multiboard mb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    multiboard mb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardMinimizeBJ",
			"nothing",
			{"boolean minimize", "multiboard mb"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean minimize: descr" "\n"
			"    multiboard mb: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetTitleTextColorBJ",
			"nothing",
			{"multiboard mb", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardAllowDisplayBJ",
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
			"MultiboardSetItemStyleBJ",
			"nothing",
			{"multiboard mb", "integer col", "integer row", "boolean showValue", "boolean showIcon"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    integer col: descr" "\n"
			"    integer row: descr" "\n"
			"    boolean showValue: descr" "\n"
			"    boolean showIcon: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemValueBJ",
			"nothing",
			{"multiboard mb", "integer col", "integer row", "string val"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    integer col: descr" "\n"
			"    integer row: descr" "\n"
			"    string val: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemColorBJ",
			"nothing",
			{"multiboard mb", "integer col", "integer row", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    integer col: descr" "\n"
			"    integer row: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemWidthBJ",
			"nothing",
			{"multiboard mb", "integer col", "integer row", "real width"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    integer col: descr" "\n"
			"    integer row: descr" "\n"
			"    real width: descr" 
		));

	definitions.add(
		new Function(
			"MultiboardSetItemIconBJ",
			"nothing",
			{"multiboard mb", "integer col", "integer row", "string iconFileName"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard mb: descr" "\n"
			"    integer col: descr" "\n"
			"    integer row: descr" "\n"
			"    string iconFileName: descr" 
		));

	definitions.add(
		new Function(
			"TextTagSize2Height",
			"real",
			{"real size"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real size: descr" 
		));

	definitions.add(
		new Function(
			"TextTagSpeed2Velocity",
			"real",
			{"real speed"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real speed: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagColorBJ",
			"nothing",
			{"texttag tt", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagVelocityBJ",
			"nothing",
			{"texttag tt", "real speed", "real angle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    real speed: descr" "\n"
			"    real angle: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagTextBJ",
			"nothing",
			{"texttag tt", "string s", "real size"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    string s: descr" "\n"
			"    real size: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPosBJ",
			"nothing",
			{"texttag tt", "location loc", "real zOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    location loc: descr" "\n"
			"    real zOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPosUnitBJ",
			"nothing",
			{"texttag tt", "unit whichUnit", "real zOffset"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real zOffset: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagSuspendedBJ",
			"nothing",
			{"texttag tt", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagPermanentBJ",
			"nothing",
			{"texttag tt", "boolean flag"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    boolean flag: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagAgeBJ",
			"nothing",
			{"texttag tt", "real age"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    real age: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagLifespanBJ",
			"nothing",
			{"texttag tt", "real lifespan"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    real lifespan: descr" 
		));

	definitions.add(
		new Function(
			"SetTextTagFadepointBJ",
			"nothing",
			{"texttag tt", "real fadepoint"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" "\n"
			"    real fadepoint: descr" 
		));

	definitions.add(
		new Function(
			"CreateTextTagLocBJ",
			"texttag",
			{"string s", "location loc", "real zOffset", "real size", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: descr" "\n"
			"    location loc: descr" "\n"
			"    real zOffset: descr" "\n"
			"    real size: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"CreateTextTagUnitBJ",
			"texttag",
			{"string s", "unit whichUnit", "real zOffset", "real size", "real red", "real green", "real blue", "real transparency"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string s: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    real zOffset: descr" "\n"
			"    real size: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real transparency: descr" 
		));

	definitions.add(
		new Function(
			"DestroyTextTagBJ",
			"nothing",
			{"texttag tt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag tt: descr" 
		));

	definitions.add(
		new Function(
			"ShowTextTagForceBJ",
			"nothing",
			{"boolean show", "texttag tt", "force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    texttag tt: descr" "\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedTextTag",
			"texttag",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PauseGameOn",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"PauseGameOff",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetUserControlForceOn",
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
			"SetUserControlForceOff",
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
			"ShowInterfaceForceOn",
			"nothing",
			{"force whichForce", "real fadeDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    real fadeDuration: descr" 
		));

	definitions.add(
		new Function(
			"ShowInterfaceForceOff",
			"nothing",
			{"force whichForce", "real fadeDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    real fadeDuration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapForForce",
			"nothing",
			{"force whichForce", "real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapLocForForce",
			"nothing",
			{"force whichForce", "location loc", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    location loc: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapForPlayer",
			"nothing",
			{"player whichPlayer", "real x", "real y", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapLocForPlayer",
			"nothing",
			{"player whichPlayer", "location loc", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapForForceEx",
			"nothing",
			{"force whichForce", "real x", "real y", "real duration", "integer style", "real red", "real green", "real blue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real duration: descr" "\n"
			"    integer style: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" 
		));

	definitions.add(
		new Function(
			"PingMinimapLocForForceEx",
			"nothing",
			{"force whichForce", "location loc", "real duration", "integer style", "real red", "real green", "real blue"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    location loc: descr" "\n"
			"    real duration: descr" "\n"
			"    integer style: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" 
		));

	definitions.add(
		new Function(
			"EnableWorldFogBoundaryBJ",
			"nothing",
			{"boolean enable", "force f"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enable: descr" "\n"
			"    force f: descr" 
		));

	definitions.add(
		new Function(
			"EnableOcclusionBJ",
			"nothing",
			{"boolean enable", "force f"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean enable: descr" "\n"
			"    force f: descr" 
		));

	definitions.add(
		new Function(
			"CancelCineSceneBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TryInitCinematicBehaviorBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetCinematicSceneBJ",
			"nothing",
			{"sound soundHandle", "integer portraitUnitId", "playercolor color", "string speakerTitle", "string text", "real sceneDuration", "real voiceoverDuration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer portraitUnitId: descr" "\n"
			"    playercolor color: descr" "\n"
			"    string speakerTitle: descr" "\n"
			"    string text: descr" "\n"
			"    real sceneDuration: descr" "\n"
			"    real voiceoverDuration: descr" 
		));

	definitions.add(
		new Function(
			"GetTransmissionDuration",
			"real",
			{"sound soundHandle", "integer timeType", "real timeVal"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer timeType: descr" "\n"
			"    real timeVal: descr" 
		));

	definitions.add(
		new Function(
			"WaitTransmissionDuration",
			"nothing",
			{"sound soundHandle", "integer timeType", "real timeVal"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound soundHandle: descr" "\n"
			"    integer timeType: descr" "\n"
			"    real timeVal: descr" 
		));

	definitions.add(
		new Function(
			"DoTransmissionBasicsXYBJ",
			"nothing",
			{"integer unitId", "playercolor color", "real x", "real y", "sound soundHandle", "string unitName", "string message", "real duration"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    playercolor color: descr" "\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    sound soundHandle: descr" "\n"
			"    string unitName: descr" "\n"
			"    string message: descr" "\n"
			"    real duration: descr" 
		));

	definitions.add(
		new Function(
			"TransmissionFromUnitWithNameBJ",
			"nothing",
			{"force toForce", "unit whichUnit", "string unitName", "sound soundHandle", "string message", "integer timeType", "real timeVal", "boolean wait"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" "\n"
			"    unit whichUnit: descr" "\n"
			"    string unitName: descr" "\n"
			"    sound soundHandle: descr" "\n"
			"    string message: descr" "\n"
			"    integer timeType: descr" "\n"
			"    real timeVal: descr" "\n"
			"    boolean wait: descr" 
		));

	definitions.add(
		new Function(
			"TransmissionFromUnitTypeWithNameBJ",
			"nothing",
			{"force toForce", "player fromPlayer", "integer unitId", "string unitName", "location loc", "sound soundHandle", "string message", "integer timeType", "real timeVal", "boolean wait"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force toForce: descr" "\n"
			"    player fromPlayer: descr" "\n"
			"    integer unitId: descr" "\n"
			"    string unitName: descr" "\n"
			"    location loc: descr" "\n"
			"    sound soundHandle: descr" "\n"
			"    string message: descr" "\n"
			"    integer timeType: descr" "\n"
			"    real timeVal: descr" "\n"
			"    boolean wait: descr" 
		));

	definitions.add(
		new Function(
			"GetLastTransmissionDurationBJ",
			"real",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ForceCinematicSubtitlesBJ",
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
			"CinematicModeExBJ",
			"nothing",
			{"boolean cineMode", "force forForce", "real interfaceFadeTime"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean cineMode: descr" "\n"
			"    force forForce: descr" "\n"
			"    real interfaceFadeTime: descr" 
		));

	definitions.add(
		new Function(
			"CinematicModeBJ",
			"nothing",
			{"boolean cineMode", "force forForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean cineMode: descr" "\n"
			"    force forForce: descr" 
		));

	definitions.add(
		new Function(
			"DisplayCineFilterBJ",
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
			"CinematicFadeCommonBJ",
			"nothing",
			{"real red", "real green", "real blue", "real duration", "string tex", "real startTrans", "real endTrans"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real duration: descr" "\n"
			"    string tex: descr" "\n"
			"    real startTrans: descr" "\n"
			"    real endTrans: descr" 
		));

	definitions.add(
		new Function(
			"FinishCinematicFadeBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FinishCinematicFadeAfterBJ",
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
			"ContinueCinematicFadeBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ContinueCinematicFadeAfterBJ",
			"nothing",
			{"real duration", "real red", "real green", "real blue", "real trans", "string tex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real trans: descr" "\n"
			"    string tex: descr" 
		));

	definitions.add(
		new Function(
			"AbortCinematicFadeBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CinematicFadeBJ",
			"nothing",
			{"integer fadetype", "real duration", "string tex", "real red", "real green", "real blue", "real trans"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer fadetype: descr" "\n"
			"    real duration: descr" "\n"
			"    string tex: descr" "\n"
			"    real red: descr" "\n"
			"    real green: descr" "\n"
			"    real blue: descr" "\n"
			"    real trans: descr" 
		));

	definitions.add(
		new Function(
			"CinematicFilterGenericBJ",
			"nothing",
			{"real duration", "blendmode bmode", "string tex", "real red0", "real green0", "real blue0", "real trans0", "real red1", "real green1", "real blue1", "real trans1"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real duration: descr" "\n"
			"    blendmode bmode: descr" "\n"
			"    string tex: descr" "\n"
			"    real red0: descr" "\n"
			"    real green0: descr" "\n"
			"    real blue0: descr" "\n"
			"    real trans0: descr" "\n"
			"    real red1: descr" "\n"
			"    real green1: descr" "\n"
			"    real blue1: descr" "\n"
			"    real trans1: descr" 
		));

	definitions.add(
		new Function(
			"RescueUnitBJ",
			"nothing",
			{"unit whichUnit", "player rescuer", "boolean changeColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    player rescuer: descr" "\n"
			"    boolean changeColor: descr" 
		));

	definitions.add(
		new Function(
			"TriggerActionUnitRescuedBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"TryInitRescuableTriggersBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetRescueUnitColorChangeBJ",
			"nothing",
			{"boolean changeColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean changeColor: descr" 
		));

	definitions.add(
		new Function(
			"SetRescueBuildingColorChangeBJ",
			"nothing",
			{"boolean changeColor"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean changeColor: descr" 
		));

	definitions.add(
		new Function(
			"MakeUnitRescuableToForceBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MakeUnitRescuableToForceBJ",
			"nothing",
			{"unit whichUnit", "boolean isRescuable", "force whichForce"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    boolean isRescuable: descr" "\n"
			"    force whichForce: descr" 
		));

	definitions.add(
		new Function(
			"InitRescuableBehaviorBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetPlayerTechResearchedSwap",
			"nothing",
			{"integer techid", "integer levels", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer techid: descr" "\n"
			"    integer levels: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTechMaxAllowedSwap",
			"nothing",
			{"integer techid", "integer maximum", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer techid: descr" "\n"
			"    integer maximum: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerMaxHeroesAllowed",
			"nothing",
			{"integer maximum", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer maximum: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTechCountSimple",
			"integer",
			{"integer techid", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer techid: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTechMaxAllowedSwap",
			"integer",
			{"integer techid", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer techid: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerAbilityAvailableBJ",
			"nothing",
			{"boolean avail", "integer abilid", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean avail: descr" "\n"
			"    integer abilid: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetCampaignMenuRaceBJ",
			"nothing",
			{"integer campaignNumber"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer campaignNumber: descr" 
		));

	definitions.add(
		new Function(
			"SetMissionAvailableBJ",
			"nothing",
			{"boolean available", "integer missionIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean available: descr" "\n"
			"    integer missionIndex: descr" 
		));

	definitions.add(
		new Function(
			"SetCampaignAvailableBJ",
			"nothing",
			{"boolean available", "integer campaignNumber"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean available: descr" "\n"
			"    integer campaignNumber: descr" 
		));

	definitions.add(
		new Function(
			"SetCinematicAvailableBJ",
			"nothing",
			{"boolean available", "integer cinematicIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean available: descr" "\n"
			"    integer cinematicIndex: descr" 
		));

	definitions.add(
		new Function(
			"InitGameCacheBJ",
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
			"SaveGameCacheBJ",
			"boolean",
			{"gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"GetLastCreatedGameCacheBJ",
			"gamecache",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitHashtableBJ",
			"hashtable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"GetLastCreatedHashtableBJ",
			"hashtable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"StoreRealBJ",
			"nothing",
			{"real value", "string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real value: descr" "\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"StoreIntegerBJ",
			"nothing",
			{"integer value", "string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer value: descr" "\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"StoreBooleanBJ",
			"nothing",
			{"boolean value", "string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean value: descr" "\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"StoreStringBJ",
			"boolean",
			{"string value", "string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string value: descr" "\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"StoreUnitBJ",
			"boolean",
			{"unit whichUnit", "string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"SaveRealBJ",
			"nothing",
			{"real value", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real value: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveIntegerBJ",
			"nothing",
			{"integer value", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer value: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveBooleanBJ",
			"nothing",
			{"boolean value", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean value: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveStringBJ",
			"boolean",
			{"string value", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string value: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SavePlayerHandleBJ",
			"boolean",
			{"player whichPlayer", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveWidgetHandleBJ",
			"boolean",
			{"widget whichWidget", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget whichWidget: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveDestructableHandleBJ",
			"boolean",
			{"destructable whichDestructable", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    destructable whichDestructable: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveItemHandleBJ",
			"boolean",
			{"item whichItem", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    item whichItem: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveUnitHandleBJ",
			"boolean",
			{"unit whichUnit", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveAbilityHandleBJ",
			"boolean",
			{"ability whichAbility", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ability whichAbility: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTimerHandleBJ",
			"boolean",
			{"timer whichTimer", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timer whichTimer: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerHandleBJ",
			"boolean",
			{"trigger whichTrigger", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trigger whichTrigger: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerConditionHandleBJ",
			"boolean",
			{"triggercondition whichTriggercondition", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    triggercondition whichTriggercondition: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerActionHandleBJ",
			"boolean",
			{"triggeraction whichTriggeraction", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    triggeraction whichTriggeraction: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTriggerEventHandleBJ",
			"boolean",
			{"event whichEvent", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    event whichEvent: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveForceHandleBJ",
			"boolean",
			{"force whichForce", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    force whichForce: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveGroupHandleBJ",
			"boolean",
			{"group whichGroup", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    group whichGroup: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveLocationHandleBJ",
			"boolean",
			{"location whichLocation", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location whichLocation: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveRectHandleBJ",
			"boolean",
			{"rect whichRect", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveBooleanExprHandleBJ",
			"boolean",
			{"boolexpr whichBoolexpr", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolexpr whichBoolexpr: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveSoundHandleBJ",
			"boolean",
			{"sound whichSound", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    sound whichSound: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveEffectHandleBJ",
			"boolean",
			{"effect whichEffect", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    effect whichEffect: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveUnitPoolHandleBJ",
			"boolean",
			{"unitpool whichUnitpool", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unitpool whichUnitpool: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveItemPoolHandleBJ",
			"boolean",
			{"itempool whichItempool", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itempool whichItempool: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveQuestHandleBJ",
			"boolean",
			{"quest whichQuest", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    quest whichQuest: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveQuestItemHandleBJ",
			"boolean",
			{"questitem whichQuestitem", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    questitem whichQuestitem: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveDefeatConditionHandleBJ",
			"boolean",
			{"defeatcondition whichDefeatcondition", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    defeatcondition whichDefeatcondition: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTimerDialogHandleBJ",
			"boolean",
			{"timerdialog whichTimerdialog", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    timerdialog whichTimerdialog: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveLeaderboardHandleBJ",
			"boolean",
			{"leaderboard whichLeaderboard", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    leaderboard whichLeaderboard: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveMultiboardHandleBJ",
			"boolean",
			{"multiboard whichMultiboard", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboard whichMultiboard: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveMultiboardItemHandleBJ",
			"boolean",
			{"multiboarditem whichMultiboarditem", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    multiboarditem whichMultiboarditem: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTrackableHandleBJ",
			"boolean",
			{"trackable whichTrackable", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    trackable whichTrackable: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveDialogHandleBJ",
			"boolean",
			{"dialog whichDialog", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    dialog whichDialog: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveButtonHandleBJ",
			"boolean",
			{"button whichButton", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    button whichButton: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveTextTagHandleBJ",
			"boolean",
			{"texttag whichTexttag", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    texttag whichTexttag: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveLightningHandleBJ",
			"boolean",
			{"lightning whichLightning", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    lightning whichLightning: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveImageHandleBJ",
			"boolean",
			{"image whichImage", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    image whichImage: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveUbersplatHandleBJ",
			"boolean",
			{"ubersplat whichUbersplat", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    ubersplat whichUbersplat: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveRegionHandleBJ",
			"boolean",
			{"region whichRegion", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    region whichRegion: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveFogStateHandleBJ",
			"boolean",
			{"fogstate whichFogState", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fogstate whichFogState: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveFogModifierHandleBJ",
			"boolean",
			{"fogmodifier whichFogModifier", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    fogmodifier whichFogModifier: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveAgentHandleBJ",
			"boolean",
			{"agent whichAgent", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    agent whichAgent: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"SaveHashtableHandleBJ",
			"boolean",
			{"hashtable whichHashtable", "integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    hashtable whichHashtable: descr" "\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredRealBJ",
			"real",
			{"string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredIntegerBJ",
			"integer",
			{"string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredBooleanBJ",
			"boolean",
			{"string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"GetStoredStringBJ",
			"string",
			{"string key", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"LoadRealBJ",
			"real",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadIntegerBJ",
			"integer",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadBooleanBJ",
			"boolean",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadStringBJ",
			"string",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadPlayerHandleBJ",
			"player",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadWidgetHandleBJ",
			"widget",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadDestructableHandleBJ",
			"destructable",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadItemHandleBJ",
			"item",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadUnitHandleBJ",
			"unit",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadAbilityHandleBJ",
			"ability",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTimerHandleBJ",
			"timer",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerHandleBJ",
			"trigger",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerConditionHandleBJ",
			"triggercondition",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerActionHandleBJ",
			"triggeraction",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTriggerEventHandleBJ",
			"event",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadForceHandleBJ",
			"force",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadGroupHandleBJ",
			"group",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadLocationHandleBJ",
			"location",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadRectHandleBJ",
			"rect",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadBooleanExprHandleBJ",
			"boolexpr",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadSoundHandleBJ",
			"sound",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadEffectHandleBJ",
			"effect",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadUnitPoolHandleBJ",
			"unitpool",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadItemPoolHandleBJ",
			"itempool",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadQuestHandleBJ",
			"quest",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadQuestItemHandleBJ",
			"questitem",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadDefeatConditionHandleBJ",
			"defeatcondition",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTimerDialogHandleBJ",
			"timerdialog",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadLeaderboardHandleBJ",
			"leaderboard",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadMultiboardHandleBJ",
			"multiboard",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadMultiboardItemHandleBJ",
			"multiboarditem",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTrackableHandleBJ",
			"trackable",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadDialogHandleBJ",
			"dialog",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadButtonHandleBJ",
			"button",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadTextTagHandleBJ",
			"texttag",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadLightningHandleBJ",
			"lightning",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadImageHandleBJ",
			"image",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadUbersplatHandleBJ",
			"ubersplat",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadRegionHandleBJ",
			"region",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadFogStateHandleBJ",
			"fogstate",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadFogModifierHandleBJ",
			"fogmodifier",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"LoadHashtableHandleBJ",
			"hashtable",
			{"integer key", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"RestoreUnitLocFacingAngleBJ",
			"unit",
			{"string key", "string missionKey", "gamecache cache", "player forWhichPlayer", "location loc", "real facing"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" "\n"
			"    player forWhichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real facing: descr" 
		));

	definitions.add(
		new Function(
			"RestoreUnitLocFacingPointBJ",
			"unit",
			{"string key", "string missionKey", "gamecache cache", "player forWhichPlayer", "location loc", "location lookAt"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" "\n"
			"    player forWhichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    location lookAt: descr" 
		));

	definitions.add(
		new Function(
			"GetLastRestoredUnitBJ",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FlushGameCacheBJ",
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
			"FlushStoredMissionBJ",
			"nothing",
			{"string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"FlushParentHashtableBJ",
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
			"FlushChildHashtableBJ",
			"nothing",
			{"integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"HaveStoredValue",
			"boolean",
			{"string key", "integer valueType", "string missionKey", "gamecache cache"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string key: descr" "\n"
			"    integer valueType: descr" "\n"
			"    string missionKey: descr" "\n"
			"    gamecache cache: descr" 
		));

	definitions.add(
		new Function(
			"HaveSavedValue",
			"boolean",
			{"integer key", "integer valueType", "integer missionKey", "hashtable table"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer key: descr" "\n"
			"    integer valueType: descr" "\n"
			"    integer missionKey: descr" "\n"
			"    hashtable table: descr" 
		));

	definitions.add(
		new Function(
			"ShowCustomCampaignButton",
			"nothing",
			{"boolean show", "integer whichButton"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean show: descr" "\n"
			"    integer whichButton: descr" 
		));

	definitions.add(
		new Function(
			"IsCustomCampaignButtonVisibile",
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
			"LoadGameBJ",
			"nothing",
			{"string loadFileName", "boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string loadFileName: descr" "\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"SaveAndChangeLevelBJ",
			"nothing",
			{"string saveFileName", "string newLevel", "boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string saveFileName: descr" "\n"
			"    string newLevel: descr" "\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"SaveAndLoadGameBJ",
			"nothing",
			{"string saveFileName", "string loadFileName", "boolean doScoreScreen"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    string saveFileName: descr" "\n"
			"    string loadFileName: descr" "\n"
			"    boolean doScoreScreen: descr" 
		));

	definitions.add(
		new Function(
			"RenameSaveDirectoryBJ",
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
			"RemoveSaveDirectoryBJ",
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
			"CopySaveGameBJ",
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
			"GetPlayerStartLocationX",
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
			"GetPlayerStartLocationY",
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
			"GetPlayerStartLocationLoc",
			"location",
			{"player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetRectCenter",
			"location",
			{"rect whichRect"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect whichRect: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerSlotState",
			"boolean",
			{"player whichPlayer", "playerslotstate whichState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playerslotstate whichState: descr" 
		));

	definitions.add(
		new Function(
			"GetFadeFromSeconds",
			"integer",
			{"real seconds"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real seconds: descr" 
		));

	definitions.add(
		new Function(
			"GetFadeFromSecondsAsReal",
			"real",
			{"real seconds"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real seconds: descr" 
		));

	definitions.add(
		new Function(
			"AdjustPlayerStateSimpleBJ",
			"nothing",
			{"player whichPlayer", "playerstate whichPlayerState", "integer delta"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playerstate whichPlayerState: descr" "\n"
			"    integer delta: descr" 
		));

	definitions.add(
		new Function(
			"AdjustPlayerStateBJ",
			"nothing",
			{"integer delta", "player whichPlayer", "playerstate whichPlayerState"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer delta: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    playerstate whichPlayerState: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerStateBJ",
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
			"SetPlayerFlagBJ",
			"nothing",
			{"playerstate whichPlayerFlag", "boolean flag", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    playerstate whichPlayerFlag: descr" "\n"
			"    boolean flag: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerTaxRateBJ",
			"nothing",
			{"integer rate", "playerstate whichResource", "player sourcePlayer", "player otherPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer rate: descr" "\n"
			"    playerstate whichResource: descr" "\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetPlayerTaxRateBJ",
			"integer",
			{"playerstate whichResource", "player sourcePlayer", "player otherPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    playerstate whichResource: descr" "\n"
			"    player sourcePlayer: descr" "\n"
			"    player otherPlayer: descr" 
		));

	definitions.add(
		new Function(
			"IsPlayerFlagSetBJ",
			"boolean",
			{"playerstate whichPlayerFlag", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    playerstate whichPlayerFlag: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"AddResourceAmountBJ",
			"nothing",
			{"integer delta", "unit whichUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer delta: descr" "\n"
			"    unit whichUnit: descr" 
		));

	definitions.add(
		new Function(
			"GetConvertedPlayerId",
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
			"ConvertedPlayer",
			"player",
			{"integer convertedPlayerId"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer convertedPlayerId: descr" 
		));

	definitions.add(
		new Function(
			"GetRectWidthBJ",
			"real",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"GetRectHeightBJ",
			"real",
			{"rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"BlightGoldMineForPlayerBJ",
			"unit",
			{"unit goldMine", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit goldMine: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"BlightGoldMineForPlayer",
			"unit",
			{"unit goldMine", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit goldMine: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"GetLastHauntedGoldMine",
			"unit",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IsPointBlightedBJ",
			"boolean",
			{"location where"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location where: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerColorBJEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetPlayerColorBJ",
			"nothing",
			{"player whichPlayer", "playercolor color", "boolean changeExisting"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    playercolor color: descr" "\n"
			"    boolean changeExisting: descr" 
		));

	definitions.add(
		new Function(
			"SetPlayerUnitAvailableBJ",
			"nothing",
			{"integer unitId", "boolean allowed", "player whichPlayer"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer unitId: descr" "\n"
			"    boolean allowed: descr" "\n"
			"    player whichPlayer: descr" 
		));

	definitions.add(
		new Function(
			"LockGameSpeedBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"UnlockGameSpeedBJ",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"IssueTargetOrderBJ",
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
			"IssuePointOrderLocBJ",
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
			"IssueTargetDestructableOrder",
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
			"IssueTargetItemOrder",
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
			"IssueImmediateOrderBJ",
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
			"GroupTargetOrderBJ",
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
			"GroupPointOrderLocBJ",
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
			"GroupImmediateOrderBJ",
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
			"GroupTargetDestructableOrder",
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
			"GroupTargetItemOrder",
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
			"GetDyingDestructable",
			"destructable",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetUnitRallyPoint",
			"nothing",
			{"unit whichUnit", "location targPos"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    location targPos: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitRallyUnit",
			"nothing",
			{"unit whichUnit", "unit targUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    unit targUnit: descr" 
		));

	definitions.add(
		new Function(
			"SetUnitRallyDestructable",
			"nothing",
			{"unit whichUnit", "destructable targDest"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit whichUnit: descr" "\n"
			"    destructable targDest: descr" 
		));

	definitions.add(
		new Function(
			"SaveDyingWidget",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetBlightRectBJ",
			"nothing",
			{"boolean addBlight", "player whichPlayer", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean addBlight: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"SetBlightRadiusLocBJ",
			"nothing",
			{"boolean addBlight", "player whichPlayer", "location loc", "real radius"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    boolean addBlight: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    real radius: descr" 
		));

	definitions.add(
		new Function(
			"GetAbilityName",
			"string",
			{"integer abilcode"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer abilcode: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingVisibility",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeStartingResources",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"ReducePlayerTechMaxAllowed",
			"nothing",
			{"player whichPlayer", "integer techId", "integer limit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    integer techId: descr" "\n"
			"    integer limit: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingHeroLimit",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTrainedUnitIsHeroBJFilter",
			"boolean",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeGrantItemsToHero",
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
			"MeleeGrantItemsToTrainedHero",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeGrantItemsToHiredHero",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeGrantHeroItems",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeClearExcessUnit",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeClearNearbyUnits",
			"nothing",
			{"real x", "real y", "real range"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real x: descr" "\n"
			"    real y: descr" "\n"
			"    real range: descr" 
		));

	definitions.add(
		new Function(
			"MeleeClearExcessUnits",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeEnumFindNearestMine",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeFindNearestMine",
			"unit",
			{"location src", "real range"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location src: descr" "\n"
			"    real range: descr" 
		));

	definitions.add(
		new Function(
			"MeleeRandomHeroLoc",
			"unit",
			{"player p", "integer id1", "integer id2", "integer id3", "integer id4", "location loc"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player p: descr" "\n"
			"    integer id1: descr" "\n"
			"    integer id2: descr" "\n"
			"    integer id3: descr" "\n"
			"    integer id4: descr" "\n"
			"    location loc: descr" 
		));

	definitions.add(
		new Function(
			"MeleeGetProjectedLoc",
			"location",
			{"location src", "location targ", "real distance", "real deltaAngle"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location src: descr" "\n"
			"    location targ: descr" "\n"
			"    real distance: descr" "\n"
			"    real deltaAngle: descr" 
		));

	definitions.add(
		new Function(
			"MeleeGetNearestValueWithin",
			"real",
			{"real val", "real minVal", "real maxVal"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    real val: descr" "\n"
			"    real minVal: descr" "\n"
			"    real maxVal: descr" 
		));

	definitions.add(
		new Function(
			"MeleeGetLocWithinRect",
			"location",
			{"location src", "rect r"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    location src: descr" "\n"
			"    rect r: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsHuman",
			"nothing",
			{"player whichPlayer", "location startLoc", "boolean doHeroes", "boolean doCamera", "boolean doPreload"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location startLoc: descr" "\n"
			"    boolean doHeroes: descr" "\n"
			"    boolean doCamera: descr" "\n"
			"    boolean doPreload: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsOrc",
			"nothing",
			{"player whichPlayer", "location startLoc", "boolean doHeroes", "boolean doCamera", "boolean doPreload"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location startLoc: descr" "\n"
			"    boolean doHeroes: descr" "\n"
			"    boolean doCamera: descr" "\n"
			"    boolean doPreload: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsUndead",
			"nothing",
			{"player whichPlayer", "location startLoc", "boolean doHeroes", "boolean doCamera", "boolean doPreload"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location startLoc: descr" "\n"
			"    boolean doHeroes: descr" "\n"
			"    boolean doCamera: descr" "\n"
			"    boolean doPreload: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsNightElf",
			"nothing",
			{"player whichPlayer", "location startLoc", "boolean doHeroes", "boolean doCamera", "boolean doPreload"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location startLoc: descr" "\n"
			"    boolean doHeroes: descr" "\n"
			"    boolean doCamera: descr" "\n"
			"    boolean doPreload: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsUnknownRace",
			"nothing",
			{"player whichPlayer", "location startLoc", "boolean doHeroes", "boolean doCamera", "boolean doPreload"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    location startLoc: descr" "\n"
			"    boolean doHeroes: descr" "\n"
			"    boolean doCamera: descr" "\n"
			"    boolean doPreload: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingUnits",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeStartingUnitsForPlayer",
			"nothing",
			{"race whichRace", "player whichPlayer", "location loc", "boolean doHeroes"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    race whichRace: descr" "\n"
			"    player whichPlayer: descr" "\n"
			"    location loc: descr" "\n"
			"    boolean doHeroes: descr" 
		));

	definitions.add(
		new Function(
			"PickMeleeAI",
			"nothing",
			{"player num", "string s1", "string s2", "string s3"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player num: descr" "\n"
			"    string s1: descr" "\n"
			"    string s2: descr" "\n"
			"    string s3: descr" 
		));

	definitions.add(
		new Function(
			"MeleeStartingAI",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"LockGuardPosition",
			"nothing",
			{"unit targ"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit targ: descr" 
		));

	definitions.add(
		new Function(
			"MeleePlayerIsOpponent",
			"boolean",
			{"integer playerIndex", "integer opponentIndex"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer playerIndex: descr" "\n"
			"    integer opponentIndex: descr" 
		));

	definitions.add(
		new Function(
			"MeleeGetAllyStructureCount",
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
			"MeleeGetAllyCount",
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
			"MeleeGetAllyKeyStructureCount",
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
			"MeleeDoDrawEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeDoVictoryEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeDoDefeat",
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
			"MeleeDoDefeatEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeDoLeave",
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
			"MeleeRemoveObservers",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeCheckForVictors",
			"force",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeCheckForLosersAndVictors",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeGetCrippledWarningMessage",
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
			"MeleeGetCrippledTimerMessage",
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
			"MeleeGetCrippledRevealedMessage",
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
			"MeleeExposePlayer",
			"nothing",
			{"player whichPlayer", "boolean expose"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    boolean expose: descr" 
		));

	definitions.add(
		new Function(
			"MeleeExposeAllPlayers",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeCrippledPlayerTimeout",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleePlayerIsCrippled",
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
			"MeleeCheckForCrippledPlayers",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeCheckLostUnit",
			"nothing",
			{"unit lostUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit lostUnit: descr" 
		));

	definitions.add(
		new Function(
			"MeleeCheckAddedUnit",
			"nothing",
			{"unit addedUnit"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit addedUnit: descr" 
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionConstructCancel",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionUnitDeath",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionUnitConstructionStart",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionPlayerDefeated",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionPlayerLeft",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerActionAllianceChange",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeTriggerTournamentFinishSoon",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeWasUserPlayer",
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
			"MeleeTournamentFinishNowRuleA",
			"nothing",
			{"integer multiplier"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer multiplier: descr" 
		));

	definitions.add(
		new Function(
			"MeleeTriggerTournamentFinishNow",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MeleeInitVictoryDefeat",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"CheckInitPlayerSlotAvailability",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetPlayerSlotAvailable",
			"nothing",
			{"player whichPlayer", "mapcontrol control"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    player whichPlayer: descr" "\n"
			"    mapcontrol control: descr" 
		));

	definitions.add(
		new Function(
			"TeamInitPlayerSlots",
			"nothing",
			{"integer teamCount"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer teamCount: descr" 
		));

	definitions.add(
		new Function(
			"MeleeInitPlayerSlots",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"FFAInitPlayerSlots",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"OneOnOneInitPlayerSlots",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitGenericPlayerSlots",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDNCSoundsDawn",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDNCSoundsDusk",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDNCSoundsDay",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"SetDNCSoundsNight",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitDNCSounds",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitBlizzardGlobals",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitQueuedTriggers",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitMapRects",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitSummonableCaps",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"UpdateStockAvailability",
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
			"UpdateEachStockBuildingEnum",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"UpdateEachStockBuilding",
			"nothing",
			{"itemtype iType", "integer iLevel"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    itemtype iType: descr" "\n"
			"    integer iLevel: descr" 
		));

	definitions.add(
		new Function(
			"PerformStockUpdates",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"StartStockUpdates",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RemovePurchasedItem",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitNeutralBuildings",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"MarkGameStarted",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"DetectGameStarted",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"InitBlizzard",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RandomDistReset",
			"nothing",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"RandomDistAddItem",
			"nothing",
			{"integer inID", "integer inChance"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    integer inID: descr" "\n"
			"    integer inChance: descr" 
		));

	definitions.add(
		new Function(
			"RandomDistChoose",
			"integer",
			{},
			"\n"
			"descr"
		));

	definitions.add(
		new Function(
			"UnitDropItem",
			"item",
			{"unit inUnit", "integer inItemID"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    unit inUnit: descr" "\n"
			"    integer inItemID: descr" 
		));

	definitions.add(
		new Function(
			"WidgetDropItem",
			"item",
			{"widget inWidget", "integer inItemID"},
			"\n"
			"descr"
			"\n\n"
			"Parameters\n---------------------------------------------------------------------\n"
			"    widget inWidget: descr" "\n"
			"    integer inItemID: descr" 
		));
}