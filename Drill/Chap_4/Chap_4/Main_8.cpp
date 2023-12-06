#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Reject values without units or with “illegal” representations of units, such as y, yard, meter, km, and gallons.
*/

int main()
{
	cout << "Please enter the measurement you would like printed (val_unit, m/in/cm/ft accepted, input terminated by '|'):\n";

	double input = 0.0;
	string unit = " ";
	double smallest = 10000000000;
	double largest = -10000000000;
	const double meter_to_cm = 100.0; //100 cm per meter
	const double inch_to_cm = 2.54; //2.54 cm per in
	const double foot_to_inch = 12; //12 in per foot

	while (cin >> input >> unit) {
		cout << "You entered : " << input << unit << '\n';
		double convert = 0.0;
		bool legal = true;

		if (unit == "m")
			convert = input * meter_to_cm;
		else if (unit == "in")
			convert = input * inch_to_cm;
		else if (unit == "ft")
			convert = (input * foot_to_inch) * inch_to_cm;
		else if (unit == "cm")
			convert = input;
		else {
			cout << "Please enter an accepted unit of measurement (m/in/cm/ft).\n";
			legal = false;
		}

		if (convert < smallest && legal == true) {
			smallest = convert;
			cout << " the smallest so far.";
		}
		if (convert > largest && legal == true) {
			largest = convert;
			cout << " the largest so far.";
		}
		cout << '\n';
	}

	keep_window_open();
	return 0;
}