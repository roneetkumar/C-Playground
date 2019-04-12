#include "headerFile.h"

main()
{
    short NBStu;
    struct student stu[20];

    displayHeading("Lasalle College");
    NBStu = readNBStu(20);
    readAllStudent(NBStu, stu);
    displayAllStudent(NBStu, stu);
    displayFoundStu(NBStu, stu, 1995, 2004);

    system("pause");
}