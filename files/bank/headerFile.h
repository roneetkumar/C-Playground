#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct client
{
    string number, name, pin;
    long balance;
};

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