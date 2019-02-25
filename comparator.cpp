#include <iostream>
#include <string>
using namespace std;

int main()
{
	int value1, value2, value3, max;
	string yourName;
	char gender;

	cout << "		THE COMPARATOR" << endl;
	cout << "		______________" << endl;
	cout << "Enter your name : ";
	cin >> yourName;
	cout << "Select Your gender (M of F) : " << endl;
	cin >> gender;
	cout << "Enter value 1 : ";
	cin >> value1;
	cout << "Enter value 2 : ";
	cin >> value2;
	cout << "Enter value 3 : ";
	cin >> value3;

	cout << ((gender == 'M' || gender == 'm') ? "Sir, " : "Mam, ") << yourName << endl;

	cout << "The maximum value between " << value1 << ", " << value2 << ", " << value3 << " is " << ((value1 >= value2 && value1 >= value3) ? value1 : (value2 >= value3 ? value2 : value3)) << endl;

	system("pause");
	return 0;
}