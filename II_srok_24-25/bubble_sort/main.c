#include <stdio.h>

int main()
{
    int count, count2, element, sorted, c;

    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while (element < 1 || element > 10);

    int a[element];
    for (count = 0; count <= element-1; count++)
    {
        printf("Enter an element: ");
        scanf("%d", &a[count]);
    }
    
    for(count = 0; count <= element-1; count++)
    {
        sorted = 1;

        for(count2 = 0; count2 <= element-count; count2++)
        {
            if(a[count2] > a[count2+1])
            {
                c = a[count2];
                a[count2] = a[count2+1];
                a[count2+1] = c;
                sorted = 0;
            }
        }
        if(sorted)
        {
            break;
        }
        
    }

    for (count = 0; count <= element-1; count++)
    {
        printf("%d\n", a[count]);
    }

    return 0;
}