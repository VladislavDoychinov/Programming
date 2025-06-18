#include <stdio.h>

int faktoriel(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * faktoriel(n - 1);
    }
}

int faktorielNorm(int n)
{
    int p = 1, i;
    
    for(i = 1; i <= n; i++)
    {
        p = p * i;    
    }

    return p;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    faktoriel(n);

    printf("%d\n", faktoriel(n));
    printf("%d\n", faktorielNorm(n));

    return 0;
}
