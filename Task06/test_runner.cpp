#include "logic.h"
#include <cassert>

int main() {
	assert(count_divider((-1) == 0));
	assert(count_divider((-100) == 0));
	assert(count_divider((0) == 0));
	assert(count_divider((1) == 0));
	assert(count_divider((2) == 0));
	assert(count_divider((3) == 0));
	assert(count_divider((4) == 1));
	assert(count_divider((6) == 2));
	assert(count_divider((24) == 6));
	assert(count_divider((100) == 7));

	cout << "All test pass successful" << endl;

	return 0;
}