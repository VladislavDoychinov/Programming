#include <stdio.h>

int num(int n)
{
    int count;

    for(count = 0; n != 0; count++)
    {
        n = n / 10;
    }

    return count;
}

int main()
{
    int n, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = num(n);

    printf("The number of the digits in %d is %d" , n, count);

    return 0;
}
