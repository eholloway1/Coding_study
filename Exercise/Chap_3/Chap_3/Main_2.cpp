#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles.
	Hint: There are 1.609 kilometers to the mile.
*/

int main()
{
	cout << "Please enter the miles you would like converted to kilometers (followed by enter):\n";
	double miles;
	cin >> miles;

	double kilometers = miles * 1.609;
	cout << miles << "mi == " << kilometers << "km.\n";

	keep_window_open();
	return 0;
}