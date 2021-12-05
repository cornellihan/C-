#include <iostream>
#include <cstring>
// We have to include cstring library to use String Methods in C++
using namespace std;

int main()
{
    char name[] = "Mushfiq";
    char nick[] = "Limon";
    char demo[10];
    // We have to give the length of this character to use the strcpy() method.
    strcpy(demo, nick);
    // This will copy nick and paste it to demo.
    cout << demo << endl;
    strcat(name, nick);
    // This concatenates name and nick.
    cout << name << endl; // Expected output: MushfiqLimon
    int len = strlen(name);
    // Here len will get te full length of name variable after concatenates.
    cout << len << endl;
    // Without these, there are another string method
    strcmp(name, nick);
    // This will compare these two strings.
}