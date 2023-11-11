#include "../../../Depends/std_lib_facilities.h"
/*
    Evan Holloway Oct 12 2023
    Evan Holloway Nov 10 2023

    Add this to your letter: If your friend is under 12, write “Next year you will be age+1.” If your friend is 17, write “Next year you will be able to vote.” 
    If your friend is over 70, write “I hope you are enjoying retirement.” Check your program to make sure it responds appropriately to each kind of value.
*/

int main()
{
    cout << "Please enter the first name of the person you would like to write to (followed by 'enter'):\n";
    string first_name;      // first_name is a variable of type string
    cin >> first_name;      // read characters into first_name
    cout << "Also, enter in the name of a mutual friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Now, enter the sex of your friend (M for male, F for female):\n";
    char friend_sex;
    cin >> friend_sex;
    cout << "Finally, enter the age of the recpient:\n";
    int age;
    cin >> age;
    if (age < 0 || age > 110)
        simple_error("You're kidding!\n");

    cout << "Dear " << first_name << ",\n";
    cout << "   How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'M' || friend_sex == 'm')
        cout << "If you see " << friend_name << " ask him to call me.\n";
    else if (friend_sex == 'F' || friend_sex == 'f')
        cout << "If you see " << friend_name << " ask her to call me.\n";
    cout << "I hear you just had a birthday and are " << age << " years old.\n";
    if (age < 12)
        cout << "Next year you will be " << age + 1 << ".\n";
    else if (age == 17)
        cout << "Next year you will be able to vote.\n";
    else if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
}