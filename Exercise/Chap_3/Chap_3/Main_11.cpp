#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023

	Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins)
	and one-dollar coins (100-cent coins). Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” Then your program should print out something like this:
	You have 23 pennies.
	You have 17 nickels.
	You have 14 dimes.
	You have 7 quarters.
	You have 3 half dollars.
	The value of all of your coins is 573 cents. Make some improvements: if only one of a coin is reported, make the output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
	Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/


int main()
{
	cout << "Please enter the number of pennies you have:\n";
	int penny;
	cin >> penny;
	cout << "Enter the amount of nickels you have:\n";
	int nickel;
	cin >> nickel;
	cout << "Enter the amount of dimes you have:\n";
	int dime;
	cin >> dime;
	cout << "Enter the amount of quarters you have:\n";
	int quarter;
	cin >> quarter;
	cout << "Enter the amount of Half-dollars:\n";
	int half;
	cin >> half;
	cout << "Enter the amount of dollar coins you have:\n";
	int dollar;
	cin >> dollar;

	if (penny == 1)
		cout << "you have " << penny << " penny\n";
	else
		cout << "you have " << penny << " pennies\n";
	if (nickel == 1)
		cout << "you have " << nickel << " nickel\n";
	else
		cout << "you have " << nickel << " nickels\n";
	if (dime == 1)
		cout << "you have " << dime << " dime\n";
	else
		cout << "you have " << dime << " dimes\n";
	if (quarter == 1)
		cout << "you have " << quarter << " quarter\n";
	else
		cout << "you have " << quarter << " quarters\n";
	if (half == 1)
		cout << "you have " << half << " half-dollar\n";
	else
		cout << "you have " << half << " half-dollars\n";
	if (dollar == 1)
		cout << "you have " << dollar << " dollar-coin\n";
	else
		cout << "you have " << dollar << " dollar-coins\n";

	keep_window_open();
	return 0;
}