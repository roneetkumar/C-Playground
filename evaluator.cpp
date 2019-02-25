#include <iostream>
using namespace std;

int main()
{

	int yourMarks;

	cout << "		THE EVALUATOR" << endl;
	cout << "		_____________" << endl;
	cout << "Enter your Marks (Max 100) :" << endl;
	cin >> yourMarks;

	if (yourMarks >= 90 && yourMarks <= 100)
	{
		cout << "The Corresponding Aplhabetical grade for " << yourMarks << " is A" << endl;
	}

	else if (yourMarks >= 80 && yourMarks <= 89)
	{
		cout << "The Corresponding Aplhabetical grade for " << yourMarks << " is B" << endl;
	}

	else if (yourMarks >= 70 && yourMarks <= 79)
	{
		cout << "The Corresponding Aplhabetical grade for " << yourMarks << " is C" << endl;
	}

	else if (yourMarks >= 60 && yourMarks <= 69)
	{
		cout << "The Corresponding Aplhabetical grade for " << yourMarks << " is D" << endl;
	}

	else if (yourMarks >= 0 && yourMarks <= 59)
	{
		cout << "The Corresponding Aplhabetical grade for " << yourMarks << " is E" << endl;
	}

	else
	{
		cout << "dont lie !!!" << endl;
	}

	system("pause");
	return 0;
}