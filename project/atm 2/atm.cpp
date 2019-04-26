#include "headerFile.h"

main()
{
    short NBofClients, selectedClient, accountType;
    clients arrClients[20];
    clients arrAccounts[20];
    string clientNo, pin;

    NBofClients = readFiles(arrClients);

    displayHeading("Royal Bank");
    clientNo = readClientNo(NBofClients, arrClients);
    selectedClient = checkClient(NBofClients, clientNo, arrClients);
    pin = readPIN(selectedClient, arrClients);

    displaytAccountMenu();
    accountType = readOptions(1, 4);

    system("pause");
}