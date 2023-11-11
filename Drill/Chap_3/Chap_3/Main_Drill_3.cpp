#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Oct 12 2023
    Evan Holloway Nov 10 2023

    Now prompt the user for the name of another friend, and store it in friend_name. Add a line to your letter: “Have you seen friend_name lately?”
*/
int main()
{
    cout << "Please enter the first name of the person you would like to write to (followed by 'enter'):\n";
    cout << "Also, enter in the name of a mutual friend\n";
    string first_name;              // first_name is a variable of type string
    string friend_name;
    cin >> first_name >> friend_name;             // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
}