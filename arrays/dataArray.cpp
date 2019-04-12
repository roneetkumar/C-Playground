#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

main()
{
    // declaration of variables
    short i, noOfStudents, bestGrade, worstGrade, oldest = 0;

    //printing  college name and underline
    cout << "\t\tCollege Lassale\n";
    cout << "\t\t```````````````\n";
    cout << "\t\t```````````````\n";

    // inserting no of students greater than 1 smaller than 20
    do
    {
        cout << "Enter the number of students (max 20) : ";
        cin >> noOfStudents;
    } while (noOfStudents < 1 || noOfStudents > 20);

    // declaring arrays based on no of students
    short birthDay[noOfStudents], birthMonth[noOfStudents], birthYear[noOfStudents], currentYear = 2019, ages[noOfStudents];
    string studentName[noOfStudents], birthDate[noOfStudents];
    short findRoll, rollNo[noOfStudents];
    float average[noOfStudents];

    // looping for storing data in diirent arrays
    for (i = 0; i < noOfStudents; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;

        cout << "\tRoll No : ";
        cin >> rollNo[i];

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
        } while (birthYear[i] < 1111 || birthYear[i] > currentYear);

        // concatinaing the date of birth in single string
        birthDate[i] = to_string(birthDay[i]) + '/' + to_string(birthMonth[i]) + "/" + to_string(birthYear[i]);

        // calculating age
        ages[i] = currentYear - birthYear[i];

        do
        {
            cout << "\tAverage : ";
            cin >> average[i];
        } while (average[i] < 0 || average[i] > 100);
    }

    // storing roll no to be found
    cout << "\nEnter the Roll No. to find the Student : ";
    cin >> findRoll;

    // loop for printing the array in stuctured way
    for (i = 0; i < noOfStudents; i++)
    {
        // finding the roll no in the array
        if (findRoll == rollNo[i])
        {
            findRoll = i;

            cout << "Yes, this student exist in the class.\n";

            cout << "\nThe Class : \n";
            cout << "````````````\n";

            cout << left << setw(8) << "Roll No.\t" << setw(15) << "Name\t" << setw(10) << "Birth Date\t" << setw(4) << "Age\t" << setw(8) << "Average\t" << endl;
            cout << left << setw(8) << "````````\t" << setw(15) << "````\t" << setw(10) << "``````````\t" << setw(4) << "```\t" << setw(8) << "```````\t" << endl;

            // highlighting the roll no which has to be found
            for (i = 0; i < noOfStudents; i++)
            {
                // if ((findRoll) == i - 1 || findRoll == i)
                // {
                //     cout << "---------------------------------------------------------------\n";
                // }
                cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                if (findRoll == i)
                {
                    cout << "---------------------------------------------------------------\n";
                    cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                    cout << "---------------------------------------------------------------\n";
                }
                else
                {
                    cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
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
                    cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
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
                    cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
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
                    cout << left << setw(8) << rollNo[i] << "\t" << setw(15) << studentName[i] << "\t  " << setw(10) << birthDate[i] << "\t" << setw(4) << ages[i] << "\t" << setw(8) << average[i] << "\t" << endl;
                }
            }
        }
    }
    if (findRoll != rollNo[i])
    {
        cout << "Didn't found\n";
    }
    system("pause");
}