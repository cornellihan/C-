#include <iostream>
using namespace std;

// Encapsulation is defined as the wrapping up of data under a singel unit. And it is like a black box that prevents the data from being accessed by the code outside the box. Bellow this code, the 3 attributes can not be accessed from outside the class. To access the attributes, we have to somehow return the value from the public access specifier. We know the method form the public specifier can access the attributes inside the private specifier. So we have to create a method in the public specifier that will have the attributes and give it the value of the parameters and at last, the method will return the attributes :)

class Employee
{
private:
    string Name;
    int Age;
    string Company;
    // Here the 3 attributes are Encapsulated.
public:
    void setName(string name) // This is an example of Setter.
    {
        Name = name;
    }
    string getName() // This is an example of Getter.
    {
        return Name;
    }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
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
    Employee employee1("Mushfiq", 21, "NonSolid");
    employee1.setAge(17);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old.";

    return 0;
}

/****************    void method can't return any value.    ****************/