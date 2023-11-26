#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 25 2023

	Write a program that reads and stores a series of integers and then computes the sum of the first N integer
	12 23 13 24 15 | “The sum of the first 3 numbers ( 12 23 13 ) is 48.”
	Handle all inputs. For example, make sure to give an error message if the user asks for a sum of more numbers than there are in the vector.

*/

class range_err {};

int main()
try {
	cout << "Please enter how many of your number sequence you would like summed: "; //ask how many values in given sequence we are adding
	int x = 0;
	cin >> x;
	cout << '\n';

	cout << "Please enter your sequence of values, terminated with '|'\n"; //ask for the sequence of values
	vector<int> vals;
	int num;
	for (; cin >> num;)
		vals.push_back(num);

	if (vals.size() < x) //do we have >= the number of values we want added
		throw(range_err());

	int sum = 0;
	cout << "The sum of the first " << x << "numbers ( ";

	for (int i = 0; i < x; i++) {// print out what numbers we've added
		sum += vals[i];
		cout << vals[i] << " ";
	}
	cout << ") is " << sum << '\n';

	keep_window_open();
	return 0;
}
catch (range_err) {
	cerr << "You did not enter enough values to get a sum of that size\n";
	keep_window_open();
	return 2;
}
catch (...) {
	cerr << "I don't know that error\n";
	keep_window_open();
	return 1;
}