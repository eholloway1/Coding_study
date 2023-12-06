#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 26 2023
	Evan Holloway Nov 10 2023

	Keep all the values entered (converted into meters*) in a vector. At the end, write out those values.

	*I opt use centimeters in my implementation
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
	vector<double> entered_val;

	while (cin >> input >> unit) {
		double convert = 0.0;
		bool legal = true;

		cout << "You entered : " << input << unit << '\n';

		if (unit == "m") {
			convert = input * meter_to_cm;
			entered_val.push_back(convert);
		}
		else if (unit == "in") {
			convert = input * inch_to_cm;
			entered_val.push_back(convert);
		}
		else if (unit == "ft") {
			convert = (input * foot_to_inch) * inch_to_cm;
			entered_val.push_back(convert);
		}
		else if (unit == "cm") {
			convert = input;
			entered_val.push_back(convert);
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

	cout << "The entered measuremnts (in cm) were: ";
	for (double x : entered_val) {
		cout << x << " ";
	}
	cout << '\n';
	cout << "The smallest measurement entered was: " << smallest << unit << '\n';
	cout << "The largest measurement entered was: " << largest << unit << '\n';
	cout << "The sum of all measurements (in cm) is: " << sum << '\n';

	keep_window_open();
	return 0;
}