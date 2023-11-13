#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 13 2023

	In the drill, you wrote a program that, given a series of numbers, found the max and min of that series. 
	The number that appears the most times in a sequence is called the mode. Create a program that finds the mode of a set of positive integers.
*/

int main() {
	int mostSeen = 0;
	int numSeen = 0;
	int curr_num = 0;
	int curr_seen = 0;

	vector<int> vals;

	cout << "Please input the values you would like to know the mode of:\n";
	int inVal;
	for (; cin >> inVal;) {
		vals.push_back(inVal);
	}
	
	sort(vals);

	for (int x : vals) {
		if (x != curr_num) {
			if (curr_seen > mostSeen) {
				mostSeen = curr_seen;
				numSeen = curr_num;
			}
			curr_num = x;
			curr_seen = 0;
		}
		curr_seen++;
	}
	cout << "The mode of you values is: " << mostSeen
		<< "\nIt was seen " << numSeen << " times.\n";

	keep_window_open();
	return 0;
}