#include <stdio.h>

int a_in_n(int a, int n)
{
    int count = 0;
    int div;
    int m = n;

    while(m != 0 || count == 1)
    {
        div = m % 10;

        if (div == a)
        {
            count++;
        }

        m = m / 10;
    }

    return count;
}

int main()
{
    int a, n, count;

    do
    {
        printf("Enter a digit: ");
        scanf("%d", &a);
    } while(a < 0 || a > 9);

    printf("Enter a number: ");
    scanf("%d", &n);

    count = a_in_n(count);

    if (count == 0)
    {
        printf("%d is NOT in %d.\n", a, n);
    }
    else
    {
        printf("%d is in %d.\n", a, n);
    }

    return 0;
}
