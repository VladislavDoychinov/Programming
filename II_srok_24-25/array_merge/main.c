#include <stdio.h>

void arrIn(int a[], int element)
{
    for(int count = 0; count <= element-1; count++)
    {
        printf("Enter a number: ");
        scanf("%d", &a[count]);
    }
}

void arrayMerge(int a[], int elementA, int b[], int elementB, int c[])
{  
    int i = 0, j = 0, k = 0;
    while(i < elementA && j < elementB) 
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else 
        {
            c[k++] = b[j++];
        }
    }
    while (i < elementA)
    {
        c[k++] = a[i++];
    }
    while (j < elementB)
    { 
        c[k++] = b[j++];

    }
}

void sort(int a[], int element)
{
    for(int i = 0; i <= element-1; i++)
    {
        for(int j = 0; j <= element-1; j++)
        {
            int x = a[i];
            int j = i - 1;
        
            while(j >= 0 && a[j] > x)
            {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = x;
        }
    }
}

int main()
{
    int elementA, elementB;
    do
    {
        printf("Enter the number of elements: ");
        scanf("%d", &elementA);
        printf("Enter the number of elements: ");
        scanf("%d", &elementB);
    } while(elementA < 1 || elementA > 10 && elementB < 1 || elementB > 10);

    int a[elementA];
    int b[elementB];
    int c[elementA+elementB];

    arrIn(a, elementA);
    arrIn(b, elementB);
    sort(a, elementA);
    sort(b, elementB);
    arrayMerge(a, elementA, b, elementB, c);

    printf("Elements in a[] :\n");
    for(int i = 0; i <= elementA-1; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Elements in b[] :\n");
    for(int i = 0; i <= elementB-1; i++)
    {
        printf("%d\n", b[i]);
    }
    
    printf("Elements in c[] :\n");
    for(int i = 0; i <= (elementA+elementB)-1; i++)
    {
        printf("%d\n", c[i]);
    }

    return 0;
}