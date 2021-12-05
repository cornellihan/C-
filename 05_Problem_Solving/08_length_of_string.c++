#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your string: ";
    cin >> name;
    
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    cout << "The length of the string is " << i;

    return 0;
}