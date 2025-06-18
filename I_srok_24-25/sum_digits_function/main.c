#include <stdio.h>

int sum(int n)
{
    int i;
    int plus = 0;

    while(n != 0)
    {
        i = n % 10;
        n = n / 10;
        plus = i + plus;
    }

    return plus;
}

int main()
{
    int n, plus;

    printf("Enter a number: ");
    scanf("%d", &n);

    plus = sum(n);

    printf("The sum of the digits of %d is %d", n, plus);

    return 0;
}
