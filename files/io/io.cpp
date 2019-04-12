#include <iostream>
#include <string>
#include <fstream>
using namespace std;

main()
{
    ifstream myFile;
    string name;
    myFile.open("students.txt");

    while (!myFile.eof())
    {
        getline(myFile, name);
        cout << name << endl;
    }
    myFile.close();
    system("pause");
}