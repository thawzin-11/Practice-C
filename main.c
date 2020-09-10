#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
    int index = 1;
    while (index <= 5) {
        printf("%d\n", index);
        index++;
    }

    // do while loop

    /* int index = 6;
    do {
        printf("%d", index);
        index++;
    } while (index <= 5); */

    return 0;
}
