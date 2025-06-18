#include <stdio.h>

int main()
{
    int count, count1 = 0, count2 = 0;
    int element;
    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1);

    int numbers[element];
    int evenNumbers[element];
    int notEvenNumbers[element];
    for(count = 0; count <= (element-1); count++)
    {
        do
        {
            printf("Enter a number: ");
            scanf("%d", &numbers[count]);
        } while(numbers[count] < 1);
        
        if(numbers[count] % 2 == 0)
        {
            evenNumbers[count1] = numbers[count];
            count1++;
        }
        else
        {
            notEvenNumbers[count2] = numbers[count];
            count2++;
        }
    }

    if(count2 != 0)
    {
        printf("Not even numbers are:\n");
        for(count = 0; count <= (count2-1); count++)
        {
            printf("%d\n", notEvenNumbers[count]);
        }

        if(count1 != 0)
        {
            printf("Even numbers are:\n");
            for(count = 0; count <= (count1-1); count++)
            {
               printf("%d\n", evenNumbers[count]);
            }
        }
        else
        {
            printf("There are not even numbers.\n");
        }
    }
    else
    {
        printf("Even numbers are:\n");
        for(count = 0; count <= (element-1); count++)
        {
           printf("%d\n", numbers[count]);
        }
        printf("There are not not-even numbers.\n");
    }

    return 0;
}
