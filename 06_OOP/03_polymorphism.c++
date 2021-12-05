#include <iostream>
using namespace std;

// Following is called Function Overloading Polymorphism
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

// Following is called Function Overriding Polymorphism

int main()
{
    Calculator calc;
    cout << calc.add(2, 3) << endl;
    cout << calc.add(2, 3, 4) << endl;
    return 0;
}