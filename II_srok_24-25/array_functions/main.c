#include <stdio.h>

int arrIn(int arr[], int element)
{
    int count;
    for(count = 0; count <= element-1; count++)
    {
        printf("Enter an element: ");
        scanf("%d", &arr[count]);
    }

    return 0;
}

int arrOut(int arr[], int element)
{
    int count;
    for(count = 0; count <= element-1; count++)
    {
        printf("%d\n", arr[count]);
    }

    return 0;
}

int arrSort(int arr[], int element)
{
    int min, mincount;

    for(int count = 0; count <= element-1; count++)
    {
        min = arr[count];
        mincount = count;

        for(int count2 = count+1; count2 < element; count2++)
        {
            if(arr[count] > arr[count2])
            {
                min = arr[count2]; 
                mincount = count2;  
            }
            arr[mincount] = arr[count];
            arr[count] = min;
        }
    }

    return 0;
}

int main()
{
    int element;
    do
    {
        printf("Enter the number of the elements: ");
        scanf("%d", &element);
    } while(element < 1 || element > 10);

    int arr[element];
    arrIn(arr, element);
    arrSort(arr, element);
    arrOut(arr, element);

    return 0;
}