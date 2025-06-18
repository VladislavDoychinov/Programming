#include <stdio.h>

int mn(int n)
{
    int m = 0;
    int i;

    while(n != 0)
    {
        i = n % 10;
        m = m * 10 + i;
        n = n / 10;
    }

    return m;
}

int main()
{
    int n, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    m  = mn(n);

    printf("%d is %d backwards", m, n);

    return 0;
}
