#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int c;

//     printf("Enter a value: ");
//     c = getchar();

//     printf("\nYou Entered: ");
//     putchar(c);

//     printf("\nMemory address of you entered: %p\n", &c);

//     printf("\nSize of memory address: %ld\n", sizeof(c));
    
//     return 0;
// }

/* ---------------------------- */

// int main()
// {
//     char str[100];

//     printf("\nEnter a value: ");
//     gets(str);

//     printf("\nYou entered: ");
//     puts(str);

//     printf("\nMemory address of input string: %p\n", &str);

//     return 0;
// }

/* --------------------------------- */

int main()
{
    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d\n", str, i);

    return 0;
}