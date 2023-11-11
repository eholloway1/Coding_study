#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to its corresponding spelled-out value; 
	e.g., the input 7 gives the output seven. Have the same program, using the same input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/

int main() {


	cout << "Please enter the value you would like to know the spelling or numeric representation of (0-9):\n";
	string input;
	cin >> input;

	if (input == "zero" || input == "0") {
		if (input == "zero")
			cout << "the numeric representation of zero is: 0\n";
		else
			cout << "0 is spelled zero\n";
	}
	else if (input == "one" || input == "1") {
		if (input == "one")
			cout << "the numeric representation of one is: 1\n";
		else
			cout << "1 is spelled one\n";
	}
	else if (input == "two" || input == "2") {
		if (input == "two")
			cout << "the numeric representation of two is: 2\n";
		else
			cout << "2 is spelled two\n";
	}
	else if (input == "three" || input == "3") {
		if (input == "three")
			cout << "the numeric representation of three is: 3\n";
		else
			cout << "3 is spelled three\n";
	}
	else if (input == "four" || input == "4") {
		if (input == "four")
			cout << "the numeric representation of four is: 4\n";
		else
			cout << "4 is spelled four\n";
	}
	else if (input == "five" || input == "5") {
		if (input == "five")
			cout << "the numeric representation of five is: 5\n";
		else
			cout << "5 is spelled five\n";
	}
	else if (input == "six" || input == "6") {
		if (input == "six")
			cout << "the numeric representation of six is: 6\n";
		else
			cout << "6 is spelled six\n";
	}
	else if (input == "seven" || input == "7") {
		if (input == "zero")
			cout << "the numeric representation of seven is: 7\n";
		else
			cout << "7 is spelled seven\n";
	}
	else if (input == "eight" || input == "8") {
		if (input == "eight")
			cout << "the numeric representation of eight is: 8\n";
		else
			cout << "8 is spelled eight\n";
	}
	else if (input == "nine" || input == "9") {
		if (input == "nine")
			cout << "the numeric representation of nine is: 9\n";
		else
			cout << "9 is spelled nine\n";
	}
	else
		cout << "Please input an accepted value, 0-9\n";
	
	keep_window_open();
	return 0;
}