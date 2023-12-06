#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 29 2023

	Implement a little guessing game called (for some obscure reason) “Bulls and Cows.” 
	The program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122)
	and it is the user’s task to discover those numbers by repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; 
	the response should be “1 bull and 1 cow” because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong position (a cow). 
	The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct order.

*/
vector<int> generate_vec(int);
void bull_cow_game();

int main()
try {
	bull_cow_game();

	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unkown error!\n";

	keep_window_open();
	return 1;
}
vector<int> generate_vec(int max_size) {
	vector<int> out;
	srand(time(nullptr)); //srand initialized to a run-time variable (here time(nullptr)) to simulate randomness
	for (int i = 0; i < max_size; i++) { //fill a vector with max_size ints between 1 and 4
		out.push_back(rand() % 4 + 1);
	}
	return out;
}

void bull_cow_game() {
	const int guesses = 4; //number of numbers players guess
	vector<int> game_vec = generate_vec(guesses);
	
	int bull = 0;
	int cow = 0;
	
	while (bull != 4) {
		bull = 0; //ensure bull and cow count resets every time
		cow = 0;
		vector<int> player_guess;
		cout << "Please enter your guesses\n";

		for (int i = 0; i < game_vec.size(); i++) {
			int guess;
			cin >> guess;
			player_guess.push_back(guess);
		}
		for (int i = 0; i < player_guess.size(); i++) {
			if (player_guess[i] == game_vec[i])
				bull++;
			else
				cow++;
		}
		cout << bull << " bull " << cow << " cow\n";
		
	}
}

