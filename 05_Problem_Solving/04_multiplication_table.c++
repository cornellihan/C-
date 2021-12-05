#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        cout << n << " X " << i << " = " << i * n << endl;
    }

    return 0;
}