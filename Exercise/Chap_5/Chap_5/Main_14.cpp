#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 30 2023
	Evan Holloway Dec 10 2023
	Evan Holloway Dec 11 2023

	Read (day-of-the-week,value) pairs from standard input. For example: Tuesday 23 Friday 56 Tuesday –3 Thursday 99 
	Collect all the values for each day of the week in a vector<int>. Write out the values of the seven day-of-the-week vectors. 
	Print out the sum of the values in each vector. Ignore illegal days of the week, such as Funday, but accept common synonyms such as Mon and monday. 
	Write out the number of rejected values.
*/

void Get_Day_Values(vector<int>&, vector<int>&, vector<int>&, vector<int>&, vector<int>&, vector<int>&, vector<int>&);
void Print_Day_values(vector<int>, vector<int>, vector<int>, vector<int>, vector<int>, vector<int>, vector<int>);

int main()
try {
	vector<int> Sunday_Vals;
	vector<int> Monday_Vals;
	vector<int> Tuesday_Vals;
	vector<int> Wednesday_Vals;
	vector<int> Thursday_Vals;
	vector<int> Friday_Vals;
	vector<int> Saturday_Vals;
	
	Get_Day_Values(Sunday_Vals, Monday_Vals, Tuesday_Vals, Wednesday_Vals, Thursday_Vals, Friday_Vals, Saturday_Vals);
	Print_Day_values(Sunday_Vals, Monday_Vals, Tuesday_Vals, Wednesday_Vals, Thursday_Vals, Friday_Vals, Saturday_Vals);

	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unkown error!\n";
	keep_window_open();
	return 1;
}

void Get_Day_Values(vector<int>& Sun_val, vector<int>& Mon_val, vector<int>& Tues_val, vector<int>& Wed_val, vector<int>& Thur_val, vector<int>& Fri_val, vector<int>& Sat_val) {
	cout << "Please enter the days of the week and corresponding values you would like, seperated by 'Enter'.\n(Terminate input with the day '|'):\n";
	string day = "";
	int val = 0;

	while(true) {
		cin >> day;

		if(day == "|")
			return;

		cin >> val;

		transform(day.begin(), day.end(), day.begin(), ::tolower);

		if (day == "sunday" || day == "sun") {
			Sun_val.push_back(val);
		}
		else if (day == "monday" || day == "mon") {
			Mon_val.push_back(val);
		}
		else if (day == "tuesday" || day == "tues") {
			Tues_val.push_back(val);
		}
		else if (day == "wednesday" || day == "wed") {
			Wed_val.push_back(val);
		}
		else if (day == "thursday" || day == "thur") {
			Thur_val.push_back(val);
		}
		else if (day == "friday" || day == "fri") {
			Fri_val.push_back(val);
		}
		else if (day == "saturday" || day == "sat") {
			Sat_val.push_back(val);
		}
		cout << "day " << day << '\n';
		cout << "val " << val << '\n';
	}
	return;
}

void Print_Day_values(vector<int> Sun_val, vector<int> Mon_val, vector<int> Tues_val, vector<int> Wed_val, vector<int> Thur_val, vector<int> Fri_val, vector<int> Sat_val) {
	cout << "The value of the sundays is: \n";
	
	for (int i = 0; i < Sun_val.size(); i++) {
		cout << i << ": " << Sun_val[i];
	}
	cout << '\n';

	cout << "The value of the mondays is: \n";

	for (int i = 0; i < Mon_val.size(); i++) {
		cout << i << ": " << Mon_val[i];
	}
	cout << '\n';

	cout << "The value of the tuesdays is: \n";

	for (int i = 0; i < Tues_val.size(); i++) {
		cout << i << ": " << Tues_val[i];
	}
	cout << '\n';

	cout << "The value of the wednesdays is: \n";

	for (int i = 0; i < Wed_val.size(); i++) {
		cout << i << ": " << Wed_val[i];
	}
	cout << '\n';

	cout << "The value of the thursdays is: \n";

	for (int i = 0; i < Thur_val.size(); i++) {
		cout << i << ": " << Thur_val[i];
	}
	cout << '\n';

	cout << "The value of the fridays is: \n";

	for (int i = 0; i < Fri_val.size(); i++) {
		cout << i << ": " << Fri_val[i];
	}
	cout << '\n';

	cout << "The value of the Saturdays is: \n";

	for (int i = 0; i < Sat_val.size(); i++) {
		cout << i << ": " << Sat_val[i];
	}
	cout << '\n';

}
