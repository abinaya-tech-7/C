#include <stdio.h>

int main()
{
    int n, a[100], i, j = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    while(j < n)
    {
        a[j] = 0;
        j++;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
