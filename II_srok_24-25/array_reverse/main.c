#include <stdio.h>

int main()
{
    int count;
    int element;
    int var;

    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 9);

    int numbers[element];

    for(count = 0; count <= (element-1); count++)
    {
        do
        {
            printf("Enter a number: ");
            scanf("%d", &numbers[count]);
        } while(numbers[count] < 1 || numbers[count] > 9);
    }

    for(count = 0; count <= element/2; count++)
    {
        var = numbers[count];
        numbers[count] = numbers[(element-1)-count];
        numbers[(element-1)-count] = var;
    }
    
    for(count = 0; count <= (element-1); count++)
    {
        printf("%d\n", numbers[count]);
    }

    return 0;
}
