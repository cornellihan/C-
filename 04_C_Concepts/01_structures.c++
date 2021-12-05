#include <iostream>
using namespace std;
// Structure is a data type that defined by the user and can store multiple values of multiple data types. And the each variable is called each member of the structure.

struct Gamer
{
    string username;
    int age;
} Limon, Alamin; // This is how many user can have this structure.

int main()
{
    // For Alamin
    cout << "Give your details to join the ROG" << endl;
    cout << "Hey bro, please enter your username: ";
    cin >> Alamin.username;
    cout << "Enter your age also: ";
    cin >> Alamin.age;
    // Here the dot (.) after Alamin is called member access operator.
    cout << "Your Username is " << Alamin.username << " and age is " << Alamin.age << endl;
    cout << "Yayy, you are ready to join the Republic Of Gamers.";

    return 0;
}