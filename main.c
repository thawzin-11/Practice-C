#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i floatingVar = %f\n", integerVar, floatingVar);
    printf("floatingVar = %f\n", floatingVar);  //2.f => 2 decimal point
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);


    return 0;
}
