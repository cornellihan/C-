#include <iostream>
using namespace std;

class Student
{
public:
    int Age;
    string Name;

    int getAge()
    {
        return Age;
    }
    string getName()
    {
        return Name;
    }
};

class Teacher
{
public:
    string Teacher;
};

class OnlineStudent : public Student
{
public:
    string Platform;
    string getPlatrofm()
    {
        return Platform;
    }
};

class ClassInfo : public Student, public Teacher    // Here the : is called 
{
public:
    ClassInfo(string name, int age, string platform, string teacher)
    {
        Name = name;
        Age = age;
        // Platform = platform;
        Teacher = teacher;

        cout << "Name of the student is:" << Name << endl;
        cout << "Age of the student is " << Age << endl;
        cout << "And his teacher's name is: " << Teacher << endl;
    }
};

int main()
{
    OnlineStudent student1;
    student1.Name = "Mushfiq";
    student1.Age = 17;
    student1.Platform = "Discord";

    cout << "Name of the student is " << student1.getName() << endl;
    cout << "Age of the student is " << student1.getAge() << endl;
    cout << "Platform used by the student is " << student1.getPlatrofm() << endl;

    // ClassInfo("Limon", 16, "Shakil");
    return 0;
}