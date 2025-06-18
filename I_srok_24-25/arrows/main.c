#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

int main()
{

    int menu = 0;
    char key;
    int count = 0;

    while(menu != 4)
    {
        do
        {
            system("clear");
            if (count != 0)
            {
                printf("\n");
            }

            if (menu == 0)
            {
                printf(">");
                printf("A\r\n");
            }
            else
            {
                printf(" ");
                printf("A\r\n");
            }

            if (menu == 1)
            {
                printf(">");
            }
            else
            {
                printf(" ");
                printf("B\r\n");
            }

            if (menu == 2)
            {
                printf(">");
                printf("C\r\n");
            }
            else
            {
                printf(" ");
                printf("C\r\n");
            }

            if (menu == 3)
            {
                printf(">");
                printf("D\r\n");
            }
            else
            {
                printf(" ");
                printf("D\r\n");
            }

            if (menu == 4)
            {
                printf(">");
                printf("Exit\r\n");
            }
            else
            {
                printf(" ");
                printf("Exit\r\n");
            }

            key = getch();

            if (key == 66)
            {
                menu = (menu + 1) % 5;
            }
            else if (key == 65)
            {
                menu = (menu + (5 - 1)) % 5;
            }

        }
        while (key != 13);

        switch(menu)
        {
        case 0:
            printf("You selected A.");
            break;
        case 1:
            printf("You selected B.");
            break;
        case 2:
            printf("You selected C.");
            break;
        case 3:
            printf("You selected D.");
            break;
        case 4:
            printf("You selected Exit.");
            break;
        }
        count++;
    }


    return 0;
}
