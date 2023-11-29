#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 29 2023

	Implement a little guessing game called (for some obscure reason) “Bulls and Cows.” 
	The program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122)
	and it is the user’s task to discover those numbers by repeated guesses. Say the number to be guessed is 1234 and the user guesses 1359; 
	the response should be “1 bull and 1 cow” because the user got one digit (1) right and in the right position (a bull) and one digit (3) right but in the wrong position (a cow). 
	The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct order.

*/
vector<int> generate_vec(vector<int>);
void bull_cow_game();

int main()
try {
	
	keep_window_open();
	return 0;
}
catch (...) {

	keep_window_open();
	return 1;
}
vector<int> generate_vec(vector<int>) {

}

void bull_cow_game() {

}
