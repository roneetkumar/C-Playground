#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct accounts
{
    long checkin, savings, credit;
};

struct clients
{
    string number, name, pin;
    accounts type;
};

string toUpper(string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

short readFiles(clients arrClients[])
{
    fstream myFile;
    string tempText;
    short NBofClients, i;
    myFile.open("client.txt");
    i = 0;
    while (!myFile.eof())
    {
        getline(myFile, tempText);
        arrClients[i].number = toUpper(tempText);
        getline(myFile, tempText);
        arrClients[i].name = toUpper(tempText);
        getline(myFile, tempText);
        arrClients[i].pin = tempText;
        i++;
    }
    myFile.close();
    i = 0;
    myFile.open("account.txt");
    while (!myFile.eof())
    {
        getline(myFile, tempText);
        arrClients[i].type.checkin = stol(tempText.substr(3));
        getline(myFile, tempText);
        arrClients[i].type.savings = stol(tempText.substr(3));
        getline(myFile, tempText);
        arrClients[i].type.credit = stol(tempText.substr(3));
        i++;
    }
    myFile.close();
    return i;
}

void displayHeading(string text)
{
    cout << "\t" << toUpper(text) << endl;
    cout << "\t" << string(text.length(), '`') << endl;
}

void displayText(string text)
{
    cout << text << endl;
}

string readClientNo(short NBofClients, clients arrClients[])
{
    string clientNo;
    bool match;
    do
    {
        cout << "Enter Your 6 Digit Account No. : ";
        getline(cin, clientNo);
        clientNo = toUpper(clientNo);
        for (short i = 0; i < NBofClients; i++)
        {
            if (clientNo == arrClients[i].number)
            {
                match = true;
            }
        }
    } while (clientNo.length() != 6 || !match);
    return clientNo;
}

string readPIN(short selectedClient, clients arrClients[])
{
    string pin;
    bool match;
    do
    {
        cout << "Enter 4 Digit PIN : ";
        getline(cin, pin);
        if (pin == arrClients[selectedClient].pin)
        {
            match = true;
        }
    } while (pin.length() != 4 || !match);
    return pin;
}

short checkClient(short NBofClients, string clientNo, clients arrClients[])
{
    short client;
    for (short i = 0; i < NBofClients; i++)
    {
        if (clientNo == arrClients[i].number)
        {
            client = i;
        }
    }
    return client;
}

void displaytAccountMenu()
{
    system("cls");
    displayHeading("Royal Bank");
    cout << "\nSelect Account Type : \n";
    cout << "\n1. CheckIn\n";
    cout << "2. Savings\n";
    cout << "3. Credit\n";
    cout << "4. Log Out\n";
}

short readOptions(short start, short end)
{
    short select;
    do
    {
        cout << "Select Account Type or Log Out : ";
        cin >> select;
    } while (select < start || select > end);
    system("cls");
    return select;
}