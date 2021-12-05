#include <iostream>
using namespace std;

void addNumber(int num1, int num2) // Here the 'num1' and 'num2' are called parameters
{
    int result = num1 + num2;
    cout << "The sum of the 2 numbers you have given is: " << result << endl;
}


// *************** Default Parameter and Argument ***************
void something(int a = 1, int b = 1)
{
    int final = a * b;
    cout << "The default value will be pass if the user don't use any argument. And the result is: " << final << endl;
}

int main()
{
    int a, b;
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;

    // ************ First Function ************
    addNumber(a, b); // Here the 'a' and 'b' is called arguments.

    // ************ Second Function ************
    something();

    return 0;
}