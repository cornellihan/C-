#include <iostream>
using namespace std;

// Abstraction is something where most important things can be accessable or can be passed. Just like if we want to go to the resturent and eat a burger, then we just have to go there and check the price of the burger and the top rated burger. And we will just buy the burger by seeing these 2 things. Here we don't need to know how the burgers are made and who made it within how many times or etc.

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
    // Here the virtual function is a function that I expect to redefine in derived classes. And here this class is the base class and the Employee class is the derived class. We will also see that in the next lesson.
};

class Employee : public AbstractEmployee
{
    string Name;
    int Age;
    string Company;

public:
    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Company = company;
    }
    void AskForPromotion()
    {
        if (Age >= 30)
            cout << "Congrats " << Name << ", you've got promoted !!!" << endl;
        else
            cout << Name << ", you will not get promoted until you are at least 30 years old." << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Mushfiq", 17, "NonSolid");
    // employee1.setAge(37);
    Employee employee2 = Employee("Aunty", 31, "Nonsolid");
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}