#include "headerFile.h"

main()
{
    //to display title
    displayTitle("Lasalle College");

    //variables
    short NBStu = readNBStudents(NBofStudents);
    string allNames[5];
    float allGrades[5];

    readAllInfo(allNames, allGrades, NBStu);
    displayAverage("\nThe Class Average is " + to_string(calculateAverage(allGrades, NBStu)) + "\n");
    displayAllInfo(allNames, allGrades, NBStu);

    system("pause");
}