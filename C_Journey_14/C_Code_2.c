#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j, f = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter first array: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("Enter second array: ");
    for(i = 0; i < n; i++)
        scanf("%d", b + i);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(*(a + j) != *(b + (i + j) % n))
                break;
        }
        if(j == n)
        {
            f = 1;
            break;
        }
    }

    if(f)
        printf("Circular Rotation");
    else
        printf("Not Circular Rotation");

    return 0;
}
