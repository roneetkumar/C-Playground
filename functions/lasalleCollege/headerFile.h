#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define NBofStudents 5

//to upper first
string upperFirst(string text)
{
    text[0] = toupper(text[0]);
    for (int i = 1; i < text.length(); i++)
    {
        if (text[i - 1] == ' ')
            text[i] = toupper(text[i]);
        else
            text[i] = tolower(text[i]);
    }
    return text;
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
string readStuName()
{
    string name;
    cin.ignore(1);
    do
    {
        cout << "\tName : ";
        getline(cin, name);

        for (short i = 0; i < name.length(); i++)
        {
            if (isdigit(name[i]))
            {
                name[0] = ' ';
            }
        }
    } while ((name[0] == 0 || name[0] == ' '));
    return name;
}

// to read student grade
float readStuGrade(short min, short max)
{
    float grade;
    do
    {
        cout << "\tGrade : ";
        cin >> grade;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            grade = -1;
        }
    } while (grade > max || grade < min);
    return grade;
}

// to read student grades and names
void readAll(string allNames[], float allGrades[], short NBStu)
{
    for (short i = 0; i < NBStu; i++)
    {
        cout << "Student " << i + 1 << " - \n";
        allNames[i] = readStuName();
        allGrades[i] = readStuGrade(0, 100);
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

    cout << left << setw(8) << "Numbers\t\t" << setw(25) << "Names" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(25) << "`````" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        cout << left << setw(8) << i + 1 << "\t" << setw(25);
        displayStuName(allNames[i]);
        cout << setw(5);
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
    cout << left << setw(8) << "Numbers\t\t" << setw(25) << "Names" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(25) << "`````" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        if (findBest(allGrades, NBStu) == allGrades[i])
        {
            cout << left << setw(8) << i + 1 << "\t" << setw(25);
            displayStuName(allNames[i]);
            cout << setw(5);
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
    cout << left << setw(8) << "Numbers\t\t" << setw(25) << "Names" << setw(5) << "Grades\t" << endl;
    cout << left << setw(8) << "```````\t\t" << setw(25) << "`````" << setw(5) << "``````\t" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        if (findWorst(allGrades, NBStu) == allGrades[i])
        {
            cout << left << setw(8) << i + 1 << "\t" << setw(25);
            displayStuName(allNames[i]);
            cout << setw(5);
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
