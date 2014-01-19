#pragma once

#include <cstring>
#include <stdint.h>

#include "type.hpp"

using namespace std;

inline int8_t strcmp2(const char* word1, const char* word2) {
	size_t letter = 0;
	while (word1[letter] != 0 && word2[letter] != 0 && word1[letter] == word2[letter]) ++letter;
	return word1[letter] - word2[letter];
}

void quicksort(Type** arr, int32_t elements) {
	Type* piv;
	int32_t beg[1000];
	int32_t end[1000];
	int32_t i = 0;
	int32_t L;
	int32_t R;

	beg[0] = 0; end[0] = elements;
	while (i >= 0) {
		L = beg[i]; R = end[i] - 1;
		if (L < R) {
			piv = arr[L];
			while (L < R) {
				while (strcmp2(arr[R]->name, piv->name) >= 0 && L < R) R--; if (L < R) arr[L++] = arr[R];
				while (strcmp2(arr[L]->name, piv->name) <= 0 && L < R) L++; if (L < R) arr[R--] = arr[L];
			}
			arr[L] = piv; beg[i + 1] = L + 1; end[i + 1] = end[i]; end[i++] = L;
		}
		else {
			i--;
		}
	}
}