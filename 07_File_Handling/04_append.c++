#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream secondFile;
    secondFile.open("learn.txt", ios::app);
    // Now we have opended the file in append mode so the content of the file doesn't overwrite.
    
    secondFile << "\nHey, now the file you are reading is also written by C++ programm. But it doesn't overwrite the content. Cause now we have opended the file in append mode 😇";

    secondFile.close();
    // It's necessary to close the file after using it. Casue it's essential to release the memory.
    return 0;
}