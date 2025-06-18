#include <stdio.h>

int main()
{
    int n;
    int i = 2;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 2);

    while (n % i != 0)
    {
        i++;
    }

    if (i == n)
    {
        printf("n is simple number");
    }

    else
    {
        printf("n is NOT a simple number");
    }

    return 0;
}