#pragma once
#include <iostream>
#include <string>
using namespace std;

#define currentYear 2019

// to read strings
string readString()
{
    string word;
    getline(cin, word);
    return word;
}

// to read char
char readChar()
{
    char character;
    cin >> character;
    return character;
}

// to read number
int readNumber()
{
    int num;
    // getline(cin, num);
    cin >> num;
    return num;
}

// to display name
void displayString(string phrase)
{
    cout << phrase;
}

void displayLine(string phrase)
{
    for (int i = 0; i < phrase.length(); i++)
    {
        cout << "-";
    }
    cout << "\n\n";
}

// to make any string upper case
string toUpper(string phrase)
{
    for (int i = 0; i < phrase.length(); i++)
    {
        phrase[i] = toupper(phrase[i]);
    }
    return phrase;
}

//to upper first
string upperFirst(string word)
{
    word[0] = toupper(word[0]);
    for (int i = 1; i < word.length(); i++)
    {
        if (word[i - 1] == ' ')
            word[i] = toupper(word[i]);
        else
            word[i] = tolower(word[i]);
    }
    return word;
}

// to find gender
string findGender(char gender)
{
    return ((gender == 'M' || gender == 'm') ? "Sir " : "Mam ");
}

// to calculat age and age category
int calcAge(int yearOfBirth)
{
    int age = currentYear - yearOfBirth;
    return age;
}

string checkAgeCat(int age)
{
    if (age >= 1 && age <= 14)
    {
        return "Child\n";
    }
    else if (age >= 15 && age <= 20)
    {
        return "Teenage\n";
    }
    else if (age >= 21 && age <= 60)
    {
        return "Adult\n";
    }
    else if (age >= 61 && age <= 90)
    {
        return "Senior\n";
    }
    else
    {
        return "Walking Dead\n";
    }
}

// bool IsLetters(string input)
// {
//     for (int i = 0; i < input.size(); i++)
//     {
//         if (!isalpha(input[i]))
//             return false; // character is not alphabetic
//     }
//     return true; // Every character is alphabetic
// }