#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Firstly, we need to create an object of any of the file stream class for handling files.
    fstream myFile;
    myFile.open("file_name", ios::in);
    // The syntax to open a file is- myFile.open("file_name", mode)

    /* Here we will work many things with the file as we need.
         ....||...
         ......||.....
         ........||.......    */

    // It's necessary to close a file after working with it so the memory don't misuse. And following is the syntax to close a file.
    myFile.close();

    return 0;
}

/* Following are the file modes provided by C++
    ios::in - It opens the file in the reading mode
    ios::out - It opens the file in the writing mode
    ios::app - It opens the file in the append mode. Meaning, the contents that are written to the file are added at the end of the previous content
    ios::ate - It opens the file for the output then read and write control to file's end
    ios::trunc - If a file exist, the file elements should be truncated prior to it's opening.
*/