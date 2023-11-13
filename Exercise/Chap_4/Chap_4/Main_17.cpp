#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 13 2023

	Write a program that finds the min, max, and mode of a sequence of strings.
*/

int main() {
	int mostSeen = 0;
	string stringSeen = "";
	string curr_string = "";
	int curr_seen = 0;

	vector<string> vals;

	cout << "Please input the strings you would like to know the mode of (terminate input with CTRL+Z):\n";
	string inVal;
	for (; cin >> inVal;) {
		vals.push_back(inVal);
	}

	sort(vals);

	for (string x : vals) {
		if (x != curr_string) {
			if (curr_seen > mostSeen) {
				mostSeen = curr_seen;
				stringSeen = curr_string;
			}
			curr_string = x;
			curr_seen = 0;
		}
		curr_seen++;
	}
		
	cout << "The mode of you values is: " << mostSeen
		<< "\nIt was seen " << stringSeen << " times.\n";
	cout << "The alphanumeric max of the strings entered is: " << vals[vals.size() - 1] << '\n';
	cout << "The alphanumeric min of the strings entered is: " << vals[0] << '\n';

	keep_window_open();
	return 0;
}