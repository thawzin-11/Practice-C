#include <stdio.h>
#include <stdlib.h>

// main()
// {
//     int x = 5;
//     int *iPtr;

//     iPtr = &x;
//     *iPtr = 7;

//     printf("Result *iPtr = %p\n", iPtr);
//     printf("Result &x = %p\n", &x);
//     return 0;
// }

/* Printing Pointer Variable Contents */

main()
{
    int x = 5;
    int y = 10;
    int *iPtr = NULL;

    printf("\niPtr points to: %p\n", iPtr);
    
    // assign memory address of y to pointer
    iPtr = &y;
    printf("\niPtr now points to: %p\n", iPtr);

    //change the value of x to the value of y
    x = *iPtr;
    printf("\nThe value of x is now: %d\n", x);

    //change the value of y to 15
    *iPtr = 15;
    printf("\nThe value of y is now: %d\n", y);
}