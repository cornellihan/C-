#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("learn.txt", ios::in);

    char data;
    while (true)
    {
        myFile >> data;
        // This is called stream extraction operator. We can read contents of the file over the file object(myFile). Just like cin where our programm reads content from keyboard. But here it just take one character at a time, so when the loop runs again, then the next character gets inside the variable.

        if (myFile.eof())
        // We know that when we give a true statement or any non zero value to a conditional, it will execute the code. So if here myFile.eof() returns any non zero value, then our while loop will break. And eof() is a build in method that returns 0 when there is still more contents to read, and returns 1 when there is no contents to read.
        {
            break;
        }
        cout << data;
    }

    myFile.close();
    return 0;
}
