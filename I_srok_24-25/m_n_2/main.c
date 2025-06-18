#include <stdio.h>

int main()
{
    int n;
    int m = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);
    int i = n % 10;

    while (n > 1)
    {
        if (i % 2 == 0)
        {
            m = m * 10 + i;
            n = n / 10;
            i = n % 10;
        }
        else
        {
            n = n / 10;
            i = n % 10;
        }
    }

    printf("m is %d", m);

    return 0;
}