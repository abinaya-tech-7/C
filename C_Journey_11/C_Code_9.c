#include <stdio.h>

int main()
{
    int n, a[100], i, j;
    int leftsum, rightsum, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        leftsum = 0;
        rightsum = 0;

        for(j = 0; j < i; j++)
        {

            leftsum = leftsum + a[j];
        }

        for(j = i + 1; j < n; j++)
        {
            rightsum = rightsum + a[j];
        }

        if(leftsum == rightsum)
        {
            printf("Equilibrium Index = %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}
