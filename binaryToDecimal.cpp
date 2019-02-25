#include <iostream>
using namespace std;
main()
{
    char reset;
    long binary, remainder, value, dec = 0, base = 1;
    do
    {
        cout << "Enter the binary number(1s and 0s) : ";
        cin >> value;
        binary = value;
        while (value > 0)
        {
            remainder = value % 10;
            dec = dec + remainder * base;
            base = base * 2;
            value = value / 10;
        }
        cout << "The decimal equivalent of " << binary << " : " << dec << endl;
        cout << "Wanna check again ? Press Y for 'Yes' or Press Any other Key\n";
        cin >> reset;
        system("cls");
    } while (reset == 'y' || reset == 'Y');
    system("pause");
}
