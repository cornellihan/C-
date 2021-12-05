#include <iostream>
using namespace std;

/*  
    There are 2 ways to perform type conversion-
        1. Implicit Type Conversion: This is also called Automatic type conversion cause the C/C++ compiler does this with its own. So the data can be upgraded sometimes, and it can be loss sometimes.
            int a;
            cin >> a;
        Here if we give a floating number, the extra decimal number will loos,
            float b;
            cin >> b;
        Here if we give a integer number, the value wil be upgraded.
        So the Hierarchy will be: int => float => double

        2. Explicit Type Conversion
        This Conversion is also called Type Casting.
*/

int main()
{
    // Explicit Type Conversion-
    double demo;
    cout << "Enter a Decimal number: ";
    cin >> demo;
    int a = (int)demo + 1;
    cout << "The Integer value of the Decimal number by Explicit Type Conversion is: " << a << endl;
    // If we give an input to the user with an integer data type and the user gives a float type value, then the extra decimal will be loss. But as this process is made by the compiler, so it is called Implicit Type Conversion. But to avoid lossing data, we can use Explicit Type Conversion to add 1 to the value.

    return 0;
}