#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter any integer number you want: ";
    cin >> number;

    if (number > 0)
    {
        cout << "You have entered a positive number." << endl;
    }
    else if (number < 0)
    {
        cout << "Your have entered a negative number." << endl;
    }
    else
    {
        cout << "The number you have given is Zero." << endl;
    }

    int digit;
    cout << "Enter any integer number between 0 to 9 and the program will print the spelling: ";
    cin >> digit;

    switch (digit)
    {
    case 0:
        cout << "Zero";
        // // break;
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    case 6:
        cout << "Six";
        break;
    case 7:
        cout << "Seven";
        break;
    case 8:
        cout << "Eight";
        break;
    case 9:
        cout << "Nine";
        break;

    default:
        cout << "Sorry, your number is not between 0 to 9";
        break;
    }

    cout << endl
         << "Well, the first program was made by if-else statement and the second program was made by swith-case statement.";

    return 0;
}