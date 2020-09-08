#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber[] = {4, 8, 15, 16, 23, 43};     //char, double, float
    luckyNumber[1] = 200;
    printf("%d", luckyNumber[1]);
    return 0;
}

/* int arrayMain()
{
    int luckyNumber[20];
    luckyNumber[1] = 90;
    luckyNumber[0] = 80;
    printf("%d", luckNumber[1]);
    return 0:
} */
