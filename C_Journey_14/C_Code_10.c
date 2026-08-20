#include <stdio.h>

void reverse(int *a, int n, int k)
{
    int i, j, temp;

    for(i = 0; i < n; i += k)
    {
        int end = i + k - 1;
        if(end >= n)
            end = n - 1;

        for(j = i; j < end; j++, end--)
        {
            temp = *(a + j);
            *(a + j) = *(a + end);
            *(a + end) = temp;
        }
    }
}

int main()
{
    int a[100], n, k, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("Enter K: ");
    scanf("%d", &k);

    reverse(a, n, k);

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));

    return 0;
}
