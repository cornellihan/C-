#include <iostream>
using namespace std;

int main()
{
    // char name[] = "Mushfiq";
    // char name[8] = "Mushfiq";
    // char name[] = {'M', 'u', 's', 'h', 'f', 'i', 'q', '\0'};
    // char name[8] = {'M', 'u', 's', 'h', 'f', 'i', 'q', '\0'};

    // char name[10];
    // cout << "Enter your name: ";
    // cin >> name;
    // cout << "Your name is: " << name << endl;
    // // This is called C-style string.

    string firstName, lastName, fullName;
    cout << "Enter your First name: ";
    cin >> firstName;
    cout << "Enter your Last name: ";
    cin >> lastName;
    fullName = firstName + lastName;
    // This is called String Concatenates.
    cout << "Your first name is " << firstName << endl;
    cout << "Your last name is " << lastName << endl;
    cout << "Your full name is " << fullName << endl;
    // This is called String Object that is mostly used in C++.
}