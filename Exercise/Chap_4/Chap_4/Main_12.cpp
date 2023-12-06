#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Modify the program described in the previous exercise (11) to take an input value max and then find all prime numbers from 1 to max.

*/

int main() {
	int val_range; // range of values we are seeking primes in
	vector<int> primes = { 2 }; // We are assuming first prime is 2
	bool is_prime = true; // bool to check if we have found a prime

	cout << "Please enter the max range you would like to search for primes in: ";
	cin >> val_range;
	cout << '\n';

	for (int i = primes[0] + 1; i < val_range; i++) { // We will start at the number after the first assumed prime
		for (int x : primes) {
			if (i % x == 0)
				is_prime = false;
		}
		if (is_prime == true)
			primes.push_back(i);
		else
			is_prime = true;
	}
	cout << "Found primes: ";
	for (int x : primes)
		cout << x << " ";
	cout << '\n';

	keep_window_open();
	return 0;
}