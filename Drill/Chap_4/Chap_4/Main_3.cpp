#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Augment the program so that it writes the line the numbers are equal (only) if they are equal.
*/

int main()
{
	cout << "Please enter the numbers you would like printed, two at a time. Input terminated by '|':\n";

	int input_1 = 0;
	int input_2 = 0;

	while (cin >> input_1 >> input_2) {
		if (input_1 == input_2)
			cout << "The numbers are equal.\n";
		else {
			cout << "the smaller value is: " << min(input_1, input_2) << '\n';
			cout << "the larger value is: " << max(input_1, input_2) << '\n';
		}
	}

	keep_window_open();
	return 0;
}