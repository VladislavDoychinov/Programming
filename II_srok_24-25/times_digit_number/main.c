#include <stdio.h>

int main()
{
    int n, a;
    int num, count = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);

    do
    {
        printf("Enter a digit: ");
        scanf("%d", &a);
    } while(a < 0 || a > 9);

    while (n > 0)
    {
        num = n % 10;
        n = n / 10;

        if (num == a)
        {
            count++;
        }
    }

    printf("%d is in n %d times", a, count);

    return 0;
}
