#include <iostream>
#include <string>

using namespace std;

main()
{
    int arr[10];
    for (auto i : arr)
    {
        cin >> i;
        if ((i % 2 == 0))
            cout << "this is even\n";
        else
            cout << "this is odd\n";
    }
    system("pause");
}