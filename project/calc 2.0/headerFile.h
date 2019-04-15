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

/* this function reads a value and validates it for numeric.
 this is a general purpose function which can used at multiple sections of the
 program. its only job is to read a value from user and validate it for 
 numeric value. Moreover, it also ask's the user to input the value depending upon 
 users need.*/

double readValue(string temp)
{
    double value;
    do
    {
        cout << temp;
        cin >> value;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            value = -1;
        }
    } while (value < 0);
    return value;
}

// operations----------------------------------

double calcAdd(string operation)
{
    double result = 0;
    displayTitle("calculator 2.0", " - " + operation + " -");
    short NBValues = readValue("Enter the no. of values for " + operation + " : ");
    for (short i = 0; i < NBValues; i++)
    {
        result += readValue("Enter value " + to_string(i + 1) + " : ");
    }
    return result;
}

double calcSub(string operation)
{
    displayTitle("calculator 2.0", " - " + operation + " -");
    return readValue("Enter value 1 :") - readValue("Enter value 2 : ");
}

double calcMul(string operation)
{
    double result = 1;
    displayTitle("calculator 2.0", " - " + operation + " -");
    short NBValues = readValue("Enter the no. of values for " + operation + " : ");
    for (short i = 0; i < NBValues; i++)
    {
        result *= readValue("Enter value " + to_string(i + 1) + " : ");
    }
    return result;
}

double calcDiv(string operation)
{
    displayTitle("calculator 2.0", " - " + operation + " -");
    return readValue("Enter the value to divide  : ") / readValue("Enter the divider : ");
}

double calcSquare(string operation)
{
    double value;
    displayTitle("calculator 2.0", " - " + operation + " -");
    value = readValue("Enter a value : ");
    return value * value;
}

// operations----------------------------------

void displayResult(double result)
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
    system("cls");
    return (toupper(restart));
}