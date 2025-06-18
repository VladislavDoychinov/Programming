#include <stdio.h>

int main()
{
    int count;
    int symetryCount = 0;
    int element;

    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 100);

    int numbers[element];

    for(count = 0; count <= (element-1); count++)
    {
        do
        {
            printf("Enter a number: ");
            scanf("%d", &numbers[count]);
        } while(numbers[count] < 1);
    }

    for(count = 0; count <= element/2; count++)
    {
        if(numbers[count] != numbers[(element-1)-count])
        {
            symetryCount++;
        }
    }

    if(symetryCount == 0)    
    {
        printf("It is symetrical.\n");
    }
    else
    {
        printf("It's not symetrical.\n");
    }

    return 0;
}
