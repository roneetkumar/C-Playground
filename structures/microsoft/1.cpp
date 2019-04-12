#include "headerFile.h"
struct stu
{
    string name;
    float grade;
};

main()
{
    stu student[5];
    for (short i = 0; i < 5; i++)
    {
        cin >> student[i].name;
        cin >> student[i].grade;
    }
    for (short i = 0; i < 5; i++)
    {
        cout << student[i].name << endl;
        cout << student[i].grade << endl;
    }

    system("pause");
}