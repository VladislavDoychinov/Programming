#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

typedef struct
{
    int number;
    char name[80];
    int marks[20];
    float avr;
} Tstudent;

void file(char *);
void myWrite(char *);
void myRead(char *);
void myAdd(char *);

void main()
{
    int check = 1, op = 1;
    unsigned char c;
    char filename[80];
    file(filename);
    while (1)
    {
        system("cls");
        if (op == 1)
            printf(">File\n");
        else
            printf(" File\n");
        if (op == 2)
            printf(">Write\n");
        else
            printf(" Write\n");
        if (op == 3)
            printf(">Read\n");
        else
            printf(" Read\n");
        if (op == 4)
            printf(">Add\n");
        else
            printf(" Add\n");
        if (op == 5)
            printf(">Exit\n");
        else
            printf(" Exit\n");

        c = getch();
        if (c == 224)
        {
            c = getch();
            if (c == 72)
            {
                op--;
                if (op < 1)
                {
                    op = 5;
                }
            }
            else if (c == 80)
            {
                op++;
                if (op > 5)
                {
                    op = 1;
                }
            }
        }
        else if (c == 13)
        {
            check = op;
            if (check == 5)
            {
                break;
            }
            switch (check)
            {
            case 1:
                file(filename);
                break;
            case 2:
                myWrite(filename);
                break;
            case 3:
                myRead(filename);
                break;
            case 4:
                myAdd(filename);
                break;
            }
        }
    }
}

void myRead(char *filename)
{
    FILE *f;
    Tstudent student;
    int i = 0;
    if (f = fopen(filename, "r"))
    {
        while (!feof(f))
        {
            if (fread(&student, sizeof(student), 1, f))
            {
                printf("%-3d%-20s", student.number, student.name);
                for (i = 0; student.marks[i]; i++)
                {
                    printf("%-3d", student.marks[i]);
                }
                printf("%-6.2f\n", student.avr);
            }
        }
        fclose(f);
    }
    printf("\nPress a key to continue...");
    getch();
}

void myWrite(char *filename)
{
    FILE *f;

    Tstudent student;

    char *p;
    int i = 0, j;

    if (f = fopen(filename, "w"))
    {
        while (1)
        {
            printf("Enter the number of the student:");
            scanf("%d", &student.number);
            getchar();
            if (student.number == 0)
            {
                break;
            }
            i++;
            printf("Enter the name of the student:");
            fgets(student.name, 80, stdin);
            if (p = strchr(student.name, '\n'))
                *p = '\0';
            j = 0;
            student.avr = 0;
            while (1)
            {
                printf("Enter mark %d of student %d:", j + 1, i);
                scanf("%d", &student.marks[j]);
                if (student.marks[j] == 0)
                    break;
                student.avr += student.marks[j];
                j++;
            }
            if (j > 0)
            {
                student.avr = student.avr / j;
            }
            fwrite(&student, sizeof(student), 1, f);
        }
        fclose(f);
    }
}

void file(char *filename)
{
    printf("Enter a filename:");
    fgets(filename, 80, stdin);
    char *p = strchr(filename, '\n');
    if (p)
    {
        *p = '\0';
    }
}

void myAdd(char *filename)
{
    FILE *f;
    Tstudent student;
    char *p;
    int i = 0, j;
    if (f = fopen(filename, "a"))
    {
        while (1)
        {
            printf("Enter the number of the student:");
            scanf("%d", &student.number);
            getchar();
            if (student.number == 0)
                break;
            i++;
            printf("Enter the name of the student:");
            fgets(student.name, 80, stdin);
            if (p = strchr(student.name, '\n'))
                *p = '\0';
            j = 0;
            student.avr = 0;
            while (1)
            {
                printf("Enter mark %d of student %d:", j + 1, i);
                scanf("%d", &student.marks[j]);
                if (student.marks[j] == 0)
                    break;
                student.avr = student.avr + student.marks[j];
                j++;
            }
            if (j > 0)
            {
                student.avr = student.avr / j;
            }
            fwrite(&student, sizeof(student), 1, f);
        }
        fclose(f);
    }
}
