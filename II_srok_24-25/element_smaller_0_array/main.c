#include <stdio.h>

int main()
{
    int element, sum = 0;
    int check = 0;
    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 10);


    int a[element];
    for(int count = 0; count <= element-1; count++)
    {
        printf("Enter an element: ");
        scanf("%d", &a[count]);
    }

    for(int count = 0; count <= element-1; count++)
    {
        if(a[count] < 0)
        {
            check = 1;            
            printf("The first element < 0 is %d and the sum of the numbers before it is %d.\n", a[count], sum);
            break;
        }
        else
        {
            sum = sum + a[count];
        }
    }

    if(check == 0)
    {
        printf("There arent numbers < 0.\n");
    }

    return 0;
}

    
