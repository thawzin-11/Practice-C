#include <stdio.h>
#include <stdlib.h>

int multiplyTwoNumbers (int x, int y)
{
    int result = x * y;
    return result;
}


int main(void)
{
    int result = 0;
    result = multiplyTwoNumbers(10,20);

    printf("result is %d\n", result);
    return 0;
}

/* void multiplyTwoNumbers (int x, int y)
{
    int result = x * y;
    printf("The product of %d is: %d\n", x,y);
}


int main()
{
    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(20,30);
    multiplyTwoNumbers(50,2);

    return 0;
} */



