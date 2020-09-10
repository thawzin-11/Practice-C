#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[10];     // Array storing 10 values
    int count = 10;     // Number of values to be read
    long sum = 0;       //Sum of numbers
    float average = 0.0f;   //Average of Numbers

    printf("Enter the 10 grades:\n");      // Prompt for the input

    // Read the ten numbers to be avaeraged
    int i;
    for (i = 0; i < count; ++i){
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);    // Read a grade
        sum += grades[i];       // Add it to sum
    }

    average = (float) sum/count;

    printf("\nAverage of ten grades entered is: %.2f\n", average);

    return 0;
}
