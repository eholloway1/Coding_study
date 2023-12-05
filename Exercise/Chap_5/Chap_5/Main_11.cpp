#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 28 2023
	Evan Holloway Dec 04 2023

	Write a program that writes out the first so many values of the Fibonacci series, that is,
	the series that starts with 1 1 2 3 5 8 13 21 34. The next number of the series is the sum of the two previous ones. 
	Find the largest Fibonacci number that fits in an int.

*/

vector<int> generate_fib();

int main()
try {

	vector<int> fib = generate_fib();

	cout << "fib "; 
	for (int i = 0; i < fib.size(); i++) { // print every value put into fib
		cout << "(" << i << "): " << fib[i] << '\n';
	}

	keep_window_open();
	return 0;
}

catch (...) {
	cerr << "Unknown error\n";
	keep_window_open();
	return 1;
}

vector<int> generate_fib() {

	vector<int> fib = { 1, 1 };

	for (int i = fib.size() - 1;; i++) { // add up the next in fib sequence, check if it's over max integer value

		double sum = fib[i - 1];
		double temp = fib[i];

		if (sum + temp > INT32_MAX) { // are we going over max represented int
			break;
		}

		sum += temp;
		fib.push_back(narrow_cast<int>(sum)); // can we cast to sum without data loss
	}

}