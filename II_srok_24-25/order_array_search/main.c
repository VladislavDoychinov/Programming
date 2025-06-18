#include <stdio.h>

void search(int a[], int elements, int x)
{
    for(int i = 0; i <= elements-1; i++)
    {
        if(a[i] == x)
        {
            printf("Yes...\n");
            break;
        }
        else if(a[i] > x)
        {
            break;
        }
    }
}

void arrSort(int a[], int element)
{
    for(int count = 0; count < element - 1; count++)
    {
        int min = a[count];
        int mini = count;        

        for(int i = count + 1; i < element; i++)
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

}

void main()
{
    int a[5] = {2, 5, 4, 98, -190};
    int elements = 5;
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);

    arrSort(a, elements);
    search(a, elements, x);
}
