#pragma once
#include <iostream>
#include <string>
using namespace std;

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

//to read grade of one student
float readOneGrade(short max, short min, short number)
{
    float grade;
    do
    {
        cout << "Enter Grade " << number << " : ";
        cin >> grade;
    } while (grade > max || grade < min);
    return grade;
}

//to read grades of all students
void readAllGrades(float allGrades[], short allStudents)
{
    for (short i = 0; i < allStudents; i++)
    {
        allGrades[i] = readOneGrade(100, 0, i + 1);
    }
}

//to display grade of one student
void displayOneGrade(float grade, short number)
{
    cout << "Grade " << number << " is " << grade << endl;
}

//to display all grades
void displayAllGrades(float allGrades[], short allStudents)
{
    cout << "\nGrades -\n\n";
    for (short i = 0; i < allStudents; i++)
    {
        displayOneGrade(allGrades[i], i + 1);
    }
}

//to calculate average grade of class
float calculateAverage(float allGrades[], short allStudents)
{
    float total = 0;
    for (short i = 0; i < allStudents; i++)
    {
        total += allGrades[i];
    }
    return total / allStudents;
}

//to find the best student
float findBest(float allGrades[], short allStudents)
{
    // initial values for best and worst average
    float bestGrade = allGrades[0];

    // looping to find the best average, worst average and oldest student in the class
    for (short i = 0; i < allStudents; i++)
    {
        bestGrade = (allGrades[i] > bestGrade) ? allGrades[i] : bestGrade;
    }
    return bestGrade;
}

//to find the worst student
float findWorst(float allGrades[], short allStudents)
{
    // initial values for best and worst average
    float worstGrade = allGrades[0];

    // looping to find the best average, worst average and oldest student in the class
    for (short i = 0; i < allStudents; i++)
    {
        worstGrade = (allGrades[i] < worstGrade) ? allGrades[i] : worstGrade;
    }
    return worstGrade;
}

//to display info of students
void displayInfo(string text)
{
    cout << text;
}