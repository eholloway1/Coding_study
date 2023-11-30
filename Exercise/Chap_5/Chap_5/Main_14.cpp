#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 30 2023

	Read (day-of-the-week,value) pairs from standard input. For example: Tuesday 23 Friday 56 Tuesday –3 Thursday 99 
	Collect all the values for each day of the week in a vector<int>. Write out the values of the seven day-of-the-week vectors. 
	Print out the sum of the values in each vector. Ignore illegal days of the week, such as Funday, but accept common synonyms such as Mon and monday. 
	Write out the number of rejected values.
*/

//Reject bad days of week. Only accept days in proper order? not asked for.
int main()
try {

	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unkown error!\n";
	keep_window_open();
	return 1;
}