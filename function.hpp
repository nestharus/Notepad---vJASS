#pragma once

#include "type.hpp"

class Function : public Type {
	public:
		char** takes;
		const char* returns;
		const char* description;

		Function(const char* name, const char* returns, initializer_list<char*> takes, const char* description) : Type(name) {
			this->takes = new char*[takes.size() + 1];
			int index = 0;
			for (auto i : takes) { this->takes[index++] = i; }
			this->takes[takes.size()] = 0;
			this->returns = returns;
			this->description = description;
		}

		virtual void dump(ostream& stream) {
			stream << "<KeyWord name=\"" << name << "\" func=\"yes\">" << endl;
			stream << "\t<Overload retVal=\"" << returns << "\" descr=\"" << description << "\">" << endl;
			for (int i = 0; takes[i] != 0; ++i) {
				stream << "\t\t<Param name=\"" << takes[i] << "\" />" << endl;
			}
			stream << "\t</Overload>" << endl << "</KeyWord>" << endl;
		}

		virtual ~Function() {
			delete [] takes;
		}
};