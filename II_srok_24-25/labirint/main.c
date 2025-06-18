#include <stdio.h>

void find_way(int, int, int[][100]);

int main()
{
    int labirint[100][100];
    int m, n;
    
    do
    {
        printf("Enter the number of the rows: ");
        scanf("%d", &m);
    } while(m < 5 || m > 100);

    do
    {
        printf("Enter the number of the columns: ");
        scanf("%d", &n);
    } while(n < 1 || n > 100);

    for(int k = 0; k < m; k++)
    {
        for(int i = 0; i < n; i++)
        {
            printf("Enter cell [%d][%d]: ", k+1, i+1);
            scanf("%d", &labirint[k][i]);
        }

    }

    for(int j = 0; j < m; j++)
    {
        for(int r = 0; r < n; r++)
        {
            printf("%d ", labirint[j][r]);   
        }
        printf("\n");
    }

    find_way(n, m, labirint);

    return 0;
}

void find_way(int n, int m, int labirint[][100])
{    
    int i = 0, j = 0;
    int check;
    int visited[100][100] = {0};

    while(i != m - 1 || j != n - 1)
    {
        if(labirint[i][j] == 0 && visited[i][j] == 0)
        {
            printf("[%d][%d]\n", i, j);
            visited[i][j] = 1;
        }

        check = 1;

        if(i < m - 1 && labirint[i+1][j] == 0 && visited[i+1][j] == 0)
        {
            i++;
            check = 0;
        }
        else if(j < n - 1 && labirint[i][j+1] == 0 && visited[i][j+1] == 0)
        {
            j++;
            check = 0;
        }
        else if(i > 0 && labirint[i-1][j] == 0 && visited[i-1][j] == 0)
        {
            i--;
            check = 0;
        }
        else if(j > 0 && labirint[i][j-1] == 0 && visited[i][j-1] == 0)
        {
            j--;
            check = 0;
        }

        if(check == 1)
        {
            printf("There is no way...\n");
            return;
        }
    }

    printf("Coordinates: [%d][%d]\n", i, j);
}

