#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.
*/

int main()
{
	cout << "Please enter the numbers you would like printed, two at a time. Input terminated by '|':\n";

	int input_1 = 0;
	int input_2 = 0;

	while (cin >> input_1 >> input_2) {
		cout << "the smaller value is: " << min(input_1, input_2) << '\n';
		cout << "the larger value is: " << max(input_1, input_2) << '\n';
	}

	keep_window_open();
	return 0;
}