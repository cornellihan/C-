#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : public AbstractEmployee // This is a Base Class.
{
protected:
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
    void AskForPromotion()
    {
        if (Age >= 25)
            cout << "Yayy " << Name << ", you are got promoted !" << endl;
        else
            cout << "Sorry " << Name << " , we can't give you promotion. " << endl;
    }
};

/********************* Developer *********************/
class Developer : public Employee // This is a Derived Class.
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string fav_programming_language)
        : Employee(name, company, age)
    // In here I could write Name = name; Company = Company = company; Age = age; bellow the Carly Braces. Cause the Employee constructor have 3 parameter and we can just pass the Developer constructor's first 3 parameters as arguments. But here OOP is all about short coding and reusing, so we just had written 1 line of code where we had passed Developer constructor's first 3 parameter to the Employee constructor's parameter. N.B. => If we don't use the same name of the Developer constructor's parameters and the Employee contructor's parameters, then it will give an error.
    {
        FavProgrammingLanguage = fav_programming_language;
    };
    void FixingBug()
    {
        cout << Name << " is fixing bug using " << FavProgrammingLanguage << endl;
        // Here we can directly access the Name variable cause it is not private, it is protected now, so protected means we can' use access the variable outside the class or mainly in Objects but we can access them in Derived classes.
    }
};

/********************** Teacher **********************/
class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing to teach " << Subject << " lessons." << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Rafi", "NonSolid", 20);

    /********************* Developer *********************/
    Developer dev1 = Developer("Mushfiq", "NonSolid", 27, "Python");
    dev1.FixingBug();
    dev1.FixingBug();
    dev1.FixingBug();
    dev1.AskForPromotion();

    /********************** Teacher **********************/
    Teacher teacher1 = Teacher("Akil", "NonSolid", 17, "PHP");
    teacher1.PrepareLesson();

    return 0;
}

// Base class is also known as Parent class or Super class. And Derived class is also known as Child class or Sub class.