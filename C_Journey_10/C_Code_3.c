#include <stdio.h>

int main()
{
    int N, i, j, count;

    printf("Enter number of balloons: ");
    scanf("%d", &N);

    char B[N];

    printf("Enter balloon colours:\n");
    for(i = 0; i < N; i++)
    {
        scanf(" %c", &B[i]);
    }

    for(i = 0; i < N; i++)
    {
        count = 0;

        for(j = 0; j < N; j++)
        {
            if(B[i] == B[j])
            {
                count++;
            }
        }

        if(count % 2 != 0)
        {
            printf("%c\n", B[i]);
            return 0;
        }
    }

    printf("All are even\n");

    return 0;
}
