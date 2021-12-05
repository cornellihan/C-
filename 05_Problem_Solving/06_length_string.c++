#include <iostream>
using namespace std;

int main()
{
    string data;
    cout << "Enter any string you want: ";
    cin >> data;
    cout << "The length of the string is " << data.length() << endl;
    
    // We can also use size() function to get the length of a string.
    cout << "Again the length of the string is " << data.size();

    return 0;
}