#include <iostream>
using namespace std;

class Employee
{
public:
    /* Here the keyword 'public' is called Access Modifier. There are three types of Access Modifier.
        1. Public => Just like a company bank account where many people of the company can access the account.
        2. Private => Just like the general people's bank account where they do not share any personal info of their account with others. It's default access specifier of class.
        3. Protected => Just like joint bank account where people and their partners can access the account. It's members can be accessed by the class itself and the class that inherits it.
    */
    string Name;
    string Company;
    int Age;
    // This is called attributes. Attribute is nothing but some variable.

    void IntroduceYourself()
    {
        cout << "Name of the employee is: " << Name << endl;
        cout << "And the employee is " << Age << " years old." << endl;
        cout << "Now the employee works in " << Company << endl;
    }
    // This is called method. Method is nothing but funcitons. Here this method is called inline function cause it is defined inside the class.
};

int main()
{
    Employee employee1;
    employee1.Name = "Mushfiq";
    employee1.Age = 17;
    employee1.Company = "NonSolid";
    employee1.IntroduceYourself();

    cout << endl;

    Employee employee2;
    employee2.Name = "Nuheen";
    employee2.Age = 17;
    employee2.Company = "NonSolid";
    employee2.IntroduceYourself();

    return 0;
}

// There employee1 and employee2 is called Object. And their following is the value of these objects. So it can be said that Classes are the blueprint of an Object.