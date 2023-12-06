#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 21 2023

	Absolute zero is the lowest temperature that can be reached; it is –273.15°C, or 0K. 
	The above program, even when corrected, will produce erroneous results when given a temperature below this. 
	Place a check in the main program that will produce an error if a temperature is given below –273.15°C.
*/

double ctok(double c)   // converts Celsius to Kelvin
{
   
    // int k = c + 273.15; k declared as int instead of double
    double k = c + 273.15;
    // return int missing return value and ';', returning uninitialized int ___
    return k;
}
int main()
{
    double c = 0; // declare input variable
    // cin >> d; undeclared variable 'd' //retrieve temperature to input variable
    cin >> c;
    if (c < -273.15)
        error("trying to convert to under 0k not possible");
    // double k = ctok("c"); passing string argument "c" insteaad of variable c // convert temperature
    double k = ctok(c);
    // Cout << k << '/n'; cout is not capitalized, new line is '\n' print out temperature
    cout << k << '\n';
}
