#include <stdio.h>

int main()
{
    int n, a;
    int num = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    do
    {
        printf("Enter a: ");
        scanf("%d", &a);
    } while (a < 0);

    while (n > 0 && num != a)
    {
        num = n % 10;
        n = n / 10;
    }
    if (num == a)
    {
        printf("a is in n");
    }
    else
    {
        printf("a is NOT in n");
    }

    return 0;
}