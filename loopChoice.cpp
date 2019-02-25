#include <iostream>
using namespace std;

int main()
{
    short choice;
    do
    {
        cout << "\t\tMAIN-MENU\n";
        cout << "\t\t_________\n";

        cout << "1 - Choice 1 \n2 - Choice 2 \n3 - Choice 3\n";
        cout << "Enter your choice(1-3) : ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    cout << "You Choose " << choice << ", good Choice\n";

    system("pause");
    return 0;
}