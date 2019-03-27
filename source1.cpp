#include <iostream>
#include <string>
using namespace std;

void displayTitle(string title)
{
    cout << title;
}

int readValue(int val)
{
    cout << "Enter Value " << val << " : ";
    cin >> val;
    return val;
}

int isMax(int val1, int val2)
{
    return val1 > val2 ? val1 : val2;
}

void displayMax(int max)
{
    cout << "The maximum of : " << max << endl;
}
