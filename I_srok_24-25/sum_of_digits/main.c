#include <stdio.h>

int main()
{
    int n;
    int num = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);

    while (n > 0)
    {
        num = num + n % 10;
        n = n / 10;
    }

    printf("The sum of digits is %d", num);

    return 0;
}