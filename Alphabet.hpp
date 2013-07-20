#pragma once

#include <stdint.h>

class Alphabet {
	char* arr_;

	public:
		Alphabet(const char* alphabet) {
			arr_ = new char[128];

			for (size_t i = 0; alphabet[i] != 0; ++i) {
				arr_[alphabet[i]] = i;
			}
		}

		~Alphabet() {
			delete [] arr_;
		}

		inline char& operator [](uint32_t index) {
			return arr_[index];
		}

		inline const char* arr() {
			return this->arr_;
		}
};