#pragma once
#include <iostream>
#include <string>
using namespace std;

int readNo()
{
    int no;
    cin >> no;
    return no;
}

string readNo(string text)
{
    getline(cin, text);
    return text;
}

void displayText(string text)
{
    cout << text;
}