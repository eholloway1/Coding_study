#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered.
	When the loop ends, print the smallest, the largest, the number of values, and the sum of values. 
	Note that to keep the sum, you have to decide on a unit to use for that sum; use meters*.

	*I opt to use centimeters
*/

int main()
{
	cout << "Please enter the measurement you would like printed (val_unit, m/in/cm/ft accepted, input terminated by '|'):\n";

	double input = 0.0;
	string unit = " ";
	string small_unit = " ";
	string larg_unit = " ";
	double smallest = 10000000000;
	double largest = -10000000000;
	const double meter_to_cm = 100.0; //100 cm per meter
	const double inch_to_cm = 2.54; //2.54 cm per in
	const double foot_to_inch = 12; //12 in per foot
	double sum = 0.0;
	int i = 0;

	while (cin >> input >> unit) {
		cout << "You entered : " << input << unit << '\n';
		double convert = 0.0;
		bool legal = true;

		if (unit == "m") {
			convert = input * meter_to_cm;
			i++;
		}
		else if (unit == "in") {
			convert = input * inch_to_cm;
			i++;
		}
		else if (unit == "ft") {
			convert = (input * foot_to_inch) * inch_to_cm;
			i++;
		}
		else if (unit == "cm") {
			convert = input;
			i++;
		}
		else {
			cout << "Please enter an accepted unit of measurement (m/in/cm/ft).\n";
			legal = false;
		}

		sum += convert;

		if (convert < smallest && legal == true) {
			smallest = convert;
			small_unit = unit;
		}
		if (convert > largest && legal == true) {
			largest = convert;
			larg_unit = unit;
		}
		cout << '\n';
	}

	cout << "The total number of accepted values entered is: " << i << '\n';
	cout << "The smallest measurement entered was: " << smallest << unit << '\n';
	cout << "The largest measurement entered was: " << largest << unit << '\n';
	cout << "The sum of all measurements (in cm) is: " << sum << '\n';

	keep_window_open();
	return 0;
}