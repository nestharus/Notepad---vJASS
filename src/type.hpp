#pragma once

#include <string>
#include <ostream>

using namespace std;

class Type {
	public:
		const char* name;
		size_t len_name;
	

		Type(const char* name) {
			this->name = name;
			len_name = strlen(name);
		}

		virtual void dump(ostream& stream) {
			stream << "<KeyWord name=\"" << name << "\" />" << endl;
		}

		virtual ~Type() {

		}
};