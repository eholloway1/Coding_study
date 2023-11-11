#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Nov 1 2023
    Evan Holloway Nov 11 2023

	Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.
*/

int main() {

	string operand;
	int L_oper_convert = 0;
	int R_oper_convert = 0;
	char oper;
	
	cout << "Please enter your left- and right-hand operands and an operator (seperate with 'enter', '+', '-', '/', '*' accepted):\n";
	cout << "Accepted operands: 0-9/'zero', 'one'...'nine'\n";

	cin >> operand; // Left-hand operand
	if (operand == "zero" || operand == "0") {
		L_oper_convert = 0;
	}
	else if (operand == "one" || operand == "1") {
		L_oper_convert = 1;
	}
	else if (operand == "two" || operand == "2") {
		L_oper_convert = 2;
	}
	else if (operand == "three" || operand == "3") {
		L_oper_convert = 3;
	}
	else if (operand == "four" || operand == "4") {
		L_oper_convert = 4;
	}
	else if (operand == "five" || operand == "5") {
		L_oper_convert = 5;
	}
	else if (operand == "six" || operand == "6") {
		L_oper_convert = 6;
	}
	else if (operand == "seven" || operand == "7") {
		L_oper_convert = 7;
	}
	else if (operand == "eight" || operand == "8") {
		L_oper_convert = 8;
	}
	else if (operand == "nine" || operand == "9") {
		L_oper_convert = 9;
	}

	cin >> operand; // Right-hand operand
	if (operand == "zero" || operand == "0") {
		R_oper_convert = 0;
	}
	else if (operand == "one" || operand == "1") {
		R_oper_convert = 1;
	}
	else if (operand == "two" || operand == "2") {
		R_oper_convert = 2;
	}
	else if (operand == "three" || operand == "3") {
		R_oper_convert = 3;
	}
	else if (operand == "four" || operand == "4") {
		R_oper_convert = 4;
	}
	else if (operand == "five" || operand == "5") {
		R_oper_convert = 5;
	}
	else if (operand == "six" || operand == "6") {
		R_oper_convert = 6;
	}
	else if (operand == "seven" || operand == "7") {
		R_oper_convert = 7;
	}
	else if (operand == "eight" || operand == "8") {
		R_oper_convert = 8;
	}
	else if (operand == "nine" || operand == "9") {
		R_oper_convert = 9;
	}

	cin >> oper;

	switch (oper) {
	case '+':
		cout << "The sum of " << L_oper_convert << " and " << R_oper_convert << " is: " << L_oper_convert + R_oper_convert << '\n';
		break;
	case '-':
		cout << "The difference of " << L_oper_convert << " and " << R_oper_convert << " is: " << L_oper_convert - R_oper_convert << '\n';
		break;
	case '/':
		cout << "The ratio of " << L_oper_convert << " to " << R_oper_convert << " is: " << L_oper_convert / R_oper_convert << '\n';
		break;
	case '*':
		cout << "The multiplication of " << L_oper_convert << " and " << R_oper_convert << " is: " << L_oper_convert * R_oper_convert << '\n';
		break;
	}

	keep_window_open();
	return 0;
}