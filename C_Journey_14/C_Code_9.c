#include <stdio.h>

float median(int *a, int *b, int n)
{
    int i = 0, j = 0, m1 = -1, m2 = -1;

    for(int k = 0; k <= n; k++)
    {
        m1 = m2;

        if(i == n)
            m2 = *(b + j++);
        else if(j == n)
            m2 = *(a + i++);
        else if(*(a + i) < *(b + j))
            m2 = *(a + i++);
        else
            m2 = *(b + j++);
    }

    return (m1 + m2) / 2.0;
}

int main()
{
    int n, a[50], b[50], i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter first sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    printf("Median = %.2f", median(a, b, n));

    return 0;
}
