#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 1 2023
	Evan Holloway Nov 11 2023

	Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the game do some research (e.g., on the web using Google).
	Research is a common task for programmers. Use a switch-statement to solve this exercise. Also, the machine should give random answers
	(i.e., select the next rock, paper, or scissors randomly). Real randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next value.”
	If you build the vector into the program, it will always play the same game, so maybe you should let the user enter some values.
	Try variations to make it less easy for the user to guess which move the machine will make next.
*/

int main() {
	
	char hand;
	vector<char> comp_hand = { 'r', 'p','s' };
	const int choice_range = comp_hand.size();
	cout << "Please enter what hand you would like to play:\n";
	cout << "Rock: 'r', Paper: 'p', Scissor: 's'\n";

	while (cin >> hand) {

		char comp_choice = comp_hand[randint(choice_range - 1)];
		cout << "my choice: " << comp_choice << " Your choice: " << hand << '\n';

		switch (hand) {
		case 'r':
			if (comp_choice == 'p')
				cout << "Ha, I win this round\n";
			else if (comp_choice == 'r')
				cout << "Darn, a tie!\n";
			else if (comp_choice == 's')
				cout << "Oh no, you won this round\n";
			break;
		case 'p':
			if (comp_choice == 'p')
				cout << "Darn, a tie!\n";
			else if (comp_choice == 'r')
				cout << "Oh no, you won this round\n";
			else if (comp_choice == 's')
				cout << "Ha, I win this round\n";
			break;
		case 's':
			if (comp_choice == 'p')
				cout << "Oh no, you won this round\n";
			else if (comp_choice == 'r')
				cout << "Ha, I win this round\n";
			else if (comp_choice == 's')
				cout << "Darn, a tie!\n";
			break;

		}
	}

	keep_window_open();
	return 0;
}