#include "../../../Depends/std_lib_facilities.h"
/*
	
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Write a guessing game program. Users pick a number between 1 and 100. The program tries to figure out what that nubmer is
	with questions such as "is your number greater than 50?" It should be able to identify the number after aksing no more than 7 questions.
*/

int guess = 50;

int main() {
	const int guess_range = 101;
	int guesses = 7;
	list<int> val_range = {};
	for (int i = 1; i < guess_range; i++)
		val_range.push_back(i);

	for (int i = 0; i < guesses; i++) {
		cout << "Is your number less than " << guess << " ('y'\'n') ?\n";
		char answer;
		cin >> answer;

		if (answer == 'y')
		{
			val_range.remove_if([](int n) { return n > guess; });
			guess /= 2;
		}
		else if (answer == 'n') {
			val_range.remove_if([](int n) {return n < guess; });
			guess += guess * .25;
		}
		if (val_range.size() == 1)
			break;
	}

	const int out = randint(val_range.size() - 1);
	int i = 0;

	for (int x : val_range) {
		if (i == out)
			cout << "is your number " << x << " ('y'/'n')?\n";
		else
			i++;
	}
	char answer;
	cin >> answer;
	if (answer == 'y')
		cout << "Woohoo, I knew it!\n";
	else
		cout << "Darn!\n";

	keep_window_open();
	return 0;
}