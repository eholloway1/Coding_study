#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 1 2023
	Evan Holloway Nov 11 2023

	Try to calculate the number of rice grains that the inventor asked for in exercise 8 above. You’ll find that the number is so large that it won’t fit in an int or a double.
	Observe what happens when the number gets too large to represent exactly as an int and as a double.
	What is the largest number of squares for which you can calculate the exact number of grains (using an int)?
	What is the largest number of squares for which you can calculate the approximate number of grains (using a double)?
*/

int main() {
	const int chess_squares = 65;
	int rice = 1;

	cout << "int capactity:\n";
	for (int i = 1; i < chess_squares; i++) {
		cout << "Spot #" << i << " is worth " << rice << "grains of rice.\n";
		rice *= 2;
	}

	double rice_d = 1.0;
	cout << "double capacity:\n";
	for (int i = 1; i < chess_squares; i++) {
		cout << "Spot #" << i << " is worth " << rice_d << "grains of rice.\n";
		rice_d *= 2;
	}

	keep_window_open();
	return 0;
}