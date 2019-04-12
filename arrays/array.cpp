#include <iostream>
#include <string>
using namespace std;

main()
{
    int i = 0, students;

    cout << "\t\tCollege Lassale\n";
    cout << "\t\t---------------\n";

    do
    {
        cout << "Enter the no. of students (max 20) : ";
        cin >> students;
    } while (students > 20 || students < 1);

    float grade[students];

    for (i = 0; i < students; i++)
    {
        cout << "Enter grade " << i + 1 << " : ";
        cin >> grade[i];
    }

    for (i = 0; i < students; i++)
    {
        cout << "grade " << i + 1 << " : " << grade[i] << endl;
    }

    system("pause");
}