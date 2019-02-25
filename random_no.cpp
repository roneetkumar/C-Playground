#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        j = rand();
        cout << "Random No." << j << endl;
    }

    system("pause");
    return 0;
}