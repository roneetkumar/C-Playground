#include <iostream>
using namespace std;

int max(int num1, int num2);

int main()
{
    int a, b, ret;
    cin >> a;
    cin >> b;
    ret = max(a, b);

    cout << "max value is " << ret << endl;

    system("pause");
    return 0;
}

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;
}