#include <stdio.h>

int main()
{
    int element;
    int count;
    float minus, avrSum = 0;
    
    do
    {
        printf("Enter a number of the days(days must be less than 100): ");
        scanf("%d", &element);    
    } while(element > 100 || element < 1)

    float temperature[element];

    for(count = 0; count <= (element-1); count++)
    {
        printf("Gib Temperatur ein: ");
        scanf("%f", &temperature[count]);
        avrSum = avrSum + temperature[count];
    }
    avrSum = avrSum / element;

    for(count = 0; count <= element; count++)
    {
        if(temperature[count] > avrSum)
        {
            minus = temperature[count] - avrSum;
            printf("%d day = %f\n", (count+1), minus);
        }
    }

    printf("The average sum is %f\n", avrSum);

    return 0;        
}    
