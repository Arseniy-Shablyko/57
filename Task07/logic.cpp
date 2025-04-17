#include "logic.h"

bool search(int* array, int value, int first, int last) {
	if (first > last) {
		return false;
	}

	int middel = (last + first) / 2;
	if (array[middel] == value) {
		return true;
	}

	if (value > array[middel]) {
		first = middel + 1;
	}
	else {
		last = middel - 1;
	}

	return search(array, value, first, last);
}

bool binary_search(int* array, int size, int value) {
	if (!array || size <= 0) {
		return false;
	}

	return search(array, size, 0, size - 1);
}