#include <stdio.h>

int main()
{
    int n, i;
    float grade;
    float avr;
    float sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while (n < 0);

    while (i < n)
    {
        do
        {
            printf("Enter a grade: ");
            scanf("%f", &grade);
        } while (grade < 2 || grade > 6);

        sum = sum + grade;
        i++;
    }
    avr = sum / n;

    printf("The average grade of the class is %.2f", avr);

    return 0;
}