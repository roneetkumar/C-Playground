#pragma once
#include <iostream>
#include <string>
using namespace std;

string toUpper(string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

void displayTitle(string title, string subTitle)
{
    cout << '\t' << toUpper(title) << endl;
    cout << '\t' << string(title.length(), '`') << endl;
    cout << '\t' << toUpper(subTitle) << "\n\n";
}

void displayMenu()
{
    cout << "1 - Addition" << endl;
    cout << "2 - Substraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "5 - Square" << endl;
    cout << "6 - Quit" << endl;
}

short readOption(short min, short max)
{
    short option;
    do
    {
        cout << "Enter Your Choice (" << min << " - " << max << ") : ";
        cin >> option;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            option = -1;
        }
    } while (option < min || option > max);
    system("cls");
    return option;
}

short NBofValues(string operation)
{
    short NB;
    do
    {
        cout << "Enter the no. of values for " << operation << " : ";
        cin >> NB;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            NB = -1;
        }
    } while (NB < 0);
    return NB;
}

float calcAdd(string operation)
{
    float value, result = 0;
    displayTitle("calculator 2.0", " - " + operation + " -");
    short NBValues = NBofValues(operation);
    for (short i = 0; i < NBValues; i++)
    {
        do
        {
            cout << "Value " << i + 1 << " : ";
            cin >> value;
            if (!cin)
            {
                cin.clear();
                cin.ignore(256, '\n');
                value = -1;
            }
        } while (value < 0);
        result += value;
    }
    return result;
}

float calcSub(string operation)
{
    float value1, value2, result = 0;
    displayTitle("calculator 2.0", " - " + operation + " -");
    do
    {
        cout << "Enter value 1  : ";
        cin >> value1;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value1 = -1;
        }
    } while (value1 < 0);
    do
    {
        cout << "Enter value 2 : ";
        cin >> value2;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value2 = -1;
        }
    } while (value2 < 0);
    return value1 - value2;
}

float calcMul(string operation)
{
    float value, result = 1;
    displayTitle("calculator 2.0", " - " + operation + " -");
    short NBValues = NBofValues(operation);
    for (short i = 0; i < NBValues; i++)
    {
        do
        {
            cout << "Value " << i + 1 << " : ";
            cin >> value;
            if (!cin)
            {
                cin.clear();
                cin.ignore(256, '\n');
                value = -1;
            }
        } while (value < 0);
        result *= value;
    }
    return result;
}

float calcDiv(string operation)
{
    float value1, value2, result = 0;
    displayTitle("calculator 2.0", " - " + operation + " -");
    do
    {
        cout << "Enter the value to divide  : ";
        cin >> value1;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value1 = -1;
        }
    } while (value1 < 0);
    cout << "Enter the divider : ";
    do
    {
        cin >> value2;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value2 = -1;
        }
    } while (value2 < 0);
    return value1 / value2;
}

float calcSquare(string operation)
{
    float value;
    displayTitle("calculator 2.0", " - " + operation + " -");
    do
    {
        cout << "Enter the value to square  : ";
        cin >> value;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value = -1;
        }
    } while (value < 0);
    return value * value;
}

void displayResult(float result)
{
    cout << "The result is " << result << endl;
}
char restartCalc(char restart)
{
    do
    {
        cout << "Would you like to do another  ? (y - n) : ";
        cin >> restart;
    } while (!(toupper(restart) == 'Y' || toupper(restart) == 'N'));
    return (toupper(restart));
}
