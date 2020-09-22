/* error-handling routine sample */

// int myFunction()
// {
//     int iReturnValue = 0;   //0 for success
//     /* process something */
//     if(error)
//         {
//             goto ErrorHandler; //go to the error-handling routine
//         }
//     /* do some more processing */
//     if(error)
//         {
//             ret_val = [error];
//             goto ErrorHandler; //go to the error-handling routine
//         }

// ErrorHandler:
//         /* error-handling routine */
//         return iReturnValue ;
// }

#include <stdio.h>
#include <stdlib.h>

main()
{
    FILE *pRead;
    char name[10];
    char hobby[15];

    pRead = fopen("/home/thawzin/Project/hobbies.txt", "r");

    if (pRead == NULL)
    {
        goto ErrorHandler;
    }
    else
    {
        printf("\nName\tHobby\n\n");
        fscanf(pRead, "%s%s", name, hobby);

        while (!feof(pRead))
        {
            printf("%s\t%s\n", name, hobby);

        } //end loop
        
    } //end if
    
    exit(EXIT_SUCCESS); //exit program normally

    ErrorHandler:
        perror("The following error occurred");
        exit(EXIT_FAILURE); //exit program with error

} //end main