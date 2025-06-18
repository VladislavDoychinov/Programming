#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    int i = 2;
    int j = 2;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 2);


    while (n >= i)
    {
        if (n % i == 0)
        {
            while (i % j != 0)
            {
                j++;
            }
            if (i % j == 0)
            {
                if (j == i)
                {
                    count++;
                    printf("%d; ", i);
                }
            }
            j = 2;
        }
        i++;
    }
    printf("The number of the simple dividers is %d", count);

    return 0;
}