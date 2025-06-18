#include <stdio.h>
#include <time.h>

// int arrOut(int a[], int element)
// {
//     for(int count = 0; count <= element-1; count++)
//     {
//         printf("%d\n", a[count]);
//     }

//     return 0;
// }

int bubbleSort(int a[], int element)
{
    int sorted, c;

    for(int count = 0; count <= element-1; count++)
    {
        sorted = 1;

        for(int count2 = 0; count2 <= element-count; count2++)
        {
            if(a[count2] > a[count2+1])
            {
                c = a[count2];
                a[count2] = a[count2+1];
                a[count2+1] = c;
                sorted = 0;
            }
        }

        if(sorted)
        {
            break;
        }
    }

    return 0;
}

int straightSelection(int b[], int element)
{
    int minNum, minCount, c;

    for(int count = 0; count <= element-1; count++)
    {
        minNum = b[count];
        minCount = count;
        
        for(int count2 = count+1; count2 <= element-1; count2++)
        {
            if(minNum > b[count2])
            {
                minNum = b[count2];
                minCount = count2;
            }
        }
        b[minCount] = b[count];
        b[count] = minNum;
    }

    return 0;
}

int straightInsertion(int c[], int element)
{
    int x;
    int count2;

    for(int count = 0; count <= element-1; count++)
    {
        x = c[count];
        count2 = count - 1;
        
        while(count2 >= 0 && c[count2] > x)
        {
            c[count2+1] = c[count2];
            count2--;
        }

        c[count2+1] = x;
    }

    return 0;
}

void timeTest(int a[], int length, int step)
{
    int v = 0;
    for(int i = 0; i < length; i++)
    {
        v = v + step;
        if (v < 0) {
            v = v + length;
        }
        else if ( v > length) {
            v = v % length;
        }
        a[i] = v;
    }
}

int main()
{
    int length, step;
    clock_t start, end;
    double time_taken;
    int a[100000];
    int b[100000];
    int c[100000];

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the step: ");
    scanf("%d", &step);

    timeTest(a, length, step);
    start = clock();
    bubbleSort(a, length);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of bubble sort: %f\n", time_taken);

    timeTest(b, length, step);
    start = clock();
    straightSelection(b, length);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of straight selection: %f\n", time_taken);

    timeTest(c, length, step);
    start = clock();
    straightInsertion(c, length);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution of straight insertion: %f\n", time_taken);

    return 0;
}