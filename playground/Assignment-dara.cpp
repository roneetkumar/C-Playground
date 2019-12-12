#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void menu();
void display(vector<int> &list, vector<string> &word);
void add(vector<int> &list);

//vector<int> list;
//vector<string> word;

int sizeOfList{0};

int sizeOfWord{0};
int main()
{
    vector<int> list{};
    vector<string> word;

    //int sizeOfList{0};
    //int sizeOfWOrd{0};

    char selection;
    menu();
    cout << endl;
    do
    {
        cin >> selection;
        if (selection == 'P' || selection == 'p')
        {
            display(list, word);
        }
        if (selection == 'A' || selection == 'a')
        {
            add(list);
            cout << endl;
            cout << sizeOfList << endl;
        }

    } while (selection != 'Q' || selection != 'q');
    cout << "Goodbye!" << endl;

    Sleep(1250);
    exit(42);
    return 0;
}

void menu()
{
    cout << "Please choose an option in the menu below." << endl;
    cout << "P - Print numbers list" << endl;
    cout << "A - Add a number" << endl;
    cout << "W - Add a word (no spaces)" << endl;
    cout << "M - Display average of the numbers list" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "D - Search for duplicates in your list." << endl;
    cout << "Q - Quit" << endl;
    cout << "C - Clear out your list" << endl;
    cout << endl;
}

void display(vector<int> &list, vector<string> &word)
{

    if (list.size() != 0 && word.empty())
    {
        cout << "[ ";
        for (int i{0}; i < sizeOfList; i++)
        {
            cout << list.at(i);
            cout << " ";
        }
        cout << "]" << endl;
    }
    else if (list.empty() && word.size() != 0)
    { //displays the word in the list
        cout << "[ ";
        for (int i{0}; i < sizeOfWord; i++)
        {
            cout << word.at(i);
            cout << " ";
        }
        cout << "]" << endl;
        cout << endl;
    }
    else if (list.size() != 0 && word.size() != 0)
    {
        cout << "[ ";
        for (int i{0}; i < sizeOfList; i++)
        {
            cout << list.at(i);
            cout << " ";
            ;
        }
        for (int j{0}; j < sizeOfWord; j++)
        {
            cout << word.at(j);
            cout << " ";
        }
        cout << "]" << endl;
        cout << endl;
    }
    if (list.empty() && word.empty())
    {
        cout << "List is empty." << endl;
        cout << endl;
    }
}

void add(vector<int> &list)
{
    cout << "Add a number: ";
    short check{0};
    int num;
    cin >> num;
    cout << endl;
    for (int i{0}; i < sizeOfList; i++)
    {
        if (num == list.at(i))
        {
            check += 1;
        }
    }
    if (check == 1)
    {
        cout << "The number " << num << " is already in your list." << endl;
        cout << endl;
        check = 0;
    }
    else if (check == 0)
    {
        list.push_back(num);
        cout << "Number " << num << " added to your list." << endl;
        sizeOfList += 1;
        cout << endl;
    }
}
