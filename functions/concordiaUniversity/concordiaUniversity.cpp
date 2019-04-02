#include "headerFile.h"
#define NBofStudents 20

main()
{
    //to display title
    displayTitle("Concordia University");

    //read no of students
    short allStudents = readNBStudents(NBofStudents);
    float allGrades[allStudents];

    //to read all grades
    readAllGrades(allGrades, allStudents);

    //to display all grades
    displayAllGrades(allGrades, allStudents);

    //to display all info
    displayInfo("\nThe Average is " + to_string(calculateAverage(allGrades, allStudents)));
    displayInfo("\nThe Best is " + to_string(findBest(allGrades, allStudents)));
    displayInfo("\nThe Worst is " + to_string(findWorst(allGrades, allStudents)) + "\n");

    system("pause");
}