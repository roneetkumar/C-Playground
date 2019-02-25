#include <iostream>
#include <string>
using namespace std;

main()
{
    int income, deduction;
    unsigned short age, children;
    string name;
    char gender, maritalStatus;

    cout << "\t\tREVENUE QUEBEC\n";
    cout << "Enter your name : ";
    getline(cin, name);

    do
    {
        cout << "Select your gender (f/m) : ";
        cin >> gender;
    } while (!(gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F'));

    do
    {
        cout << "Enter your age (15 to 65) : ";
        cin >> age;
    } while (age < 15 || age > 65);

    do
    {
        cout << "Are you married (y/n) : ";
        cin >> maritalStatus;
    } while (!(maritalStatus == 'y' || maritalStatus == 'Y' || maritalStatus == 'n' || maritalStatus == 'N'));

    do
    {
        cout << "Enter your gross income $ : ";
        cin >> income;
    } while (income < 0);

    do
    {
        cout << "How many children : ";
        cin >> children;
    } while (children > 10 || children < 0);

    cout << "\nThanks,\n";
    cout << ((gender == 'm' || gender == 'M') ? "Sir " : "Mam ") << name << ",\n";
    cout << "Your total annual income is $" << income << endl;

    deduction = income * ((age < 18 ? 0 : ((gender == 'm' || gender == 'M') ? 40 : 30)) + (maritalStatus == 'y' || maritalStatus == 'Y' ? 10 : 20) - (children * 10)) / 100;

    cout << "The total of your deduction is $" << deduction << endl;
    cout << "Your annual net salary will be $" << income - deduction << endl;

    // cout << "Thanks," << ((gender == 'm' || gender == 'M') ? "\nSir " : "\nMam ") << name << ",\nYour total annual income is $" << income << ".\nThe total of your deduction is $" << income * ((age < 18 ? 0 : ((gender == 'm' || gender == 'M') ? 40 : 30)) + (maritalStatus == 'y' || maritalStatus == 'Y' ? 10 : 20) - (children * 10)) / 100 << ".\nYour annual net salary will be $" << income - (income * ((age < 18 ? 0 : ((gender == 'm' || gender == 'M') ? 40 : 30)) + (maritalStatus == 'y' || maritalStatus == 'Y' ? 10 : 20) - (children * 10)) / 100) << "." << endl;
    system("pause");
}