#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 30 2023

	The program is a bit tedious because the answer is hard-coded into the program.
	Make a version where the user can play repeatedly (without stopping and restarting the program) and each game has a new set of four digits. 
	You can get four random digits by calling the random number generator randint(10) from std_lib_facilities.h four times. 
	You will note that if you run that program repeatedly, it will pick the same sequence of four digits each time you start the program.
	To avoid that, ask the user to enter a number (any number) and call seed_randint(n) where n is the number the user entered before calling randint(10).
	Such an n is called a seed, and different seeds give different sequences of random numbers.

*/

vector<int> generate_vec(int);
void bull_cow_game();

int main()
try {
	bull_cow_game();
	cout << "Thanks for playing!\n";

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
	cout << "Welcome to the bull and cow game. To quit, enter '-1'\n";

	while (true) {

		bull = 0; //ensure bull and cow count resets every time
		cow = 0;
		vector<int> player_guess;
		cout << "Please enter your guesses\n";

		for (int i = 0; i < game_vec.size(); i++) {
			int guess;
			cin >> guess;
			if (guess == -1)
				return;
			player_guess.push_back(guess);
		}
		for (int i = 0; i < player_guess.size(); i++) {
			if (player_guess[i] == game_vec[i])
				bull++;
			else
				cow++;
		}
		cout << bull << " bull " << cow << " cow\n";

		if (bull == 4)
			game_vec = generate_vec(guesses);
	}
}

