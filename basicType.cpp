//header files
#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    int yearOfBirth, age;
    float timeWorked, hourlyRate, totalSalary;
    string firstName, lastName;

    cout << "        BASIC TYPES" << endl;
    cout << "        ___________" << endl;
    cout << "Enter your first name : ";
    cin >> firstName;
    cout << "Enter your last name : ";
    cin >> lastName;
    cout << "Enter Your year of birth : ";
    cin >> yearOfBirth;
    cout << "Enter your hourly rate : ";
    cin >> hourlyRate;
    cout << "Enter your time worked : ";
    cin >> timeWorked;
    cout << "Sir or Miss " << firstName << " " << lastName << "," << endl;

    // calculating the age and storing it in variable age
    age = 2019 - yearOfBirth;
    cout << "You are born in " << yearOfBirth << ", your age is " << age << endl;

    // calculating the total Salary and storing it in variable totalSalary
    totalSalary = hourlyRate * timeWorked;
    cout << "For " << hourlyRate << "$ in " << timeWorked << " hours, your Salary is " << totalSalary << "$" << endl;

    system("pause");
    return 0;
}