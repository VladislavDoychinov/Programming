#include <stdio.h>

int main()
{
    int n, m;
    float a, sum = 1;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a second number: ");
    scanf("%d", &n); 

    if (n < 0)
    {
        m = -n;
    }
    else
    {
        m = n;
    }

    while (m > 0)
    {
        sum = a * sum;
        m--;
    }
    if (n < 0)
    {
        sum = 1 / sum;
    }
    printf("%f power of %d is %.2f", a, n, sum);

    return 0;
}