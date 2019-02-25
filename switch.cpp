#include <iostream>
using namespace std;

int main()
{

    char yourGrade;

    cout << "\t\tTHE EVALUATOR\n";
    cout << "\t\t_____________\n";
    cout << "Enter your grade (A - F) : ";
    cin >> yourGrade;

    switch (yourGrade)
    {
    case 'A':
    case 'a':
        cout << "Your percentage is between 90 to 100 \n";
        break;
    case 'B':
    case 'b':
        cout << "Your percentage is between 80 to 90\n";
        break;
    case 'C':
    case 'c':
        cout << "Your percentage is between 70 to 80\n";
        break;
    case 'D':
    case 'd':
        cout << "Your percentage is between 60 to 70\n";
        break;
    case 'E':
    case 'e':
        cout << "Your percentage is between 50 to 60\n";
        break;
    case 'F':
    case 'f':
        cout << "You are Failed\n";
        break;
    default:
        cout << "Invalid Input\n";
    }

    system("pause");
    return 0;
}