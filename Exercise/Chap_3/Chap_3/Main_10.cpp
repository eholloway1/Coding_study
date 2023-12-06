#include "../../../Depends/std_lib_facilities.h"
/*
	Evan Holloway Oct 12 2023
	Evan Holloway Nov 10 2023
	
	Write a program that takes an operation followed by two operands and outputs the result. 
	For example: + 100 3.14, * 4 5 Read the operation into a string called operation and use an if-statement to figure out which operation the user wants
	for example, if (operation=="+"). Read the operands into variables of type double. Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/


int main()
{
	cout << "Please input the operation and two operands you would like complete, followed by enter:\n";
	string operate;
	double operand1;
	double operand2;
	cin >> operate >> operand1 >> operand2;

	if (operate == "+" || operate == "plus")
		cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << '\n';
	else if (operate == "-" || operate == "minus")
		cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << '\n';
	else if (operate == "*" || operate == "mul")
		cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << '\n';
	else if (operate == "/" || operate == "div")
		cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << '\n';

	keep_window_open();
	return 0;
}