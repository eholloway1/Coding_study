#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023
	
	Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas.
	So, if the user enters the values 10 4 6, the output should be 4, 6, 10.
	If two values are the same, they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/

int main()
{
	cout << "Please enter three integer values to compare, followed by enter:\n";
	int val1;
	int val2;
	int val3;
	cin >> val1 >> val2 >> val3;

	if (val1 > val2 && val2 > val3)
		cout << val1 << " " << val2 << " " << val3 << '\n';
	else if (val1 > val3 && val2 < val3)
		cout << val1 << " " << val3 << " " << val2 << '\n';
	else if (val2 > val1 && val1 > val3)
		cout << val2 << " " << val1 << val3 << '\n';
	else if (val2 > val3 && val1 < val3)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val3 > val2 && val2 > val1)
		cout << val3 << " " << val2 << " " << val1 << " " << '\n';
	else if (val3 > val1 && val2 < val1)
		cout << val3 << " " << val1 << " " << val2 << '\n';
	else if (val1 == val2 && val1 > val3)
		cout << val3 << " " << val2 << " " << val1 << '\n';
	else if (val2 == val3 && val2 > val1)
		cout << val1 << " " << val3 << " " << val2 << '\n';
	else if (val1 == val3 && val1 > val2)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val1 == val2 && val1 < val3)
		cout << val1 << " " << val2 << " " << val3 << '\n';
	else if (val2 == val3 && val2 < val1)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val1 == val3 && val1 < val2)
		cout << val1 << " " << val3 << " " << val2 << '\n';

	keep_window_open();
	return 0;
}