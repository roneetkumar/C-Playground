#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct accounts
{
    long checkin, saving, credit;
};

struct clients
{
    string number, name, pin;
    accounts accType;
};

short readFile(clients arrClients[], accounts arrAccounts[])
{
    fstream clients, accounts;
    string temptext;
    short NBofClients;
    clients.open("clients.txt");
    short i = 0;
    while (!clients.eof())
    {
        getline(clients, temptext);
        arrClients[i].number = temptext;
        getline(clients, temptext);
        arrClients[i].name = temptext;
        getline(clients, temptext);
        arrClients[i].pin = temptext;
        i++;
    }
    clients.close();
    accounts.open("account.txt");
    i = 0;
    while (!accounts.eof())
    {
        getline(accounts, temptext);
        arrClients[i].number = temptext;
        getline(accounts, temptext);
        arrClients[i].accType.checkin = stol(temptext);
        getline(accounts, temptext);
        arrClients[i].accType.saving = stol(temptext);
        getline(accounts, temptext);
        arrClients[i].accType.credit = stol(temptext);
        i++;
    }
    accounts.close();
    return NBofClients = i;
}

void updateFile(clients arrClients[], short NBofClients)
{
    fstream myFile;
    myFile.open("clients.txt");
    for (short i = 0; i < NBofClients; i++)
    {
        myFile << arrClients[i].number << endl;
        myFile << arrClients[i].name << endl;
        myFile << arrClients[i].pin << endl;
        myFile << to_string(arrClients[i].balance) << endl;
    }
    myFile.close();
}

string toUpper(string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
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
    string accNo;
    bool j;
    do
    {
        cout << "Enter Your 6 Digit Account No. : ";
        getline(cin, accNo);
        for (short i = 0; i < NBofClients; i++)
        {
            if (toUpper(accNo) == arrClients[i].number)
            {
                j = true;
            }
        }
    } while (accNo.length() != 6 || !j);
    return accNo;
}

string readPIN(short selectedClient, clients arrClients[])
{
    string pin;
    bool j;
    do
    {
        cout << "Enter 4 Digit PIN : ";
        getline(cin, pin);
        if (pin == arrClients[selectedClient].pin)
        {
            j = true;
        }
    } while (pin.length() != 4 || !j);
    return pin;
}

short checkClient(string clientNo, short NBofClients, clients arrClients[])
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
    // cout << "4. Log Out\n";
}

void displaytTransactionMenu()
{
    system("cls");
    displayHeading("Royal Bank");
    cout << "\nSelect Transcation Type : \n";
    cout << "\n1. Deposit\n";
    cout << "2. Withdrawn\n";
    cout << "3. Consult\n";
    // cout << "4. Log Out\n";
}

short readAccType()
{
    short select;
    do
    {
        cout << "Select Account Type or Log Out : ";
        cin >> select;
    } while (select < 0 || select > 4);
    system("cls");
    return select;
}

void displayAccInfo(short selectedClient, short NBofClients, clients arrClients[])
{
    for (short i = 0; i < NBofClients; i++)
    {
        if (selectedClient == i)
        {
            cout << "Name : " << arrClients[i].name << endl;
            cout << "Account No : " << arrClients[i].number << endl;
            // cout << "Balance  : $" << arrClients[i].balance << " CAD" << endl;
        }
    }
}

void deposit(short selectedClient, clients arrClients[])
{
    long deposit;
    do
    {
        cout << "Enter the amount you want to deposit in this transaction (Max $1000) : ";
        cin >> deposit;
    } while (deposit < 10 || deposit > 1000);
    cout << "\nTotal balance after transaction : $" << arrClients[selectedClient].balance + deposit << "CAD" << endl;
    return arrClients[selectedClient].balance + deposit;
}

void withdrawl(short selectedClient, clients arrClients[])
{
    long withdrawl;
    do
    {
        cout << "Enter the amount you want to withdrawl in this transaction (Max $1000 | Min $10) : ";
        cin >> withdrawl;
    } while (withdrawl < 10 || withdrawl > 1000);
    // cout << "\nTotal balance after transaction : $" << arrClients[selectedClient].balance - withdrawl << "CAD" << endl;
    // return arrClients[selectedClient].balance - withdrawl;
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