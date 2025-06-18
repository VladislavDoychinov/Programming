#include <stdio.h>

int main()
{
    int n, a, b;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Enter a: ");
    scanf("%d", &a);

    int sum = a;

    n--;

    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%d", &b);

        n--;
        sum = sum + b;
    }

    printf("The sum of n numbers is %d", sum);

    return 0;
}