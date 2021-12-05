#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    (number % 2 == 0) ? cout << "The number is Even number." : cout << "The number is Odd number";

    return 0;
}