#include <stdio.h>

int main()
{
    int a[100], n, i, temp;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    for(i = 0; i < n; i++)
    {
        if(*(p + i) < 0)
        {
            temp = *(p + i);
            *(p + i) = *p;
            *p = temp;
            p++;
        }
    }

    printf("Rearranged array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
