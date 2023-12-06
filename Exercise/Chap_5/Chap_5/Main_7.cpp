#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 25 2023

	Quadratic equations are of the form a · x2 + b · x + c = 0 To solve these, one uses the quadratic formula: There is a problem, though: 
	if b2–4ac is less than zero, then it will fail. Write a program that can calculate x for a quadratic equation.
	Create a function that prints out the roots of a quadratic equation, given a, b, c. When the program detects an equation with no real roots, have it print out a message. 
	How do you know that your results are plausible? Can you check that they are correct?

*/

int main() {
	cout << "Please input your a, b, and c values: \n";
	double a;
	double b;
	double c;
	cin >> a >> b >> c;

	double discrim = 0; //b^2 - 4ac; discriminant determines how many solutions there are for x
	discrim = b * b; // b2
	double temp = 4 * a * c;
	discrim -= temp;

	double x1 = 0;
	double x2 = 0;

	if (discrim < 0) {
		cout << "There are no real solutions for this quadratic equation.\n";
	}
	else if (discrim == 0) {
		double x = -1 * b;
		double temp = 2 * a;

		x /= 2 * temp;
		cout << "The solution for this quadratic formula is: " << x << '\n';
	}
	else {
		double x1 = -1 * b; //-bS
		double x2 = -1 * b; //-b
		double temp = sqrt(discrim);

		x1 += temp; // -b + sqrt(b^2 - 4ac)
		x2 -= temp; // -b - sqrt(b^2 - 4ac)
		temp = 2 * a;
		x1 /= temp; // -b + sqrt(b^2 - 4ac) / 2a
		x2 /= temp; // -b + sqrt(b^2 - 4ac) / 2a

		cout << "The solutions for the quadratic formula entered are: " << x1 << " and " << x2 << '\n';
	}

	keep_window_open();
	return 0;
}