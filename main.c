#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekly {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekly today = Monday;

    switch(today)
    {
    case Sunday:
        printf("Today is Sunday.");
        break;
    case Monday:
        printf("Today is Monday");
        break;
    case Tuesday:
        printf("Today is Tuesday");
        break;
    default:
        printf("Whatever");
    }

    return 0;
}
