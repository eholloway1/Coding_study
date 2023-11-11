#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 1 2023
	Evan Holloway Nov 11 2023

	There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name his reward.
	The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on, doubling for each of the 64 squares.
	That may sound modest, but there wasn’t that much rice in the empire! Write a program to calculate how many squares are required to give the inventor at least 1000 grains of rice,
	at least 1,000,000 grains, and at least 1,000,000,000 grains. You’ll need a loop, of course, and probably an int to keep track of which square you are at,
	an int to keep the number of grains on the current square, and an int to keep track of the grains on all previous squares.
	We suggest that you write out the value of all your variables for each iteration of the loop so that you can see what’s going on.
*/

int main() {
	const int chess_squares = 65; //64 squares on standard chess board
	vector<double> rice = { 1 }; // starting rice
	const int rice_mult = 2; //rice doubles per square

	for (int i = 1; i < chess_squares; i++) {
		rice.push_back(rice[i - 1] * 2);
	}

	int grand_grains = 0;
	int i = 1; //iterator
	for (auto x : rice) {
		int i = 1;
		if (x >= 1000) {
			grand_grains = i;
			break;
		}
		else
			i++;
	}

	int mil_grains = 0;
	i = 1; //reset iterator
	for (auto x : rice) {
		if (x >= 1000000) {
			mil_grains = i;
			break;
		}
		else
			i++;
	}

	int bil_grains = 0;
	i = 1; //reset iterator
	for (auto x : rice) {
		if (x >= 1000000000) {
			bil_grains = i;
			break;
		}
		else
			i++;
	}
	
	cout << "to have 1000 grains of rice, you need " << grand_grains << " squares of compensation.\n'";
	cout << "to have 1000000 grains of rice, you need " << mil_grains << " squares of compensation.\n'";
	cout << "to have 1000000000 grains of rice, you need " << bil_grains << " squares of compensation.\n'";
	
	keep_window_open();
	return 0;
}