#include "headerFile.h"

main()
{
    //to display title
    displayTitle("Lasalle College");

    //variables
    short NBStu = readNBStudents(NBofStudents);
    string allNames[NBStu];
    float allGrades[NBStu];

    readAll(allNames, allGrades, NBStu);
    displayAll(allNames, allGrades, NBStu);
    displayInfo("\nThe Class Average is " + to_string(calculateAverage(allGrades, NBStu)) + "\n");
    displayBestStu(allNames, allGrades, NBStu);
    displayWorstStu(allNames, allGrades, NBStu);

    system("pause");
}