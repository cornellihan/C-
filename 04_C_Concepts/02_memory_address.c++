#include <iostream>
using namespace std;
// Pointer is a variable that points to the memory location of anothe variable.

int main()
{
    int myAge = 17;
    cout << "Address of variable 'myAge' is: " << &myAge << endl;

    // Bellow is how to declare a pointer variable.
    char *charPointer;      // This can have the memory location of a character type variable.
    double *doublePointer;  // This can have the memory location of a double type variable.
    float *floatingPointer; // This can have the memory location of a floating point type variable.
    int *integerPointer;    // Finally this can have an integer type variable's memory location.
    integerPointer = &myAge;
    cout << "Address stored in integerPointer variable is: " << integerPointer << endl;
    cout << "Value of *integerPointer variable is: " << *integerPointer << endl;
    int *nullPointer = NULL; // This is called null pointer. In case we do not have the exact address to be assigned, it's a good practise to use null pointer.
    cout << "The value of nullPointer is: " << nullPointer << endl;

    return 0;
}