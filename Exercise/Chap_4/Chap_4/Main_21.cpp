#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 14 2023

	Modify the program from exercise 19 so that when you enter an integer, the program will output all the names with that score or score not found.

*/

int main() {
	vector<string> names;
	vector<int> scores;
	cout << "Please input the names and scores you would like stored, terminate input with 'NoName 0' entry:\n";
	string name;
	int score;

	for (; cin >> name >> score;) {
		if (name == "NoName" && score == 0)
			break;
		if (names.size() > 0) {
			for (int i = 0; i < names.size(); i++) {
				if (names[i] == name && scores[i] == score) {
					cout << "Duplicate entrance detected, terminating input.\n";
					break;
				}
			}
		}
		names.push_back(name);
		scores.push_back(score);
	}

	cout << "Enter what score you'd like to know who made:\n";
	while (cin >> score) {
		cout << "People who scored " << score << ":\n";

		for (int i = 0; i < scores.size(); i++) {
			if (scores[i] == score) {
				cout << names[i] << " ";
			}
		}
		cout << '\n';
	}

	keep_window_open();
	return 0;
}