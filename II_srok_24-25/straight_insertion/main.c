#include <stdio.h>

int main()
{
    int element, x, count2, count;
    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 10);
    
    int a[element];

    for(count = 0; count <= element-1; count++)
    {
        printf("Enter a number: ");
        scanf("%d", &a[count]);
    }
    
    for(count = 0; count <= element-1; count++)
    {
        x = a[count];
        count2 = count - 1;
    
        while(count2 >= 0 && a[count2] > x)
        {
            a[count2 + 1] = a[count2];
            count2 = count2 - 1;
        }
        
        a[count2 + 1] = x;
    }

    for(count = 0; count <= element-1; count++)
    {
        printf("%d\n", a[count]);
    }
    
    return 0;
}
