#include "headerFile.h"

main()
{
    short NBofClients, selectedClient, accountType, transactionType;
    clients arrClients[20];
    long finalBalance;
    string clientNo, pin;
    char restart;

    NBofClients = readFiles(arrClients);
    do
    {
        restart = 0;
        displayHeading("Royal Bank", "|| atm ||\n");
        clientNo = readClientNo(NBofClients, arrClients);
        selectedClient = checkClient(NBofClients, clientNo, arrClients);
        pin = readPIN(selectedClient, arrClients);
        do
        {
            restart = 0;
            displayHeading("Royal Bank", "|| atm ||\n");
            displaytAccountMenu();
            accountType = readOptions(1, 4);
            do
            {
                restart = 0;
                switch (accountType)
                {
                case 1:
                    displayHeading("CheckIn", "");
                    displayTransactionMenu();
                    transactionType = readOptions(1, 3);
                    do
                    {
                        switch (transactionType)
                        {
                        case 1:
                            displayHeading("Royal Bank", "|Deposit|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = deposit(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        case 2:
                            displayHeading("Royal Bank", "|Withdrawl|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = withdrawl(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        default:
                            break;
                        }
                    } while (restart == 'Y');
                    break;
                case 2:
                    displayHeading("Savings", "");
                    displayTransactionMenu();
                    transactionType = readOptions(1, 3);
                    do
                    {
                        switch (transactionType)
                        {
                        case 1:
                            displayHeading("Royal Bank", "|Deposit|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = deposit(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        case 2:
                            displayHeading("Royal Bank", "|Withdrawl|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = withdrawl(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        default:
                            break;
                        }
                    } while (restart == 'Y');
                    break;
                case 3:
                    displayHeading("Credit", "");
                    displayTransactionMenu();
                    transactionType = readOptions(1, 3);
                    do
                    {
                        switch (transactionType)
                        {
                        case 1:
                            displayHeading("Royal Bank", "|Deposit|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = deposit(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        case 2:
                            displayHeading("Royal Bank", "|Withdrawl|\n");
                            displayAccInfo(accountType, selectedClient, NBofClients, arrClients);
                            finalBalance = withdrawl(accountType, selectedClient, arrClients);
                            cout << "\nTotal balance after transaction : $" << finalBalance << "CAD" << endl;
                            updateFile(arrClients, NBofClients);
                            restart = restartCalc(restart);
                            break;
                        default:
                            break;
                        }
                    } while (restart == 'Y');
                    break;
                default:
                    break;
                }
            } while (restart == 'N');
        } while (transactionType == 3);
    } while (accountType == 4);
    system("pause");
}