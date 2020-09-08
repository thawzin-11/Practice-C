#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    print("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    return 0;
}

int userinput_double()
{
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("You are %f years old", gpa);

    return 0;
}

int userinput_char()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("You are grade is %c", grade);

    return 0;
}

int userinputfgets()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}

int uinput()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter name of color: ");
    scanf("%s", color);
    printf("Enter name of Plural Noun: ");
    scanf("%s", pluralNoun);
    printf("Enter name of celebrity: ");
    scanf("%s %s", celebrityF, celebrityL);

    color[0] = 'B';

    printf("Rose are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}
