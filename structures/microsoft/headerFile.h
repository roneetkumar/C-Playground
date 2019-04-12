#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define MaxEmp 5
#define currentYear 2019

struct employee
{
    string name;
    short yob;
    float salary;
};

// to make any string upper case
string toUpper(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

void underline(string text)
{
    //underline
    for (int i = 0; i < text.length(); i++)
    {
        cout << "`";
    }
}

void displayHeading(string text)
{
    cout << text;
}

short readNBEmp(short maxEmp)
{
    short NBEmp;
    do
    {
        cout << "\nEnter No. Of Employees (Max " << maxEmp << ") : ";
        cin >> NBEmp;
    } while (NBEmp > maxEmp || NBEmp < 2);
    return NBEmp;
}

struct employee getInfo()
{
    struct employee EMP;
    cin.ignore(1);
    do
    {
        cout << "\tName : ";
        getline(cin, EMP.name);
        for (short i = 0; i < EMP.name.length(); i++)
        {
            if (isdigit(EMP.name[i]))
            {
                EMP.name[0] = ' ';
            }
        }
    } while (EMP.name[0] == 0 || EMP.name[0] == ' ');

    EMP.name[0] = toupper(EMP.name[0]);
    for (int i = 1; i < EMP.name.length(); i++)
    {
        if (EMP.name[i - 1] == ' ')
            EMP.name[i] = toupper(EMP.name[i]);
        else
            EMP.name[i] = tolower(EMP.name[i]);
    }

    do
    {
        cout << "\tYear Of Birth : ";
        cin >> EMP.yob;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            EMP.yob = -1;
        }
    } while (EMP.yob < 1900 || EMP.yob > 2018);

    do
    {
        cout << "\tSalary : ";
        cin >> EMP.salary;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            EMP.salary = -1;
        }
    } while (EMP.salary < 0);

    return EMP;
}

void getAllInfo(short NBEmp, employee EmpInfo[])
{
    for (short i = 0; i < NBEmp; i++)
    {
        cout << "Employee " << i + 1 << " - \n";
        EmpInfo[i] = getInfo();
    }
}

short calcAge(short EMPyob)
{
    return currentYear - EMPyob;
}

float findRichest(short NBStu, employee EmpInfo[])
{
    float richest = EmpInfo[0].salary;

    for (short i = 0; i < NBStu; i++)
    {
        richest = (EmpInfo[i].salary > richest) ? EmpInfo[i].salary : richest;
    }
    return richest;
}

short findOldest(short NBStu, employee EmpInfo[])
{
    short oldest = calcAge(EmpInfo[0].yob);

    for (short i = 0; i < NBStu; i++)
    {
        oldest = (calcAge(EmpInfo[i].yob) > oldest) ? calcAge(EmpInfo[i].yob) : oldest;
    }
    return oldest;
}

void displayInfo(employee EmpInfo)
{
    cout << left << setw(20) << EmpInfo.name << setw(6) << EmpInfo.yob << "\t\t$" << setw(10) << EmpInfo.salary << setw(3) << calcAge(EmpInfo.yob) << endl;
}

void findEmployee(short NBEmp, employee EmpInfo[])
{
    string findEmp;
    cout << "\n\nEnter the name of the employee to find :  ";
    cin >> findEmp;
    cout << "\n";

    for (short i = 0; i < NBEmp; i++)
    {
        if (toUpper(findEmp) == toUpper(EmpInfo[i].name))
        {
            cout << "Employee Found\n";
            underline("Employee Found\n");
            cout << "\n";
            break;
        }
        else
        {
            cout << "Employee Not Found\n";
            underline("Employee Not Found");
            cout << "\n";
            break;
        }
    }
    for (short i = 0; i < NBEmp; i++)
    {
        if (toUpper(findEmp) == toUpper(EmpInfo[i].name))
        {
            displayInfo(EmpInfo[i]);
        }
    }
}

void displayAllInfo(short NBEmp, employee EmpInfo[])
{
    cout << toUpper("\n\nThe Company Employees\n");
    underline("The Company Employees");
    cout << "\n";
    cout << left << setw(20) << "Employee Names" << setw(6) << "Year Of Birth\t" << setw(10) << "Salary\t" << setw(3) << "Age" << endl;
    cout << left << setw(20) << "``````````````" << setw(6) << "`````````````\t" << setw(10) << "``````\t" << setw(3) << "```" << endl;

    for (short i = 0; i < NBEmp; i++)
    {
        displayInfo(EmpInfo[i]);
    }

    cout << "\nRichest\n";
    underline("Richest");
    cout << "\n";
    for (short i = 0; i < NBEmp; i++)
    {
        if (findRichest(NBEmp, EmpInfo) == EmpInfo[i].salary)
        {
            displayInfo(EmpInfo[i]);
        }
    }

    cout << "\nOldest\n";
    underline("Oldest");
    cout << "\n";
    for (short i = 0; i < NBEmp; i++)
    {
        if (findOldest(NBEmp, EmpInfo) == calcAge(EmpInfo[i].yob))
        {
            displayInfo(EmpInfo[i]);
        }
    }

    findEmployee(NBEmp, EmpInfo);
}