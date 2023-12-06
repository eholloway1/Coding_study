#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 14 2023

	Modify the program from exercise 19 so that when you enter a name, the program will output the corresponding score or name not found.
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

	cout << "Enter the name and corresponding score you'd like to see:\n";
	while (cin >> name) {
		for (int i = 0; i < names.size(); i++) {
			if (names[i] == name) {
				cout << name << "'s score is: " << scores[i] << '\n';
			}
		}
	}

	keep_window_open();
	return 0;
}