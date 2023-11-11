#include "../../../Depends/std_lib_facilities.h"

int add_square(int); // aquares via adding int x to sum x-times

int main() {



	keep_window_open();
	return 0;
}

int add_square(int x) {
	int sum = 0;
	for (int i = 0; i < x; i++) {
		sum += x;
	}
	return sum;
}