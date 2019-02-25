#include <iostream>
using namespace std;

int main()
{

    int num1, num2, selection;
    char again;
    do
    {

        cout << "Enter No.1 : ";
        cin >> num1;
        cout << "Enter No.2 : ";
        cin >> num2;
        cout << "Select a operation to perform." << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

        cin >> selection;

        if (selection == 1)
        {
            cout << "Addition : " << num1 + num2 << endl;
        }

        else if (selection == 2)
        {
            cout << "Sutraction : " << num1 - num2 << endl;
        }

        else if (selection == 3)
        {
            cout << "Multiplication : " << num1 * num2 << endl;
        }

        else if (selection == 4)
        {
            cout << "Division : " << num1 / num2 << endl;
        }

        else
        {
            cout << "Invalid input";
        }

        cout << "Would you like to execute this program again? Type in Y or y for yes, or any other letter to quit the program: ";
        cin >> again;

        system("cls");

    } while (again == 'y' || again == 'Y');

    cout << "End Program" << endl;

    system("pause");
    return 0;
}
