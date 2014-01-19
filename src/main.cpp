#include <iostream>
#include <fstream>

#include "types.hpp"
#include "constants.hpp"
#include "natives.hpp"
#include "bjs.hpp"
#include "bj_constants.hpp"
#include "ai_natives.hpp"
#include "keywords.hpp"

using namespace std;

void defnDump(DefinitionDB& definitions, ostream& out) {
	out << R"(<?xml version="1.0" encoding="Windows-1252" ?>)" << endl;
	out << R"(<NotepadPlus>)" << endl;
	out << R"(<AutoComplete language="vJASS">)" << endl;
	out << "<Environment ignoreCase = \"no\" startFunc = \"(\" stopFunc = \")\" paramSeparator = \",\" terminal = \"&#10;\" additionalWordChar = \".\" />" << endl;
	definitions.sort();
	definitions.dump(out);
	out << R"(</AutoComplete>)" << endl;
	out << R"(</NotepadPlus>)" << endl;
}

int main(int argc, char* argv[]) {
	ofstream file;

	file.open(argv[1]);
	if (file.is_open()) {
		DefinitionDB definitions;

		registerTypes(definitions);
		registerConstants(definitions);
		registerBJConstants(definitions);
		registerNatives(definitions);
		registerBJs(definitions);
		registerAINatives(definitions);
		registerKeywords(definitions);

		defnDump(definitions, file);

		file.close();
	} //if

	return 0;
}