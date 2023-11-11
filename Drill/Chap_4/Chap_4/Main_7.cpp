#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
	Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit indicator into a string.
	You may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space).
*/

int main()
{
	cout << "Please enter the measurement you would like printed (val_unit, m/in/cn/ft accepted, input terminated by '|'):\n";

	double input = 0.0;
	string unit = " ";
	double smallest = 10000000000;
	double largest = -10000000000;
	const double meter_to_cm = 100.0; //100 cm per meter
	const double inch_to_cm = 2.54; //2.54 cm per in
	const double foot_to_inch = 12; //12 in per foot

	while (cin >> input >> unit) {
		cout << "You entered : " << input << unit;
		double convert = 0.0;

		if (unit == "m")
			convert = input * meter_to_cm;
		else if (unit == "in")
			convert = input * inch_to_cm;
		else if (unit == "ft")
			convert = (input * foot_to_inch) * inch_to_cm;

		if (convert < smallest) {
			smallest = convert;
			cout << " the smallest so far.";
		}
		if (convert > largest) {
			convert = input;
			cout << " the largest so far.";
		}
		cout << '\n';
	}

	keep_window_open();
	return 0;
}