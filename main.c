#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("a = %d\n", a);
    a = 12;
    printf("a = %d\n\n", a);
    for(a = 1; a <= 12; a++)
    {
        printf("value of a is = %d\n", a);

    }
}
