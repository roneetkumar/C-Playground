#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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

//to display title
void displayTitle(string title)
{
    for (int i = 0; i < title.length(); i++)
    {
        title[i] = toupper(title[i]);
    }

    cout << "\t" << title << "\n\t";

    //to print underline of title
    for (int i = 0; i < title.length(); i++)
    {
        cout << '-';
    }
    cout << "\n\n";
}

//to read no of students
short readNBStudents(short maxStu)
{
    short students;
    do
    {
        cout << "Enter No. Of Students (Max " << maxStu << ") : ";
        cin >> students;
    } while (students > maxStu || students < 2);
    return students;
}

//to read student name
string readStuName(short number)
{
    string name;
    cout << "Student " << number << " - \n";
    do
    {
        cout << "\tName : ";
        cin >> name;
    } while ((name[0] == 0 || name[0] == ' '));
    return name;
}

// to read student grade
float readStuGrade(short max, short min)
{
    float grade;
    do
    {
        cout << "\tGrade : ";
        cin >> grade;
    } while (grade > max || grade < min);
    return grade;
}

// to read student grades and names
void readAll(string allNames[], float allGrades[], short NBStu)
{
    for (short i = 0; i < NBStu; i++)
    {
        allNames[i] = readStuName(i + 1);
        allGrades[i] = readStuGrade(100, 0);
    }
}

//to display name of one student
void displayStuName(string name)
{
    cout << upperFirst(name);
}

//to display grade of one student
void displayStuGrade(float grade)
{
    cout << grade;
}

//to display all grades
void displayAll(string allNames[], float allGrades[], short NBStu)
{
    cout << "\n_______________________________________\n\n";
    cout << "\nThe Class -\n";
    cout << "```````````\n";

    cout << left << setw(8) << "Numbers\t\t" << setw(15) << "Names\t" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(15) << "`````\t" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        cout << left << setw(8) << i + 1 << "\t" << setw(15);
        displayStuName(allNames[i]);
        cout << "\t  " << setw(5);
        displayStuGrade(allGrades[i]);
        cout << endl;
    }
}

// find best student
float findBest(float allGrades[], short NBStu)
{
    float bestGrade;
    bestGrade = allGrades[0];

    for (short i = 0; i < NBStu; i++)
    {
        bestGrade = (allGrades[i] > bestGrade) ? allGrades[i] : bestGrade;
    }
    return bestGrade;
}

// find worst student
float findWorst(float allGrades[], short NBStu)
{
    float worstGrade;
    worstGrade = allGrades[0];

    for (short i = 0; i < NBStu; i++)
    {
        worstGrade = (allGrades[i] < worstGrade) ? allGrades[i] : worstGrade;
    }
    return worstGrade;
}

// display best student
void displayBestStu(string allNames[], float allGrades[], short NBStu)
{
    cout << "\n\tBest Grade in Class : \n";
    cout << "\t`````````````````````\n";
    cout << left << setw(8) << "Numbers\t\t" << setw(15) << "Names\t" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(15) << "`````\t" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        if (findBest(allGrades, NBStu) == allGrades[i])
        {
            cout << left << setw(8) << i + 1 << "\t" << setw(15);
            displayStuName(allNames[i]);
            cout << "\t  " << setw(5);
            displayStuGrade(allGrades[i]);
            cout << endl;
        }
    }
}

//display worst student
void displayWorstStu(string allNames[], float allGrades[], short NBStu)
{
    cout << "\n\tWorst Grade in Class : \n";
    cout << "\t`````````````````````\n";
    cout << left << setw(8) << "Numbers\t\t" << setw(15) << "Names\t" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(15) << "`````\t" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        if (findWorst(allGrades, NBStu) == allGrades[i])
        {
            cout << left << setw(8) << i + 1 << "\t" << setw(15);
            displayStuName(allNames[i]);
            cout << "\t  " << setw(5);
            displayStuGrade(allGrades[i]);
            cout << endl;
        }
    }
}

//to find average
float calculateAverage(float allGrades[], short NBStu)
{
    float total = 0;
    for (short i = 0; i < NBStu; i++)
    {
        total += allGrades[i];
    }
    return total / NBStu;
}

//to display info of students
void displayInfo(string text)
{
    cout << text;
}
