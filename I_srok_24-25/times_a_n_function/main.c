#include <stdio.h>

int times_digit(int a, int n)
{
    int count = 0;
    int div;
    int m = n;

    while(m != 0)
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
    int a;
    int n;
    int count;

    do
    {
        printf("Enter a digit: ");
        scanf("%d", &a);
    } while(a < 0 || a > 9);

    printf("Enter a number: ");
    scanf("%d", &n);

    count = times_digit(a, n);

    printf("%d is in %d %d times.\n", a, n, count);

    return 0;
}
