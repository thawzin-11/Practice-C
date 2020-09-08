#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *arguments1 = argv[0];
    char *arguments2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Arguments 1 is the program name: %s\n", arguments1);
    printf("Auguments 2 is the command line argument: %s\n", arguments2);

    return 0;
}
