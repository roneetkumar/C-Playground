#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    short noOfStudent;
    float grade, total = 0, bestGrade = 0, worstGrade = 100;

    // printing college name
    cout << "\t\tCollege Lassale\n";
    cout << "\t\t---------------\n";

    // "do while" loop to enter no of students
    do
    {
        cout << "Enter the number of students (max 20) : ";
        cin >> noOfStudent;
    } while (noOfStudent > 20 || noOfStudent <= 0);

    // "for loop" to calculate total marks, best marks and worst marks of each student
    for (short i = 1; i <= noOfStudent; i++)
    {
        // "do while" loop to enter the marks fo each student
        do
        {
            cout << "Enter marks for student " << i << " : ";
            cin >> grade;
        } while (grade > 100 || grade < 0);

        // calculating total marks of all the students
        total += grade;

        // calculating the best marks of the class
        bestGrade = (grade > bestGrade) ? grade : bestGrade;

        // calculating the worst marks of the class
        worstGrade = (grade < worstGrade) ? grade : worstGrade;
    }

    // calculating and printing the average marks of the class
    cout << "The class average is " << total / noOfStudent << "%" << endl;

    // printing best marks of the class
    cout << "The best marks is " << bestGrade << endl;

    //  printing worst marks of the class
    cout << "The worst marks is " << worstGrade << endl;
    system("pause");
}