#include <stdio.h>

void main()
{
    int element, count, i, c;
    
    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 10);

    int a[element];

    for(count = 0; count < element; count++)
    {
        printf("Enter an element: ");
        scanf("%d", &a[count]);
    }

    for(count = 0; count < element - 1; count++)
    {
        int min = a[count];
        int mini = count;        

        for(i = count + 1; i < element; i++)
        {
            if(a[i] < min)
            {
                min = a[i];
                mini = i;
            }
        }

        if(mini != count)
        {
            int temp = a[count];
            a[count] = min;
            a[mini] = temp;
        }
    }

    for(count = 0; count < element; count++)
    {
        printf("a[%d] = %d\n", count, a[count]);
    }
}

