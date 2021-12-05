#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("learn.txt", ios::out);
    // This ios::out is write mode. So we can write on the file by using this mode. But writting to a file will overwrite the previous content. Thus, to avoid that, we can append the content to the file. To append to a file, we can open the file in append mode using ios::app
    
    myFile << "The name of an old landlrod is Brojokishore Prammanik or Nondokishore Prammanik.";
    // This << is called stream insertion operator.

    myFile.close();
    return 0;
}