#include <iostream>
#include <string>
using namespace std;

main()
{
    // variable declaration
    string name;
    char gender, again;
    short children = 0, fees = 0, totalFees = 0;

    cout << "\t\tREVENUE-QUEBEC\n";
    cout << "\t\t--------------\n";

    cout << "Enter Your Name : ";
    getline(cin, name);
    do
    {
        cout << "Select Gender (F/M) : ";
        cin >> gender;
    } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');

    cout << ((gender == 'M' || gender == 'm') ? "Sir, " : "Mam, ") << name << endl;
    cout << "How many children ? : ";
    cin >> children;

    while (children > 5 || children < 0)
    {
        cout << "Please, how many children (Max 5) : ";
        cin >> children;
    }

    for (int i = 1; i <= children; i++)
    {
        do
        {
            cout << "Fees for child " << i << " : ";
            cin >> fees;
        } while (fees < 0);

        totalFees += fees;
    }

    cout << "Total fees is " << totalFees << "$\n";
    system("pause");
}