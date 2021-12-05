#include <iostream>
using namespace std;

int main()
{
    int numbers[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "The value of element " << i + 1 << " is: " << numbers[i] << endl;
    }

    return 0;
}