#include "headerFile.h"
main()
{
    char restart;
    do
    {
        restart = 0;
        displayTitle("calculator 2.0", "- by roneet -");
        displayMenu();
        short choice = readOption(1, 6);
        float result;
        do
        {
            switch (choice)
            {
            case 1:
                system("cls");
                result = calcAdd("addition");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 2:
                system("cls");
                result = calcSub("subtract");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 3:
                system("cls");
                result = calcMul("multiply");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 4:
                system("cls");
                result = calcDiv("division");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 5:
                system("cls");
                result = calcSquare("square");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            default:
                break;
            }
        } while (restart == 'Y');
        system("cls");
    } while (restart == 'N');
    // cout << "\tCalculator Closed";
}