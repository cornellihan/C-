#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2, num3;
    num1 = 45;
    num2 = 3.445;
    num3 = 3;

    cout << sin(num1) << endl;          // It prints the sine of a radian angle of num1
    cout << cos(num1) << endl;          // It prints the cosine of a radian angle of num1
    cout << tan(num1) << endl;          // It prints the tangent of a radian angle of num1
    cout << log(num1) << endl;          // It prints the natural logarithm of num1 that is to the base 'e'
    cout << pow(num1, num2) << endl;    // It prints num1 rasied to the power of num2
    cout << sqrt(num1) << endl;         // It prints the square root of num1
    cout << ceil(num1) << endl;         // It prints the smallest integer value greater than or equal to num1
    cout << floor(num1) << endl;        // It prints the largest integer value less than or equal to num1
    cout << fabs(num1) << endl;         // It prints the absolute value of num1

    return 0;
}