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
    ifstream myFile;
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

void updateFile(clients arrClients[], short NBofClients)
{
    ofstream myFile;
    myFile.open("account.txt");
    for (short i = 0; i < NBofClients; i++)
    {
        myFile << "ch-" << to_string(arrClients[i].type.checkin) << endl;
        myFile << "sa-" << to_string(arrClients[i].type.savings) << endl;
        myFile << "cr-" << to_string(arrClients[i].type.credit);
        if (i != (NBofClients - 1))
        {
            myFile << endl;
        }
    }
    myFile.close();
}

void displayHeading(string heading, string subHeading)
{
    cout << "\t" << toUpper(heading) << endl;
    cout << "\t" << string(heading.length(), '`') << endl;
    cout << "\t" << toUpper(subHeading) << endl;
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
    system("cls");
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
    cout << "Select Account Type : \n";
    cout << "\n1. CheckIn\n";
    cout << "2. Savings\n";
    cout << "3. Credit\n";
    cout << "4. Log Out\n";
}

void displayTransactionMenu()
{
    cout << "Select Transcation Type : \n";
    cout << "\n1. Deposit\n";
    cout << "2. Withdrawn\n";
    cout << "3. Go Back\n";
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

void displayAccInfo(short acctype, short selectedClient, short NBofClients, clients arrClients[])
{
    for (short i = 0; i < NBofClients; i++)
    {
        if (selectedClient == i)
        {
            cout << "Name : " << arrClients[i].name << endl;
            cout << "Account No : " << arrClients[i].number << endl;
            if (acctype == 1)
            {
                cout << "Account Type : CheckIn" << endl;
                cout << "Current Balance  : $" << arrClients[i].type.checkin << " CAD" << endl;
            }
            else if (acctype == 2)
            {
                cout << "Account Type : Savings" << endl;
                cout << "Current Balance  : $" << arrClients[i].type.savings << " CAD" << endl;
            }
            else if (acctype == 3)
            {
                cout << "Account Type : Credit" << endl;
                cout << "Current Balance  : $" << arrClients[i].type.credit << " CAD" << endl;
            }
        }
    }
}

long deposit(short acctype, short selectedClient, clients arrClients[])
{
    long deposit;
    do
    {
        cout << "Enter the amount you want to deposit in this transaction (Max $1000) : ";
        cin >> deposit;
    } while (deposit < 10 || deposit > 1000);
    if (acctype == 1)
        deposit = arrClients[selectedClient].type.checkin += deposit;
    else if (acctype == 2)
        deposit = arrClients[selectedClient].type.savings += deposit;
    else if (acctype == 3)
        deposit = arrClients[selectedClient].type.credit += deposit;
    return deposit;
}

long withdrawl(short acctype, short selectedClient, clients arrClients[])
{
    long withdrawl;
    do
    {
        cout << "Enter the amount you want to withdrawl in this transaction (Max $1000) : ";
        cin >> withdrawl;
    } while (withdrawl < 10 || withdrawl > 1000);
    if (acctype == 1)
        withdrawl = arrClients[selectedClient].type.checkin -= withdrawl;
    else if (acctype == 2)
        withdrawl = arrClients[selectedClient].type.savings -= withdrawl;
    else if (acctype == 3)
        withdrawl = arrClients[selectedClient].type.credit -= withdrawl;
    return withdrawl;
}

char restartCalc(char restart)
{
    do
    {
        cout << "Would you like to do another  ? (y - n) : ";
        cin >> restart;
    } while (!(toupper(restart) == 'Y' || toupper(restart) == 'N'));
    system("cls");
    return (toupper(restart));
}
