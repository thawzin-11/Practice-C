#include <stdio.h>
#include <stdlib.h>

/* Writing a File */
// main()
// {
//     FILE *fp;

//     fp = fopen("/tmp/test.txt", "w+");
//     fprintf(fp, "This is testing for fprint......\n");
//     fputs("This is testing for fputs.....\n", fp);
//     fclose(fp);
// }

/* -------------------------------------------------- */

/* Readig a File */
main()
{
    FILE *fp;
    char buff[255];

    fp = fopen("/tmp/test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3 : %s\n", buff);
    fclose(fp);
}