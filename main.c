#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d", 500); //output ==> 500
    printf("My favorite number is %d", 500);    //output ==> My favorite number is 500
    printf("My favorite %s is %d", "number", 500);  //output ==> My favorite number is 500
    printf("My favorite %s is %f", "number", 500.5798);  //output ==> My favorite number is 500.5789

    printf("%f", 8.9);    //output ==> 8.900000
    printf("%f", 5.0 + 4.5);  //output ==> 9.500000   //can be use (/, -, *) operator
    printf("%f", pow(2, 3));  //output ==> 8.00000
    print("%f", sqrt(36));    //output ==> 6.00000
    printf("%f", ceil(36.356));   //output ==> 37.00000
    printf("%f", floor(36.656));  // output ==> 36.00000

}

    /* Comments */
int comment()
{
    /*
    printf("Comments are fun");
    */

    return 0;
}

int printftest()
{
    /* Here is some more code to help you with printf(), Escape
    Sequences, and Conversion Characters */
    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces \b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("a few beeps.\n\n\n");
    printf("%s %c.", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);

    return 0;
}




