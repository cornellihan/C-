#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "The first number is " << a << " and the second number is " << b << " before swaping." << endl;
    c = a;
    a = b;
    b = c;
    cout << "The first number is " << a << " and the second number is " << b << " after swaping :)" << endl;

    return 0;
}