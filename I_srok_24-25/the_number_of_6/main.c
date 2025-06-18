#include <stdio.h>

int main()
{
    int n, a;
    int count = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);

    while (n > 0)
    {
        do
        {
            printf("Enter a: ");
            scanf("%d", &a);
        } while (a < 2 || a > 6);

        if (a == 6)
        {
            count++;
        }

        n--;
    }

    printf("The 6s are %d", count);

    return 0;
}