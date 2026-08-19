#include <stdio.h>

int main()
{
    int n, d, a[100], temp[100];
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &d);

    d = d % n;

    for(i = 0; i < n; i++)
    {
        temp[i] = a[(i + d) % n];
    }

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
