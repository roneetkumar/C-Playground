#include "headerFile.h"

main()
{

    displayString(toUpper("\t\tRevenue Quebec\n\t\t"));
    // displayString(displayLine("Revenue Quebec"));
    displayLine("Revenue Quebec");
    displayString("Enter your name : ");
    string name = readString();
    displayString("Select your gender (M/F) : ");
    char gender = readChar();
    displayString("Enter your year of birth : ");
    int yearOfBirth = readNumber();

    int age = calcAge(yearOfBirth);

    displayString("\n" + findGender(gender));
    displayString(upperFirst(name + ",\n"));
    displayString("According to your age ");
    displayString(to_string(age));
    displayString(" years,\n- you are ");
    displayString(checkAgeCat(age));

    system("pause");
}