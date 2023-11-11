#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Write a program to test an integer value to determine if it is odd or even. As always, make sure your output is clear and complete.
	In other words, don’t just output yes or no. Your output should stand alone, like The value 4 is an even number.
*/


int main()
{
	cout << "Please enter the integer value you'd like evaluated, followed by enter:\n";
	int val;
	cin >> val;

	if (val % 2 == 0)
		cout << "The value " << val << " is an even number\n";
	else
		cout << "The value " << val << " is an odd number\n";

	keep_window_open();
	return 0;
}