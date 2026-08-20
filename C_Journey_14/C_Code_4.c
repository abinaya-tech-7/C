#include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", a + i);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(a + i) == *(a + j))
            {
                for(k = j; k < n - 1; k++)
                    *(a + k) = *(a + k + 1);

                n--;
                j--;
            }
        }
    }

    printf("Modified array: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));

    printf("\nNew size: %d", n);

    return 0;
}
