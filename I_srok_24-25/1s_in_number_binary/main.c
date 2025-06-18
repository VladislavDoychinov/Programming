#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int i;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    i = n % 2;

    while (n > 0)
    {

        if (i == 1)
        {
            count++;
        }
        n = n / 2;
    }

    printf("The number of 1s in n in binary system is %d", count);

    return 0;
}