#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Do exercise 6, but with three string values. So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/


int main()
{
	cout << "Please enter thr.ee string values to compare, followed by enter:\n";
	string val1;
	string val2;
	string val3;
	cin >> val1 >> val2 >> val3;
	//cout << val1 << '\n' << val2 << '\n' << val3 << '\n';
	
	if (val1 < val2 && val2 < val3)
		cout << val1 << " " << val2 << " " << val3 << '\n';
	else if (val1 < val3 && val2 > val3)
		cout << val1 << " " << val3 << " " << val2 << '\n';
	else if (val2 > val1 && val1 < val3)
		cout << val2 << " " << val1 << val3 << '\n';
	else if (val2 < val3 && val1 > val3)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val3 < val2 && val2 < val1)
		cout << val3 << " " << val2 << " " << val1 << " " << '\n';
	else if (val3 < val1 && val2 > val1)
		cout << val3 << " " << val1 << " " << val2 << '\n';
	else if (val1 == val2 && val1 < val3)
		cout << val3 << " " << val2 << " " << val1 << '\n';
	else if (val2 == val3 && val2 < val1)
		cout << val1 << " " << val3 << " " << val2 << '\n';
	else if (val1 == val3 && val1 < val2)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val1 == val2 && val1 > val3)
		cout << val1 << " " << val2 << " " << val3 << '\n';
	else if (val2 == val3 && val2 > val1)
		cout << val2 << " " << val3 << " " << val1 << '\n';
	else if (val1 == val3 && val1 > val2)
		cout << val1 << " " << val3 << " " << val2 << '\n';

	keep_window_open();
	return 0;
}