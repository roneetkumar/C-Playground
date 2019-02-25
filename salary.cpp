#include <iostream>
using namespace std;

int main()
{
	int hourlyRate, regularHours, overtimeHours, weeklySalary;
	string yourName;

	cout << "		VIDEOTRON INC." << endl;
	cout << "Enter your name :" << endl;
	cin >> yourName;
	cout << "Enter your hourly regular rate $ :" << endl;
	cin >> hourlyRate;
	cout << "Enter the number of regular hours worked :" << endl;
	cin >> regularHours;
	cout << "Enter the number of overtime hours worked (1.5%) :" << endl;
	cin >> overtimeHours;
	weeklySalary = (regularHours * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
	cout << "Mr. " << yourName << ", your weekly salary is : " << weeklySalary << endl;

	system("pause");
	return 0;
}