#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout << "Enter the value of n: ";
    cin >> n;

    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = i + sum;
    }
    cout << "The sum of " << "nth natural number is: " << sum;

    return 0;
}