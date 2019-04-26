#include "headerFile.h"

main()
{
    char restart;
    clients arrClients[20];
    accounts arrAccounts[20];
    long finalBalance;
    short trasactionType, accountType, selectedClient, NBofClients;
    string clientNo, pin;

    NBofClients = readFile(arrClients, arrAccounts);
    displayHeading("Royal Bank");
    clientNo = readClientNo(NBofClients, arrClients);
    selectedClient = checkClient(clientNo, NBofClients, arrClients);
    pin = readPIN(selectedClient, arrClients);

    do
    {
        restart = 0;
        displaytAccountMenu();
        accountType = readAccType();
        switch (accountType)
        {
        case 1:
            displaytTransactionMenu();
            trasactionType = readAccType();
            do
            {
                switch (trasactionType)
                {
                case 1:
                    displayHeading("Royal Bank");
                    displayHeading("|Deposit|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    finalBalance = arrClients[selectedClient].balance = deposit(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 2:
                    displayHeading("Royal Bank");
                    displayHeading("|Withdrawn|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    // finalBalance = arrClients[selectedClient].balance = withdrawl(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 3:
                    displayHeading("Royal Bank");
                    displayHeading("|Consult|");
                    break;

                default:
                    updateFile(arrClients, NBofClients);
                    break;
                }
            } while (restart == 'Y');
            break;
        case 2:
            displaytTransactionMenu();
            trasactionType = readAccType();
            do
            {
                switch (trasactionType)
                {
                case 1:
                    displayHeading("Royal Bank");
                    displayHeading("|Deposit|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    // finalBalance = arrClients[selectedClient].balance = deposit(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 2:
                    displayHeading("Royal Bank");
                    displayHeading("|Withdrawn|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    // finalBalance = arrClients[selectedClient].balance = withdrawl(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 3:
                    displayHeading("Royal Bank");
                    displayHeading("|Consult|");
                    break;

                default:
                    updateFile(arrClients, NBofClients);
                    break;
                }
            } while (restart == 'Y');
            break;
        case 3:
            displaytTransactionMenu();
            trasactionType = readAccType();
            do
            {
                switch (trasactionType)
                {
                case 1:
                    displayHeading("Royal Bank");
                    displayHeading("|Deposit|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    // finalBalance = arrClients[selectedClient].balance = deposit(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 2:
                    displayHeading("Royal Bank");
                    displayHeading("|Withdrawn|");
                    displayAccInfo(selectedClient, NBofClients, arrClients);
                    // finalBalance = arrClients[selectedClient].balance = withdrawl(selectedClient, arrClients);
                    restart = restartCalc(restart);
                    break;
                case 3:
                    displayHeading("Royal Bank");
                    displayHeading("|Consult|");
                    break;

                default:
                    updateFile(arrClients, NBofClients);
                    break;
                }
            } while (restart == 'Y');
            break;
        }
    } while (restart == 'N');
}