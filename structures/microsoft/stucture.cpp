#include "headerFile.h"

main()
{
    displayHeading("\tMicrosoft-Inc\n\t");
    underline("Microsoft-Inc");
    short NBEmp = readNBEmp(MaxEmp);
    struct employee EmpInfo[5];

    getAllInfo(NBEmp, EmpInfo);
    displayAllInfo(NBEmp, EmpInfo);

    system("pause");
}