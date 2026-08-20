#include <stdio.h>

int missing(int *a, int n)
{
    int i, sum = 0, total;

    for(i = 0; i < n - 1; i++)
        sum += *(a + i);

    total = n * (n + 1) / 2;

    return total - sum;
}

int main()
{
    int n, a[100], i;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
        scanf("%d", &a[i]);

    printf("Missing number = %d", missing(a, n));

    return 0;
}
