#include <stdio.h>
#include <stdlib.h>

// int addTwoNumbers(int, int);

// main()
// {
//     int x = 0;
//     int y = 0;

//     printf("\nEnter first number: ");
//     scanf("%d", &x);
//     printf("\nEnter second number: ");
//     scanf("%d", &y);

//     printf("\nResult is %d\n", addTwoNumbers(x,y));

// } //end main

// int addTwoNumbers(int x, int y)
// {
//     return x + y;
// } //end addTwoNumbers


/* --------------- */

// void demoPassByValue(int);

// main()
// {
//     int x = 0;

//     printf("\nEnter a number: ");
//     scanf("%d", &x);

//     demoPassByValue(x);

//     printf("\nThe original value of x did not change: %d\n", x);
// } //end main

// void demoPassByValue(int x)
// {
//     x += 5;
//     printf("\nThe value of x is: %d", x);
// } //end demoPassByValue

/* ------------------------- */

void demoPassByReference(int *);

main()
{
    int x = 0;

    printf("\nEnter a number: ");
    scanf("%d", &x);

    demoPassByReference(&x);

    printf("\nThe original value of x is: %d\n", x);
} //end main

void demoPassByReference(int *ptrX)
{
    *ptrX += 5;
    printf("\nThe value of x is now: %d\n", *ptrX);
} //end demoPassByReference