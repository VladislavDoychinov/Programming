#include <stdio.h>

float power(float a, int n)
{
    float p = 1;
    int m, i;

    if (n > 0)
    {
        m = n;
    }
    else
    {
        m = -n;
    }

    for (i = 1; i <= n; i++)
    {
        p = p * a;
    }

    if (n < 0)
    {
        p = 1 / p;
    }

    printf("The answer is %.2f.\n", p);

    return p;
}

int main()
{
    float a;
    int n;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a power: ");
    scanf("%d", &n);

    power(a, n);
}
