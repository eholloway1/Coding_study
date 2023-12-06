#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. 
	When the user inputs a number, the program should print out the corresponding digit. 
	Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters something that doesn’t correspond, such as stupid computer!.
*/


int main()
{
	cout << "Please enter the number you would like converted to an integer, followed by enter:\n";
	string value;
	cin >> value;

	if (value == "Zero" || value == "zero")
		cout << "0\n";
	else if (value == "One" || value == "one")
		cout << "1\n";
	else if (value == "Two" || value == "two")
		cout << "2\n";
	else if (value == "Three" || value == "three")
		cout << "3\n";
	else if (value == "Four" || value == "four")
		cout << "4\n";
	else
		cout << "Stupid computer!\n";

	keep_window_open();
	return 0;
}