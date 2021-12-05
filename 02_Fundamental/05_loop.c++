#include <iostream>
using namespace std;

int main()
{
    // ********************* For Loop *********************
    for (int num = 0; num < 5; num++)
    {
        cout << num + 1 << endl;
    }
    cout << endl;


    cout << "Here the program will print the Even Numbers." << endl;
    for (int even = 0; even <= 100; even++)
    {
        if (even % 2 == 0)
        {
            cout << even << endl;
        }
    }
    cout << endl;


    cout << "Here the program will print the Odd Numbers." << endl;
    // ********************* While Loop *********************
    int odd = 0;
    while (odd < 100)
    {
        if (odd % 2 == 1)
        {
            cout << odd << endl;
        }
            odd++;
    }
    cout << endl;


    // ********************* Do-While Loop *********************
    cout << "Here the program will print 100 to 1." << endl;
    int reverse = 100;
    do
    {
        cout << reverse << endl;
        reverse--;
    } while (reverse > 0);
    

    return 0;
}