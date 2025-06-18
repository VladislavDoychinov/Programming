#include <stdio.h>

int main()
{
    int students;
    int count;
    float avgSum = 0;

    do
    {
        printf("Enter the number of the students(<= 30): ");
        scanf("%d", &students);
    } while(students > 30 || students < 1);

    int number[students];

    for(count = 0; count <= (students-1); count++)
    {
        do
        {
            printf("Enter a grade: ");
            scanf("%d", &number[count]);
        } while(number[count] > 6 || number[count] < 2);       
        
        avgSum = avgSum + number[count];
    }

    for(count = 0; count <= students; count++)
    {
        if(number[count] == 6)
        {
            printf("%d number has 6.\n", count+1);
        }
        else if(number[count] == 2)
        {
            printf("%d number has 2.\n", count+1);
        }   
    }
    
    avgSum = avgSum / students;

    printf("The average sum of the grades is %.2f.\n", avgSum);

    return 0;               
}
