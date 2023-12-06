#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023
	
	Modify the program above (exercise 4) to ask the user to enter floating-point values and store them in double variables.
	Compare the outputs of the two programs for some inputs of your choice.
	Are the results the same? Should they be? What’s the difference?
*/


int main()
{
	cout << "Please enter the float values you'd like to use, seperated by a space and followed by 'enter':";
	double val1;
	double val2;
	cin >> val1 >> val2;

	if (val1 < val2)
		cout << val1 << " is smaller, " << val2 << " is larger\n";
	else if (val1 > val2)
		cout << val2 << " is smaller, " << val1 << " is larger\n";
	cout << "The sum of " << val1 << " and " << val2 << " is: " << val1 + val2 << '\n';
	cout << "The difference of " << val1 << " and " << val2 << " is: " << val1 - val2 << '\n';
	cout << "The product of " << val1 << " and " << val2 << " is: " << val1 * val2 << '\n';
	cout << "The ratio of " << val1 << " and " << val2 << " is: " << val1 / val2 << '\n';

	keep_window_open();
	return 0;
}