#include <iostream>
#include <string>
using namespace std;

main()
{
    short i = 0, students;
    cout << "\t\tCollege Lasalle\n";
    cout << "\t\t```````````````\n";

    // do
    // {
    //     cout << "\nEnter the number of students(max 20) : ";
    //     cin >> students;
    // } while (students < 1 || students > 20);

    while (true)
    {
        cout << "\nEnter the number of students(max 20) : ";
        cin >> students;
        if (students >= 1 && students <= 20)
        {
            break;
        }
    }

    float grade[students];
    string name[students];

    // for (i = 0; i < students; i++)
    // {
    //     cout << "Student " << i + 1 << endl;
    //     cout << "\tName : ";
    //     cin >> name[i];
    //     do
    //     {
    //         cout << "\tGrade : ";
    //         cin >> grade[i];
    //     } while (grade[i] < 0 || grade[i] > 100);
    // }

    while (i < students)
    {
        cout << "Student " << i + 1 << endl;
        cout << "\tName : ";
        cin.ignore();
        getline(cin, name[i]);

        while (true)
        {
            cout << "\tGrade : ";
            cin >> grade[i];

            if (grade[i] >= 0 && grade[i] <= 100)
            {
                break;
            }
        }
        i++;
    }

    cout << "\nThe students of the class\n";
    cout << "`````````````````````````\n\n";
    cout << "S.No.\tStudents          \tGrade\t\tResult\n";
    cout << "`````\t````````          \t`````\t\t``````\n";

    // for (i = 0; i < students; i++)
    // {
    //     cout << i + 1 << ".\t" << name[i] << "\t\t" << grade[i] << (grade[i] < 60 ? "\t\tFail" : "\t\tPass") << endl;
    // }

    i = 0;

    while (i < students)
    {
        name[i].resize(12);
        cout << i + 1 << ".\t" << name[i] << "           \t" << grade[i] << (grade[i] < 60 ? "\t\tFail" : "\t\tPass") << endl;
        i++;
    }

    cout << "\n";
    system("pause");
}