#include <stdio.h>

int fibonacci(int n)
{
    int i, b;
    int a = 0;
    int c = 1;

    for (i = 1; i < n; i++)
    {
        b = a;
        a = c;
        c = a + b;
    }

    return c;
}

int fibonacciMax(int n)
{
    int b;
    int a = 0;
    int c = 1;

    while (c <= n)
    {
        b = a;
        a = c;
        c = a + b;
    }

    return c;
}

int fibonacciMin(int n)
{
    int b;
    int a = 0;
    int c = 1;

    while (c <= n)
    {
        b = a;
        a = c;
        c = a + b;
    }

    return a;
}

int main()
{
    int n;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    fibonacci(n);

    printf("%d\n", fibonacci(n));

    fibonacciMax(n);

    printf("The smallest number greater than %d is %d\n", n, fibonacciMax(n));

    fibonacciMin(n);

    printf("The greatest number smaller than %d is %d\n", n, fibonacciMin(n));
}
