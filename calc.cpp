#include <iostream>
using namespace std;

int main()
{
	int value1, value2;

	cout << "		CALCULATOR" << endl;
	cout << "		__________" << endl;
	cout << "Enter value 1:" << endl;
	cin >> value1;
	cout << "Enter value 2:" << endl;
	cin >> value2;
	cout << "The Addition of " << value1 << " and " << value2 << " is " << value1 + value2 << endl;
	cout << "The Subtraction of " << value1 << " and " << value2 << " is " << value1 - value2 << endl;
	cout << "The Multiplication of " << value1 << " and " << value2 << " is " << value1 * value2 << endl;
	cout << "The division of " << value1 << " and " << value2 << " is " << value1 / value2 << endl;

	system("pause");
	return 0;
}