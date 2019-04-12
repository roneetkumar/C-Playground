#include <iostream>
#include <string>
using namespace std;

main()
{
    short i = 0, students;
    cout << "\t\tCollege Lasalle\n";
    cout << "\t\t```````````````\n";

    do
    {
        cout << "\nEnter the number of students(max 20) : ";
        cin >> students;
    } while (students < 1 || students > 20);

    float grade[students], bestGrade = 0, worstGrade = 100;
    string name[students];

    for (i = 0; i < students; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "\tName : ";
        cin.ignore();
        getline(cin, name[i]);
        do
        {
            cout << "\tGrade : ";
            cin >> grade[i];
        } while (grade[i] < 0 || grade[i] > 100);

        // bestGrade[i] = (grade[i] > bestGrade[i]) ? grade[i] : bestGrade[i];

        // // cout << bestGrade[i];

        // // calculating the worst marks of the class
        worstGrade[i] = (grade[i] < worstGrade[i]) ? grade[i] : worstGrade[i];
    }

    cout << "\nThe students of the class\n";
    cout << "`````````````````````````\n\n";
    cout << "S.No.\tStudents          \tGrade\t\tResult\n";
    cout << "`````\t````````          \t`````\t\t``````\n";

    for (i = 0; i < students; i++)
    {
        cout << i + 1 << ".\t" << name[i] << "\t\t\t" << grade[i] << (grade[i] < 60 ? "\t\tFail" : "\t\tPass") << endl;
        cout << i + 1 << ".\t" << name[i] << "\t\t\t" << grade[i] << (grade[i] < 60 ? "\t\tFail" : "\t\tPass") << endl;
    }
    cout << "\nThe students of the class\n";

    // for (i = 0; i < students; i++)
    // {
    //     if (grade[i] > bestGrade)
    //     {
    //         bestGrade = grade[i];
    //         cout << i + 1 << ".\t" << name[i] << "\t\t\t" << worstGrade << (worstGrade < 60 ? "\t\tFail" : "\t\tPass") << endl;
    //     }
    //     else
    //     {
    //         worstGrade = grade[i];
    //         cout << i + 1 << ".\t" << name[i] << "\t\t\t" << worstGrade << (worstGrade < 60 ? "\t\tFail" : "\t\tPass") << endl;
    //     }

    //     // cout << "The worst marks is " << worstGrade[i] << endl;
    // }

    cout << "\n";
    system("pause");
}