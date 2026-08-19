#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int start, end, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Perfect numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(perfect(i))
            printf("%d ", i);
    }

    return 0;
}
