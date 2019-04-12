#include "headerFile.h"

main()
{
    short NBStu;
    struct student stu[20];

    displayHeading("Lasalle College");
    NBStu = readNBStu(20);
    readAllStudent(NBStu, stu);
    displayAllStudent(NBStu, stu);

    short startYear = readYear("first", 1995, 2004);
    short lastYear = readYear("second", 1995, 2004);
    displayFoundStu(NBStu, stu, startYear, lastYear);

    system("pause");
}