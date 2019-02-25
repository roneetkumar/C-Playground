#include <iostream>
using namespace std;

int main()
{
    int i, array[10];

    for (i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }

    system("pause");
    return 0;
}