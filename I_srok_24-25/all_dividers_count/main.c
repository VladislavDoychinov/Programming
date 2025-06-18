#include <stdio.h>

int main()
{
    int n, i;
    i = 1;
    int count = 0;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);

    while (n >= i)
    {
        if (n % i == 0)
        {
            count++;
            printf("%d, ", i);
        }

        i++;
    }

    printf("The number of dividers of n is %d", count);

    return 0;
}