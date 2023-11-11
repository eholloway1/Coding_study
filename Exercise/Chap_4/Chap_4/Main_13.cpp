#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called the “Sieve of Eratosthenes.”
	If you don’t know that method, get on the web and look it up. Write your program using this method.
*/

int main() {
	const int n = 30;

	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	cout << "Prime numbers smaller than " << n << ": ";
	for (int p = 2; p <= n; p++) {
		if (prime[p])
			cout << p << " ";
	}
	cout << '\n';

	keep_window_open();
	return 0;
}