#include "headerFile.h"
main()
{
    int val1, val2, val3, max;

    displayTitle("The Comparator");
    val1 = readValue(1);
    val2 = readValue(2);
    val3 = readValue(3);
    max = isMax(val1, isMax(val2, val3));
    displayMax(max);

    //inSigleLine
    // displayMax(isMax(readValue(3), isMax(readValue(2), readValue(1))));

    system("pause");
}