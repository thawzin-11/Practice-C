#include <stdio.h>
#include <stdlib.h>

/* Reading Data File */
main()
{
    FILE *pRead;
    char name[10];

    pRead = fopen("/tmp/names.dat", "r");

    if (pRead == NULL)
    {
        printf("\nFile cannot be opened\n");
    }
    else
    {
        printf("\nContents of names.dat\n\n");
        fscanf(pRead, "%s", name);

        while (!feof(pRead))
        {
            printf("%s\n", name);
            fscanf(pRead, "%s", name);
        } //end loop
    }
} //end main