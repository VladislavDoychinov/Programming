#include <stdio.h>

int mn2(int n)
{
    int i, count = 3;
    int m = 0;

    while(n != 0)
    {
        i = n % 10;

        if (i % 2 == 0)
        {
            m = m * 10 + i;
            count = 1;
        }

        n = n / 10;
    }

    if(count == 3)
    {
        return count;
    }
    else
    {
        return m;
    }
}

int main()
{
    int n, m, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = mn2(n);
    m = mn2(n);

    if(count == 3)
    {
        printf("There isnt even digits in %d", n);
    }
    else
    {
        printf("%d is number written with even digits of %d", m, n);
    }

    return 0;
}
