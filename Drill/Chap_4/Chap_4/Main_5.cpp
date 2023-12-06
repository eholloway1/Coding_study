#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Change the program so that it writes out the numbers are almost equal after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100.
*/

int main()
{
	cout << "Please enter the numbers you would like printed, two at a time. Input terminated by '|':\n";

	double input_1 = 0.0;
	double input_2 = 0.0;

	while (cin >> input_1 >> input_2) {
		if (input_1 == input_2)
			cout << "The numbers are equal.\n";
		else {
			cout << "the smaller value is: " << min(input_1, input_2) << '\n';
			cout << "the larger value is: " << max(input_1, input_2) << '\n';
			if (input_1 - input_2 > 0 && (input_1 - input_2) < 1.0 / 100)
			{
				cout << "the numbers are almost equal.\n";
			}
			else if (input_2 - input_1 > 0 && (input_2 - input_1) < 1.0 / 100)
			{
				cout << "the numbers are almost equal.\n";
			}

		}
	}

	keep_window_open();
	return 0;
}