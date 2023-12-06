#include "../../../Depends/std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age:\n";
	
	string first_name = "???"; // string variable, "???" means "don't know name"
	double age = 0; //int variable, 0 means "don't know age"
	
	cin >> first_name >> age; //read string followed by integer

	age *= 12;

	cout << "Hello, " << first_name << " (age " << age << " months)\n";

}