#include <iostream>
using namespace std;

class Student
{
public:
    /* Here the keyword 'public' is called Access Modifier. There are three types of Access Modifier.
        1. Public => Just like a company bank account where many people of the company can access the account.
        2. Private => Just like the general people's bank account where they do not share any personal info of their account with others. It's default access specifier of class.
        3. Protected => Just like joint bank account where people and their partners can access the account. It's members can be accessed by the class itself and the class that inherits it.
    */
    string name;
    int age;
    // This is called attributes. Attribute is nothing but some variable.

    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
    void wish()
    {
        cout << "Hey " << name << ", welcome to Programming Hero." << endl;
    }
    // These are called methods. Methods are nothing but funcitons. Here these methods are called inline functions cause these are defined inside the class.

    Student()
    {
        cout << "Student-Life is the golden period of every human." << endl;
    }
    // This is called Constructors. It's a special method that automatically called when an object of a class is created. It can take paremeters and also can be defined outside the class.

    /* Student(string a, int b);
    
    Student::Student(string a, int b){
        name = a;
        age = b;
    }

    Student student("Mushfiq", 17);
    cout << student.name << endl;
    cout << student.age;
     */

    void greetings();
};

void Student::greetings()
{
    cout << "Okay " << name << ", you are learning Object-Oriented Programming in C++ right, that's so cool.";
}
// Here this function is defined outside the class. And the operator used here (::) is called scope resolution operator.

int main()
{
    Student student;
    // student.name = "Mushfiq";
    cout << "Enter the name of the student: ";
    cin >> student.name;
    // student.age = 17;
    cout << "Enter the age of the student: ";
    cin >> student.age;

    cout << "The name of the student is " << student.name << endl;
    cout << "And he is " << student.age << " years old." << endl;
    student.wish();
    student.greetings();

    return 0;
}