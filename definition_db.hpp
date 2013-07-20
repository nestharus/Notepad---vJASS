#pragma once

#include <stdint.h>
#include <ostream>

#include "type.hpp"
#include "quicksort.hpp"

using namespace std;

class DefinitionDB {
private:
	class DynamicArray {
	public:
		size_t size;
		uint32_t pos;
		Type** arr;

		DynamicArray() : size(4), pos(0) {
			arr = new Type*[size];
			arr[0] = 0;
		}

		~DynamicArray() {
			delete [] arr;
		}

		void resize(size_t newSize) {
			if (newSize == 0) return;

			Type** n_arr = new Type*[newSize];

			if (size < newSize)
				std::copy(arr, arr + size, n_arr);
			else
				std::copy(arr, arr + newSize, n_arr);

			delete [] arr;

			arr = n_arr;
			size = newSize;
		}

		Type** operator [](size_t index) {
			if (index >= size) {
				if (index < (index << 1)) {
					resize(static_cast<size_t>(index << 1));
				}
				else {
					resize(static_cast<size_t>(std::numeric_limits<uint32_t>::max()));
				}
			}

			if (index > pos) {
				arr[index] = 0;
			}

			return arr + index;
		}

		inline void push_back(Type& v) {
			*(*this)[pos++] = &v;
		}

		inline void set_pos(size_t p_pos) {
			pos = p_pos;
			*(*this)[pos] = 0;
		}
	};

	DynamicArray arr;

public:
	~DefinitionDB() {
		for (size_t i = 0; i < arr.pos; ++i) {
			delete *arr[i];
		}
	}

	inline void add(Type* t) {
		arr.push_back(*t);
	}

	inline void sort() {
		quicksort(arr.arr, arr.pos);
	}

	inline void dump(ostream& stream) {
		for (size_t i = 0; i < arr.pos; ++i) {
			(arr[i])[0]->dump(stream);
		}
	}
};