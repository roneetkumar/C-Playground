#include "myFunctions.h"

int main()
{
    char restart;
    do
    {
        restart = 0;
        double result;
        short choice;
        displayTitle("calculator 2.0", "- by roneet -");
        displayMenu();
        choice = readOption(1, 6);
        do
        {
            switch (choice)
            {
            case 1:
                result = calcAdd("addition");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 2:
                result = calcSub("subtract");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 3:
                result = calcMul("multiply");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 4:
                result = calcDiv("division");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            case 5:
                result = calcSquare("square");
                displayResult(result);
                restart = restartCalc(restart);
                break;
            default:
                break;
            }
        } while (restart == 'Y');
    } while (restart == 'N');
    return 0;
}
