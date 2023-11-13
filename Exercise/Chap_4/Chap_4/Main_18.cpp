#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Nov 13 2023

	Write a program to solve quadratic equations. A quadratic equation is of the form: ax2 + bx + c = 0 
	If you don’t know the quadratic formula for solving such an expression, do some research. 
	Remember, researching how to solve a problem is often necessary before a programmer can teach the computer how to solve it. 
	Use doubles for the user inputs for a, b, and c. Since there are two solutions to a quadratic equation, output both x1 and x2.
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