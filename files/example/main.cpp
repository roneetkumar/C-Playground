#include <iostream>
#include <string>
#include <fstream>
using namespace std;

main()
{
    ifstream myFile;
    string arrSubjects[10], tempText;
    short arrMarks[10], i = 0, tempNum;

    myFile.open("data.txt");
    while (!myFile.eof())
    {
        myFile >> tempText;
        arrSubjects[i] = tempText;
        myFile >> tempNum;
        arrMarks[i] = tempNum;
        i++;
    }

    for (short j = 0; j < i; j++)
    {
        cout << "Subject : ";
        cout << arrSubjects[j] << endl;
        cout << "Mark : ";
        cout << arrMarks[j] << endl;
    }
    myFile.close();
    system("pause");
}
