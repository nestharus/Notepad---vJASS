#pragma once

#include "definition_db.hpp"
#include "function.hpp"

using namespace std;

void registerNatives(DefinitionDB& definitions) {
	/*
	definitions.add(
		new Function(
		"name",
		"returns",
	{ "parameter" },
	"\n"
	"descr"
	"\n\n"
	"Paramaters\n---------------------------------------------------------------------\n"
	"    name: descr."
	));
	*/

	definitions.add(
		new Function(
			"ConvertRace", 
			"race", 
			{ "integer i" }, 
			"\n"
			"Returns the race that corresponds to the given integer"
			"\n\n"
			"Paramaters\n---------------------------------------------------------------------\n"
			"    integer i: The integer representation of the race."
		));
}