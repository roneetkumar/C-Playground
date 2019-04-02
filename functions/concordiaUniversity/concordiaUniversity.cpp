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
    displayGrades(allGrades, allStudents);

    //to display all info
    displayInfo("\nThe Average is " + to_string(calculateAverage(allGrades, allStudents)));
    displayInfo("\nThe Best is " + to_string(findBest(allGrades, allStudents)));
    displayInfo("\nThe Worst is " + to_string(findWorst(allGrades, allStudents)) + "\n");

    // for single line display
    // displayInfo("\nThe Average is " + to_string(calculateAverage(allGrades, NBofStudents)) + "\nThe Best is " + to_string(findBest(allGrades, NBofStudents)) + "\nThe Worst is " + to_string(findWorst(allGrades, NBofStudents)) + "\n");

    system("pause");
}

//-----------------Laboratory------------------

// for (short i = 0; i < NBofStudents; i++)
// {
//     cout << "Enter Grade " << i + 1 << " : ";
//     allGrades[i] = readOneGrade();
// }

//---------------------------------------------

// displayOneGrade();

//-----------------Laboratory-------------------
