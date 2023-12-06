#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will check if a number is prime
	(i.e., see if the number can be divided by a prime number smaller than itself) using a vector of primes in order
	(so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes from 1 to 100,
	checks each number to see if it is a prime, and stores each prime found in a vector. Write another loop that lists the primes you found.
	You might check your result by comparing your vector of prime numbers with primes. Consider 2 the first prime.
*/

int main() {
	const int val_range = 100; // range of values we are seeking primes in
	vector<int> primes = { 2 }; // We are assuming first prime is 2
	bool is_prime = true; // bool to check if we have found a prime
	
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