#include <stdio.h>

int main()
{
    float temperature[10];
    int count;
    float minus, avrSum = 0;

    for(count =  0; count <= 10; count++)
    {
        printf("Gib Temperatur ein: ");
        scanf("%f", &temperature[count]);
        avrSum = avrSum + temperature[count];
    }
    avrSum = avrSum / 10;

    for(count = 0; count <= 10; count++)
    {
        if(temperature[count] > avrSum)
        {
            minus = temperature[count] - avrSum;
            printf("%d day = %f\n", count, minus);
        }
    }

    printf("The average sum is %f\n", avrSum);

    return 0;        
}    
