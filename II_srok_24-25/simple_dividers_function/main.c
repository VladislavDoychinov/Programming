#include <stdio.h>

int simple(int i)
{
    int j = 2;

    while(i % j != 0)
    {
        j++;    
    }
    if(i % j == 0)
    {
        if(i == j)
        {
            return 0;        
        }
        else
        {
            return 1;
        }    
    }  
}

int main()
{
    int n;
    int i;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            if(simple(i) == 0)
            {
                printf("%d\n", i);
                count++;
            }
        }
    }

    printf("The number of the simple dividers is %d\n", count);

    return 0;
}
