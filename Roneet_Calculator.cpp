#include <iostream>
using namespace std;
main()
{
    float result, value1, value2;
    short select, noOfValues, i;
    char restartOperation;
    do
    {
        restartOperation = 0;
        cout << "\t\t  Calculator\n";
        cout << "\t\t  ``````````\n";
        cout << "\t\t- By Roneet\n";
        cout << "\t\t  `````````\n";
        cout << "1 - Addition\n";
        cout << "2 - Division\n";
        cout << "3 - Substraction\n";
        cout << "4 - Multiplication\n";
        cout << "5 - Quit\n";
        do
        {
            cout << "Enter your choice (1-5) : ";
            cin >> select;
        } while (select < 0 || select > 5);
        switch (select)
        {
        case 1:
            do
            {
                system("cls");
                result = 0;
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t   Addition\n";
                cout << "Enter the number of values to add : ";
                cin >> noOfValues;
                for (i = 0; i < noOfValues; i++)
                {
                    cout << "Value " << i + 1 << " : ";
                    cin >> value1;
                    result += value1;
                }
                cout << "The result is " << result << endl;
                cout << "Would you like to do another addition ? (y - n) : ";
                cin >> restartOperation;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 2:
            do
            {
                system("cls");
                result = 0;
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t   Division\n";
                cout << "Enter the value to divide : ";
                cin >> value1;
                cout << "Enter the divider : ";
                cin >> value2;
                result = value1 / value2;
                cout << "The result is " << result << endl;
                cout << "Would you like to do another division ? (y - n) : ";
                cin >> restartOperation;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 3:
            do
            {
                system("cls");
                result = 0;
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t  Subtraction\n";
                cout << "Value 1 : ";
                cin >> value1;
                cout << "Value 2 : ";
                cin >> value2;
                result = value1 - value2;
                cout << "The result is " << result << endl;
                cout << "Would you like to do another subtraction ? (y - n) : ";
                cin >> restartOperation;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 4:
            do
            {
                system("cls");
                result = 1;
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\tMultiplication\n";
                cout << "Enter the number of values to Multiplication : ";
                cin >> noOfValues;
                for (i = 0; i < noOfValues; i++)
                {
                    cout << "Value " << i + 1 << " : ";
                    cin >> value1;
                    result *= value1;
                }
                cout << "The result is " << result << endl;
                cout << "Would you like to do another multiplication ? (y - n) : ";
                cin >> restartOperation;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 5:
            break;
        }
        system("cls");
    } while (restartOperation == 'n' || restartOperation == 'n');
}