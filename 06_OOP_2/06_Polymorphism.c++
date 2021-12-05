#include <iostream>
using namespace std;

class Employee
{
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    string setName(string name)
    {
        Name = name;
    }

    string getName()
    {
        return Name;
    }

    virtual void Work()
    {
        cout << Name << " is checking E-mail, and performing task." << endl;
    }
};

class Developer : public Employee
{
public:
    string FavProgrammingLang;
    Developer(string name, string company, int age, string fav_programming_lang)
        : Employee(name, company, age)
    {
        FavProgrammingLang = fav_programming_lang;
    }
    void Work()
    {
        cout << getName() << " is coding on " << FavProgrammingLang << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work()
    {
        cout << getName() << " is teaching " << Subject << endl;
    }
};

int main()
{
    // Employee employee1 = Employee("Rafi", "NonSolid", 20);
    Developer developer1 = Developer("Alamin", "NonSolid", 18, "JavaScript");
    Teacher teacher1 = Teacher("Akil", "NonSolid", 17, "Computer Science and Engineering");

    Employee *employee1 = &developer1;
    Employee *employee2 = &teacher1;

    employee1->Work();
    employee2->Work();

    /* What happens here is actually when we write employee1.work(), it prints/executes the value/code of the work() method in Employee class cause employee1 is an Object of Employee. But what if we pass by reference instead of value..... Okay, so here it will also print/execute the value/code of the work() method. Cause the location still doesn't have changed. Buttt.., if we use virtual function instead of function, then the function that is redefined inside another child class will be replaced on the main function's location. So at last, we will get the value of the redefined function.
    
    Now it can be says that if the virtual function's location can be replaced with the redefined function, then why we have to use pointer..? Well, if we don't use pointer, then the location of the redefined function won't replaced with the main function :)
    */

    return 0;
}