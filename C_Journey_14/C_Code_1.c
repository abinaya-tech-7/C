#include <stdio.h>

void rotate(int *p, int n, int k)
{
    int i, temp;

    k = k % n;

    while(k > 0)
    {
        temp = *p;

        for(i = 0; i < n - 1; i++)
        {
            *(p + i) = *(p + i + 1);
        }

        *(p + n - 1) = temp;

        k--;
    }
}

int main()
{
    int a[10], n, k, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter K: ");
    scanf("%d", &k);

    rotate(a, n, k);

    printf("Array after rotation:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    return 0;
}
