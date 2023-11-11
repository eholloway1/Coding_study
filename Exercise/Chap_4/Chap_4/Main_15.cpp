#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Write a program that takes an input value n and then finds the first n primes.
*/

int main() {
	int val_range; // range of values we are seeking primes in
	vector<int> primes = { 2 }; // We are assuming first prime is 2
	bool is_prime = true; // bool to check if we have found a prime
	int found_prime = primes.size(); //primes has at least one prime initially

	cout << "Please enter the max number of primes you would like to search for: ";
	cin >> val_range;
	cout << '\n';

	for (int i = primes[0]; found_prime < val_range; i++) { // We will start at the number after the first assumed prime
		for (int x : primes) {
			if (i % x == 0)
				is_prime = false;
		}
		if (is_prime == true) {
			primes.push_back(i);
			found_prime++;
		}
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