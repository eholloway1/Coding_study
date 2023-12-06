#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 13 2023
	Evan Holloway Nov 14 2023

	Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add the name to a vector called names and the number to a vector called scores 
	(in corresponding positions, so that if names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and terminate with an error message if a name is entered twice.
	Write out all the (name,score) pairs, one per line.
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

	for (int i = 0; i < names.size(); i++) {
		cout << "Name: " << names[i] << ", Score: " << scores[i];
	}

	keep_window_open();
	return 0;
}