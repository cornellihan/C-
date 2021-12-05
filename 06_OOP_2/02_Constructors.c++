#include <iostream>
using namespace std;

/* We have seen in the previous lesson that we can create many objects from a class. To do this, we had to create a new object with the class and write 3/4 extra line of codes to pass the values to the attributes. So if we need to create 100 new objects, then we have to write more extra line of codes. Or if we have to make a new attribute inside the class, then it's also a dull work to write a new line of code in the object to pass the value.

So in this lesson, we will look at something new that is called 'Constructors'. This is a special type of method that has the same name of the class and we can pass the values (as Parameter) to the attributes just once inside this method. So if we create a new object from the class, we don't have to pass the values by using mamber access operator. We can just pass the values inside Carly Braces as Arguments. BTW a constructor does not have return type like void method :)
*/

class Employee
{
public:
    string Name;
    int Age;
    string Company;

    void IntroduceYourself()
    {
        cout << "Name of the employee is: " << Name << endl;
        cout << "And the employee is " << Age << " years old." << endl;
        cout << "Now the employee works in " << Company << endl;
    }

    Employee(string name, int age, string company)
    {
        Name = name;
        Age = age;
        Company = company;
    }
};

int main()
{
    Employee employee1("Mushfiq", 17, "NonSolid");
    employee1.IntroduceYourself();

    cout << endl;

    Employee employee2("Rafi", 20, "NonSolid");
    employee2.IntroduceYourself();

    cout << endl;

    Employee employee3("Akil", 17, "NonSolid");
    employee3.IntroduceYourself();

    cout << endl;

    Employee employee4("Alamin", 18, "NonSolid");
    employee4.IntroduceYourself();

    return 0;
}