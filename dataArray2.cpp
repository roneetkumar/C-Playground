#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

main()
{
    short i, noOfStudents = 1;

    short select, findRoll;
    char again;
    short studentNo[20], birthDay[20], birthMonth[20], birthYear[20], currentYear = 2019, ages[20];
    string studentName[20], birthDate[20];
    float average[20], bestGrade, worstGrade, oldest = 0;
    do
    {
        cout << "Enter your choice (1-4) : ";
        cin >> select;

        switch (select)
        {
        case 1:
            for (i = 0; i < noOfStudents; i++)
            {

                cout << "New Student,\n";
                cout << "\tNumber : ";
                cin >> studentNo[i];
                cout << "\tName : ";
                cin.ignore();
                getline(cin, studentName[i]);
                cout << "\tBirth Date : \n";
                do
                {
                    cout << "\t\tDay (1-31): ";
                    cin >> birthDay[i];
                } while (birthDay[i] < 1 || birthDay[i] > 31);

                do
                {
                    cout << "\t\tMonth (1-12): ";
                    cin >> birthMonth[i];
                } while (birthMonth[i] < 1 || birthMonth[i] > 12);

                do
                {
                    cout << "\t\tYear : ";
                    cin >> birthYear[i];
                } while (birthYear[i] < 1 || birthYear[i] > currentYear || to_string(birthYear[i]).length() != 4);
                // concatinaing the date of birth in single string
                birthDate[i] = to_string(birthDay[i]) + '/' + to_string(birthMonth[i]) + "/" + to_string(birthYear[i]);

                // calculating age
                ages[i] = currentYear - birthYear[i];

                do
                {
                    cout << "\tAverage: ";
                    cin >> average[i];
                } while (average[i] < 0 || average[i] > 100);

                cout << "Enter Another Student :  ";
                cin >> again;
            }
            break;

        case 2:
            if (studentNo != NULL)
            {
                for (i = 0; i < noOfStudents; i++)
                {
                    cout << "\nThe Class : \n";
                    cout << "````````````\n";

                    cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
                    cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

                    for (i = 0; i < noOfStudents; i++)
                    {
                        cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                    }
                }
                // break;
            }
            break;

        case 3:
            cout << "Find Student\n";
            cout << "\nEnter the Roll No. to find the Student : ";
            cin >> findRoll;

            // loop for printing the array in stuctured way
            for (i = 0; i < noOfStudents; i++)
            {

                // finding the roll no in the array
                if (findRoll == studentNo[i])
                {
                    cout << "Yes, this student exist in the class.\n";
                    findRoll = i;

                    cout << "\nThe Class : \n";
                    cout << "````````````\n";

                    cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
                    cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

                    // highlighting the roll no which has to be found
                    for (i = 0; i < noOfStudents; i++)
                    {
                        if (findRoll == i)
                        {
                            cout << "---------------------------------------------------------------\n";
                            cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                            cout << "---------------------------------------------------------------\n";
                        }
                        else
                        {
                            cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                        }
                    }

                    // initial values for best and worst average
                    bestGrade = worstGrade = average[0];

                    // looping to find the best average, worst average and oldest student in the class
                    for (i = 0; i < noOfStudents; i++)
                    {
                        worstGrade = (average[i] < worstGrade) ? average[i] : worstGrade;
                        bestGrade = (average[i] > bestGrade) ? average[i] : bestGrade;
                        oldest = (ages[i] > oldest) ? ages[i] : oldest;
                    }

                    // printing best average of the class in stuctured way
                    cout << "\nBest Grade in Class : \n";
                    cout << "``````````````````````\n";
                    cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
                    cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

                    for (i = 0; i < noOfStudents; i++)
                    {
                        if (bestGrade == average[i])
                        {
                            cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                        }
                    }

                    // printing worst average of the class in stuctured way
                    cout << "\nWorst Grade in Class : \n";
                    cout << "```````````````````````\n";
                    cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
                    cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

                    for (i = 0; i < noOfStudents; i++)
                    {
                        if (worstGrade == average[i])
                        {
                            cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                        }
                    }

                    // printing age of oldest student of the class in stuctured way
                    cout << "\nOldest Student in Class : \n";
                    cout << "``````````````````````````\n";
                    cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
                    cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

                    for (i = 0; i < noOfStudents; i++)
                    {
                        if (oldest == ages[i])
                        {
                            cout << left << setw(8) << studentNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                        }
                    }
                }
            }
            break;

        case 4:
            cout << "You Chose to Quit.\n";
            break;

        default:
            cout << "Select options from above\n";
        }
        cin >> again;
        noOfStudents++;
    } while (again == 'y' || again == 'Y');
    system("pause");
}