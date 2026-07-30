#include <stdio.h>

int main()
{
    int oxygen[3][3];
    int average[3];
    int i, j, sum, maxAvg = 0;

    printf("Enter oxygen levels:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &oxygen[i][j]);

            if(oxygen[i][j] < 1 || oxygen[i][j] > 100)
            {
                printf("INVALID INPUT");
                return 0;
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        sum = 0;

        for(j = 0; j < 3; j++)
        {
            sum = sum + oxygen[i][j];
        }

        average[i] = (sum + 1) / 3;

        if(average[i] > maxAvg)
        {
            maxAvg = average[i];
        }
    }

    if(maxAvg < 70)
    {
        printf("All trainees are unfit");
        return 0;
    }

    printf("Most Fit Trainee(s):\n");

    for(i = 0; i < 3; i++)
    {
        if(average[i] == maxAvg)
        {
            printf("Trainee Number : %d\n", i + 1);
        }
    }

    printf("Highest Average Oxygen Level : %d\n", maxAvg);

    return 0;
}
