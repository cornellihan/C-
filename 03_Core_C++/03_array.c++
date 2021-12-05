#include <iostream>
using namespace std;

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }

    int marks[10];
    for (int j = 0; j < 10; j++)
    {
        cout << "Enter the marks of student " << j + 1 << ": ";
        cin >> marks[j];
    }

    for (int k = 0; k < 10; k++)
    {
        cout << "The marks of student " << k + 1 << " is: " << marks[k] << endl;
    }

    return 0;
}