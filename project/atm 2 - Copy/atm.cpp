#include "headerFile.h"

main()
{
    short NBofClients, selectedClient, accountType, transactionType;
    clients arrClients[20];
    long finalBalance;
    string clientNo, pin;

    NBofClients = readFiles(arrClients);

    displayHeading("Royal Bank");
    clientNo = readClientNo(NBofClients, arrClients);
    selectedClient = checkClient(NBofClients, clientNo, arrClients);
    pin = readPIN(selectedClient, arrClients);

    displaytAccountMenu();
    accountType = readOptions(1, 3);

    switch (accountType)
    {
    case 1:
        displayHeading("CheckIn");
        openAccount("CheckIn", selectedClient, NBofClients, arrClients);
        break;
    case 2:
        displayHeading("Savings");
        openAccount("Savings", selectedClient, NBofClients, arrClients);
        break;
    case 3:
        displayHeading("Credit");
        openAccount("Credit", selectedClient, NBofClients, arrClients);
        break;
    default:
        break;
    }
    updateFile(arrClients, NBofClients);
    system("pause");
}