#include <stdio.h>

void main()
{
    int marks[30][20];

    int student, subject, i, j;
    float avgSt[20] = {0};
    float avgSubject[30] = {0};
    float avgAll = 0;

    do
    {
        printf("Enter the number of students: ");
        scanf("%d", &student);
    }
    while(student < 1 || student > 30);

    do
    {
        printf("Enter the number of subjects: ");
        scanf("%d", &subject);
    }
    while(subject < 1 || subject > 20);

    for(i = 0; i < student ; i++)
    {
        for(j = 0; j < subject; j++)
        {
            do
            {
                printf("Enter a mark: ");
                scanf("%d", &marks[i][j]);
            }
            while(marks[i][j] < 2 || marks[i][j] > 6);
        }
    }

    for(i = 0; i < student; i++)
    {
        for(j = 0; j < subject; j++)
        {
            avgSt[i] = avgSt[i] + marks[i][j];
        }

        avgSt[i] /= subject;
    }

    for(i = 0; i < student; i++)
    {
        printf("Student %d: %.2f\n", i+1, avgSt[i]);
    }

    for(i = 0; i < subject; i++)
    {
        for(j = 0; j < student; j++)
        {
            avgSubject[i] = avgSubject[i] + marks[j][i];
        }

        avgSubject[i] /= student;
    }

    for(i = 0; i < subject; i++)
    {
        printf("Subject %d: %.2f\n", i+1, avgSubject[i]);
    }

    for(i = 0; i < student; i++)
    {
        avgAll = avgAll + avgSt[i];
    }
    avgAll /= student;

    printf("All results: %.2f\n", avgAll);
}
