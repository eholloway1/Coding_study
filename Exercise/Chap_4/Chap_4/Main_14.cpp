#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Modify the program described in the previous exercise (13) to take an input value max and then find all prime numbers from 1 to max.

*/

int main() {
	cout << "What number would you like to find the primes up to: ";
	int n;
	cin >> n;
	cout << '\n';

	vector<bool> prime;
	for (int i = 0; i < n + 1; i++)
		prime.push_back(true);

	for (int p = 2; p * p <= n; p++) {
		if (prime.at(p) == true) {
			for (int i = p * p; i <= n; i += p)
				prime.at(i) = false;
		}
	}

	cout << "Prime numbers smaller than " << n << ": ";
	for (int p = 2; p <= n; p++) {
		if (prime.at(p))
			cout << p << " ";
	}
	cout << '\n';

	keep_window_open();
	return 0;
}