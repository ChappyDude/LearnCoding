#include <iostream>
#include <fstream>

using namespace std;

ofstream outFile;
float a = 4.333f, b = 5.302f;

int main(void)
{
    outFile.open("calculations.txt");
    if (outFile.fail())
    {
        cout << endl << "Couldn't open the file!" << endl;
    }
    else
    {
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a + b << endl;
        outFile << "a * b = " << a * b << endl;
        outFile.close();
        cout << "File written succesfully!" << endl;
    }
    return 0;
}