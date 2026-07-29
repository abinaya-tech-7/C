#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 7; i++)
    {
        // A
        for(j = 0; j < 5; j++)
        {
            if((j == 0 || j == 4) && i != 0 ||
               i == 0 && j > 0 && j < 4 ||
               i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // B
        for(j = 0; j < 5; j++)
        {
            if(j == 0 ||
               (i == 0 || i == 3 || i == 6) && j < 4 ||
               j == 4 && i != 0 && i != 3 && i != 6)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // I
        for(j = 0; j < 5; j++)
        {
            if(i == 0 || i == 6 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // N
        for(j = 0; j < 5; j++)
        {
            if(j == 0 || j == 4 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for(j = 0; j < 5; j++)
        {
            if((j == 0 || j == 4) && i != 0 ||
               i == 0 && j > 0 && j < 4 ||
               i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // Y
        for(j = 0; j < 5; j++)
        {
            if((i < 3 && (i == j || i + j == 4)) ||
               (i >= 3 && j == 2))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for(j = 0; j < 5; j++)
        {
            if((j == 0 || j == 4) && i != 0 ||
               i == 0 && j > 0 && j < 4 ||
               i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
