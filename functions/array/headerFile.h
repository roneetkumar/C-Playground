#pragma once
#include <iostream>
#include <string>
using namespace std;

void toNullify(int *value)
{
    *value = 0;
    cout << "in function, before to nullify, value = " << *value << endl;
}
