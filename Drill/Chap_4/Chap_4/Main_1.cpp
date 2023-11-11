#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them.
	Exit the program when a terminating '|' is entered.
*/

int main()
{
	cout << "Please enter the numbers you would like printed, two at a time. Input terminated by '|':\n";

	int input_1 = 0;
	int input_2 = 0;

	while (cin >> input_1 >> input_2) {
		cout << input_1 << " " << input_2 << '\n';
	}


	keep_window_open();
	return 0;
}