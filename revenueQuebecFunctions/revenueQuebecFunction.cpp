#include "headerFile.h"

main()
{
    string name;
    char gender;
    int yearOfBirth, age;

    displayString(toUpper("\t\tRevenue Quebec\n\t\t"));
    displayLine("Revenue Quebec");
    do
    {
        displayString("Enter your name : ");
        name = readString();
    } while (name.empty() || name == " ");

    do
    {
        displayString("Select your gender (M/F) : ");
        gender = readChar();
    } while (toupper(gender) != 'M' && toupper(gender) != 'F');

    do
    {
        displayString("Enter your year of birth : ");
        yearOfBirth = readNumber();
    } while (yearOfBirth < 1900 || yearOfBirth > 2018);

    age = calcAge(yearOfBirth);

    displayString("\n" + findGender(gender));
    displayString(upperFirst(name + ",\n"));
    displayString("According to your age ");
    displayString(to_string(age));
    displayString(" years,\n- you are ");
    displayString(checkAgeCat(age));

    system("pause");
}