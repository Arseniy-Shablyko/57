#include "logic.h"
#include <cassert>

int main() {
	int array1[10]{1,2,3,4,5,6,7,8,9,10};
	int value1 = 100;
	assert(binary_search(array1, 10, value1));

	int array2[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int value2 = 6;
	assert(binary_search(array2, 10, value2));
	

	cout << "All test pass successful" << endl;

	return 0;
}