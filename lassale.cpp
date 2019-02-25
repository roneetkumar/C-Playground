#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    char gender;
    float midterm, finalexam, project1, project2, yourGrade;

    cout << "\t\tCOLLEGE LASSALE" << endl;
    cout << "\t\t_______________" << endl;
    cout << "Enter your Full Name Please : ";
    getline(cin, fullName);

    do
    {
        cout << "Enter Your Gender (M/F) : ";
        cin >> gender;
    } while ((gender != 'M' && gender != 'm') && (gender != 'F' && gender != 'f'));

    cout << "Enter your grade (Max 100) : \n";
    cout << "\t-Midterm Exam (20%) : ";
    cin >> midterm;
    cout << "\t-Final Exam (40%) : ";
    cin >> finalexam;
    cout << "\t-Project 1 (15%) : ";
    cin >> midterm;
    cout << "\t-Project 2 (25%) : ";
    cin >> project2;
    yourGrade = (midterm * 0.2) + (finalexam * 0.4) + (project1 * 0.15) + (project2 * 0.25);

    if (yourGrade >= 50 && yourGrade <= 100)
    {
        if (gender == 'M' || gender == 'm')
        {
            cout << "Sir " << fullName << ", because your total percentage is " << yourGrade << "%. Your are Passed." << endl;
        }

        else if (gender == 'F' || gender == 'f')
        {
            cout << "Mam " << fullName << ", because your total percentage is " << yourGrade << "%. Your are Passed." << endl;
        }
        else
        {
            cout << "Invalid Input Gender\n";
        }
    }

    else if (yourGrade >= 0 || yourGrade < 50)
    {
        if (gender == 'M' || gender == 'm')
        {
            cout << "Sir " << fullName << ", because your total percentage is " << yourGrade << "%. Your are Failed." << endl;
        }
        else if (gender == 'F' || gender == 'f')
        {
            cout << "Mam " << fullName << ", because your total percentage is " << yourGrade << "%. Your are Failed." << endl;
        }
        else
        {
            cout << "Invalid Input Gender\n";
        }
    }

    else
    {
        cout << "Invalid Input Grades\n";
    }

    system("pause");
    return 0;
}