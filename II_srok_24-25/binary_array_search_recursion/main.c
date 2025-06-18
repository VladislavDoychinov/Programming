#include <stdio.h>

void sort(int a[], int elements)
{
    for (int i = 0; i <= elements - 1; i++)
    {
        int j = i - 1;
        int x = a[i];

        while (j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int search(int a[], int x, int l, int r)
{
    if (l > r)
    {
        return 0;
    }

    int k = (l + r) / 2;

    if (x == a[k])
    {
        return 1;
    }
    else if (x > a[k])
    {
        return search(a, x, k + 1, r);
    }
    else
    {
        return search(a, x, l, k - 1);
    }
}

int main()
{
    int a[5] = {12, -190, 67, 394, 1000};
    int elements = 5;
    int l = 0;
    int r = elements - 1;
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    sort(a, elements);

    if (search(a, x, l, r) == 1)
    {
        printf("Yes...\n");
    }
    else
    {
        printf("No...\n");
    }

    return 0;
}
