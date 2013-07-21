#pragma once

#include "definition_db.hpp"
#include "function.hpp"

using namespace std;

void registerKeywords(DefinitionDB& definitions) {
	definitions.add(new Type("onInit"));
	definitions.add(new Type("onDestroy"));
	definitions.add(new Type("public"));
	definitions.add(new Type("private"));
	definitions.add(new Type("static"));
	definitions.add(new Type("extends"));
	definitions.add(new Type("array"));
	definitions.add(new Type("nothing"));
	definitions.add(new Type("struct"));
	definitions.add(new Type("endstruct"));
	definitions.add(new Type("method"));
	definitions.add(new Type("endmethod"));
	definitions.add(new Type("function"));
	definitions.add(new Type("endfunction"));
	definitions.add(new Type("uses"));
	definitions.add(new Type("requires"));
	definitions.add(new Type("library"));
	definitions.add(new Type("library_once"));
	definitions.add(new Type("endlibrary"));
	definitions.add(new Type("scope"));
	definitions.add(new Type("endscope"));
	definitions.add(new Type("takes"));
	definitions.add(new Type("return"));
	definitions.add(new Type("returns"));
	definitions.add(new Type("call"));
}