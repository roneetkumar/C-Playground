#include "headerFile.h"

main()
{
    ifstream myFile;

    client arrClient[20];
    // client currentClient;
    short NBofClient;
    string temptext;
    long tempbal;

    displayHeading("Royal Bank");

    myFile.open("client.txt");

    short i = 0, b = 0;
    while (!myFile.eof())
    {
        getline(myFile, temptext);
        arrClient[i].number = temptext;
        getline(myFile, temptext);
        arrClient[i].name = temptext;
        getline(myFile, temptext);
        arrClient[i].pin = temptext;
        getline(myFile, temptext);
        arrClient[i].balance = stol(temptext);
        i++;
    }

    NBofClient = i;

    for (short i = 0; i < NBofClient; i++)
    {
        cout << toUpper(arrClient[i].number) << endl;
        cout << arrClient[i].name << endl;
        cout << arrClient[i].pin << endl;
        cout << arrClient[i].balance << endl;
        cout << "\n";
    }

    myFile.close();
    system("pause");
}