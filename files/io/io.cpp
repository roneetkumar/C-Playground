#include <iostream>
#include <string>
#include <fstream>
using namespace std;

main()
{
    fstream myFile;
    string name = "pink";
    myFile.open("students.txt");

    for (short i = 0; i < 5; i++)
    {
        myFile << name;
    }
    myFile.close();
    system("pause");
}