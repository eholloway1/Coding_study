#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway

	Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius (formula in §4.3.3). Use estimation (§5.8) to see if your results are plausible.

*/

int main()
try {
	cout << "Please input the temp and unit you would like converted (c)elcius) and (f)arenheit accepted\n";
	double temp = 0.0;
	char unit = ' ';
	cin >> temp >> unit;
	switch (unit) {
	case 'f':
		temp = (temp - 32.0) * 5.0 / 9.0;
		cout << "The temp is " << temp << "c\n";
		break;
	case 'c':
		temp = temp * 9.0 / 5.0 + 32.0;
		cout << "The temp is " << temp << "f\n";
		break;
	default:
		cout << "huh, I don't know that unit of measure.\n";
		break;
	}
	keep_window_open();
	return 0;
}
catch (...) {
	cerr << "Unkown error\n";
	return 1;
}