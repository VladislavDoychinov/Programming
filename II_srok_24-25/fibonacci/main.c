#include <stdio.h>

int main()
{
    int n, i, temp;
    int j = 0;
    int y = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        temp = j;
        j = y;
        y = j + temp;
    }

    printf("%d\n", y);

    return 0;
}
