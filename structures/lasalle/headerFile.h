#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define currentYear 2019

struct date
{
    short date;
    short month;
    short year;
};

struct student
{
    string name;
    string no;
    date birthdate;
};

string toUpper(string text)
{
    for (short i = 0; i < text.length(); i++)
    {
        text[i] = toupper(text[i]);
    }
    return text;
}

void displayHeading(string text)
{
    cout << "\t" << toUpper(text) << "\n\t" << string(text.length(), '`') << endl;
}

short readNBStu(short maxStu)
{
    short NBStu;
    do
    {
        cout << "Enter the Number of Students (Max " << maxStu << ") : ";
        cin >> NBStu;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            NBStu = -1;
        }
    } while (NBStu > maxStu || NBStu < 1);
    return NBStu;
}

string readStuNo()
{
    string no;
    cin.ignore();
    do
    {
        cout << "\tNo : ST";
        cin >> no;
        for (short i = 0; i < no.length(); i++)
        {
            if (isalpha(no[i]))
                no[0] = ' ';
        }
    } while (no[0] == 0 || no[0] == ' ');
    return no;
}

string readStuName()
{
    string name;
    cin.ignore();
    do
    {
        cout << "\tName : ";
        getline(cin, name);
        for (short i = 0; i < name.length(); i++)
        {
            if (isdigit(name[i]))
                name[0] = ' ';
        }
    } while (name[0] == 0 || name[0] == ' ');

    name[0] = toupper(name[0]);

    for (int i = 1; i < name.length(); i++)
    {
        if (name[i - 1] == ' ')
            name[i] = toupper(name[i]);
        else
            name[i] = tolower(name[i]);
    }

    return name;
}

short readDate()
{
    short date;
    do
    {
        cout << "\tDate: ";
        cin >> date;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            date = -1;
        }
    } while (date < 0 || date > 31);
    return date;
}

short readMonth()
{
    short month;
    do
    {
        cout << "\tMonth: ";
        cin >> month;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            month = -1;
        }
    } while (month < 0 || month > 12);
    return month;
}

short readYear()
{
    short year;
    do
    {
        cout << "\tYear: ";
        cin >> year;
        if (!cin)
        {
            cin.clear();
            cin.ignore(256, '\n');
            year = -1;
        }
    } while (year < 0 || year > 2018);
    return year;
}

bool dateValidation(short date, short month, short year)
{
    if (year >= 1900 && year <= 2019)
        if (month >= 1 && month <= 12)
            if ((date >= 1 && date <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
                return true;
            else if ((date >= 1 && date <= 30) && (month == 4 || month == 6 || month == 9 || month == 11))
                return true;
            else if ((date >= 1 && date <= 28) && (month == 2))
                return true;
            else if (date == 29 && month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
                return true;
            else
                return false;
        else
            return false;

    else
        return false;
}

short calcAge(short StuYob)
{
    return currentYear - StuYob;
}

struct student readOneStu()
{
    struct student stu;
    stu.no = readStuNo();
    stu.name = readStuName();
    do
    {
        stu.birthdate.date = readDate();
        stu.birthdate.month = readMonth();
        stu.birthdate.year = readYear();
        if (!dateValidation(stu.birthdate.date, stu.birthdate.month, stu.birthdate.year))
        {
            cout << "\tDate is Invalid, Please Enter the Valid Date.\n";
        }

    } while (!dateValidation(stu.birthdate.date, stu.birthdate.month, stu.birthdate.year));
    return stu;
}

void displayOneStu(student stu)
{
    cout << left << setw(10) << "ST" + toUpper(stu.no) << setw(20) << stu.name << stu.birthdate.date << "/" << stu.birthdate.month << "/" << stu.birthdate.year << "\t\t" << setw(2) << calcAge(stu.birthdate.year) << endl;
}

void readAllStudent(short NBEmp, student stu[])
{
    for (short i = 0; i < NBEmp; i++)
    {
        cout << "Student " << i + 1 << " - \n";
        stu[i] = readOneStu();
    }
}

short readYear(string temp, short yearS, short yearE)
{
    short year;
    cout << "\nEnter " << temp << " year (" << yearS << " - " << yearE << ") : ";
    cin >> year;
    return year;
}

void displayFoundStu(short NBStu, student stu[], short startY, short lastY)
{
    cout << "\n";
    for (short i = 0; i < NBStu; i++)
    {
        if ((startY < stu[i].birthdate.year) && (lastY > stu[i].birthdate.year))
            displayOneStu(stu[i]);
    }
}

void displayAllStudent(short NBStu, student stu[])
{
    cout << left << setw(10) << "Numbers" << setw(20) << "Names" << setw(10) << "Birth Dates\t" << setw(5) << "Ages" << endl;
    cout << left << setw(10) << "```````" << setw(20) << "`````" << setw(10) << "```````````\t" << setw(5) << "````" << endl;
    for (short i = 0; i < NBStu; i++)
    {
        displayOneStu(stu[i]);
    }
}