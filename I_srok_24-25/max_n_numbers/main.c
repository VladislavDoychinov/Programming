#include <stdio.h>

int main()
{
    int n, a;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Enter a: ");
    scanf("%d", &a);

    int max = a;

    do
    {
        printf("Enter a: ");
        scanf("%d", &a);

        if (max < a)
        {
            max = a;
        }

        n--;
    } while (1 < n);

    printf("The greatest number is %d", max);

    return 0;
}