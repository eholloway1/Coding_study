#include "../../../Depends/std_lib_facilities.h"

/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math operations
	add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter three arguments: two double values and a character to represent an operation.
	If the entry arguments are 35.6, 24.1, and '+', the program output should be The sum of 35.6 and 24.1 is 59.7.
*/

int main() {

	double L_oper;
	double R_oper;
	char oper;
	
	cout << "Please enter your left- and right-hand operands and an operator (seperate with spaces, '+', '-', '/', '*' accepted):\n";
	cin >> L_oper >> R_oper >> oper;

	switch (oper) {
	case '+':
		cout << "The sum of " << L_oper << " and " << R_oper << " is: " << L_oper + R_oper << '\n';
		break;
	case '-':
		cout << "The difference of " << L_oper << " and " << R_oper << " is: " << L_oper - R_oper << '\n';
		break;
	case '/':
		cout << "The ratio of " << L_oper << " to " << R_oper << " is: " << L_oper / R_oper << '\n';
		break;
	case '*':
		cout << "The multiplication of " << L_oper << " and " << R_oper << " is: " << L_oper * R_oper << '\n';
		break;
	}

	keep_window_open();
	return 0;
}