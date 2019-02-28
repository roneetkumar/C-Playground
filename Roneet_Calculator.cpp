#include <iostream>
using namespace std;

main()
{
    float result = 0, values[20];
    short select, noOfValues, i;
    char restartOperation;
    do
    {
        restartOperation = '\0';

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
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t   Addition\n";
                do
                {
                    cout << "Enter the number of values to add (Max 20) : ";
                    cin >> noOfValues;
                } while (noOfValues < 0 || noOfValues > 20);
                for (i = 0; i < noOfValues; i++)
                {
                    cout << "Value " << i + 1 << " : ";
                    cin >> values[i];
                    result += values[i];
                }

                cout << "The result is " << result << endl;

                cout << "Would you like to do another addition ? (y - n) : ";
                cin >> restartOperation;
                result = 0;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 2:
            do
            {
                system("cls");
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t   Division\n";
                cout << "Enter the value to divide : ";
                cin >> values[0];
                cout << "Enter the divider : ";
                cin >> values[1];
                result = values[0] / values[1];
                cout << "The result is " << result << endl;
                cout << "Would you like to do another division ? (y - n) : ";
                cin >> restartOperation;
                result = 0;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 3:
            do
            {
                system("cls");
                cout << "\t\t  Calculator\n";
                cout << "\t\t  ``````````\n";
                cout << "\t\t  Subtraction\n";

                cout << "Value 1 : ";
                cin >> values[0];
                cout << "Value 2 : ";
                cin >> values[1];
                result = values[0] - values[1];

                cout << "The result is " << result << endl;

                cout << "Would you like to do another subtraction ? (y - n) : ";
                cin >> restartOperation;
                result = 0;
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
                do
                {
                    cout << "Enter the number of values to Multiplication (Max) : ";
                    cin >> noOfValues;
                } while (noOfValues < 0 || noOfValues > 20);
                for (i = 0; i < noOfValues; i++)
                {
                    cout << "Value " << i + 1 << " : ";
                    cin >> values[i];
                    result *= values[i];
                }

                cout << "The result is " << result << endl;

                cout << "Would you like to do another multiplication ? (y - n) : ";
                cin >> restartOperation;
                result = 1;
            } while (restartOperation == 'y' || restartOperation == 'Y');
            break;
        case 5:
            break;
        default:
            cout << "Wrong Option\n";
        }
        system("cls");
    } while (restartOperation == 'n' || restartOperation == 'n');
    system("pause");
}