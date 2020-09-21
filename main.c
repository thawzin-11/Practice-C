#include <stdio.h>
#include <stdlib.h>

/* Writing Data File */
main()
{
    FILE *pWrite;
    char fName[20];
    char lName[20];
    char id[15];
    float gpa;

    pWrite = fopen("/tmp/students.dat", "w");

    if (pWrite == NULL)
    {
        printf("\nFile cannot be opened\n");
    }
    else
    {
        printf("\nEnter first name, last name, id and GPA\n\n");
        printf("Enter data separated by spaces: ");

        //store data entered by the user into variables
        scanf("%s%s%s%f", fName, lName, id, &gpa);

        //write variable contents separated by tabs
        fprintf(pWrite, "%s\t%s\t%s\t%2.f\n", fName, lName, id, gpa);

        fclose(pWrite);

    } //end if

} //end main