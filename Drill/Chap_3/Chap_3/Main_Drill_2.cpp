#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Oct 12 2023
    Evan Holloway Nov 10 2023

    Add an introductory line or two, like “How are you? I am fine. I miss you.” Be sure to indent the first line.
*/
int main()
{
    cout << "Please enter the first name of the person you would like to write to (followed by 'enter'):\n";
    string first_name;              // first_name is a variable of type string
    cin >> first_name;             // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.\n";
}