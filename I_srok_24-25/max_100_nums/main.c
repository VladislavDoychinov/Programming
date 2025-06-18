#include <stdio.h>

int main()
{
    int n = 100;
    int max = 0;
    int a;

    while (n > 0)
    {
        printf("Enter a: ");
        scanf("%d", &a);

        if (max < a)
        {
            max = a;
        }

        n--;
    }

    printf("The greatest number is %d", max);

    return 0;
}