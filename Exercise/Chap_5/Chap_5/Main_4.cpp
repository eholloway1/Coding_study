#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 22 2023

    Do exercise 3 again, but this time handle the error inside ctok().
*/

double ctok(double c)   // converts Celsius to Kelvin
{
    if (c < 273.15)
        error("trying to convert to under 0k not possible");
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
    // double k = ctok("c"); passing string argument "c" insteaad of variable c // convert temperature
    double k = ctok(c);
    // Cout << k << '/n'; cout is not capitalized, new line is '\n' print out temperature
    cout << k << '\n';
}
