#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	change the body of the loop so that it reads just one double each time around. Define two variables to keep track of which is the smallest and which is the largest value you have seen so far.
	Each time through the loop write out the value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so far, write the largest so far after the number.
*/

int main()
{
	cout << "Please enter the numbers you would like printed. Input terminated by '|':\n";

	double input = 0.0;
	double smallest = 10000000000;
	double largest = -10000000000;

	while (cin >> input) {
		cout << "You entered : " << input;
		if (input < smallest) {
			smallest = input;
			cout << " the smallest so far.";
		}
		if (input > largest) {
			largest = input;
			cout << " the largest so far.";
		}
		cout << '\n';
	}

	keep_window_open();
	return 0;
}