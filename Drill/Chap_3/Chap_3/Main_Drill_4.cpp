#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Oct 12 2023
    Evan Holloway Nov 10 2023

    Declare a char variable called friend_sex and initialize its value to 0. Prompt the user to enter an m if the friend is male and an f if the friend is female. 
    Assign the value entered to the variable friend_sex. Then use two if-statements to write the following: 
    If the friend is male, write “If you see friend_name please ask him to call me.”
    If the friend is female, write “If you see friend_name please ask her to call me.”
*/

int main()
{
    cout << "Please enter the first name of the person you would like to write to (followed by 'enter'):\n";
    string first_name;      // first_name is a variable of type string
    cin >> first_name;      // read characters into first_name
    cout << "Also, enter in the name of a mutual friend\n";
    string friend_name;
    cin >> friend_name;
    cout << "Now, enter the sex of your friend (M for male, F for female):\n";
    char friend_sex = 0;
    cin >> friend_sex;

    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'M' || friend_sex == 'm')
        cout << "If you see " << friend_name << " ask him to call me.\n";
    else if (friend_sex == 'F' || friend_sex == 'f')
        cout << "If you see " << friend_name << " ask her to call me.\n";
}