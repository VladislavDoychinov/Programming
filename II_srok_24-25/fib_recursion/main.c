#include <stdio.h>

int fib(int n)
{
    int a = 1, b = 1, c = 1, i;
    
    for(i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int fib2(int n)
{
    if(n < 3)
    {
        return 1;    
    }
    else
    {
        return fib2(n - 1) + fib2(n - 2);    
    }
}

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("fib2 = %d", fib2(n));
    printf("fib = %d", fib(n));

    return 0;
}
