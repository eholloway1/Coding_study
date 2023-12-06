#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Oct 12 2023
    Evan Holloway Nov 10 2023

    Begin by typing the code from §3.1 prompting a user to enter his or her first name and writing “Hello, first_name” where first_name is the name entered by the user. 
    Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to” and change the output to “Dear first_name,”.
*/
int main()
{
    cout << "Please enter the first name of the person you would like to write to (followed by 'enter'):\n";
    string first_name;              // first_name is a variable of type string
    cin >> first_name;             // read characters into first_name
    cout << "Dear " << first_name << ",\n";

}