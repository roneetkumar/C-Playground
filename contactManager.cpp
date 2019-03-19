#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char fullName[50], address[20], cppc[50], fname[20], lname[20], city[20], province[20], pcode[20], store[20];
    short i, j, k, l;
    i = j = k = l = 0;
    cout << "\t\tCONTACTS MANAGER\n";
    cout << "\t\t````````````````\n";
    cout << "Enter first name and last name (seprated by commas) : ";
    cin.getline(fullName, 20);
    cout << "Enter your address : ";
    cin.getline(address, 20);
    cout << "Enter your city,province and postal code (seprated by commas) : ";
    cin.getline(cppc, 20);
    cout << "Thanks your information are saved as : \n";

    while (fullName[i] != ',')
    {
        fullName[i] = tolower(fullName[i]);
        i++;
    }

    strncpy_s(fname, fullName, i);

    while (fullName[i] != '\0')
    {
        lname[j] = tolower(fullName[i + 1]);
        i++;
        j++;
    }

    while (cppc[k] != ',')
    {
        cppc[k] = tolower(cppc[k]);
        k++;
    }

    strncpy_s(city, cppc, k);

    while (cppc[k] != '\0')
    {
        store[l] = tolower(cppc[k + 1]);
        k++;
        l++;
    }

    k = l = 0;

    while (store[k] != ',')
    {
        cppc[k] = tolower(cppc[k]);
        k++;
    }

    strncpy_s(province, store, k);

    while (store[k] != '\0')
    {
        pcode[l] = toupper(store[k + 1]);
        k++;
        l++;
    }

    fname[0] = toupper(fname[0]);
    lname[0] = toupper(lname[0]);
    city[0] = toupper(city[0]);
    province[0] = toupper(province[0]);
    address[0] = toupper(address[0]);

    cout << "- First Name : " << fname << endl;
    cout << "- Last Name : " << lname << endl;
    cout << "- address : " << address << endl;
    cout << "- city : " << city << endl;
    cout << "- province : " << province << endl;
    cout << "- Postal Code : " << pcode << endl;

    system("pause");
    return 0;
}