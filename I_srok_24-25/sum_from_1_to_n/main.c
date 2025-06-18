#include <stdio.h>

int main()
{   
    int n;
    int sum = 0;
    int i = 1;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);


    while (n >= i)
    {   
        sum = sum + i;
        i++;
    }

    printf("The sum from 1 to n is %d", sum);

    return 0;
}