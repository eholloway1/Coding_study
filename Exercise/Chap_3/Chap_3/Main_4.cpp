#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2.
	Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
*/


int main()
{
	cout << "Please enter the integer values you'd like to use, seperated by a space and followed by 'enter':";
	int val1;
	int val2;
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