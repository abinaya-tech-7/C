#include <stdio.h>

int main()
{
    int n, m, i, j;
    int a[100][100];
    int count, max = 0, index = -1;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the matrix elements (0 or 1):\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < m; j++)
        {
            if(a[i][j] == 1)
            {
                count++;
            }
        }

        if(count > max)
        {
            max = count;
            index = i;
        }
    }

    printf("Row with maximum number of 1's: %d", index);

    return 0;
}
