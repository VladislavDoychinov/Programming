#include <stdio.h>

int plus(int n)
{
    int sum = 0;
    int i;
    for(i = 1; i <= n; i++)
    {
        sum = i + sum;
    }

    return sum;
}

int main()
{
    int n;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = plus(n);

    printf("The sum from 1 to %d is %d", n, sum);

    return 0;
}
