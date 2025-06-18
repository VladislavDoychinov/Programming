#include <stdio.h>

void sort(int a[], int elements)
{
    for(int i = 0; i <= elements-1; i++)
    {
        int j = i - 1;
        int x = a[i];

        while(j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

int search(int a[], int x, int r)
{
    int l = 0;
    
    while(l <= r)
    {
        int k = (l + r) / 2;
        if(a[k] > x)
        {
            r = k - 1;
        }
        else if(a[k] < x)
        {
            l = k + 1;
        }
        else
        {
            return 1;
        }
    }

    return 0;
}

void main()
{
    int a[5] = {12, -190, 67, 394, 1000};
    int elements = 5;
    int r = elements - 1;
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    sort(a, elements);
     
    if(search(a, x, r))
    {
        printf("Yes...\n");
    }
    else
    {
        printf("No...\n");       
    }
}
