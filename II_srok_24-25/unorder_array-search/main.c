#include <stdio.h>

void main()
{
    int a[5] = {2, 17, -90, 30, 98};
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    
    for(int i = 0; i <= 4; i++)
    {
        if(a[i] == x)
        {
            printf("Yes...\n");
            break;
        }
    }
}
