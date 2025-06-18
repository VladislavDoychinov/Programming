#include <stdio.h>

int main()
{
    int a;
    int count = 0;

    do
    {
        printf("Enter a: ");
        scanf("%d", &a);
    } while (a < 1);

    while (a > 0)
    {
        a = a / 10;
        count++;
    }

    printf("The number of the digits in a is %d", count);

    return 0;
}