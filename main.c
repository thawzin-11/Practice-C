#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumber [] = {4, 8, 15, 16, 23, 42};

    int i;
    for(i = 0; i < 6; i++){
        printf("%d\n", luckyNumber[i]);
    }

    /* int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n", i);
    } */

    return 0;
}
