#include <stdio.h>
#include <stdlib.h>

/* Reading Data File */
main()
{
    FILE *pRead;
    char name[10];
    char hobby[15];

    pRead = fopen("/tmp/hobbies.dat", "r");

    if (pRead == NULL)
    {
        printf("\nFile cannot be opened\n");
    }
    else
    {
        printf("\nName\tHobby\n\n");
        fscanf(pRead, "%s %s", name, hobby);

        while (!feof(pRead))
        {
            printf("%s\t%s\n", name, hobby);
            fscanf(pRead, "%s %s", name, hobby);
        } //end loop
    }
} //end main