#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 25 2023

Add to the program so that it can also convert from Kelvin to Celsius.

*/

double ctok(double c, char u)   // converts Celsius to Kelvin
{
    double k = 0.0;

    switch (u) {
    case 'c':
        if (c < -273.15)
            error("trying to convert to under 0k not possible\n");
        k = c + 273.15;
        break;
    case 'k':
        if (c < 0)
            error("temp under 0k are not possible\n");
        k = c - 273.15;
        break;

    }

    // return int missing return value and ';', returning uninitialized int ___
    return k;
}
int main()
{
    cout << "Enter the temp and unit (k)elvin and (c)elcius accepted.\n";
    char unit = ' ';
    double c = 0; // declare input variable
    // cin >> d; undeclared variable 'd' //retrieve temperature to input variable
    cin >> c >> unit;
    // double k = ctok("c"); passing string argument "c" insteaad of variable c // convert temperature
    double k = ctok(c, unit);
    // Cout << k << '/n'; cout is not capitalized, new line is '\n' print out temperature
    cout << k;
    if (unit == 'c')
        cout << "k\n";
    else
        cout << "c\n";
}
