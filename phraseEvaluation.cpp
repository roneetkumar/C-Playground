#include <iostream>
#include <string>
using namespace std;

main()
{

    char phrase[501], arrVowels[5] = {'a', 'i', 'o', 'u', 'e'};
    short characters, i, j, numbers, letters, spaces, specialCharacters, vowels, consonants;
    characters = i = numbers = letters = spaces = specialCharacters = vowels = consonants = 0;

    cout << "\t\tPHRASE-EVALUATION\n";
    cout << "\t\t`````````````````\n";
    cout << "Enter a phrase (Max 500) : ";
    cin.getline(phrase, 500);
    cout << "thank you,\n";
    cout << "Your phrase contains : \n";

    for (i = 0; phrase[i] != '\0'; i++)
    {
        if (phrase[i] >= '0' && phrase[i] <= '9')
        {
            numbers++;
        }
        else if (phrase[i] == ' ')
        {
            spaces++;
        }
        else if ((phrase[i] >= 'a' && phrase[i] <= 'z') || (phrase[i] >= 'A' && phrase[i] <= 'Z'))
        {
            letters++;
        }
        else
        {
            specialCharacters++;
        }
        for (j = 0; j < 5; j++)
        {
            if (phrase[i] == arrVowels[j])
            {
                vowels++;
            }
        }
        consonants = letters - vowels;
    }

    cout << "- " << i << " Characters\n";
    cout << "- " << numbers << " Numbers\n";
    cout << "- " << spaces << " Spaces\n";
    cout << "- " << letters << " Letters\n";
    cout << "\t- " << vowels << " Vowels\n";
    cout << "\t- " << consonants << " Consonants\n";
    cout << "- " << specialCharacters << " Special Characters\n";
    cout << "Your phrase in Reverse: ";
    for (i - 1; i > -1; i--)
    {
        cout << phrase[i];
    }
    cout << endl;
    system("pause");
}