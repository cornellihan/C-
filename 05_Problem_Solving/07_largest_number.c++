#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many element do you want to store in array 'A' ?" << endl;
    cin >> n;
    int  A[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of element " << i + 1 << ": ";
        cin >> A[i];
        // cout << endl;
    }

    for (int j = 1; j < n; j++)
    {
        // if (A[0] >= A[j])
        // {
        //     return 0;
        // }
        // else
        // {
        //     A[0] = A[j];
        // }
        if (A[0] < A[j])
        {
            A[0] = A[j];
        }
        
    }
    cout << "The largest element of the array 'A' is: " << A[0];

    return 0;
}