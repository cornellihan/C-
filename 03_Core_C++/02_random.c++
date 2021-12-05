#include <iostream>
#include <cstdlib>
#include <ctime>        // This will give the millisecond amount from 1970 and its cahnging every millisecond, so by this, we can actually have a random number.
using namespace std;

int main()
{
    // A computer can't ever give a truly random number. It follows some big algorithms to give us a random number. So it give  us the same random number every time. So we can cahnge the algorithm a little bit.
    srand(time(0));
    int randomNumber = rand();              // This will generate a random number.
    int modRandomNumber = randomNumber % 6; // This will just print the remainder of the random number divided by 6. That means the number won't bigger than 100.
    cout << modRandomNumber;

    return 0;
}