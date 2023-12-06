#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 27 2023

	Modify the program from exercise 8 to use double instead of int.
	Also, make a vector of doubles containing the N–1 differences between adjacent values and write out that vector of differences.

*/

class range_err {};

int main()
try {
	cout << "Please enter how many of your number sequence you would like summed: "; //ask how many values in given sequence we are adding
	int x = 0;
	cin >> x;
	cout << '\n';
	int diff_vals = x - 1;
	
	if (x == 0) {
		cout << "The sum of " << x << " vals is " << x;
	}

	cout << "Please enter your sequence of values, terminated with '|'\n"; //ask for the sequence of values
	vector<double> vals;
	double num;
	for (; cin >> num;)
		vals.push_back(num);

	if (vals.size() < x) //do we have >= the number of values we want added
		throw(range_err());

	int sum = 0;
	int diff = vals[0];
	cout << "The sum of the first " << x << "numbers ( ";

	for (int i = 0; i < x; i++) {// print out what numbers we've added
		sum += vals[i];
		cout << vals[i] << " ";
	}
	cout << ") is " << sum << '\n';

	cout << "The difference of the first " << x - 1 << " numbers ( " << vals[0] << " ";

	for (int i = 1; i < x; i++) {
		diff -= vals[i];
		cout << vals[i] << " ";
	}

	cout << ") is " << diff << '\n';

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